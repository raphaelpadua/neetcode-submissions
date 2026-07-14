#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        //Goals is to have 2 iterators:
        //One moving forward and one moving backwards
        //If each iterator is equal to the other, keep iterating
        //Otherwise, return false

        int i = 0, j = s.size() - 1;
        while(i < j)
        {
            while(!isalnum(s[i]) && i < j)
            {
                i++;
            }
            while(!isalnum(s[j]) && i < j)
            {
                j--;
            }

            if(tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
