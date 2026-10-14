class Solution {
public:
    int maxArea(vector<int>& heights) {

        int size = heights.size();

        int i = 0;
        int j = size - 1;

        int biggest = 0;

        while (i < j) {

            int A = (j - i) * min(heights[i], heights[j]);

            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }

            if (A > biggest) {
                biggest = A;
            }

        }
        return biggest;
    }
};
