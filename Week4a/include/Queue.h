#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    public:
        Queue();
        virtual ~Queue();
        void insert(char j);
        char remove();
        char peekFront();
        int isEmpty();
        int isFull();
        int size();

    protected:

    private:
        int maxSize = 20;
        char queArray[20];
        int front;
        int rear;
        int numberItems;

};

#endif // QUEUE_H
