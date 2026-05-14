#include<iostream>
using namespace std;

int main(){
string namecorrectorder=("anne");

string reversed = "";

for(int i = namecorrectorder.length() - 1; i>=0;i--){

    reversed += namecorrectorder[i];
}
cout<<"reversed:"<<reversed<<endl;

return 0;

}
