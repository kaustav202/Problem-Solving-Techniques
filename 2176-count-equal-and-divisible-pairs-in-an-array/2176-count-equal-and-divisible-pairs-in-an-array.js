/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countPairs = function(nums, k) {
    var tot = 0;
    var res = [];
    
    for(i=0; i< nums.length; i++){
        for(j=i+1; j<nums.length; j++){
            if(nums[i] == nums[j] && (i*j)%k == 0) res.push([nums[i],nums[j]]);
        }
    }
     console.log(res);
    return res.length;
};