bool canPlaceFlowers(int flowerbed[], int n, int k) {
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (flowerbed[i] == 0) {
            bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyRight = (i == n - 1) || (flowerbed[i + 1] == 0);
            
            if (emptyLeft && emptyRight) {
                flowerbed[i] = 1;
                count++;
            }
        }

        if (count >= k) {
            return true;
        }
    }
    
    return false;
}

