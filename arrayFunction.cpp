#include<iostream>
using namespace std;

void printArr(int arr[], int n){
      for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}

int main()
{
      int n;
      cout<<"enter the length of an array ";
      cin>>n;

        int array[n];
    
        int length = sizeof(array) / sizeof(int);
        cout<<length<<endl;

        for(int i = 0; i<length; i++){
            cin>>array[i];
        }

        printArr(array, length);
        

    return 0;
}