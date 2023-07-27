#include<bits/stdc++.h>
using namespace std;
// **************************Notes***********************************
// Bubble sort is a stable sort algorithm, like insertion sort.
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
void BubbleSort(vector<int>& arr){
    int n=arr.size();
    bool swaped=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]) {
            swap(arr[j],arr[j+1]);
            swaped=true;
        }
        }
        if(swaped==false){
            break;
        }
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
    BubbleSort(arr);
    printarr(arr);
    return 0;
}