class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size() - 1;
        int area=0;
        int mini=0;
        while(left<right){
            mini=min(heights[left],heights[right]);
            area=max(area,mini*(right-left));
            if(heights[left]<=heights[right]){
                left++;
            }else{
                right--;
            }
        }return area;
    }
};
