class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        //We probably need a triple pointer type thing here?
        int i = INT_MAX, j = INT_MAX, k = INT_MAX;
        //Lets try to fail fast, only wanna loop through once, I think
        //its definitely possible to do
        for (int num: nums) {
            if (num <= i)
                i = num;
            else if (num <= j)  
                j = num;
            else if (num > j)
                return true;
            else
                k = num;
        }
        return false;
    }
};