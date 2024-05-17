#include<iostream>
using namespace std;

int BinarySearch(int *arr,int n, int key){
    int srt = 0, end = n-1;

    while(srt <= end){
        int mid = (srt + end)/2;
        if(key == arr[mid] ){
            return mid; // key found;
        }
        else if(key  > arr[mid]){
           srt = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}

int main()
{
       
        int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};   
    
        int n = sizeof(array) / sizeof(int);

        cout<<" index no of key is : "<<BinarySearch(array, n ,5);
      

    return 0;
}