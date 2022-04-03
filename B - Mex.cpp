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
	ll n, c_num = -1;
	cin >> n;
	vll a(n);
	set<ll> s;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		if (a[i] == c_num + 1) { c_num += 1; }
		if (a[i] != c_num && a[i] != c_num + 1) { cout << c_num + 1 << endl; return 0; }
	}
	cout << c_num + 1 << endl; return 0;
	
}
