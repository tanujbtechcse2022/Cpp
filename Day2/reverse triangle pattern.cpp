//Pattern printing
/*
* * * * *
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;
int main(){
	int row,col;
	int count=1;
	for(row=1;row<=5;row++){
		char name='a'+col-1;
		for(col=1;col<=5-row+1;col++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
