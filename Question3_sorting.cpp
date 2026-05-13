#include<iostream>

using namespace std;

int main(){

    long numbers[8] = {109, 99, 23, 45, 23, 2, 5, 1};
    
  

    cout << "Numbers before sorting:" << endl;
    for(int i = 0; i < 8; i++){
        cout << numbers[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8 - i - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                int temp = numbers[j];      
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    cout<<"================================="<<endl;
   

    cout << "Numbers after sorting:" << endl;
    for(int i = 0; i < 8; i++){             
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
