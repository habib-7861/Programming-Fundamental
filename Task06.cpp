#include <iostream>
using namespace std;
main(){
string name;
int M_marks;
int I_marks;
int E_marks;
float p_m;
float p_i;
float p_e;
float w_m;
float w_i;
float w_e;
float aggrigate;
cout <<"Enter matric marks: ";
cin >>M_marks;
cout <<"Enter intermediate marks: ";
cin >>I_marks;
cout <<"Enter Ecat marks: ";
cin >>E_marks;
p_m = M_marks*100/1100;
p_i = I_marks*100/550;
p_e = E_marks*100/400;
w_m = p_m*10/100;
w_i = p_i*40/100;
w_e = p_e*50/100;
aggrigate = w_m + w_i + w_e;
cout <<"The aggrigate is: "<<aggrigate; 
}