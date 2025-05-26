class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int idx=0;
        unordered_map<int,int> umap;
        for (int i:nums)
        {
            if(umap.count(i)&&abs(idx-umap[i])<=k)
            {
                return true;
            }
            else
            {
                umap[i]=idx;
            }
            idx++;
        }
        return false;
    }
};