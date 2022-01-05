#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n=s.length(), res=0;

    for(int i=0; i<n; i++){
        set<char> a;

        for(int j=i; j<n; j++){
            if(a.count(s[j])){
                res=max(j-i, res);
                break;
            }
            else{
                a.insert(s[j]);
                res=max(j-i+1, res);
            }
        }
    }

    cout<<res;
}

