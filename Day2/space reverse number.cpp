//number triangle reverse
/*
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
	int row,col;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=5-row;col++){//space printing
			cout<<"  ";
		}
		for(col=row;col>=1;col--){
		cout<<col<<" ";
		}
		cout<<endl;
	}
}
