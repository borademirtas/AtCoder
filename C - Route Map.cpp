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
	map<string, int> arr;
	vector<string> a(n);
	vector<string> b(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		arr[a[i]]++;
	}
	for (ll i = 0; i < m; i++) {
		cin >> b[i];
		arr[b[i]]++;
	}
	for (ll i = 0; i < n; i++) {
		if (arr[a[i]] == 2) { cout << "Yes\n"; }
		else { cout << "No\n"; }
	}

}
