#include<iostream>
using namespace std;

int linearSearch(int *arr,int n, int key){
      for(int i = 0; i<n; i++){
            if(key == arr[i]){
                return i;
            }
        }

       return -1; 
}

int main()
{
       
        int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};   
    
        int length = sizeof(array) / sizeof(int);
        int key = 10;

        cout<<linearSearch(array, length, 10);
      
    return 0;
}