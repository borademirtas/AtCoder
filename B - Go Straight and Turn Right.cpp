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
	ll n, pos = 1, x = 0, y = 0;
	string s;
	cin >> n >> s;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'S') {
			if (pos == 1) { x++; }
			if (pos == 2) { y--; }
			if (pos == 3) { x--; }
			if (pos == 4) { y++; }
		}
		if (s[i] == 'R') {
			if (pos == 4) { pos = 1; }
			else { pos++; }
		}
	}
	cout << x << " " << y << endl; return 0;

}
