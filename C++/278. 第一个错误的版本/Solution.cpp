/*
可以简单暴力查找，但此处不再使用了。法一法二均使用了二分法。
但因为法一方法，还不够常规+每轮两次调用api，最终改为了法二写法

法一：
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：5.8 MB, 在所有 C++ 提交中击败了88.31%的用户

法二：
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6 MB, 在所有 C++ 提交中击败了30.52%的用户
*/

/*
用例：
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
 法一
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
        } else if (tmp1 && tmp2) {  // 第一个错误版本在mid前
            right = mid - 1;
        } else if (!tmp1 && !tmp2) {  // 第一个错误版本在mid后
            left = mid + 1;
        }
        return firstBadVersion(right);
    }
};

/*
法二
*/
class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int left = 1, right = n;
        unsigned int mid;
        while (left < right) {
            mid = (left + right) / 2;
            if (isBadVersion(mid)) { // 第一个错误版本为mid或在mid前
                right = mid;
            } else { // 第一个错误版本在mid后
                left = mid + 1;
            }
        }
        return left;
    }
};