#include<bits/stdc++.h>
using namespace std;

string checkans(){
     int n,k;
          cin>>n>>k;
          vector<int>array;
          while(n--){
               int temp;
               cin>>temp;
               array.push_back(temp);
          }
          if(k>=2) return "YES";
          else{
               int i=0;
               while(i<array.size()-1){
                    if(!(array[i]<=array[i+1])){
                         return "NO";

                    }
                    i++;
                   
               }
               return "YES";

          }
}
int main(){
     int t;
     cin>>t;
     while(t--){
         cout<<checkans()<<endl; 
     }
     return 0;
}