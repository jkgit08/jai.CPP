#include<iostream.h>       //turbo c++
#include<conio.h>
 
int isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i]==t[j])
                 return 1;  
                 break;
            }
        }return 0;
}

void main(){
  clrscr();
   string s="anagram";
   string t="nagaram";
   int j=isAnagram(s,t);
   cout<<j;
  
  getch();
}

// output -true

        // second type

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    bool Anagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;  
        }
        return false;
    }

int main(){
	string s="anagram";
	string t="ganaram";
	bool a= Anagram(s,t);
	 if(a==1){
	 	cout<<"String is Anagram.";
	 }
	 else{
	 	cout<<"String is not Anagram.";
	 }
}
