#include<iostream>
using namespace std;
int main(){
	int ans=INT_MIN;
	int arr[5]={1,2,3,6,34};
	for(int i=0;i<5;i++){
		if(arr[i]>ans){
			ans=arr[i];
		}
	}
	cout<<ans<<endl;
}
