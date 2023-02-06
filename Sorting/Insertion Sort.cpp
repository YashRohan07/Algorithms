#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int No_Of_swap=0, comp=0, temp=0;

    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;

    cout<<"Enter Elements for the array : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        if(arr[j] < temp)
        {
            temp++;
        }

        comp++;  // n-1

        while(arr[j] > temp   &&   j >= 0)
        {
            arr[j+1] = arr[j];
            j--; // j=i-1

            No_Of_swap++;
            comp++;

        }
        arr[j+1] = temp;
    }


    cout<<"No Of Swap: "<< No_Of_swap<<endl;
    cout<<"NO Of Comparison: "<<comp-temp<<endl;

     cout<<"Sorted Array : ";
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }


    getch();
}
