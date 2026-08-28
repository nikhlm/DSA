#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s="nikhilchoudhary";
string t="houdharynikhil";
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t) cout<<"True";
else cout <<"False";
return 0;
}