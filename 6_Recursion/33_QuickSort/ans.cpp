#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    // step1:Choose Pivot Element
    int pivotIndex=s;
    int pivotElement=arr[s];

    // step2:Find right position for pivot element and place it there
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    // Loop se bahar ate hi right index of pivot mil gai than set pivot 
    int rightIndex=s+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;//set right pivotIndex

    // step3:pivotElement ke left me chote and right me bade 
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }

        // 2 case ho sakte hai
        // A -> found the elements to swap
        // B -> no need to swap
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    // partion logic return pivotIndex
    int p=partition(arr,s,e);

    // reqursive calls
    // Pivot element -> left
    quickSort(arr,s,p-1);
    // Pivot element -> right
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[]={2,2,2,3,4,1,1,1,1,1,1,1,5};
    int n=13;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}