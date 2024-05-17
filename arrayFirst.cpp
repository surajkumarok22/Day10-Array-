#include<iostream>
using namespace std;

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
          for(int i = 0; i<length; i++){
            cout<<array[i]<<" ";
        }

    return 0;
}