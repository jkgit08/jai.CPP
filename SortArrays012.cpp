#include<iostream.h>
#include<conio.h>

void SortArray( arr[] , n ){
   int i=0 , countzero=0 ,countone=0 , counttwo=0 ;  
    while ( i < n ){  
        if(arr[i] == 0 ){  
            countzero = countzero + 1 ;  
        }  
        else if(arr[i] == 1 ){  
            countone = countone + 1 ;  
        }  
        else{  
            counttwo = counttwo + 2 ;  
        }  
        i = i + 1 ;  
    }  
    for(i=0; i<countzero; i++){  
        arr[i]= 0 ;  
    }  
    for(i=countzero ;i<countzero+countone ;i++){  
        arr[i]= 1 ;  
    } 
    for(i=countzero+countone ;i<n; i++){  
        arr[i]= 2 ;  
    }  
}
void main(){
   clrscr();
   int arr[]={1,2,0,1,0,2,1,0,2};
   int n=9;
   SortArray(arr,n);
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
   getch();
}

//output - [ 0 0 0 1 1 1 2 2 2 ]
