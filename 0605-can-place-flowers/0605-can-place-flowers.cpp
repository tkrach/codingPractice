class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowerCount = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i+1] == 0)) {
                flowerCount++;
                flowerbed[i] = 1;
            }
        }
        return flowerCount >= n;
    }
};