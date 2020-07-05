/*
法一：暴力法。简单的一个个加和。这个题、这个方法，用java也做过。
法二：一次哈希表法。只需要存入一部分键值对。每次先检查有没有与nums[i]和为target的，有则将其加入到结果中，不然就把每次的元素加到map中。

法一：
执行用时：852 ms, 在所有 C++ 提交中击败了14.67%的用户
内存消耗：7.2 MB, 在所有 C++ 提交中击败了100.00%的用户

法二：
执行用时：28 ms, 在所有 C++ 提交中击败了48.96%的用户
内存消耗：8.1 MB, 在所有 C++ 提交中击败了100.00%的用户
*/
 
 /*
 法一
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int i=0, j=1;
        int size = nums.size();
        for (i=0; i<size-1; i++) {
            for (j=i+1; j<size; j++) {
                if (nums[i]+nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

/*
法二
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> map;
        int i=0;
        int size = nums.size();
        for (i=0; i<size; i++) {
            if (map.count(target-nums[i]) > 0) {
                result.push_back(i);
                result.push_back(map[target-nums[i]]);
                break;
            }
            map[nums[i]] = i;
        }
        return result;
    }
};