/*
ִ����ʱ : 55 ms, ��Two Sum��Java�ύ�л�����31.73% ���û�
�ڴ����� : 38.1 MB, ��Two Sum��Java�ύ�л�����0.99% ���û�
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