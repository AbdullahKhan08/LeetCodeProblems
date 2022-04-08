#include <bits/stdc++.h>

using namespace std;

char lower(char c)
{
    return 'a' + (c - 'A');
}

int main()
{

    
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = lower(s[i]);
        }

        cout << s << endl;
    

    return 0;
}