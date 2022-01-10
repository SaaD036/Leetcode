#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> height;
    cin>>n;

    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;

        height.push_back(tmp);
    }

    int res=0, len=height.size();

    for(int i=0, j=len-1; i<j; ){
        res = max(res, (j-i)*min(height[i], height[j]));

        if(height[i] > height[j]) j--;
        else i++;
    }

    cout<<res;

    return 0;
}
