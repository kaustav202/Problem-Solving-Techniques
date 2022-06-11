class Solution {
public:

        
    int numberOfBeams(vector<string>& bank) {
    int total = 0, last = 0, count = 0;
    for(string s: bank) {
        count = 0;
        for (int i = 0; i < s.size(); i++) 
            if (s[i] == '1') count++;
        if (count) {
            total += last * count;
            last = count;
            }
        }
        return total;
    }

};
