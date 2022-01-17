#include <bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int n=grid.size(), m=grid[0].size();

    for(int i=1; i<m; i++) grid[0][i] += grid[0][i-1];
    for(int i=1; i<n; i++) grid[i][0] += grid[i-1][0];

    for(int i=1; i<n; i++)
        for(int j=1; j<m; j++)
            grid[i][j] += min(grid[i-1][j], grid[i][j-1]);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 1;
}

int main(){

}
