#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

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

    protected:

    private:
        int maxSize = 20;
        string queArray[20];
        int front;
        int rear;
        int numberItems;

};

#endif // QUEUE_H
