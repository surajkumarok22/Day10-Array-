#include<iostream>
using namespace std;

int main()
{
       
        int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};   
    
        int length = sizeof(array) / sizeof(int);
        int key = 10;
        for(int i = 0; i<length; i++){
            if(key == array[i]){
               cout<<"index no = "<<i<<endl;
            }
        }
    return 0;
}