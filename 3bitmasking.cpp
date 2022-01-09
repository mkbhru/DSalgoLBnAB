//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){

 /* bit masking is a process in whicg a kind of filter made of bits is operated on the input bits to get a specific putput
  */
//?Q. get the nth bit from right in a binary number
/* first technique we get in our mind is to shift number n-1 times to the right and then and with the 1  which outputs 1 if it is 1 and 0 if it is 0
 but the efficient one is take 1 and shift n-1 left the bits then and it with the number if non zero then 1 else 0.
  */
 int num = 52;//110100
 //let say 4th bit
 unsigned int n = 3;
 auto o = (1>>(n-1));
 cout << "\no has become : "<<o;
 cout << "\no should be : "<<(1<<(n-1));
//  o >> (n -1);
 if ((num&o)==0)
 {
     cout << 0;
 }
 else
 {
     cout << 1;
 }
cout << "\nyou number is : ";
 cout << ((num & (1 << (n - 1))) >> (n - 1));
 cout <<"\n"<< pow(3, 5);
 return 0;
}


/* 
important points:
since in cpp 2^4 means xor therefore for power purpose of 2 we can use 1<<4
it will serve the same purpose , for for any other number we have to 
use pow(number , power you want to provide) by using header file math.h */
