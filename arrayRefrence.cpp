#include<iostream>
using namespace std;

void printArray(int arr[]){
    arr[0] = 500;
    cout<<"array are passed as a refrence "<<arr[0]<<endl;
}

//array passing by using pointer
// above and below both  are same 

void printArrayPointer(int *array){
    int max = array[2] = 1000;
    cout<<"array are passed as a refrence using pointer "<<max<<endl;
}


int main()
{
       
        int marks[] = {100,20,30,40,50};   
        int max = marks[0];
        int length = sizeof(marks) / sizeof(int);

        for(int i = 1; i<length; i++){
            if(max < marks[i]){
                max = marks[i];
            }
        }          
         cout<<"max = "<<max<<endl;

         printArray(marks);
         printArrayPointer(marks);


    return 0;
}