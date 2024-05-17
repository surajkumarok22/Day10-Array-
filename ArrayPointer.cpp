#include<iostream>
using namespace std;

int main()
{
       
   int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12};
   int *ptr1 = arr;

   cout<<"ptr1 = "<<ptr1<<endl;

   int *ptr2 = ptr1 + 3;

    cout<<"ptr2 = "<<ptr2<<endl;

    cout<<"(ptr1 == ptr2) "<<(ptr1 == ptr2)<<endl; // true for 1 and for false 0


    return 0;
}