//#include "/home/dvya/Documents/MinHeap/src/MinHeap.cpp"
#include "/home/dvya/Documents/MinHeap/include/MinHeap.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"\n_________MINHEAP__________\n";


    MinHeap* heap= new MinHeap();
    Sorter* heapsort= new Sorter();
    int arr[]= {1, 2, 16, 19, 11};
    int heapsize= sizeof(arr)/ sizeof(arr[0]);
    cout << "\nThe values in the array:\n";
    heap->Print(arr,heapsize);

    heap->Build_Heap(arr,heapsize);

    cout << "\nThe Min_Heap: \n";
    heap->Print(arr, heapsize);
    heapsort->Sort(arr, heapsize);
    heap->ExtractMin(arr, heapsize);


return 0;
}

