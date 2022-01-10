#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n, num[3]={0};
    cin>>n;

    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        num[tmp]++;
        nums.push_back(tmp);
    }

    for(int i=0; i<n; i++){
        if(i<num[0]) nums[i]=0;
        else if(i<num[0]+num[1]) nums[i]=1;
        else nums[i]=2;
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}
