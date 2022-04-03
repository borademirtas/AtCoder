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
	ll n;
	cin >> n;
	vll a(n);
	set<ll> arr;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		arr.insert(a[i]);
	}
	cout << arr.size() << endl; return 0;
}
