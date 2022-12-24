#include <iostream>
using namespace std;
main(){
string movie_name;
int adult_price;
int child_price;
int adults;
int childs;
int charity;
int t_adult_price;
int t_child_price;
int total_amount;
int charity_amount;
int amount_remaining;
cout <<"Enter movie name: ";
cin >>movie_name;
cout <<"Enter adult ticket price: ";
cin >>adult_price;
cout <<"Enter child ticket price: ";
cin >>child_price;
cout <<"Enter adults: ";
cin >>adults;
cout <<"Enter childs: ";
cin >>childs;
cout <<"Enter charity: ";
cin >>charity;
t_adult_price = adult_price*adults;
cout <<"Total adult price is: "<<t_adult_price<<endl;
t_child_price = child_price*childs;
cout <<"Total child price is: "<<t_child_price<<endl;
total_amount = t_adult_price+t_child_price;
cout <<"Total amount is: "<<total_amount<<endl;
charity_amount = total_amount*charity/100;
cout <<"The charity amount is: "<<charity_amount<<endl;
amount_remaining = total_amount - charity_amount;
cout <<"Remaining amount is: "<<amount_remaining;
}