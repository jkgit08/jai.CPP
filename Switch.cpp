#include<iostream.h>
#include<conio.h>
void main(){
  clrscr(); 
  int day;
  cout<<"Enter the day number :(1-7)";
  cin>>day;
  switch(day){
    case 1:cout<<"your are selected Monday";
      break;
    case 2:cout<<"your are selected Tuesday";
      break;
    case 3:cout<<"your are selected Wednesday";
      break;
    case 4:cout<<"your are selected Thursday";
      break;
    case 5:cout<<"your are selected Friday";
      break;
    case 6:cout<<"your are selected Saturday";
      break;
    case 7:cout<<"your are selected Sunday";
      break;  
    defalt :cout<<"not select day!";  
  }
  getch();
}
