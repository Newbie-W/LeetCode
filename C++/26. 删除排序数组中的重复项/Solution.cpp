/*
��һ������ָ�룬�ֱ�ָ��������ͬλ�õ�Ԫ�أ�һһ�Ƚϣ���ͬ����ɾ����ͬԪ�أ�����������������һ�㣬��������vector���������͸���һ�㣩����ͬ�������ơ�
���������������ѧ����˼·����Ϊ����ֻ�迴���ڽ���Ԫ���Ƿ�ͬ���ɣ��Ѳ�ͬ��Ԫ�طŵ���ǰ�漴�ɡ���Ҫע��nums����Ϊ0��1���������

��һ��
ִ����ʱ��860 ms, ������ C++ �ύ�л�����5.06%���û�
�ڴ����ģ�7.8 MB, ������ C++ �ύ�л�����100.00%���û�

������
ִ����ʱ��20 ms, ������ C++ �ύ�л�����57.75%���û�
�ڴ����ģ�7.6 MB, ������ C++ �ύ�л�����100.00%���û�
*/

/*
������
[1,1,2]
[0,0,1,1,1,2,2,3,3,4]
[]
[1]
*/
 
 /*
 ��һ
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
����
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