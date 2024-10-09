class Solution {
public:
    vector<pair<int,int>> arr;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
    }
    
    int pick(int target) {
        int n=arr.size();
        int lo=0,hi=n-1,lower=-1,higher=-1;
        
        //Upper bound
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid].first<=target){
                lo=mid+1;
                higher=mid;
            }else{
                hi=mid-1;
            }
        }
        
        //Lower bound
        lo=0,hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid].first>=target){
                hi=mid-1;
                lower=mid;
            }else{
                lo=mid+1;
            }
        }
        
        int index=rand()%(higher-lower+1);
        return arr[lower+index].second;
        
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */