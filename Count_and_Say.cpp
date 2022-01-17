#include <bits/stdc++.h>
using namespace std;

string toString(int num){
    string res="";

    while(num > 0){
        char a = (num%10)+'0';
        res = res + a;
        num /= 10;
    }

    return res;
}

string solution(string a){
    int n=a.length(), cnt=1;
    string res="";

    for(int i=1; i<n; i++){
        if(a[i] != a[i-1]){
            res += toString(cnt);
            res += a[i-1];

            cnt=1;
        }
        else{
            cnt++;
        }
    }

    res += toString(cnt);
    res += a[n-1];

    return res;
}

int main(){
    int n;
    cin>>n;
    string res="1";

    if(n==1){
        cout<<res;
        return 0;
    }

    for(int i=2; i<=n; i++){
        res = solution(res);
        cout<<res<<endl;
    }

    return 0;
}
