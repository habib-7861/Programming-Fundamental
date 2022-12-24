#include <iostream>
using namespace std;
main(){
float ini_vel;
float accel;
float time;
float final_vel;
float total;
float fin_vel;
cout <<"Enter initial velocity: ";
cin >>ini_vel;
cout <<"Enter acceleration: ";
cin >>accel;
cout <<"Enter time: ";
cin >>time;
total = accel*time;
fin_vel = total+ini_vel;
cout <<"final value is: "<<fin_vel;
}
