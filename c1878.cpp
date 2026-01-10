// codeforces :- How much does daytona cost 
// tle sheet cp 31 rating 800 problem 8
// link :- https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

string solve() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    for(int i=0;i<n;i++){
     if(arr[i]==k) return "YES";
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}