class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=1;i<s.length();i++)
        {
            int first=s[i-1];
            int sec=s[i];
            int score=abs(first-sec);
            sum=score+sum;
        }
        return sum;
    }
};