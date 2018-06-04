#include <iostream>

using namespace std;
int nElems = 10;
int a[10] = {7, 3, 8, 1, 2, 5, 4, 6, 9, 0};


void selectionSort();
void swap(int one, int two);
void insertionSort(int beginPositie);
void printArray();

int main()
{
    insertionSort(3);

    return 0;
}

void insertionSort(int beginPositie)
{
    int in, out;
    for(out=nElems - 1; out>=(-1 + beginPositie); out--) // out is dividing line
    {
        cout << out << ":  ";
        printArray();
        long temp = a[out]; // remove marked item
        in = out; // start shifts at out
        while(in < nElems - 1 && a[in+1] <= temp) // until one is smaller,
        {
            a[in] = a[in+1]; // shift item to right
            ++in; // go left one position
        }
    a[in] = temp; // insert marked item
    } // end for
} // end insertionSort()



void printArray(){
    for(int i = 0; i < nElems; i++){
        cout << a[i];
    }
    cout  << endl;
}
//-------------------------------
/*
void insertionSort()
{
    int in, out;
    for(out=start; out<nElems; out++)
    {
        long temp = a[out];
        in = out;
        while(in>start && a[in-1] >= temp)
        {
            a[in] = a[in-1];
            --in;
        }
        a[in] = temp;
    }
}*/

void selectionSort()
{
    int out, in, max;
    for(out=0; out<nElems-1; out++) // outer loop
    {
        max = out; // minimum
        for(in=out+1; in<nElems; in++)
            if(a[in] > a[max] )
                max = in;
            swap(out, max);

    }
}
//--------------------------------------------------------------
void swap(int one, int two)
{
    long temp = a[one];
    a[one] = a[two];
    a[two] = temp;
}
