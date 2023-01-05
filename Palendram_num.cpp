#include<iostream>
using namespace std;          //check palendram number

int palendram(int a){
	int s=0,l;
	int tmp=a;
	while(0<a){
		l=a%10;
		s=s*10+l;
		a=a/10;
	}                  //print -> s (revers number)  
	if(tmp==s){
		cout<<"this is a Palendram number";
	}
	else{
		cout<<"not a palendram number";
	}
	return 0;
}   
int main(){
  	int a;
  	cout<<"Enter the number :";
  	cin>>a;
  	palendram(a);
  }
