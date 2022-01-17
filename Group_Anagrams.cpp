#include <bits/stdc++.h>
using namespace std;

vector<vector<string> > groupAnagrams(vector<string>& strs) {
    int n=strs.size();
    vector<pair<string, int> > strIndex;
    vector<vector<string> > res;

    for(int i=0; i<n; i++){
        string tmp=strs[i];
        sort(tmp.begin(), tmp.end());
        strIndex.push_back(make_pair(tmp, i));
    }

    sort(strIndex.begin(), strIndex.end());

    string tmp = strIndex[0].first;
    vector<string> v;
    v.push_back(strs[strIndex[0].second]);

    for(int i=1; i<n; i++){
        string tmp1 = strIndex[i].first;

        if(tmp==tmp1) v.push_back(strs[strIndex[i].second]);
        else{
            res.push_back(v);
            v.erase();
            tmp=tmp1;
            v.push_back(strs[strIndex[i].second]);
        }
    }

    return res;
}

int main(){
    int n;
    cin>>n;
    vector<string> v;

    for(int i=0; i<n; i++){
        string tmp;
        cin>>tmp;

        v.push_back(tmp);
    }

    return 0;
}
