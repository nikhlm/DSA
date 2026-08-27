#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
cin>>str;
int n=str.size();
if(n%2==0){

cout<<str.substr(n/2,n/2);;
}
else{
cout<<"Odd String";
}
return 0;
}