#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
     int n;
     cin>>n;
     vector<int>arr(n);
     vector<int>ans;
     
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     ans.push_back(arr[0]);
     for(int i=1;i<arr.size();i++){
          if(arr[i-1]<=arr[i]){
               ans.push_back(arr[i]);
          } else {
               ans.push_back(arr[i]);
               ans.push_back(arr[i]);
          }
     }
     cout<<ans.size()<<endl;
     for(auto it:ans){
          cout<<it<<" ";
     }
     cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}