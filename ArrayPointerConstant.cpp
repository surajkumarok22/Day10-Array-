#include<iostream>
using namespace std;

int main()
{
       int x = 10;
       int *ptr = &x;

       cout<<"ptr(address of x) = "<<ptr<<endl;
       cout<<"*ptr(value of x) = "<<*ptr<<endl;

        int y = 25;
        ptr = &y;

       cout<<"ptr(address of y) = "<<ptr<<endl;
       cout<<"*ptr(value of y) = "<<*ptr<<endl;
       
      // pointer Arithmetic  

      ptr++;
      cout<<"ptr++ = "<<ptr<<endl;
      ptr--;
      cout<<"ptr-- = "<<ptr<<endl;

       ++ptr;
      cout<<"++ptr = "<<ptr<<endl;
      --ptr;
      cout<<"--ptr = "<<ptr<<endl;

    // Addition and subtraction

    ptr+3;
    cout<<"ptr + 3 "<<ptr<<endl;


    // Addition and subtraction of two pointers

      int a = 10;
      int *ptr1 = &a;

      int b = 20;
      int *ptr2 = &b;

      // ptr1 + ptr2; invalid operation

      cout<<"  ptr1 - ptr2  =  "<<  ptr1 - ptr2<<endl; // both should be same type
     return 0;
}