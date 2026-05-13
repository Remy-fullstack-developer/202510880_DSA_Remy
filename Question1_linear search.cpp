#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string name[100];
    int age[100];
    string key;
    bool found = false;
    
    cout<<"==================================="<<endl;
    cout<<" ==== linear search algorithm ==="<<endl;
    cout<<"==================================="<<endl;

    cout << "Enter number of family members: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> name[i];
        cout << "Enter age of member " << i + 1 << ": ";
        cin >> age[i];
    }

  
    cout << "Enter key name to search: ";
    cin >> key;
    
    cout<<"===================================="<<endl;

    for (int i = 0; i < n; i++) {
        if (name[i] == key) {
            cout << name[i] << " was found and is aged " << age[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
