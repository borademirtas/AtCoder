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
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	vector<pair<ll, ll>> a(8);
	vector<pair<ll, ll>> b(8);
	a[0].first = x1 + 2;
	a[0].second = y1 + 1;
	a[1].first = x1 + 1;
	a[1].second = y1 + 2;
	a[2].first = x1 - 1;
	a[2].second = y1 + 2;
	a[3].first = x1 - 2;
	a[3].second = y1 + 1;
	a[4].first = x1 - 2;
	a[4].second = y1 - 1;
	a[5].first = x1 - 1;
	a[5].second = y1 - 2;
	a[6].first = x1 + 1;
	a[6].second = y1 - 2;
	a[7].first = x1 + 2;
	a[7].second = y1 - 1;

	b[0].first = x2 + 2;
	b[0].second = y2 + 1;
	b[1].first = x2 + 1;
	b[1].second = y2 + 2;
	b[2].first = x2 - 1;
	b[2].second = y2 + 2;
	b[3].first = x2 - 2;
	b[3].second = y2 + 1;
	b[4].first = x2 - 2;
	b[4].second = y2 - 1;
	b[5].first = x2 - 1;
	b[5].second = y2 - 2;
	b[6].first = x2 + 1;
	b[6].second = y2 - 2;
	b[7].first = x2 + 2;
	b[7].second = y2 - 1;
	for (ll i = 0; i < 8; i++) {
		for (ll j = 0; j < 8; j++) {
			if (a[i].first == b[j].first && a[i].second == b[j].second) { cout << "Yes\n"; return 0; }
		}
	}
	cout << "No\n"; return 0;
}
