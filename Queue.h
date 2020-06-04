
#ifndef __QUEUE_
#define __QUEUE_


namespace Q
{
    template<typename T>
    class Queue
    {
    public:
        Queue();
        ~Queue();
        void push(const T value);
        void pop();
        void Show();
        bool isEmpty();
    private:
        T * arrQueue;
        int count;

    };
}
    template<typename T>
    Q::Queue<T>::~Queue()
    {
        delete[] arrQueue;
        count = 0;
    }


    

    template<typename T>
    Q::Queue<T>::Queue()
    {
        count = 0;
       
        arrQueue = new T[5];

    }




    template<typename T>
    void Q::Queue<T>::push(const T value)
    {
      //  arrQueue = new T[1];
    if (arrQueue == NULL)
        {
            arrQueue = new T[1];
        }
        ++count;
        arrQueue[count] = value;
    }




    template<typename T>
    void Q::Queue<T>::pop()
    {
       // delete arrQueue[count];
        --count;
    }




    template<typename T>
   bool Q::Queue<T>::isEmpty()
    {
       return count == 0;
    }


   template<typename T>
   void Q::Queue<T>::Show()
   {
       for (size_t i = 1; i <= count; ++i)
       {
           std::cout << arrQueue[i] << ' '<<std::endl;
       }
   }

#endif // !__QUEUE_

