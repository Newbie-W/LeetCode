/*
��һ��pushʱ��������ջ����ʽ����peek��pop�Ⱦ���Ҫ����ת�Ĵ���
������ֻ��pushʱ��ת������Ϳ��Լ򵥴�����
�������ơ�

��һ��
ִ����ʱ :0 ms, ������ C++ �ύ�л�����100.00%���û�
�ڴ����� :7.3 MB, ������ C++ �ύ�л�����100.00%���û�

������
ִ����ʱ :0 ms, ������ C++ �ύ�л�����100.00%���û�
�ڴ����� :6.9 MB, ������ C++ �ύ�л�����100.00%���û�
*/

 /*��һ*/
class MyQueue {
private:
    stack<int> queue;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        queue.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int> temp;
        while(!queue.empty()) {
            temp.push(queue.top());
            queue.pop();
        }
        int result = temp.top();
        temp.pop();
        while(!temp.empty()) {
            queue.push(temp.top());
            temp.pop();
        }
        return result;
    }
    
    /** Get the front element. */
    int peek() {
        stack<int> temp;
        while(!queue.empty()) {
            temp.push(queue.top());
            queue.pop();
        }
        int result = temp.top();
        while(!temp.empty()) {
            queue.push(temp.top());
            temp.pop();
        }
        return result;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return queue.empty()?true:false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 
 /*����*/
class MyQueue {
private:
    stack<int> queue;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> temp;
        while(!queue.empty()) {
            temp.push(queue.top());
            queue.pop();
        }
        temp.push(x);
        while(!temp.empty()) {
            queue.push(temp.top());
            temp.pop();
        }
       /* queue.push(x);*/
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int result = queue.top();
        queue.pop();
        return result;
    }
    
    /** Get the front element. */
    int peek() {
        return queue.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return queue.empty()?true:false;
    }
};