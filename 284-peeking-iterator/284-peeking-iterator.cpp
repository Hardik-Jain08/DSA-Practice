/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    stack<int> st;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
        int i = 0;
        int n = nums.size();
        for(int idx = n - 1; idx >= 0; idx--){
            st.push(nums[idx]);
        }
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return st.top();
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
        int k = st.top();
        st.pop();
	    return k;
	}
	
	bool hasNext() const {
	    return !st.empty();
	}
};