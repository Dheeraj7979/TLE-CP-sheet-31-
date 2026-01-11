#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int solve() {
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int mindiff=INT_MAX;
     for(int i=1;i<n;i++){
          if(!(a[i-1]<=a[i])) return 0;
          int diff=a[i]-a[i-1];
          mindiff=min(mindiff,diff);
     }
     
     return mindiff/2+1;
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