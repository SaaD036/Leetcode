class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0;i<9;i++)
        {
            unordered_map<char,int> mp;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                if(mp[board[i][j]])return false;
                mp[board[i][j]]++;
            }
        }

        for(int j=0;j<9;j++)
        {
            unordered_map<char,int> mp;
            for(int i=0;i<9;i++)
            {
                 if(board[i][j]=='.')continue;
                if(mp[board[i][j]])return false;
                mp[board[i][j]]++;
            }
        }

        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                unordered_map<char,int> mp;
                for(int x=i;x<i+3;x++)
                {
                    for(int y=j;y<j+3;y++)
                    {
                         if(board[x][y]=='.')continue;
                if(mp[board[x][y]])return false;
                mp[board[x][y]]++;
                    }
                }
            }
        }
        return true;

    }
};
