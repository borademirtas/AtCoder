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




int main() {
	FAST;
	ll n, k, x, total = 0;
	cin >> n >> k >> x;
	vll a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		if (a[i] > x) {
			ll mult = a[i] / x;
			mult = min(mult, k);
			a[i] -= mult * x;
			k -= mult;
		}
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	if (k > 0) {
		for (ll i = 0; i < n; i++) {
			a[i] = 0;
			k--;
			if (k == 0) { break; }
		}
	}
	for (ll i = 0; i < n; i++) {
		total += a[i];
	}
	cout << total << endl; return 0;
}
