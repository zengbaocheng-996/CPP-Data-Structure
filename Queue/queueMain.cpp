#include "Queue.h"

using namespace std;

int main()
{
    class Queue q;
    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6);

    q.deQueue();

    getchar();

    return 0;
}