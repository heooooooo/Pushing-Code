#include <iostream>
#include <vector>

using namespace std;

int theLastSurvivor(int n, int k) { 
    if (n == 1){
        return 0; 
    }
    else {
        return (theLastSurvivor(n - 1, k) + k) % n; 
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    
    vector <string> players;
    string input;
    for (int i = 0; i < n; i++){
        getline(cin, input);
        players.push_back(input);
    }
   cout << players[theLastSurvivor(n, k + 1) + 1];
}