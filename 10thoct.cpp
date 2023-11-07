//WAP To Draw a circle without using graphic.h file>>>>
#include<iostream>
using namespace std;
int main(){
 float h=5.0; //h and k denotes the center of the circle
 float k=5.0;
 float r=5.0;
 cout<<"\n\n";//r for radius of circle 
    for(float y=10.0;y>=0;y-=0.5){  //y axis range 0 to 10 
        for(float x=0.0;x<=10.0;x+=0.5){ //x axis rage 0 to 10
                  if( (x-h)*(x-h) + (y-k)*(y-k) == r*r){ //formula used to draw a circle 
                     cout<<"       Hi Pritima"; //if cond. true star will print
                    }else{
                        cout<<"  ";// if cond. fail space will print...
                    }
            }
         cout<<"\n";
        }
     cout<<"\n\n";
 return 0;
}

//Lets run this program whooooo hoo..!!!🎉🎉😎
//You know what i tried my best to print more stars but when i inc. the size of 0.5 to below its not working ...
//so well i really enjoyed to program this ... by using simple loop,con. fundamantals of c++ 
// THANK YOU ....😍🙏