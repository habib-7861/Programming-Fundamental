#include <iostream>
using namespace std;
main(){
string name;
float sub1_marks;
float sub2_marks;
float sub3_marks;
float sub4_marks;
float sub5_marks;
float total_marks;
float percentage;
cout <<"Enter your name: ";
cin >>name;
cout <<"Enter sub1 marks: ";
cin >>sub1_marks;
cout <<"Enter sub2 marks: ";
cin >>sub2_marks;
cout <<"Enter sub3 marks: ";
cin >>sub3_marks;
cout <<"Enter sub4 marks: ";
cin >>sub4_marks;
cout <<"Enter sub5 marks: ";
cin >>sub5_marks;
total_marks = sub1_marks + sub2_marks + sub3_marks + sub4_marks +sub5_marks;
percentage = total_marks*100/500;
cout <<"The total percentage is: "<<percentage;
}
