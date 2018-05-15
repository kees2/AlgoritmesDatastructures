#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
    front = -1;
    rear = -1;
    numberItems = 0;
}

Queue::~Queue()
{
    //dtor
}

void Queue::insert(char j) // put item at rear of queue
{
    if(rear == maxSize-1) // deal with wraparound
        rear = -1;
    queArray[++rear] = j; // increment rear and insert

    numberItems++; // one more item
}

char Queue::remove() // take item from front of queue
{
    char temp = queArray[++front]; // get value and incr front
    if(front == maxSize) // deal with wraparound
        front = 0;
    numberItems--; // one less item
    return temp;
}
char Queue::peekFront() // peek at front of queue
{
    return queArray[front];
}
int Queue::isEmpty() // true if queue is empty
{
    return (numberItems==0);
}
int Queue::isFull() // true if queue is full
{
    return (numberItems==maxSize);
}
int Queue::size() // number of items in queue
{
    return numberItems;
}

