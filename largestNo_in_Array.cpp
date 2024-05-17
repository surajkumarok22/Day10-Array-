#include<iostream>
using namespace std;

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
    return 0;
}