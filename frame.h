//Name: Ganesh Prasad jaishi


#ifndef FRAME_H
#define FRAME_H

#include<iostream>
using namespace std;
class Frame{
    private:
    int h;
    int w;
    public:
    Frame();
    Frame(int);
    Frame(int ,int );
    void set(int h, int w);
    void draw();
};
#endif
    Frame::Frame(){
        h = 3;
        w = 3;
    }
    Frame::Frame(int size){
        if(size<1){
            w=3;
            h=3;
        }
        else{
            h=size+2;
            w=size+2;
        }
    }
    Frame::Frame(int a,int b){
        if(a<1){
            w=3;
        }
        else{
            w=a+2;
        }
        if(b<1){
            h=3;
        }
        else{
            h=a+2;
        }
    }
void Frame:: set(int w, int h){
        if(w<1){
            w=3;
        }
        else{
            w=w+2;
        }
        if(h<1){
            h=3;
        }
        else{
            h=h+2;
        }
}
void Frame::draw(){
for (int i = 1; i <= h; i++)
{
for (int j = 1; j <= w; j++)
{
if (i == 1 || i == h || j == 1 || j == w)
cout << "* ";
else
cout << " ";
}
cout << endl;
}
}
