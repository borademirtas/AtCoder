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
using namespace std;
#define ll long long 
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353




int main() {
	FAST;
	ll n, m;
	cin >> n >> m;
	vll a(n);
	vll b(n);
	vector<ll> totals;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	vector<vector<bool>> dp(n + 1, vector<bool>(m+1,0));
	
	dp[0][0] = true;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j <= m; j++) {
			if (dp[i][j] == true) {
				if (j + a[i] <= m) { dp[i + 1][a[i] + j] = true; }
				if (j + b[i] <= m) { dp[i + 1][b[i] + j] = true; }
			}
		}
	}
	if (dp[n][m] == true) { cout << "Yes\n"; }
	else { cout << "No\n"; }
	return 0;
}
