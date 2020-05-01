class Solution {
public:
    int movingCount(int m, int n, int k) {
        vector<vector<bool>> visit;
        
        for (int i=0; i<m; i++) {
            vector<bool>temp;
            temp.assign(n, false);
            visit.push_back(temp);
        }
        
        int cnt=0, curRow=0, curCol=0;
        dfs(visit, curRow, curCol, cnt, k);
        
        return cnt;
    }
    
    void dfs(vector<vector<bool>> &visit, int curRow, int curCol, int &cnt, int k)
    {
        if (curRow<0 || curRow>= visit.size() || curCol<0 || curCol>=visit[0].size() || !countDigits(curRow, curCol, k) || visit[curRow][curCol]==true) {
            return;
        }
        
        visit[curRow][curCol]=true;
        cnt++;
        
        dfs(visit, curRow-1, curCol, cnt, k);
        dfs(visit, curRow+1, curCol, cnt, k);
        dfs(visit, curRow, curCol-1, cnt, k);
        dfs(visit, curRow, curCol+1, cnt, k);
    }
    
    //满足要求返回1，否则返回0
    bool countDigits(int curRow, int curCol, int k)
    {
        int sum=0;
        while (curRow) {
            sum=sum+curRow%10;
            curRow=curRow/10;
        }
        while (curCol) {
            sum=sum+curCol%10;
            curCol=curCol/10;
        }
        
        if (sum<=k) {
            return true;
        }
        else
        {
            return false;
        }
    }
};
