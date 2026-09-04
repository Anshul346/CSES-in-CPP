# Increasing Array

**CSES Link:** [Increasing Array](https://cses.fi/problemset/task/1094/)

**Topic:** Introductory Problems / Greedy

**Difficulty:** Easy


## Problem Summary
Given an integer array `v`, find the minimum number of moves to make it strictly non decreasing. In one move you can increment a single element.

## Approach
This is a very basic greedy problem.

In this problem you have to minimize the number of moves to make the array non decreasing. To do so, you just need to increment the current element till it is equal to its previous element (only if the current element is less than the previous element) any incrementation more than this will be unnecessary as we have already met our condition.


## Complexity
- **Time:** O(n)
- **Space:** O(1)


## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

//Macros
#define int long long
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=b-1;i>=a;i--)
#define each(x,a) for(auto& x : a)

//Type Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpii = vector<pii>;
using umii = unordered_map<int,int>;
using umsi = unordered_map<string,int>;

//Constants
constexpr int INF = 4e18;
constexpr int MOD = 998244353;

//Basic functions
template <typename T>
void print(const vector<T>& v){
    each(x,v) cout << x << " ";
    cout << endl;
}

template <typename T>
void inp(vector<T>& v){
    each(x,v) cin >> x;
}

int modpow(int a,int b,int mod=MOD){
    int res = 1;
    while(b){
        if(b & 1) res = res*a%mod;
        a = a*a%mod;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    vi v(n);
    inp(v);

    int ans = 0;
    for(int i=1;i<sz(v);i++){
        if(v[i]<v[i-1]){
            ans += v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    cout << ans << endl;

    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
```