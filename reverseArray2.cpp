#include<iostream>
using namespace std;

int main()
{
       
        int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};   
    
        int n = sizeof(array) / sizeof(int);
      // without extra space 

        int start = 0, end = n-1;

        while(start < end){
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;

            start++;
            end--;
        }

        for(int i = 0; i<n; i++){
            cout<<array[i]<<" ";
        }


       

    return 0;
}