#include <iostream>
using namespace std;
main(){
int number;
int mod_1;
int after_mod1;
int mod_2;
int after_mod2;
int mod_3;
int after_mod3;
int mod_4; 
int after_mod4;
int sum;
cout <<"Enter number: ";
cin >>number;
mod_1 = number%10;
cout <<"The first modulus is: "<<mod_1<<endl;
after_mod1 = number/10;
cout <<"Ter integer after 1st modulus is: "<<after_mod1<<endl;
mod_2 = after_mod1%10;
cout <<"The 2nd modulus is: "<<mod_2<<endl;
after_mod2 = after_mod1/10;
cout <<"Ter integer after 2nd modulus is: "<<after_mod2<<endl;
mod_3 = after_mod2%10;
cout <<"The 3rd modulus is: "<<mod_3<<endl;
after_mod3 = after_mod2/10;
cout <<"The integer after 3rd modulus is: "<<after_mod3<<endl;
mod_4 = after_mod3%10;
cout <<"The 4th modulus is: "<<mod_4<<endl;
after_mod4 = after_mod3/10;
cout <<"The integer after 3rd modulus is: "<<after_mod4<<endl;
sum = mod_1 + mod_2 + mod_3 + mod_4;
cout <<"The sum of the integers is: "<<sum<<endl;
}