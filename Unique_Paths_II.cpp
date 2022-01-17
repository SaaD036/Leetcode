#include <bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n=obstacleGrid.size();
    int matrix[n][n];

    for(int i=0; i<n; i++) matrix[0][i] = 1;
    for(int i=0; i<n; i++) matrix[i][0] = 1;

    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            if(obstacleGrid[i][j] == 0)
                matrix[i][j] = matrix[i-1][j]+matrix[i][j-1];
            else matrix[i][j] = 0;
        }
    }

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
