#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)

void solve() {
    ll x, k ,d;
    cin >> x >> k >> d;
    if(x < 0){x  *= -1;}
    ll low = x % d;
    if((x-low) / d > k){cout << abs(x - k * d);}
    else if((x-low) / d == k){cout << abs(low);}
    else{
        k -= (x-low) / d;
        if(abs(low - d) < low){low = low - d; k--;}
        if(k % 2 == 0){cout << abs(low);}
        else{
            cout << min(abs(low-d), abs(low+d));
        }
    }

}



int main() {
    FAST;
    tc1;
}
