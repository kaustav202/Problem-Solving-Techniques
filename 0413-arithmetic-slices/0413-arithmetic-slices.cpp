class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n =nums.size(),cnt=0;
        vector<int> v(n,0);
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]) cnt++;
            else cnt=0;
            v.push_back(cnt);
        }
        v.push_back(0);
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0 && v[i+1]==0){
                ans+=v[i]*(v[i]+1)/2;
            }
        }
        return ans;
    }
};
