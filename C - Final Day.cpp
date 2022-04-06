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
	ll n, k;
	cin >> n >> k;
	vll arr(n);
	vll arr2(n);
	for (ll i = 0; i < n; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		arr[i] = a + b + c;
	}
	arr2 = arr;
	sort(arr2.begin(), arr2.end());
	reverse(arr2.begin(), arr2.end());
	for (ll i = 0; i < n; i++) {
		if (arr[i] + 300 >= arr2[k - 1]) { cout << "Yes\n"; }
		else{ { cout << "No\n"; } }
	}
	
}
