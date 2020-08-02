/*
���Լ򵥱������ң����˴�����ʹ���ˡ���һ������ʹ���˶��ַ���
����Ϊ��һ����������������+ÿ�����ε���api�����ո�Ϊ�˷���д��

��һ��
ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00%���û�
�ڴ����ģ�5.8 MB, ������ C++ �ύ�л�����88.31%���û�

������
ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00%���û�
�ڴ����ģ�6 MB, ������ C++ �ύ�л�����30.52%���û�
*/

/*
������
5
4
1
1
2
2
2126753390
1702766719
*/
 
 /*
 ��һ
 */
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
private:
    unsigned int left = 1, right;
public:
    int firstBadVersion(int n) {
        right = n;
        unsigned int mid = (left + right) / 2;
        bool tmp1 = isBadVersion(mid-1);
        bool tmp2 = isBadVersion(mid);
        //cout<<tmp1<<","<<tmp2<<"\n";
        if (!tmp1 && tmp2) {
            return mid;
        } else if (tmp1 && tmp2) {  // ��һ������汾��midǰ
            right = mid - 1;
        } else if (!tmp1 && !tmp2) {  // ��һ������汾��mid��
            left = mid + 1;
        }
        return firstBadVersion(right);
    }
};

/*
����
*/
class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int left = 1, right = n;
        unsigned int mid;
        while (left < right) {
            mid = (left + right) / 2;
            if (isBadVersion(mid)) { // ��һ������汾Ϊmid����midǰ
                right = mid;
            } else { // ��һ������汾��mid��
                left = mid + 1;
            }
        }
        return left;
    }
};