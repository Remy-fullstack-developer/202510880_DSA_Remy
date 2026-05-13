#include<iostream>
using namespace std;
int main(){
	
 long keyNumber=798613795;	
 int phoneNumber[3];
 int i=0;
 //filling numbers
 do{
 	cout<<"enter your phone number:"<<endl;
 	cin>>phoneNumber[i];
 	i=i+1;
 	
 }
 
 while(i<3);
 
 //linear number
 
 for(int i=0; i<3; i++){
 
 	if(phoneNumber[i]==keyNumber){
 		
 		cout<<"Remy number found"<<endl;
 		
 		break;
	 }
 }
	
	return 0;
}
