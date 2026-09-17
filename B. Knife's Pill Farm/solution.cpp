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
const ll MOD = 1e9+7;
       
void solve(){
    int n, m;
    cin >> n >> m;

    vcll a(n);
    for (ll &x : a) cin >> x;

    priority_queue<ll> pq;
    ll sum = 0, ans = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        if ((int)pq.size() == m - 1) {
            ans = max(ans, m * a[i] - sum);
        }

        pq.push(a[i]);
        sum += a[i];
        if ((int)pq.size() == m) {
            sum -= pq.top();
            pq.pop();
        }
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