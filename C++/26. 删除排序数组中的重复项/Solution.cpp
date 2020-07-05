/*
法一：两个指针，分别指向两个不同位置的元素，一一比较，相同，就删除相同元素（链表存数据这样则好一点，但这里是vector，用起来就复杂一点）；不同就往后推。
法二：看别人题解学来的思路。因为有序，只需看看邻近的元素是否不同即可，把不同的元素放到最前面即可。需要注意nums长度为0或1的特殊情况

法一：
执行用时：860 ms, 在所有 C++ 提交中击败了5.06%的用户
内存消耗：7.8 MB, 在所有 C++ 提交中击败了100.00%的用户

法二：
执行用时：20 ms, 在所有 C++ 提交中击败了57.75%的用户
内存消耗：7.6 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

/*
用例：
[1,1,2]
[0,0,1,1,1,2,2,3,3,4]
[]
[1]
*/
 
 /*
 法一
 */
class Solution {
private:
    int len = 0;
public:

    int removeDuplicates(vector<int>& nums) {
        int cur=0, next=1;
        len = nums.size();
        while (cur<len && next<len) {
            if (nums[cur] == nums[next]) {
                deleteElem(nums, next);
                len--;
            } else {
                cur = next;
                next++;
            }
        }
        return len;
    }

    void deleteElem(vector<int>& nums, int position) {
        for (int i=position; i<len-1; i++) {
            nums[i] = nums[i+1];
        }
    }
};

/*
法二
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur = 0, next = 1;
        int len = nums.size();
        while (cur<len && next<len) {
            // cout<<cur;
            if (nums[cur] != nums[next]) {
                nums[++cur] = nums[next];
            }
            next++;
        }
        return len==0 ? cur : cur+1;
    }
};