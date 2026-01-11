
// problem link:_  https://codeforces.com/problemset/problem/1858/A
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

string solve() {
    int a,b,c;
    cin>>a>>b>>c;
    a=a+c-c/2;
    b=b+c/2;
    if(a>b) return "First";
    else return "Second";

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