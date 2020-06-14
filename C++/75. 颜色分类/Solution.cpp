/*
执行用时:4 ms,在所有C++提交中击败了55.12%的用户 
内存消耗:8.5 MB,在所有C++提交中击败了78.13%的用户
*/

/*使用了最简单的冒泡排序，目前时间复杂度不太行*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp;
        int len = nums.size();
        for (int i=0; i<len-1; i++) {
            for (int j=i+1; j<len; j++) {
                if (nums[i] > nums[j]) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};