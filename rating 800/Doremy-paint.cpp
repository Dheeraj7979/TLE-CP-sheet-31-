// codeforces :- Jagged Swaps
// tle sheet cp 31 rating 800 problem 6
// link :- https://codeforces.com/problemset/problem/1890/A

#include<bits/stdc++.h>
using namespace std;

string doremypaint(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int count=0;
     int x=a[0];
     int y=-1;
     int n1=0;
     int n2=0;
     for(int i=0;i<n;i++){
          if(a[i]!=x){
               if(y<1|| a[i]==y) y=a[i];
               else return "NO";
          }
     }
     for(int i=0;i<n;i++){
          if(a[i]==x) n1++;
          else n2++;
     }
     if(n1==n/2||n2==n/2||n1==n||n2==n) return "YES";
     return "NO";
}
int main(){
     int t;
     cin>>t;
     while(t--){
          cout<<doremypaint()<<endl;
     }
}