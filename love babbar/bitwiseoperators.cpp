#include <bits\stdc++.h>
using namespace std;

int main(){

    //biwise and or not and xor
    int a = 17, b=5;

    cout<< "a & b = "<< (a&b) <<endl;
    cout<< "a | b = "<< (a|b) <<endl;
    cout<< "~a = "<< (~a) <<endl;
    cout<< "a ^ b = "<< (a^b) <<endl;

    //left and right shift operator - bitwise operation
    //padding by 0 in positive number - compiler dependent padding in negative number

    a=17,b=5;
    cout<<"a<<5 = " << (a<<5) << endl; //left shift = *2 *2 (multiplication stands true for small numbers only)
    cout<<"a>>4 = " << (a>>4) << endl;
    cout<<"a>>5 = " << (a>>5) << endl;
    cout<<"a>>6 = " << (a>>6) << endl; //right shift = /2/2/2 (divison stands true for small numbers only

}