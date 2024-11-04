
// Name: Ganesh Prasad Jaishi


#include<iostream>
#include"frame.h"
using namespace std;
int main(){
   Frame  f1, f2(3), f3(6,4), f4(-2,3);
   Frame vframes;
   f1.draw();
   cout << endl;
   f2.draw();
   cout << endl;
   f3.draw();
   cout << endl;
   f4.draw();
   cout << endl;
   cout << "Varing sizes:"<<endl;
   for(int w = 4; w < 8; w++){
      vframes.set(w,w-4);   
      vframes.draw();
      cout << endl;
   }
}
