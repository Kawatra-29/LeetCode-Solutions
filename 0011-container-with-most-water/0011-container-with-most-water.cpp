class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0, right = height.size() - 1;
        
        int area = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] * (right - left) > area) {
                    area = height[left] * (right - left);
                }
                left++;
            } else if (height[left] > height[right]) {
                if ((height[right] * (right - left)) > area) {
                    area = height[right] * (right - left);
                }
                right--;
            }
        }
        return area;
    }
};