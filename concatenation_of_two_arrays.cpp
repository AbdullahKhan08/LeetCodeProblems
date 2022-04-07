

// concatenation of two arrays; 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int m;
        cin>>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main(){
     vector<int> getConcatenation(vector<int>& nums) ;

}