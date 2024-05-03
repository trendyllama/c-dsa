#include <iostream>


template <typename T>
class DynamicArray
{

public:
    int size;
    int capacity;
    T *array;


    DynamicArray(int init_capacity)
    {
        size = 0;
        capacity = init_capacity;
        array = new T[capacity];
    }

    ~DynamicArray()
    {
        delete array;
    }

    void add(T element)
    {
        if (size <= capacity) {
            //add to the array before incrementing size so array is zero indexed
            array[size] = element;
            size++;
            
        } else {

            T oldCapacity = capacity;
            capacity*=2;
            //allocate new capacity to the heap
            int *new_array =  new T[capacity];

            //copy old contents into new array
            for (int i = 0; i < oldCapacity; i++)
            {
                new_array[i] = array[i];
            }

            delete array;

            array = new_array;

            array[size] = element;
            size++;
            
        }
        
    }

    void pop()
    {
        size--;

    }

    void remove(T element, int currentIndex = 0)
    {
        if (currentIndex > size)
        {
            return;
        }
        
        if (array[currentIndex] == element)
        {
            for (int i = currentIndex; i < size; i++)
            {
                array[i] = array[i + 1];
            }

            return;
            
        }

        remove(element, currentIndex + 1);
        
    }

};

int main()
{
    DynamicArray<int> myArray = DynamicArray<int>(5);

    myArray.add(10);
    myArray.add(87);
    myArray.add(45);
    myArray.add(32);
    myArray.add(24);
    myArray.add(21);

    myArray.remove(32);

    for (int i = 0; i < myArray.size; i++)
    {
        std::cout << myArray.array[i] << std::endl;
    }
    
    return 0;
}