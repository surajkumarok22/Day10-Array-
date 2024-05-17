#include<iostream>
using namespace std;

int main()
{
       
        int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};   
    
        int length = sizeof(array) / sizeof(int);
      // by extra space 
        int temp[length]; 
        int lastIndx = length-1;
        for(int i = 0; i<length; i++){
            temp[i] = array[lastIndx];
            lastIndx--;
        }

         for(int i = 0; i<length; i++){
           cout<<temp[i]<<" ";
        }

    return 0;
}