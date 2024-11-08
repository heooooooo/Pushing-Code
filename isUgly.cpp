bool isUgly(int n){
    int prime;
    
    int i = 2;
    
    while (n > 1){
        if (n % i == 0){
            prime = i;
            n /= prime;
            if (prime == 2 || prime == 3 || prime == 5){
                return true;
            }
        }
        else{
            i++;
        }
    }
    return false;
}