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
	ll n, t1 = 0, t2 = 0;
	cin >> n;
	vll a(n);
	vll b(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if (a[i] == b[j]) {
				if (i == j) { t1++; }
				else { t2++; }
			}
		}
	}
	cout << t1 << endl << t2 << endl; return 0;

}
