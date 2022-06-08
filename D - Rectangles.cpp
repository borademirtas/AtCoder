#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <cmath>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
#include <stack>
#include <bitset>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(){
    map<ll, vll> a;
    ll n;
    vll posx;
    vll posy;
    map<pair<ll,ll>,ll> pos;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        a[x].pb(y);
        if(a[x].size() == 1){posx.pb(x);}
    }
    ll count = 0;
    for(ll x : posx){
        for(ll i = 0; i  < a[x].size(); i++){
            for(ll j = i + 1; j < a[x].size(); j++){
                pos[mp(min(a[x][i], a[x][j]), max(a[x][i], a[x][j]))]++;
                count +=pos[mp(min(a[x][i], a[x][j]), max(a[x][i], a[x][j]))] - 1;
            }
        }
    }
    cout << count;
}

int main() {
    FAST;
    tc1;
}
