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
    ll n;
    cin >> n;
    vector<vector<ll>> dp(3, vector<ll>(n+1));
    dp[0][0] = 0; dp[1][0] = 0; dp[2][0] = 0;
    for (ll i = 1; i <= n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        dp[0][i] = max(dp[1][i-1], dp[2][i-1]) + a; dp[1][i] = max(dp[0][i - 1], dp[2][i - 1]) + b; dp[2][i] = max(dp[0][i - 1], dp[1][i - 1]) + c;
    }
    cout << max({ dp[0][n], dp[1][n], dp[2][n] });
}
