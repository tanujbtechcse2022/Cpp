#include<iostream>
using namespace std;

	int BinarySearch(int arr[],int size,int key){
		int start=0,end=size-1,mid;
		while(start<=end){
			mid=start+(end-start)/2;
			if(arr[mid]==key)
			return mid;
			
			else if(arr[mid]<key)
			start = mid+1;
			
			else
			end=mid-1;
		}
		return -1;
	}
	
	int main(){
	int arr[100];
	int size;
	cout<<"Enter the size: ";
	cin>>size;
	
	cout<<"Enter the array: ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the key: ";
	cin>>key;
	
	cout<<BinarySearch(arr,size,key)<<endl;
	return 0;
}

