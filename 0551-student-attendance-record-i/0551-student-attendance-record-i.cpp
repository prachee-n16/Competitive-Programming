class Solution {
public:
    bool checkRecord(string s) {
        int l_count = 0;
        int a_count = 0;
        for (int i = 0; i < int(s.length()); i++){
            
            if (s[i] == 'P'){
                l_count = 0;
            } else if (s[i] == 'A') {
                l_count = 0;
                a_count++;
            } else if (s[i] == 'L'){
                l_count++;
            }
            if (a_count == 2) {
                return false;
            } 
            if (l_count == 3) {
                return false;
            }

            cout << s[i] << ' ' << l_count << a_count << endl;
        }
        return true;
    }
};