//power of a number
#include<iostream>
using namespace std;
int main(){
	int num,pow;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Enter the power: ";
	cin>>pow;
	int a=num;
	for(int i=1;i<pow;i++){
		a=a*num;
	}
	cout<<a;
}
