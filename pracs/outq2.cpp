//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void fun(int n){
    if (n==0)
        return;

    {
        cout << n % 2;
        fun(n / 2);
    }
    
}
int main(){

    fun(25);
    return 0;
}