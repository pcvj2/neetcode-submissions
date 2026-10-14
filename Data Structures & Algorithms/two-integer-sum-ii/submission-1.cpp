class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left = 0;
        int right = numbers.size() - 1;

        vector<int> sum;


        while (numbers[left] + numbers[right] != target) {

            if (numbers[left] + numbers[right] > target) {
                right--;
            }

            if (numbers[left] + numbers[right] < target) {
                left++;
            }
        }

        sum.push_back(left+1);
        sum.push_back(right+1);

    return sum;

    }
};
