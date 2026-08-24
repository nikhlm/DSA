#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[100] = {2, 4, 6}; // First array
    int size1 = 3;

    int arr2[100] = {8, 10, 12, 14}; // Second array
    int size2 = 4;
    int merged[200];
    int mergedSize=0;
    for(int i=0;i<size1;i++){
    merged[mergedSize]=arr1[i];
    mergedSize++;
    }
    for(int i=0;i<size2;i++){
    merged[mergedSize]=arr2[i];
    mergedSize++;
    }
    // Print the merged array
    for(int i=0 ; i<mergedSize ; i++){
        cout<<merged[i]<<" ";
    }

    return 0;
}