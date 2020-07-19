/*
ִ����ʱ��252 ms, ������ C++ �ύ�л�����10.94%���û�
�ڴ����ģ�32.1 MB, ������ C++ �ύ�л�����100.00%���û�
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