#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        size=0;
    }
    void insert(int valu){
        // step 1: valu insert karo end me
        size=size+1;
        int index=size;
        arr[index]=valu;

        // step 2: is valu ko right index pe place karo
        while(index>1){
            int parentIndex=index/2;
            if(arr[index]> arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index=parentIndex;
            }
            else{
                break;
            }
        }
    }
    void Mydelete(){
        // Step 1:Replace the first element to last element Because of First element are delete
        arr[1]=arr[size];
        size--;
        // Step 2:Set karo First Element in Heap to right position
        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;
            int largest=index;

            if(left<size && arr[largest]<arr[left]){
                largest=left;
            }
            if(right<size && arr[largest]<arr[right]){
                largest=right;
            }
            if(largest==index){
                break;
            }
            else{
                swap(arr[index],arr[largest]);
                index=largest;
            }
        }
    }

    
};
int main()
{
    Heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=45;
    h.size=5;

    cout << "printing the heap " << endl;
    for(int i=0; i<=h.size; i++) {
            cout << h.arr[i] << " ";
    }cout << endl;
    h.insert(110);
    h.Mydelete();
    // h.Mydelete();
    cout << "printing the heap " << endl;
    for(int i=0; i<=h.size; i++) {
            cout << h.arr[i] << " ";
    }cout << endl;

    return 0;
}