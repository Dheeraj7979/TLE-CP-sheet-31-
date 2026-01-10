
// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define sz(x) (int)(x).size()

//  int solve() {
//     int n,m;
//     cin>>n>>m;
//      string x;
//      string s;
//      cin>>x;
//      cin>>s;
//      int ans=0;
//      if(m<=n){
//            int j=0;
//           for(int i=0;i<n;i++){
//                if(x[i]==s[j] && j<n){
//                     j++;
//                } else{
//                     j=0;
//                }
//           }
//           if(j==m) return 0;
//            else return 1; 
//      } else{
//           int xsize=n;
//           while(m>n){
//                n=n*2; 
//                ans++;   
//           }
//           int j=0;
//           for(int i=0;i<xsize;i++){
//                if(x[i%xsize]==s[j] && j<xsize){
//                     j++;
//                } else{
//                     j=0;
//                }
//           }
//           if(j==m) return ans;
//           else -1;
//      }
//      return ans;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         cout<<solve()<<endl;
//     }
//     return 0;
// }