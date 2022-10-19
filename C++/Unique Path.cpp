class Solution {
public:
    int uniquePaths(int m, int n) {
        int count[n][m];
        count[0][0]=0;
        for(int i=1;i<n;i++)
        {
            count[i][0]=1;
        }
        for(int i=0;i<m;i++)
        {
            count[0][i]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                count[i][j]=count[i-1][j]+count[i][j-1];
            }
        }
        return count[n-1][m-1];
    }
};
