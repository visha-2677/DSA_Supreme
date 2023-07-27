#include<bits/stdc++.h>
using namespace std;
void Heapify(int arr[], int n, int i) {
        int index = i;
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
        int largest = index;

        if(leftIndex <= n && arr[largest] < arr[leftIndex]) {
                largest = leftIndex;
        }
        if(rightIndex <= n && arr[largest] < arr[rightIndex]) {
                largest = rightIndex;
        }

        if(index != largest) {
                //left ya right child me se koi > hogya currentNode se
                swap(arr[index], arr[largest]);
                index = largest;
                Heapify(arr, n, index);
        }
}

void MergeTwoHeap(int Merge[],int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        Merge[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        Merge[n+i]=arr2[i];
    }
    
}
int main()
{
    int arr1[]={ 10, 5, 3, 2 };
    int arr2[]={12, 7, 9,20,15};
    int n=4;
    int m=5;
    int Merge[n+m];
    MergeTwoHeap(Merge,arr1,arr2,n,m);
    Heapify(Merge,n+m,1);
    for(int i=0;i<n+m;i++){
        cout<<Merge[i]<<" ";
    }

    return 0;
}