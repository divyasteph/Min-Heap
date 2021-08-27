#ifndef MINHEAP_H
#define MINHEAP_H

class MinHeap
{
    public:
        /** Default constructor */
        MinHeap();
        void Build_Heap(int arr[],int value);
        void Min_Heapify(int arr[], int value,int root);
        void Print(int arr[], int value);
        int ExtractMin(int arr[], int heapsize);

        /** Default destructor */
        virtual ~MinHeap();

    protected:

    private:
};

class Sorter
{
     public:
        /** Default constructor */
        Sorter();
        void Sort(int arr[], int heapsize);

        /** Default destructor */
        virtual ~Sorter();
    protected:

    private:

        //MinHeap sorting;
        //int i;

};


#endif // MINHEAP_H

