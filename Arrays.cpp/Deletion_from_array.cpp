#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[100] = {2, 4, 6, 8, 10}; // Initial array
    int size = 5; // Current size of the array

    int positionToDelete = 2; // Index of the element to delete

    for(int i=positionToDelete;i<size-1;i++){
    arr[i]=arr[i+1];
    }
    

    size--;
    

    // Print the updated array
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}