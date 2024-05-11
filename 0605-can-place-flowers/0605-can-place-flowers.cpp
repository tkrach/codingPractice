class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowerCount = 0;
        //Initial For loop to interate throught he flowerbed
        for (int i = 0; i < flowerbed.size(); i++) {
            //Edge Case Beginning
            if (i == 0 && flowerbed[i] == 0 && (i + 1 == flowerbed.size() || flowerbed[i+1] == 0)){
                //Increment count and place a flower
                flowerCount++;
                flowerbed[i] = 1;
            }
            //Edge Case End
            else if (i == flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i-1] == 0){
                //Increment count and place a flower
                flowerCount++;
                flowerbed[i] = 1;
            }
            //Normal Case
            else if ((i != 0 && i != flowerbed.size() - 1) && flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                //Iterate and place flower
                flowerCount++;
                flowerbed[i] = 1;
            }
        }
        return flowerCount >= n;
    }
};