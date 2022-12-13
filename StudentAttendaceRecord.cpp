class Solution {
public:
    bool checkRecord(string s) {

        int a = 0, l = 0;

        for(int i = 0; i < s.length(); i++) {
            
            if(s[i] == 'P') {
                l = 0;
                continue;
            }
                
            if(s[i] == 'A') {
                a += 1;
                if(a > 1)
                    return false;
            }

            if(s[i] == 'L') {
                l += 1;
                if(l > 2)
                    return false;
            }
            else l = 0;

        }

        return true;

    }
};