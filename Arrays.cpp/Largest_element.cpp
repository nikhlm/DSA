#include<iostream>//Brute force is to sort the array but TC will be 
//O(NlogN) then so we used optimal approach due to TC Decreased to O(N)
using namespace std;

int main(){
int arr[]={3,2,1,5,2};
int max=arr[0];
for(int i=1;i<5;i++){
if(max < arr[i]){
max=arr[i];
}
}
cout<<max;
return 0;
} 