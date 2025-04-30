class Solution {
public:
    int lengthOfLastWord(string s) {
        int score=0,beforescore;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                beforescore=score;
                   score++;
            }
            else
            {
                
                cout<<beforescore;
                score=0;
            }
                 }
       return max(beforescore+1,score);

    }
};