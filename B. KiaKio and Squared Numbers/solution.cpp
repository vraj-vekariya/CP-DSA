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
     
int help(int n){
    string s = to_string(n);
 
    int sum=0;
    for(int i=0; i<s.length(); i++){
        sum += (s[i]-'0')*(s[i]-'0');
    }
    return sum;
}
 
void solve(){
    int n;
    cin >> n;
 
    vc v(n);
    inputvc(v, n);
 
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<100; j++){
            v[i] = help(v[i]);
        }
        m[v[i]]++;
    }
 
    ll ans=0;
    for(auto p : m){
        int t = p.second;
        ans += t*(t-1)*1LL/2;
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