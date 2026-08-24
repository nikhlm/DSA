  #include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[100] = {4, 5, 3, 10, 12, 18}; // Initial array
                     // Current size of the array

    int newPosition = 5; // Index where you want to insert the new element
    int newElement = 7; // Element to be inserted
int currentSize=6;
    // Shift elements to make space for the new elemen
    for(int i=currentSize;i>newPosition;i-- ){
    arr[i]=arr[i-1];
    }
    
    arr[newPosition]= newElement;
    currentSize++;
    for(int i=0;i<currentSize;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}