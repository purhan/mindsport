int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int ans=0;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while(!q.empty())
        {
            ans++;
            int sz=q.size();
            while(sz--)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                for(int k=0;k<4;k++)
                {
                    if(dx[k]+i>=0&&dx[k]+i<r&&dy[k]+j>=0&&dy[k]+j<c&&grid[dx[k]+i][dy[k]+j]==1)
                    {
                        grid[dx[k]+i][dy[k]+j]=2;
                        q.push({i+dx[k],j+dy[k]});
                    }
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return ans-1;
    }
