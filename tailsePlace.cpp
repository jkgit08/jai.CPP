#include<iostream>
using namespace std;

int placetails(int n,int m){
	if(n==m){
		return 2;
	}
	if(n<m){
		return 1;
	}
	//vertical place
	int row=placetails(n-m,m);
	
	//horizonetal place
	int col=placetails(n-1,m);
	return row+col;
}
int main(){
	int n=4;
	int m=2;
	int t=placetails(n,m);
	cout<<t;
	return 0;
}

  //output --5
