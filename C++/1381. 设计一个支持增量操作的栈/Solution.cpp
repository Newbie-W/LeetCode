/*
ִ����ʱ:68 ms, ������ C++ �ύ�л�����43.45%���û�
�ڴ�����:18.5 MB, ������ C++ �ύ�л�����100.00%���û�
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