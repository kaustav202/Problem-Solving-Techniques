class Solution {
public:
    #define ll long long
    
    int maximumJumps(vector<int>& a, int t) {
        int n=a.size();
        
        vector<int> dp(n,-1);
        dp[0]=0;
        
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                ll int diff = 0;
                if(a[i]>a[j]){
                    diff = (ll)a[i] - (ll)a[j];
                }else{
                    diff = (ll)a[j] - (ll)a[i];
                }
                
                if(diff <= t && dp[j]!=-1) dp[i]=max(dp[i],1+dp[j]);
            }
        }
        
        return dp[n-1];
    }
};