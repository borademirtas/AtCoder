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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > c) { cout << "Aoki"; return 0; }
	if (c > a) { cout << "Takahashi"; return 0; }
	if (b > d) { cout << "Aoki"; return 0; }
	if (d > c) { cout << "Takahashi"; return 0; }
	cout << "Takahashi"; return 0;
}
	
	
