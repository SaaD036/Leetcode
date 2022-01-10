#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length(), f=0, l=0;
    bool a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] = i==j;
            if(f==l){
                f=l=i;
            }
        }
        if(s[i]==s[i+1]){
            a[i][i+1] = true;
            f=i;
            l=i+1;
        }
    }

    for(int i=3; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            int k=j+i-1;

            if((s[j]==s[k] && a[j+1][k-1])){
                a[j][k] = true;
                f=j;
                l=k;
            }
        }
    }

    //cout<<f<<"  "<<l<<endl;
    cout<<s.substr(f, l-f+1);
}
