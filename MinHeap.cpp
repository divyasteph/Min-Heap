#include "MinHeap.h"
#include<iostream>


using namespace std;

MinHeap::MinHeap()
{
    //ctor

}

// Function to maintain the min-heap property

void MinHeap::Min_Heapify(int arr[], int heapsize, int root)
{

    int smallest = root;             // Initialize smallest node as root
    int left = 2 * root + 1;        // Returns the left child node
    int right = 2 * root + 2;       // Returns the right child node

    // If left child is smaller than root
    if (left < heapsize && arr[left] < arr[smallest])
        smallest = left;

    // If right child is smaller
    if (right < heapsize && arr[right] < arr[smallest])
        smallest = right;

    // If smallest is not root
    if (smallest != root)
    {
        swap(arr[root], arr[smallest]);
        Min_Heapify(arr, heapsize, smallest);
    }
}

// Function to build a Min-Heap

void MinHeap::Build_Heap(int arr[], int heapsize)
{

    for (int i = heapsize/2 -1; i >= 0; i--)
        Min_Heapify(arr, heapsize, i);

}

// Function to extract minimum value in the heap

int MinHeap::ExtractMin(int arr[], int heapsize)
{
    if(heapsize==0)
    {
        cout<< "\nHeap is Empty\n";
        return -1;
    }

    else
    {
        Build_Heap(arr, heapsize);
        cout << "\nThe mininum value in the heap is " << arr[0];
        cout<< "\n";

        int root=arr[0];
        arr[0]=arr[heapsize-1];
        heapsize=heapsize-1;

        Min_Heapify(arr, heapsize, 0);

        cout<< "\nThe heap after extracting the minimum value:\n";
        Print(arr, heapsize);
        return root;

    }
}

// Function to print all the values in the heap

void MinHeap::Print(int arr[], int heapsize)
{

    for (int i = 0; i < heapsize; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


MinHeap::~MinHeap()
{
    //dtor
}


Sorter::Sorter()
{
    //ctor
}

// Function to sort the heap

void Sorter::Sort(int arr[], int heapsize)   //sorting function, since we have min heap , sorting is done in descending order
{

   MinHeap sorting;
   sorting.Build_Heap(arr, heapsize);

   for(int i=heapsize- 1; i> 0; i--)
   {
      swap(arr[0], arr[i]);                        // Swaping the current root node to end node
      sorting.Min_Heapify(arr, i, 0);

   }
   cout<< "\nSorted Heap:\n";
   sorting.Print(arr, heapsize);
}
Sorter::~Sorter()
{
    //dtor
}

