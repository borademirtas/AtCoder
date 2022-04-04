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
	string s = std::bitset<128>(n).to_string();
	s.erase(0, s.find_first_not_of('0'));
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '0') { cout << 0; }
		else { cout << 2; }
	}
}
