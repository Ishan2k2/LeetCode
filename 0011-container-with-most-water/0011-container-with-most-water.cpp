class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1; 
        int MaxVol = 0; 

        while (i < j) {
            int width = j - i;
            int currHeight = min(height[i], height[j]);
            int currArea = width * currHeight;
            MaxVol = max(MaxVol, currArea);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return MaxVol; 
    }
};
