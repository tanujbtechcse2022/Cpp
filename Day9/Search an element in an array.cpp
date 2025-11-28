#include<iostream>
using namespace std;
int main(){
	int arr[6]={10,20,13,42,3,5};
	int x;
	cin>>x;
	int index=-1;
	for(int i=0;i<=5;i++){
		if(arr[i]==x){
			index=i;
			break;
		}
	}
	cout<<"The number present at index "<<index;
}
