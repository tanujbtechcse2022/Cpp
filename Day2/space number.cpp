//number triangle reverse
/*
    1
   22
  333
 4444
55555
*/
#include<iostream>
using namespace std;
int main(){
	int row,col;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=5-row;col++){//space printing
			cout<<"  ";
		}
		for(col=1;col<=row;col++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
}
