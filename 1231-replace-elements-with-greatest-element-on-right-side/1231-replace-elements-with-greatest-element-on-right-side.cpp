class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int c=-1,n=arr.size(),a;
        for (int i=n-1;i>=0;--i)
        {
            a=arr[i];
            arr[i]=c;
            c=max(a,c);
        }
        return arr;
    }
};