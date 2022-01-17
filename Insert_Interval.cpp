#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    intervals.push_back(newInterval);
    int n=intervals.size();
    vector<vector<int> > res;

    sort(intervals.begin(), intervals.end());

    stack<vector<int> > s;
    s.push(intervals[0]);

    for(int i=1; i<n; i++){
        vector<int> a = s.top();

        if(intervals[i][0] <= a[1]){
            a[1] = max(a[1], intervals[i][1]);
            s.pop();
            s.push(a);
        }
        else s.push(intervals[i]);
    }

    while (!s.empty()) {
        res.push_back(s.top());
        s.pop();
    }

    return res;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int> > a;

    for(int i=0; i<n; i++){
        int t1, t2;
        vector<int> b;
        cin>>t1>>t2;

        b.push_back(t1);
        b.push_back(t2);

        a.push_back(b);
    }

    vector<vector<int> > res = merge(a);

    return 0;
}
