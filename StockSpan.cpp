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
void stockSpanEff(int arr[],int n)
{
    stack<int> s;
    s.push(0);
    cout << 1 << " ";

    for(int i=1;i<n;i++)
    {
        while(s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        if(s.empty()) cout << i+1 << " ";
        else cout << i-s.top() << " ";
        s.push(i);
    }
}
int main()
{
    int arr[] = {13,15,12,14,16,8,6,4,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    stockSpanNaive(arr,n);
    return 0;
}
