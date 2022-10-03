#include <iostream>

using namespace std;

int main(){
	int x[3] = {1, 5, 4};
	int y[3] = {3, 2, 5};
	
	int i;
	for(i=0;i<3;i++){
		cout<<"Array x "<<i<<" : "<<x[i]<<endl;
	}
	cout<<"\n";
	for(i=0;i<3;i++){
		cout<<"Array y "<<i<<" : "<<y[i]<<endl;
	}
	cout<<"\n";
	for(i=0;i<3;i++){
		cout<<"Array Penjumlahan "<<i<<" : "<<x[i]+y[i]<<endl;
	}
}
