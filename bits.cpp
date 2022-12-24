#include <iostream>
using namespace std;
main(){
int mega;
int kb;
int bytes;
int bits;
int result;
kb = 1024;
bytes = 1024;
bits = 8;
cout <<"Enter megabytes: ";
cin >>mega;
result = mega*1024*1024*8;
cout <<"The result in bits is: "<<result;
}