int isValid(vector<vector<int>> mat){
        int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
        
        for(int i = 0; i < 9; ++ i)
            for(int j = 0; j < 9; ++ j)
                if(mat[i][j] != 0)
                {
                    int num = mat[i][j]  - 1, k = i / 3 * 3 + j / 3;
                    if(used1[i][num] || used2[j][num] || used3[k][num])
                        return false;
                    used1[i][num] = used2[j][num] = used3[k][num] = 1;
                }
        
        return true;
    }
