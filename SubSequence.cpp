#include<iostream>
using namespace std;
int subcequence( string str,string newstr,int n){
	if(n==str.length()){
		cout<<newstr<<endl;
		return 0;
	}
	char curchar=str[n];
	// add to
	subcequence(str,newstr+curchar,n+1);
	
	//not add to
	subcequence(str,newstr,n+1);
}
main(){
	string str="abc";
	subcequence(str,"",0);
}

//output- abc,ab,ac,a,bc,b,c, _ 
