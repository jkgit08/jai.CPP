#include<iostream.h>
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
