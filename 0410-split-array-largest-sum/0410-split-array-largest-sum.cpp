class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long int mn=INT_MIN,mid,ans, mx = 0,sum;
        int tmp;
        for(auto &i: nums){
            mx += i;//MAXIMUM POSSIBLE SUM OF AN SUBARRAY
            mn = max(mn,i*1LL);//MAX OF MINIMUM POSSIBLE SUM OF SUBARRAY
        }
        while(mn<=mx){
            mid = (mx-mn)/2+mn;
            tmp = 1,sum=0;
            for(auto &i: nums){
                sum += i;
                if(sum>mid){
                    tmp++;
                    sum = i;
                }
            }
            if(tmp==k){
                ans = mid;
                mx = mid-1;
            }else if(tmp>k){
                mn = mid+1;
            }else{
                ans = mid;
                mx = mid-1;
            }
        }
        return ans;
    }
};