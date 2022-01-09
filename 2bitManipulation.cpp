//#include<bits/stdc++.h>
#include <iostream>
#include <bitset>
using namespace std;

int main()
{

  /* binary addition :
    1 1 0
  + 1 1 1 // 1*2^1+1*2^1=2^1+2^1=2^2=2^2(1+0)=1*2^2+0*2^1=next place carry and 0 for 10th place
  1 1 0 1   */
  /*  binary subtraction:
    1 1 0 0  12
  - 0 0 1 1  3
    this is done by finding first the minus 5 or inverse(2's complement) of 5 and then adding it
    to the first number
    its the 2's complement which we have to find
    1 1 1 1 1 1 0 0 is 1's complement since there are 32 bit therefore left 24 bits
    also get negated
    now for 2's complement we have to add 1 to it
    1 1 1 1 1 1 0 1
    this is 2's complement aka inverse 
    now adding it to the first term
    0 0 0 0 1 1 0 0
    1 1 1 1 1 1 0 1
    0 0 0 0 1 0 0 1 is the required answer which is 9
    
    the carry at the end will be get discarded  */

  /* 
    bitwise operators
    operator   property
    /&          outputs 1 only when both the inputs are 1
    |          putputs 0 only if both the inputs were 0
    /^ xor      outputs 1 when both the inputs are different from one another
    /~ inverse, negation or 1's complement just outputs opposite of the input
    >> right shift operator   shifts the bits of the number to right as specified, 12>>2 outputs 0011 or 3
    << left shift operator shifts the bits of the number to the left 3<<2 outputs 1100 or 12 ,12<<2 outputs 48
     */
  cout << "\n"
       << (12 << 2) << "\n" //!multiplying the number with 2^number of  place bits shifted i.e. 48
       << (45 >> 1);        //!i.e.  so the right shift is equivalent to dividing by 2^number of place bit shifted
  /* 
    ?Q.now by using bit masking we can find a number is odd or even without using modulus operator
     ?which is very costly to computaional power
     ?iska ek or method bhi h by algebra using remainder theorem but i think that is the actual algo
     */
  /*solution: if a binary number wants to be odd then it must have its unit place as 1
  verify it by either trial or obviously for every odd number 1 will be provided by unit place
  noe while & with 1 the number outputs 1 if it is odd and 0 if it is even */

  for (int i = 0; i < 5; i++)
  {
    if (i & 1 == 1)
    {
      cout << "\n the number " << i << " is odd : ";
    }
    else //!pata ni kyun accept nahi kar raha h ye if(i&1==0) ko
    {
      cout << "\nthe number " << i << " is even : ";
    }

    cout << "\n " << (i & 1);
  }

  //!Q.  next one is also very important swaping the number without using the third variable
  // first is by using xor operator and second by algebra.
  int a = 5, b = 7;
  a = a ^ b; //xor is (a+b).(!(a.b ))
  b = a ^ b; //acha to phir xor ka ye seen h jo kar raha h sab kuch ki
  a = a ^ b; //b^b=0 ;a^0=a;b^0=b;
  cout << "\n"
       << a << "\n"
       << b;
  a = 5, b = 7; //redeclaration is also an error ha ha
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "\n"
       << a << "\n"
       << b;
  cout << "\nwah dono ka logic ek dam same h yes : ";
  bitset<8> b1(b); //to get the binary representaion of a decimal number.
  cout << "\n"
       << b1;

  return 0;
}