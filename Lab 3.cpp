

//Name: Ganesh Prasad Jaishi

#include <iostream>
#include <cmath>         //cmath library to perform mathematical operations. 
using namespace std;
int main(){
int h;
do{                     // Infinity loop 
double  x,y,z;             // double to store decimal number with more digits.
int ope;
cout<<" A simple calculator design to  add, substract, multiply and divide " << 
endl;
cout<<"Enter First value"<< endl;
cin>>x;
cout<<"Enter Second Value"<< endl;
cin>>y;
cout<<"Choose a number: 1)addition, 2)substraction, 3)multiplication, 4)division "<< endl;
cin >> ope;
if (ope ==1){
z= x +y;
cout<<z<<endl;
}
if  (ope ==2){
z= x-y;
cout<<z<<endl;
}
if( ope ==3){
z= x*y;
cout<<z<<endl;
}
if ( ope == 4){                     // Extra credit: If you enter 0, the program will show your input. 
if ( y==0){
cout<<" Warning! You have entered 0. Try using another number"<<endl;
}
else{
cout<<(x/y)<<endl;
}
}
if ( ope <1 || ope>4) {                    // If the input is less than 1 or greater than 4. The operation is incorrect 
cout<<"You are using wrong number"<<endl;
}
cout<<" Do you want to repeat the operaton. Please enter 1 to continue. "<<endl;
cin>>h;
}while(h!=0 || h>1);                   // loop break
return 0;
}
