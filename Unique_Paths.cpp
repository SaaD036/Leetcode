#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n) {
    int matrix[m][n];
    matrix[0][0]=0;

    for(int i=1; i<n; i++) matrix[0][i] = 1;
    for(int i=1; i<m; i++) matrix[i][0] = 1;

    for(int i=1; i<m; i++)
        for(int j=1; j<n; j++)
            matrix[i][j] = matrix[i-1][j]+matrix[i][j-1];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 1;
}

int main(){
    uniquePaths(3, 7);
}
