class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0;
        
        // Loop through every plot
        for (int i = 0; i < flowerbed.size(); ++i) {
        
            // Check if the current plot is empty and its neighbors are also empty
            if (flowerbed[i] == 0 && 
                (i == 0 || flowerbed[i-1] == 0) && 
                (i == flowerbed.size() - 1 || flowerbed[i+1] == 0)) {
                
                // We can plant a flower here
                planted++;
                
                if (planted >= n){
                    return true;
                }
         
                // "Jump by 2" logic. The for-loop already does i++,
                // so we add one more to skip the next plot.
                i++; 
            }
        }
        
        // After checking all plots, return true if we planted enough flowers.
        return planted >= n;        
    }
};