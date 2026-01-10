// codeforces :- Cover in water 
// tle sheet cp 31 rating 800 problem 3
// link :- https://codeforces.com/problemset/problem/1900/A


#include<bits/stdc++.h>
using namespace std;

int coverInWater(){
     string s;
     int n;
     cin>>n;
     cin>>s;
     int ans=0;
     int maxdot=0;
     int dot=0;
     for(int i=0;i<s.size();i++){
          if(s[i]=='.') {
                dot++;
                ans++;
          }
          maxdot=max(dot,maxdot);
          if(s[i]=='#') dot=0;
          
          
     }
     if(maxdot>2) return 2;

     return ans;
}
int main(){
     int t;
     cin>>t;
     while(t--){
          cout<<coverInWater()<<endl;
     }
}