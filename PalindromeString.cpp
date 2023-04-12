
#include<iostream>
#include<String.h>
#include<bits/stdc++.h>
using namespace std;

 bool isPalindrome(string s) {
    int i=0;
    int start ,end;
	  int l = s.length() - 1;
    for(int i=0;i<l;i++){
        	start=s[i];
		}
		for(int j=l;j>0;j--){
			end=s[j];
		}
		if(start==end){
			return true;
		}
		else{
			return false;
		}
}
int main(){
	string s="racecarr";
	bool b=isPalindrome(s);
	if(b==1){
		cout<<s<<" is a palindrom string.";
	}
	else{
		cout<<s<<" is not a palindrom string.";
	}
}
