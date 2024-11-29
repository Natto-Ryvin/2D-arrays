//Program to display sum of 2D array based on user input
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],temp=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter a number: ";
            cin>>arr[i][j];
        }
    }
    for(int k=0; k<3; k++)
    {
        for(int l=0; l<3; l++)
        {
            temp = temp + arr[k][l];
        }
    }
    cout<<"\n"<<temp;
}
