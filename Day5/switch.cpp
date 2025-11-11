#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"Enter the number(1,2): ";
	cin>>i;
	
	switch(i){
		case 1:
			cout<<"This is case 1";
			break;
		
		case 2:
			cout<<"This is case 2";
			break;
			
		default:
			cout<<"You didn't select the given numbers";
	}
}
