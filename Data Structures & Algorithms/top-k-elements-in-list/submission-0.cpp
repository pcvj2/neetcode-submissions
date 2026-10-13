class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> count;

        for (int num : nums)
        {
            // count frequency
            count[num]++;
        }

        // Bucket index = frequency
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto& pair : count)
        {
            int num = pair.first;
            int freq = pair.second;

            // place number in correct bucket
            buckets[freq].push_back(num);
        }

        vector<int> result;

        for (int i = buckets.size() - 1; i >= 0; i--)
        {
            for (int num : buckets[i])
            {
                result.push_back(num);

                if (result.size() == k)
                    return result;
            }
        }

        return result;
    }
};