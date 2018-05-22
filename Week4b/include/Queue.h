#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

#include <String>

class Queue
{
    public:
        Queue();
        virtual ~Queue();
        void insert(string j);
        string remove();
        string peekFront();
        int isEmpty();
        int isFull();
        int size();
        int getMaxSize();

    protected:

    private:
        int maxSize = 50;
        string queArray[100];
        int front;
        int rear;
        int numberItems;


};

#endif // QUEUE_H
