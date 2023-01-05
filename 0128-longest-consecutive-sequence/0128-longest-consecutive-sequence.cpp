class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_map<int,int> m;
        
        for(auto i : nums) m[i] = 1;
        
        for(auto i:nums){
            if(m.find(i-1) != m.end()) m[i] = 0;
        }
        
        int max_len = 1;
        
        for (auto i:nums){
            int curr = 1;
            if( m[i]!= 0){
                while(m.find(i+1) != m.end()){
                    i++;
                    curr++;
                }
                max_len = curr>max_len ? curr : max_len;
            }
        }
        
        return max_len;
    }
};