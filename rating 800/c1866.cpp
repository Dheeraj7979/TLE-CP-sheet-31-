// problem link::   https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
          if(abs(arr[i])<smallest) smallest=abs(arr[i]);   
    }
    return smallest;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    
        cout<<solve()<<endl;
    return 0;
}