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
	vll a(n);
	vll b(m);
	vector<bool> k(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; k[i] = false; }
	for (ll i = 0; i < m; i++) { cin >> b[i]; }
	for (ll i = 0; i < m; i++) {
		for (ll j = 0; j < n; j++) {
			if (b[i] == a[j] && k[j] == false) { total++; k[j] = true; j = n; }
		}
	}
	total == m ? cout << "Yes": cout << "No";
}
