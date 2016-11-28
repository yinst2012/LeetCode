public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] res = new int[2];
        boolean reachRes = false;
        for(int i = 0; i < nums.length; ++ i){
            for(int j = i+1; j < nums.length; ++ j){
                if(nums[i] + nums[j] == target){
                    res[0] = i;
                    res[1] = j;
                    reachRes = true;
                    break;
                }
            }
            if(reachRes == true) break;
        }
        return res;
    }
}
