#include<iostream.h>
#include<conio.h>
int maxnum(int arr[],int n){
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(arr[j]==arr[j+1]){
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
     }
   }
  return arr[j];
};
void main(){
    clrscr();
    int arr[]={2,3,1,23,4,5,33};
    int n=7;
    int j=maxnum(arr,n);
    cout<<"maximus number is:"<<j;
    getch(); 
}
