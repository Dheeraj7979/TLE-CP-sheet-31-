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
    for(int i=0;i<n-1;i++){
          cin>>arr[i]; 
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
          sum=sum+arr[i];
    }
    if(sum<=0) return abs(sum);
    else return -sum;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}