#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
cin>>str;
int n=str.size();
if(n%2==0){
reverse(str.begin(),str.begin()+(n/2));
cout<<str;
}
else{
cout<<"Odd String";
}
return 0;
}