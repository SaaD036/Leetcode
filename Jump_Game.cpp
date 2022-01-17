#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int res=0, n=nums.size();

    for(int i=0; i<n; ){
        res++;
        int mx=0, index=i;

        if(i+nums[i] >= n-1) break;

        for(int j=i+1; j<=i+nums[i]; j++){
            if(j+nums[j]>mx) {
                mx = j+nums[j];
                index = j;
            }
        }
        i=index;

        if(nums[i]==0) return -1;
    }

    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;

        v.push_back(tmp);
    }


    cout<<jump(v);

    return 0;
}

