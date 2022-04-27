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


int main() {
    FAST;
    ll n, k;
    cin >> n >> k;
    vll dp(n + 1, INT_MAX);
    vll a(n + 1);
    for (ll i = 1; i <= n; i++) { cin >> a[i]; }
    dp[1] = 0;
    dp[2] = abs(a[2] - a[1]);
    for (ll i = 3; i <= n; i++) {
        for (ll j = 1; j <= min(k, i - 1); j++) {
            dp[i] = min(dp[i], dp[i - j] + abs(a[i] - a[i - j]));
        }
    }
    cout << dp[n];
}
