class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> kidList;
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        for (int kid : candies) {
            if (kid + extraCandies >= maxCandies)
                kidList.push_back(true);
            else
                kidList.push_back(false);
        }
        return kidList;
    }
};