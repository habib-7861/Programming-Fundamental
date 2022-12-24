#include <iostream>
using namespace std;
main(){
float size_pounds;
float bag_cost;
float area_sqarefit;
float cost_pounds;
float cost_areasqarefit;
cout <<"Enter size of the bag: ";
cin >>size_pounds;
cout <<"Enter bag cost: ";
cin >>bag_cost;
cout <<"Enter area per square fool: ";
cin >>area_sqarefit;
cost_pounds = bag_cost/size_pounds;
cout <<"The cost per pound is: "<<cost_pounds<<endl;
cost_areasqarefit = bag_cost/area_sqarefit;
cout <<"The cost area per square fool: "<<cost_areasqarefit;
}