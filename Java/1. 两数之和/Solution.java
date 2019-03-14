/*
执行用时 : 55 ms, 在Two Sum的Java提交中击败了31.73% 的用户
内存消耗 : 38.1 MB, 在Two Sum的Java提交中击败了0.99% 的用户
*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i,j=0;
        Boolean flag=false;
        for (i=0; i<nums.length; i++)
        {
            for (j=i+1; j<nums.length; j++) {
                if ((nums[i]+nums[j])==target && i!=j) {
                    flag=true;
                    break;
                }
            }
            if (flag) break;
        }
        int[] result=new int[2];
        result[0]=i;
        result[1]=j;
        return result;
    }
}