class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int maxA = 0;
        int i = 0;
        int j=len-1;
        while (i < j) {
            if (height[i] <= height[j]) {
                int CA = height[i] * abs(i - j);
                if (CA > maxA) {
                    maxA = CA;
                }
                i++;
            } else {
                int CA = height[j] * abs(i - j);
                if (CA > maxA) {
                    maxA = CA;
                }
                j--;
            }
            
        }
        return maxA;
    }
};