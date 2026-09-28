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
    int n,k;
    cin >> n >> k;
 
    ll ans = (k-1)*2;
    ans += pow(2, n-k+1); 
 
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
