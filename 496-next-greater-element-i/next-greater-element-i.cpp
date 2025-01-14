class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++) {
            stack<int> stack;
            int j = nums2.size() - 1;
            while (j >= 0 && nums2[j] != nums1[i]) {
                while (!stack.empty() && stack.top() <= nums2[j]) {
                    stack.pop();
                }
                stack.push(nums2[j]);
                j--;
            }
            while (j >= 0) {
                while (!stack.empty() && stack.top() <= nums2[j]) {
                    stack.pop();
                }
                if (!stack.empty()) {
                    nge[i] = stack.top();
                    break;
                }
                j--;
            }
        }
        return nge;
    }
};
