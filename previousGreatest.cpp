#include<bits/stdc++.h>
using namespace std;

//PREVIOUS GREATEST ELEMENT FOR EACH ELEMENT
//NAIVE APPROACH

//
void printGreatestNaive(int arr[],int n)
{
    cout << -1 << " ";
    for(int i=1;i<n;i++)
    {
        int maxE = arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j] > maxE)
            {
                maxE = arr[j];
                break;
            }
        }
        if(maxE == arr[i])
            cout << -1 << " ";
        else
            cout << maxE << " ";
    }
}

void printGreatestEff(int arr[],int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";

    for(int i=1;i<n;i++)
    {
        while(s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }

        if(s.empty())cout << -1 <<" ";
        else cout << s.top() << " ";

        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {15,10,18,12,4,6,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printGreatestNaive(arr,n);
    cout << "" <<endl;
    printGreatestEff(arr,n);
    return 0;
}
