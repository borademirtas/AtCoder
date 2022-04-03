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
	ll x, y;
	cin >> x >> y;
	ll n = (x * x + y * y);
	double d = sqrt(n);
	double dx = x, dy = y;
	cout << dx / d << " " << dy / d << endl;
	return 0;
	
}
