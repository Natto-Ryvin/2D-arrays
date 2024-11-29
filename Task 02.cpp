//Program to take user input and display it as a 3x4 2D array
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"Enter a number: ";
            cin>>arr[i][j];
        }
    }
    cout<<"The array is: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
