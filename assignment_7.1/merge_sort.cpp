class Solution {
public:
    vector<int>m(vector<int>h1,vector<int>h2){
        vector<int>merge;
        int i=0;
        int j=0;
        while(i<h1.size() && j<h2.size()){
            if(h1[i]<h2[j]){
                merge.push_back(h1[i]);
                i++;
            }
            if(h1[i]>=h2[j]){
                merge.push_back(h2[j]);
                j++;
            }
           
        }
        while(i<h1.size()){
            merge.push_back(h1[i]);
            i++;
        }
        while(j<h2.size()){
            merge.push_back(h2[j]);
            j++;
        }
        return merge;
    }
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size()>1){
            vector<int>h1;
            vector<int>h2;
            for(int i=0;i<nums.size()/2;i++){
                h1.push_back(nums[i]);
            }
            for(int i=nums.size()/2;i<nums.size();i++){
                h2.push_back(nums[i]);
            }
            sortArray(h1);
            sortArray(h2);
            nums = m(h1,h2);
            }
            return nums;
    }
};
