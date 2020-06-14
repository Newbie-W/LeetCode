/*
执行用时:332 ms, 在所有 C++ 提交中击败了5.29%的用户
内存消耗:20.8 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

#include <map>
#include <cstdlib>
class RandomizedSet {
private:
    map<int, int> myMap;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        myMap.clear();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (myMap.count(val) == 0) {
            myMap[val] = val;
            return true;
        } else {
            return false;
        }
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (myMap.count(val) != 0) {
            myMap.erase(val);
            return true;
        } else {
            return false;
        }
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int random = rand()%myMap.size()+1;
        int result;
        map<int, int>::iterator iter = myMap.begin();
        for (int i=0; i<random && iter!=myMap.end(); i++) {
            result = iter->first;
            iter++;
        }

        return result;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */