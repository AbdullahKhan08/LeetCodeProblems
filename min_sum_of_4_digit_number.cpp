#include<bits/stdc++.h>

using namespace std;
int main(){
    
int num;
cin >> num;

string s;

while(num)
{
    int rem = num%10;
    num = num/10;

    s += (rem+'0');
}

sort(s.begin(), s.end());

string s1(1, s[0]);
string s2(1, s[1]);

s1 = s1 + s[2], s2 = s2 + s[3];

int num1 = stoi(s1);
int num2 = stoi(s2);

cout << num1 + num2;


    return 0;
}