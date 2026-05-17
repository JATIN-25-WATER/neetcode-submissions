class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int cur =0 ,max = 0;
    for (int n:nums){
        cur = n == 1? cur+1:0;
        if(cur > max) max = cur;
    }
    return max;
    }
};