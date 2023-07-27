#include<bits/stdc++.h>
using namespace std;
// ************************Notes***********************************
// Insertion sort is a stable sort.
// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

// Characteristics of Insertion Sort:
// * This algorithm is one of the simplest algorithm with simple implementation
// * Basically, Insertion sort is efficient for small data values
// * Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.
void InsertionSort(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        //arr={10,1,3,5,4};
        // step A:fetch
        int valu=arr[i];//valu=arr[1]=1
        // step B:compare
        int j=i-1;//j=0
        while(j>=0){
            if(arr[j]>valu){//if(arr[0]>1)--> if(10>1) is true
                //step C:shift
                arr[j+1]=arr[j]; // arr[0+1]=arr[0]--> arr[1]=10 Ex={10,10,3,5,4};
            }
            else{
                break; //false break this is sorted like
            }
            j--;//j=-1
        }
        // step D:copy
        arr[j+1]=valu;//arr[-1+1]=1--> arr[0]=1 Ex={1,10,3,5,4};
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
    InsertionSort(arr);
    printarr(arr);
    return 0;
}