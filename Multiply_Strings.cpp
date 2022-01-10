#include <bits/stdc++.h>
using namespace std;

string addition(string a, string b){
    string res="";

    if(a.length() > b.length()){
        for(int i=b.length(); i<a.length(); i++) b='0'+b;
    }
    if(a.length() < b.length()){
        for(int i=a.length(); i<b.length(); i++) a='0'+a;
    }

    int rem=0, len=a.length();
    for(int i=len-1; i>=0; i--){
        int tmp = (a[i]-'0')+(b[i]-'0') + rem;

        rem = tmp/10;
        tmp %= 10;

        string s(1, tmp+'0');
        res = s + res;
    }

    if(rem!=0) {
        string s(1, rem+'0');
        res=s+res;
    }

    return res;
}

string multiplication(string a, char b, int zero){
    reverse(a.begin(), a.end());
    string res="";
    int hand=0;

    for(int i=0; i<a.length(); i++){
        int tmp = (a[i]-'0')*(b-'0') + hand;

        hand = tmp/10;
        tmp %= 10;

        res += (tmp+'0');
    }

    if(hand!=0) res+=(hand+'0');

    reverse(res.begin(), res.end());

    for(int i=0; i<zero; i++) res+='0';

    return res;
}

int main(){
    ///cout<<"yes"<<endl;
    string num1, num2, res="", f="";
    cin>>num1>>num2;
    int len1=num1.length(), len2=num2.length();

    for(int i=0,j=len2-1; j>=0; j--,i++){
        string tmp = multiplication(num1, num2[j], i);
        res = addition(res, tmp);
    }

    cout<<res;

    bool tmp=false;
    for(int i=0; i<res.length()-1; i++){
        if(!tmp) tmp = res[i]!='0';
        if(tmp) f+=res[i];
    }
    f+=res[res.length()-1];
    cout<<endl<<f;

    return 0;
}
