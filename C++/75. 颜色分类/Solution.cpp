/*
ִ����ʱ:4 ms,������C++�ύ�л�����55.12%���û� 
�ڴ�����:8.5 MB,������C++�ύ�л�����78.13%���û�
*/

/*ʹ������򵥵�ð������Ŀǰʱ�临�ӶȲ�̫��*/

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