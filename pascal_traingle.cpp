class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>f;
        if(numRows==1) return {{1}};
        if(numRows==2) return {{1},{1,1}};
        f.push_back({1});
        f.push_back({1,1});
        //return f;
        
        for(int i=2;i<numRows;i++){
            vector<int>k(i+1,1);
            f.push_back(k);
            for(int j=1;j<i;j++){
                f[i][j]=f[i-1][j-1]+f[i-1][j];
            }      
            }
            return f;
    }
};
