#include<bits/stdc++.h>
using namespace std;

void stockSpanNaive(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int span = 1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j] < arr[i])
                span++;
            else
                break;
        }
        cout << span <<endl;
    }
}

int main()
{
    int arr[] = {13,15,12,14,16,8,6,4,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    stockSpanNaive(arr,n);
    return 0;
}
