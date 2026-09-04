# Permutations

**CSES Link:** [Permutations](https://cses.fi/problemset/task/1070/)

**Topic:** Introductory Problems 

**Difficulty:** Easy

## Problem Summary
Given an integer `n`, we have to create an permutations `[1..N]` where every adjacent pair has an absolute difference of more than 1.

## Approach
There are multiple ways to solve this question.

1) Seperating all the evens and odds : In this approach you just need to seperate all the evens and odds by keeping the evens at first and then the odds, or vice-versa.

2) Initialising the array and then decrementing :
In this approach,you need to initialise the first and second element of the array with `ceil(n/2.0)` and `n` respectively and then doing `a[i] = a[i-2]-1` for the rest of the iterations. This makes sure that there is atleast `floor(n/2.0)` difference between the adjacent pairs.

## Edge Cases 
1) For `n==1`,since there is no other element to be it's adjacent, the answer is simply `1`.
2) For `n==2` and `n==3`, in these two cases no matter what permutations you come up with, there will always be a pair whose difference is `1`. Hence, there is `NO SOLUTION` for these two cases.

## Complexity
- **Time:** O(n)
- **Space:** O(n)

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

    if(n==1){
        cout << 1 << endl;
    }else if(n<4){
        cout << "NO SOLUTION" << endl;
    }else{
        vi v(n);
        v[0] = ceil(n/2.0);
        v[1] = n;
        for(int i=2;i<n;i++){
            v[i] = v[i-2]-1;
        }
        print(v);
    }
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