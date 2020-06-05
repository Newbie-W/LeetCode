/*
法一，push时，还是用栈的形式。而peek、pop等就需要做翻转的处理。
法二，只在push时翻转，后面就可以简单处理了
做法类似。

法一：
执行用时 :0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗 :7.3 MB, 在所有 C++ 提交中击败了100.00%的用户

法二：
执行用时 :0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗 :6.9 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

 /*法一*/
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
 
 /*法二*/
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