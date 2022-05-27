#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
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
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)

void solve() {
    ll n, k;
    cin >> n >> k;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    ll l = 0, r = 0, un = 0, best = 0;
    mpll b;
    while(r != k){
        b[a[r]]++;
        if(b[a[r]] == 1){un++;}
        best = max(best, un);
        r++;
    }
    while(r != n){
        b[a[r]]++;
        if(b[a[r]] == 1){un++;}
        b[a[l]]--;
        if(b[a[l]] == 0){un--;}
        best = max(best, un);
        l++; r++;
    }
    cout << best;
}



int main() {
    FAST;
    tc1;
}
