/*
执行用时：252 ms, 在所有 C++ 提交中击败了10.94%的用户
内存消耗：32.1 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicateNum = 0, lostNum = 0;
        map<int, int> mymap;
        int size = nums.size();
        for (int i=0; i<size; i++) {
            if (mymap.count(nums[i]) > 0) {
                duplicateNum = nums[i];
                //printf("------ nums[%d] = %d\n", i,  nums[i], mymap.count(i));
            }
            mymap[nums[i]] = i;
        }
        for (int i=1; i<=size; i++) {
            if (mymap.count(i) == 0) {
                lostNum = i;
                break;
            }
        }
        return {duplicateNum, lostNum};
    }
};