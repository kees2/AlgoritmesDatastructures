#include <iostream>

using namespace std;

int a[10] = {7, 3, 8, 1, 2, 5, 4, 6, 9, 0};
int start = 2;
int nElems = 10;
void selectionSort();
void swap(int one, int two);
void insertionSort();

int main()
{
    insertionSort();
    for(int i = 0; i < 10; i++){
        cout << a[i] << endl;
    }
    return 0;
}


void insertionSort()
{
    int in, out;
    for(out=start; out<nElems; out++) // out is dividing line
    {
        long temp = a[out]; // remove marked item
        in = out; // start shifts at out
        while(in>start && a[in-1] >= temp) // until one is smaller,
        {
            a[in] = a[in-1]; // shift item to right
            --in; // go left one position
        }
        a[in] = temp; // insert marked item
    } // end for
} // end insertionSort()





void selectionSort()
{
    int out, in, max;
    int nElems = 10;
    for(out=0; out<nElems-1; out++) // outer loop
    {
        max = out; // minimum
        for(in=out+1; in<nElems; in++) // inner loop
            if(a[in] > a[max] ) // if min greater,
                max = in; // we have a new min
            swap(out, max); // swap them

    }
}
//--------------------------------------------------------------
void swap(int one, int two)
{
    long temp = a[one];
    a[one] = a[two];
    a[two] = temp;
}
