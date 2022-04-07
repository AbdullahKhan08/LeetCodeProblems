#include<bits/stdc++.h>
using namespace std;
int main(){

string res = "", command;

cin>>command;

for(int i = 0; i<command.size(); i++){

    if(command[i]=='G'){
        res = res + "G";
    }

    else if(command[i]=='(' and command[i+1]==')'){

        res = res + "o";
    }

      else if(command[i]=='(' and command[i+1]=='a' and command[i+2]=='l' and command[i+3]==')'){


        res = res + "al";

      }

    }



return 0;
}
