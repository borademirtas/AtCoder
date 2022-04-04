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
	ll n, ans;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	ans = a[0];
	for (ll i = 1; i < n; i++) {
		if (a[i] > a[i - 1]) { ans = a[i]; }
		else { break; }
	}
	cout << ans << endl; return 0;



}
