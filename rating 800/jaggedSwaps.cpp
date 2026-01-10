// codeforces :- Jagged Swaps
// tle sheet cp 31 rating 800 problem 5
// link :- https://codeforces.com/problemset/problem/1896/A


#include<bits/stdc++.h>
using namespace std;

string jaggedswaps(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     if(arr[0]!=1) return "NO";
     for(int i=1;i<n-1;i++){
          if(arr[i-1]<arr[i]){
               if(arr[i]>arr[i+1]){
               swap(arr[i],arr[i+1]);
          } 
     } else{
          return "NO";
     }
          
     return "YES";
     }

}
int main (){
     int t;
     cin>>t;
     while(t--){
          cout<<jaggedswaps()<<endl;
     }
     return 0;
}