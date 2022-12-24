#include <iostream>
using namespace std;
main(){
int veg_kgs;
int fru_kgs;
float vegkgs_price;
float frukgs_price;
int tot_veg_price;
int tot_fru_price;
int earning;
float rupees;
cout <<"Enter vegetables in kgs: ";
cin >>veg_kgs;
cout <<"Enter fruits in kgs: ";
cin >>fru_kgs;
cout <<"Enter vegetable price per kilogram: ";
cin >>vegkgs_price;
cout <<"Enter fruits price per kgs: ";
cin >>frukgs_price;
tot_veg_price = veg_kgs*vegkgs_price;
cout <<"total vegetable price is: "<<tot_veg_price<<endl;
tot_fru_price = fru_kgs*frukgs_price;
cout <<"total fruits price is: "<<tot_fru_price<<endl;
earning = tot_veg_price + tot_fru_price;
cout <<"Earning is: "<<earning<<endl;
rupees = earning*0.5154;
cout <<"Earning in rupees: "<<rupees;

}