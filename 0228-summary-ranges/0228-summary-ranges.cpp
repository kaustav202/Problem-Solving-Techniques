class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>out;
        if(nums.size()==0) return out;
        
        int l = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]+1!=nums[i+1]){
                string x = to_string(nums[i-l+1]);
                if(l!=1)
                    x += "->" + to_string(nums[i]);
                out.push_back(x);
                l = 1;
            }
            else l++;
        }

        string x = to_string(nums[nums.size()-l]);
        if(l!=1)
            x += "->" + to_string(nums[nums.size()-1]);
        out.push_back(x);

        return out;
    }
};