class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = INT_MIN, rightMax = INT_MIN;
        int answer = 0;

        while(left <= right){
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);
            if(leftMax < rightMax) {
                answer += leftMax - height[left++];
            } else {
                answer += rightMax - height[right--];
            }
        }
        return answer;
    }
};