/*
��һ�����������򵥵�һ�����Ӻ͡�����⡢�����������javaҲ������
������һ�ι�ϣ����ֻ��Ҫ����һ���ּ�ֵ�ԡ�ÿ���ȼ����û����nums[i]��Ϊtarget�ģ���������뵽����У���Ȼ�Ͱ�ÿ�ε�Ԫ�ؼӵ�map�С�

��һ��
ִ����ʱ��852 ms, ������ C++ �ύ�л�����14.67%���û�
�ڴ����ģ�7.2 MB, ������ C++ �ύ�л�����100.00%���û�

������
ִ����ʱ��28 ms, ������ C++ �ύ�л�����48.96%���û�
�ڴ����ģ�8.1 MB, ������ C++ �ύ�л�����100.00%���û�
*/
 
 /*
 ��һ
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
����
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