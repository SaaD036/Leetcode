#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& a){
    int n=a.size(), cnt=1, res=0;

    for(int i=1; i<n; i++){
        if(a[i] != a[i-1]){
            res += min(2, cnt);
            cnt=1;
        }
        else cnt++;
    }

    res += min(2, cnt);

    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;

    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }

    cout<<removeDuplicates(nums);

    return 0;
}
