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
    int ans = 0,k=5;
    while(k<=n){
        ans += n/k;
        k*=5;
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