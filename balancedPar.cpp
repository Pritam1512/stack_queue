#include<bits/stdc++.h>
using namespace std;

bool checkPar(string str)
{
    stack <char> s;
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
            i++;
        }
        else if(str[i] == ')')
        {
            if(s.top() != '(')
                return false;
            i++;
            s.pop();
        }
         else if(str[i] == ']')
        {
            if(s.top() != '[')
                return false;
            i++;
            s.pop();
        }
         else if(str[i] == '}')
        {
            if(s.top() != '{')
                return false;
            i++;
            s.pop();
        }

    }
    if(!s.empty())
        return false;
    else
        return true;
   /* while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }*/
}

int main()
{

    string str;
    cin >> str;

    cout << checkPar(str);
    return 0;
}
