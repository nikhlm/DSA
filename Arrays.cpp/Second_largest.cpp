#include <iostream>
#include <algorithm>
using namespace std;

// Approach 1: Brute Force
// Time: O(N log N)
// Space: O(1)
void bruteApproach(int arr[], int n)
{
    sort(arr, arr + n);

    int largest = arr[n - 1];

    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] != largest)
        {
            cout << "Brute: " << arr[i] << endl;
            break;
        }
    }
}

// Approach 2: Better
// Time: O(N)
// Space: O(1)
void betterApproach(int arr[], int n)
{
    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    int secondLargest = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
    }

    cout << "Better: " << secondLargest << endl;
}

// Approach 3: Optimal
// Time: O(N)
// Space: O(1)
void optimalApproach(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Optimal: " << secondLargest << endl;
}

int main()
{
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteApproach(arr, n);
    betterApproach(arr, n);
    optimalApproach(arr, n);

    return 0;
}