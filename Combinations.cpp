#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<vector<int> >res;

    for(int i=1; i<=n; i++){
        vector<int> tmp;
        tmp.push_back(i);
        res.push_back(tmp);
    }

    for(int i=2; i<=n; i++){
        int len = res.size();

        for(int j=0; j<len; j++){
            vector<int> tmp = res[j];
            int tmp_len = tmp.size();

            if(i>tmp[tmp_len-1]){
                tmp.push_back(i);
                res.push_back(tmp);
            }
        }
    }

    for(int i=0; i<res.size(); i++){
        vector<int> tmp = res[i];
        int tmp_len = tmp.size();

        if(tmp_len==k){
            for(int j=0; j<tmp_len; j++){
                cout<<tmp[j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
