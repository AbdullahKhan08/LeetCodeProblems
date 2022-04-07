

// Final value of variable after performing operations

#include <bits/stdc++.h>

using namespace std;
int main(){

int res = 0;
int n;
cin>>n;
string operations[n];
		for(int i = 0; i < n; i++){
            cin >> operations[i];
			(operations[i][1] == '+') ? res++ : res--;
		}
		cout<< endl << res;
	}
