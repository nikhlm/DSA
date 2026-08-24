#include<iostream>
#include<set>
using namespace std;
int main(){
int arr[]={1,1,2,3,3,4,5,6,5,6,6,5,6,7,4,5,68};
int n = sizeof(arr)/sizeof(arr[0]);
set<int>st;
//putting elements to set for removal of duplicats 
for(int i=0;i<n;i++){
st.insert(arr[i]);
}
//putting elements back to array
int index=0;
for(auto it:st){
arr[index]=it;
index ++;
}
for(int i=0;i<index;i++){
cout<<arr[i]<<" ";
}
return 0;
}//By using Brute force which lead to the Time Complexity Around O(N+NlogN)