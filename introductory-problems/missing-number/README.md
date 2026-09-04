# Missing Number

**CSES Link:** [Missing Number](https://cses.fi/problemset/task/1083/)

**Topic:** Introductory Problems

**Difficulty:** Easy

## Problem Summary
You are given a series of numbers from `1` to `n` where one number is missing. Find the number.

## Approach
Create a variable and store the sum of all the numbers from `1` to `n`. Traverse the series and subtract each number from that variable. After the traversal,the remaining value is the missing number.


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
    vi v(n-1);
    inp(v);

    int ans = n*(n+1)/2;
    each(x,v) ans-=x;
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