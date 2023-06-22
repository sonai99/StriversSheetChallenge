class Queue
{
    // Using Array
    int *arr;
    int qFront;
    int qRear;
    int size;

public:
    Queue()
    {
        // Implement the Constructor
        size = 10001;
        arr = new int[size];
        qFront = qRear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        return qFront == qRear;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (qRear == size)
            return;
        arr[qRear] = data;
        qRear++;
        // because we enqeue from the back
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (qFront == qRear)
            return -1;
        else
        {
            int dequeued = arr[qFront]; // because queue if FIFO so the first elelemt will be dequeud
            arr[qFront] = -1;
            qFront++;
            if (qFront == qRear)
                qFront = qRear = 0;
            return dequeued;
        }
    }

    int front()
    {
        // Implement the front() function
        if (qFront == qRear)
            return -1;
        return arr[qFront];
    }
};