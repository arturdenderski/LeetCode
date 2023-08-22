class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area = 0;
        
        vector<int> left(heights.size());
        vector<int> right(heights.size());

        stack<pair<int, int>> smaller;

        for(int i = 0; i < heights.size(); ++i)
        {
            while(!smaller.empty() && smaller.top().first >= heights[i])
            {
                smaller.pop();
            }

            if(!smaller.empty())
            {
                left[i] = smaller.top().second + 1;
            }
            else
            {
                left[i] = 0;
            }
               
            smaller.push({heights[i], i});
        }

        smaller = {};

        for(int i = heights.size() - 1; i >= 0; --i)
        {
            while(!smaller.empty() && smaller.top().first >= heights[i])
            {
                smaller.pop();
            }

            if(!smaller.empty())
            {
                right[i] = smaller.top().second - 1;
            }
            else
            {
                right[i] = heights.size() - 1;
            }
            
            smaller.push({heights[i], i});
        }
        
        for(int i = 0; i < heights.size(); ++i)
        {
            area = max(area, heights[i] * (right[i] - left[i] + 1));
        }

        return area;
    }
};