#include <bits/stdc++.h>
using namespace std;

string nTOd(char a){
    if(a == '2') return "abc";
    if(a == '3') return "def";
    if(a == '4') return "ghi";
    if(a == '5') return "jkl";
    if(a == '6') return "mno";
    if(a == '7') return "pqrs";
    if(a == '8') return "tuv";
    if(a == '9') return "wxyz";
}

int main(){
    string digit, tmp;
    cin>>digit;
    int n = digit.length();
    vector<string> res, f;

    if(n==0) cout<<" f";

    tmp = nTOd(digit[0]);
    for(int i=0; i<tmp.size(); i++){
        string s(1, tmp[i]);
        res.push_back(s);
    }

    for(int i=1; i<n; i++){
        string tmp = nTOd(digit[i]);
        int l = res.size();

        for(int j=0; j<tmp.length(); j++){

            for(int k=0; k<l; k++){
                string p = res[k];

                p += tmp[j];
                res.push_back(p);
            }
        }
    }

    for(int i=0; i<res.size(); i++){
        if(res[i].length() == n){
            f.push_back(res[i]);
            cout<<res[i]<<endl;
        }
    }

    for(int i=0; i<f.size(); i++){
        cout<<f[i]<<endl;
    }

    return 0;
}
