class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge(nums1.size(), -1); 
        unordered_map<int, int> nextGreaterMap;
        
        stack<int> stack;
        
        for (int num : nums2) {
            while (!stack.empty() && stack.top() < num) {
                nextGreaterMap[stack.top()] = num;
                stack.pop();
            }
            stack.push(num);
        }
        
        for (int i = 0; i < nums1.size(); i++) {
            if (nextGreaterMap.find(nums1[i]) != nextGreaterMap.end()) {
                nge[i] = nextGreaterMap[nums1[i]];
            }
        }
        
        return nge;
    }
};
