
#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
    
        int n=sentences.size();
        int maxi=INT_MIN;
        //traverse the vector of string 
        for(int i=0;i<n;i++){
            string x=sentences[i];
            int cnt=0;
            for(int j=0;j<x.length();j++){
              //count the spaces
                if(x[j]==' '){
                    cnt++;
                }
            }
           //set the maximum
            maxi=max(maxi,cnt+1);
        }
        return maxi;
    }
};