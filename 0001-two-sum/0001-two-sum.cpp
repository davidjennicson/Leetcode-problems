class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int need=target-num;
         
            if(umap.find(need)!=umap.end())
            {
                return {umap[need],i};
            }
            umap[num]=i;

        }
        return {-1,-1};
    }
};