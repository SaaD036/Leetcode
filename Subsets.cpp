#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> nums;
    cin>>n;
    vector<vector<int> > res;

    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }

    if(n==0) cout<<"No"<<endl;

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++){
        vector<int> tmp;
        tmp.push_back(nums[i]);

        res.push_back(tmp);
    }

    for(int i=1; i<n; i++){
        int len = res.size();

        for(int j=0; j<len; j++){
            vector<int> tmp = res[j];
            int tmp_len = tmp.size();

            if(tmp[tmp_len-1] < nums[i]){
                tmp.push_back(nums[i]);
                res.push_back(tmp);
            }
        }
    }

    for(int i=0; i<res.size(); i++){
        vector<int> tmp = res[i];

        for(int j=0; j<tmp.size(); j++){
            cout<<tmp[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
