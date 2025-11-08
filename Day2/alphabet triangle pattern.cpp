//Pattern printing
/*
a
b b
c c c
d d d d
e e e e e
*/
#include<iostream>
using namespace std;
int main(){
	int row,col;
	int count=1;
	for(row=1;row<=5;row++){
		char name='a'+col-1;
		for(col=1;col<=row;col++){
			cout<<name<<" ";
		}
		cout<<endl;
	}
}
