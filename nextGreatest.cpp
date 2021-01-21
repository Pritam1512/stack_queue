#include<bits/stdc++.h>
using namespace std;

void printNextGreatestN(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       int maxE = arr[i];
       for(int j=i+1;j<n;j++)
       {
           if(arr[j] > maxE){
            maxE = arr[j];
            break;
           }
       }
       if(maxE == arr[i])
        cout << -1 << " ";
       else
        cout << maxE << " ";

   }
   cout << -1 << endl;

}
void printNextGreatestE(int arr[],int n)
{
    stack<int> s;
    s.push(arr[n-1]);
    cout << -1 << " ";

    for(int i=n-2;i>=0;i--)
    {
        while(s.empty() == false && s.top() <arr[i] )
        {
            s.pop();
        }
        if(s.empty())cout << -1 << " ";
        else cout << s.top() << " ";
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {4,7,1,10,34,12,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNextGreatestN(arr,n);
    cout << "" <<endl;
    printNextGreatestE(arr,n);
    return 0;
}
