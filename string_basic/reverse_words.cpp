#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
// string reverse(string s){
//     int i=0,j=s.size()-1;
//     while(i<j){
//         char temp;
//         temp=s[i];
//         s[i]=s[j];
//         s[j]
//     }
// }
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
         string res="",word="";
       
        if(s[s.size()-1]!=' ')
         s+=' ';
       int k=0;
        for(int i=0;i<s.size();i++){
             if(s[i]==' ' && word!=""){
                //word[k]='\0';
                reverse(word.begin(),word.end());
                res+=word;
                if(i<s.size()-1)
                res+=' ';
                word="";
             
           }
            else{
                   if(s[i]!=' '){
                        word+=s[i];
                    }
                
            }
        }
        int j=res.size()-1;
        cout<<res[j]<<endl;
       while(j>=0 && res[j]==' '){
            j--;
        }
   return res.substr(0, j + 1);
    }
};
int main( ){
 string s;
 cin>>s;
 Solution ob;
 cout<<ob. reverseWords(s);
return 0;
}