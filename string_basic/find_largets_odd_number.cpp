#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        for(i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0)
            break;
            else
            num.pop_back();
        }
        return num;
    }
};
int main( ){
string  num;
cin>>num;
Solution ob;
cout<<ob.largestOddNumber(num);
return 0;
}