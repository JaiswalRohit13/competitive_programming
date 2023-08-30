#include <bits\stdc++.h>
using namespace std;

int main(){

    //biwise and or not and xor
    int a = 17, b=9;

    cout<< "a & b = "<< (a&b) <<endl;
    cout<< "a | b = "<< (a|b) <<endl;
    cout<< "~a = "<< (~a) <<endl;
    cout<< "a ^ b = "<< (a^b) <<endl;

    //left and right shift operator - bitwise operation
    //padding by 0 in positive number - compiler dependent padding in negative number

    a=10,b=20;
    cout<<"a<<2 = " << (a<<2) << endl; //left shift = *2 *2 (multiplication stands true for small numbers only)
    cout<<"b>>2 = " << (b>>3) << endl; //right shift = /2/2/2 (divison stands true for small numbers only

}