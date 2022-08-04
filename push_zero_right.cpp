#include<iostream>
using namespace std;

void push_zero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1;j<n; j++)
            { 
                if (arr[j] != 0)
                {
                    arr[i] = arr[j];
                    arr[j] = 0;
                    i++;
                }
            }
            break;
        }
    }
}


int main()
{

    int arr[] = {1, 0, 2, 0, 3, 0, 0};
    int n = 7;
    push_zero(arr, n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j=i; i==j; j++){
            cout <<  arr[i] << " ";
        }
    }

    return (0);
}