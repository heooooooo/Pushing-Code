#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    cin.ignore();
    int numberOfPlayers = n;
    int alive[n], count = 1, index = 0;

    for (int i = 0; i < n; i++){
        alive[i] = 1;
    }
    
    vector <string> players;
    string input;
    for (int i = 0; i < n; i++){
        getline(cin, input);
        players.push_back(input);
    }

    while (numberOfPlayers > 1){
        if (index > n - 1){
            index = 0;
        }
        if (alive[index]){
            if (count == k + 1){
                alive[index] = 0;
                numberOfPlayers--;
                count = 1;
            }
            else{
                count++;
            }
            
        }
        index++;
    }

    for (int i = 0; i < n; i++){
        if (alive[i]){
            cout << players[i];
        }
    }
}