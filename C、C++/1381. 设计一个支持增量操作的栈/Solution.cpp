/*
执行用时:68 ms, 在所有 C++ 提交中击败了43.45%的用户
内存消耗:18.5 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class CustomStack {
private:
    int len;
    int maxS;
    int *nums;
public:
    CustomStack(int maxSize) {
        nums = new int[maxSize];
        len = 0;
        maxS = maxSize;
    }
    
    void push(int x) {
        if (len != maxS) {
            nums[len] = x;
            len++;
        }
    }
    
    int pop() {
        if (len == 0)
            return -1;
        //nums[len-1] = 0;
        len--;
        return nums[len];
    }
    
    void increment(int k, int val) {
        for (int i=0; i<len && i<k; i++) {
            nums[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */