#include<bits/stdc++.h>
using namespace std;
// ************************Notes***********************************
// unstable algorithm
// Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion. This process is repeated for the remaining unsorted portion of the list until the entire list is sorted. One variation of selection sort is called “Bidirectional selection sort” that goes through the list of elements by alternating between the smallest and largest element, this way the algorithm can be faster in some cases.

// The algorithm maintains two subarrays in a given array.

// The subarray which already sorted. 
// The remaining subarray was unsorted.
// In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the beginning of unsorted subarray. 

// After every iteration sorted subarray size increase by one and unsorted subarray size decrease by one.

// After N (size of array) iteration we will get sorted array.
void SelectionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
    swap(arr[i],arr[minIndex]);
    }
}
void printarr(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr={1,3,2,5,4};
    SelectionSort(arr);
    printarr(arr);
    return 0;
}