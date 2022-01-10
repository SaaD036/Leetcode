#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, res="";
    cin>>s;
    int n=s.length(), row;
    cin>>row;

    ///cout<<s<<"  "<<row<<""<<n<<endl;

    if(row==1){
        cout<<s;
        return 0;
    }

    for(int i=0; i<row; i++){
        for(int j=i; j<n; j+=2*row-2){
            res += s[j];

            if(i>0 && i<row-1){
                int tmp = j+row-i+row-i-2;
                if(tmp<n) res+=s[tmp];
            }
            ///cout<<s[j];
        }
    }

    cout<<res;

    return 0;
}
