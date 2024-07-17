class Solution {
public:
    bool isPalindrome(string s) 
    {
        int end = s.size() - 1;
        bool result = true;
        int start = 0;

        while(start <= end)
        {
            if(!isalnum(s[start])) 
            {
                start++; 
                continue;
            }
            
            if(!isalnum(s[end])) 
            {
                end--; 
                continue;
            }

            if(tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
            
            else
            {
                start++; end--;
            }
        }

        return result;
    }
};