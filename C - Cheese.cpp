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
	ll n, m, total = 0;
	cin >> n >> m;
	vector<pair<ll, ll>> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(),a.end());
	reverse(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		total += a[i].first * min(m, a[i].second);
		m -= min(m, a[i].second);
		if (m == 0) { break; }
	}
	cout << total << endl; return 0;
}
