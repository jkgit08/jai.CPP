#include<iostream.h>
#include<conio.h>
                         // Write a file in c++
void main(){
  clrscr();
  ofstream out("newf.txt");
  char a[50];
  for(int i=65;i<90;i++){
     out<<arr[i]<<" ";
  }
  out.close();
  cout<<"file write sucessful...";
  getch();
}
