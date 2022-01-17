#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > spiralOrder(int n) {
    vector<vector<int> > res;
    int matrix[n][n], cnt=1;
    bool flag[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) flag[i][j]=false;

    int i=0, j=0, mode=0;
    for(int k=0; k<n*n; k++){
        if(mode==0){
            for(; j<n; j++){
                if(flag[i][j]) break;

                matrix[i][j]=cnt;
                cnt++;
                flag[i][j]=true;
            }
            j--;
            i++;
            mode++;
        }
        else if(mode==1){
            for(; i<n; i++){
                if(flag[i][j]) break;

                matrix[i][j]=cnt;
                cnt++;
                flag[i][j]=true;
            }
            i--;
            j--;
            mode++;
        }
        else if(mode==2){
            for(; j>=0; j--){
                if(flag[i][j]) break;

                matrix[i][j]=cnt;
                cnt++;
                flag[i][j]=true;
            }
            j++;
            i--;
            mode++;
        }
        else{
            for(; i>=0; i--){
                if(flag[i][j]) break;

                matrix[i][j]=cnt;
                cnt++;
                flag[i][j]=true;
            }
            i++;
            j++;
            mode=0;
        }
    }

    for(int i=0; i<n; i++){
        vector<int> v;
        for(int j=0; j<n; j++){
            v.push_back(matrix[i][j]);
        }
        res.push_back(v);
    }

    return res;
}

int main(){
    spiralOrder(4);
}

