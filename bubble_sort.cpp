#include<iostream>

using namespace std;

int main(){

    int roll_numbers[4] = {98, 43, 65, 47};


    cout << "Array before sorting:" << endl;
    for(int i = 0; i < 4; i++){
        cout << roll_numbers[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i - 1; j++){
            if(roll_numbers[j] > roll_numbers[j + 1]){
            
                int temp = roll_numbers[j];
                roll_numbers[j] = roll_numbers[j + 1]; 
                roll_numbers[j + 1] = temp;
            }
        }
    }

    cout << "Array after sorting:" << endl;
    for(int i = 0; i < 4; i++){
        cout << roll_numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
