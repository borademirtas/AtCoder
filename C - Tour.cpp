#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
#include <map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

vector<vector<ll>>G;
vector<bool> temp(2000, false);
vector<bool> ok(2000, false);
void dfs(ll v) {
    if (temp[v]){ return; }
    temp[v] = true;
    for (auto v: G[v]) { dfs(v); }
}

int main() {
    FAST;
    ll n, m, ans = 0;
    cin >> n >> m;
    G.resize(n);
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
    }
    for (ll i = 0; i < n; i++) {
        temp = ok;
        dfs(i);
        for (int j = 0; j < n; j++){ if (temp[j]) { ans++; } }
    }
    cout << ans;
}
