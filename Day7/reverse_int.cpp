#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	int ans=0,rem;
	while(a!=0){
		rem=a%10;
		a=a/10;
		if(ans>INT_MAX/10 || ans<INT_MIN/10)
		return 0;
		ans=ans*10+rem;
	}
	cout<<ans;
}
