#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
                string ans="";
        sort(s.begin(),s.end());
       map<char,int>map;
        vector<pair<int,char>>vp;
       
        for(int i=0;i<s.size();i++)
            map[s[i]]++;
        for(auto& it:map){
            vp.emplace_back(it.second,it.first);
        }
           sort(vp.begin(),vp.end());
        for (int j=0;j<vp.size();j++){
            for(int i=0;i<vp[j].first;i++){
                ans.push_back(vp[j].second);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
};

/*
#include <bits/stdc++.h>
using namespace std;

     bool comp(pair<int,int>a,pair<int,int>b){
         if(a.second<b.second)
         return false;
         if(a.second==b.second)
             return a.first<b.first;
        }
    
    void sort(map<int,int>m){
        vector<pair<int,int>>v;
         for(auto &it:m){
             //cout<<it.first<<" ";
             v.push_back(it);
         }
         sort(v.begin(),v.end(),comp);
          for(auto it:v){
              for(int i=0;i<it.second;i++){
                  cout<<it.first<<" ";
              }
          }
          cout<<endl;
        }
 
     void sortByFrequency(vector<int>v){ 
          map<int,int>m;
         vector<int>ans;
         for(int i=0;i<v.size();i++){
             m[v[i]]++;
         }
         sort(m);
         for(auto &it:m){
             for(int i=0;i<it.second;i++){
                 ans.push_back(it.first);
             }
         }
        
     }
     

int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	sortByFrequency(v);
    }
}
*/
int main( ){
string s;
cin>>s;
Solution ob;
cout<<ob.frequencySort(s);
return 0;
}