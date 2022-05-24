class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0, right = height.size()-1;
        
        while(left < right){
            maxarea = max(maxarea, (right-left)*min(height[left], height[right]));
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxarea;
    }
};