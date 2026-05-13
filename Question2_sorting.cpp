#include<iostream>

using namespace std;

int main(){

    string names[7] = {"zuck", "shayd", "emely", "amjed", "esther", "manar", "anne"};
    
 
    cout << "Names before sorting:" << endl;
    for(int i = 0; i < 7; i++){
        cout << names[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7 - i - 1; j++){
            if(names[j] > names[j + 1]){
                string temp = names[j];      
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    
    cout<<"================================="<<endl;
   

    cout << "Names after sorting:" << endl;
    for(int i = 0; i < 7; i++){             
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
