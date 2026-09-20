#include <bits/stdc++.h>
using namespace std;
       
#define ll long long   
#define vc vector<int>   
#define vcll vector<long long>   
#define vc2 vector<vector<int>>   
#define vc2ll vector<vector<long long>>   
#define yes cout<<"YES"<<endl   
#define no cout<<"NO"<<endl   
#define inputvc(v, n) for(int i=0; i<n; i++) cin>>v[i]   
#define outputvc(v) for(auto i : v) cout<<i<<" "; cout<<endl  
const ll MOD = 998244353;
       
void solve(){
    int n;
    cin >> n;
    vector<ll> b(n);
    for (ll &x : b) cin >> x;
    sort(b.begin(), b.end());

    vector<ll> sum(n + 1);
    for (int i = n - 1; i >= 0; --i) {
        sum[i] = sum[i + 1] + b[i];
    }

    vector<ll> pref(n, 1), suff(n, 1);
    for (int i = 0; i < n - 1; ++i) {
        pref[i + 1] = pref[i] * (n - i - 1) % MOD;
    }
    for (int i = n - 2; i >= 0; --i) {
        suff[i] = suff[i + 1] * (n - i - 1) % MOD;
    }

    ll ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ll diff = sum[i + 1] - (n - i - 1) * b[i];
        ll ways = pref[i] * suff[i + 1] % MOD;
        ans = (ans + diff % MOD * ways) % MOD;
    }

    cout << ans << endl;
}
       
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
       
    int t = 1;
    cin >> t;
       
    while(t--){
        solve();
    }
    return 0;
}