#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(int n, int m) {
    vector<int> res;
    //int n=matrix.size(), m=matrix[0].size(), mode=0;
    int flag[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) flag[i][j]=false;

    int i=0, j=0, mode=0;
    for(int k=0; k<n*m; k++){
        if(mode==0){
            for(; j<m; j++){
                if(flag[i][j]) break;

                cout<<i<<" "<<j<<endl;
                ///res.push_back(matrix[i][j]);
                flag[i][j]=true;
            }
            j--;
            i++;
            mode++;
        }
        else if(mode==1){
            for(; i<n; i++){
                if(flag[i][j]) break;

                cout<<i<<" "<<j<<endl;
                //res.push_back(matrix[i][j]);
                flag[i][j]=true;
            }
            i--;
            j--;
            mode++;
        }
        else if(mode==2){
            for(; j>=0; j--){
                if(flag[i][j]) break;

                cout<<i<<" "<<j<<endl;
                //res.push_back(matrix[i][j]);
                flag[i][j]=true;
            }
            j++;
            i--;
            mode++;
        }
        else{
            for(; i>=0; i--){
                if(flag[i][j]) break;

                cout<<i<<" "<<j<<endl;
                ///res.push_back(matrix[i][j]);
                flag[i][j]=true;
            }
            i++;
            j++;
            mode=0;
        }
    }

    return res;
}

int main(){
    spiralOrder(3, 4);
}
