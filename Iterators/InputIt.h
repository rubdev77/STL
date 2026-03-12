#ifndef INPUTIT_H
#define INPUTIT_H

template <typename T>
class InputIt
{
    private:
    const T* ptr;

    public:
    InputIt() : ptr(nullptr) { }
    InputIt(const T* ptr) : ptr(ptr) { }

    InputIt(const InputIt & other);
    InputIt& operator=(const InputIt & other);

    const T& operator*() const;
    const T* operator->() const;

    InputIt& operator++();
    InputIt operator++(int);

    bool operator==(const InputIt& other) const;
    bool operator!=(const InputIt& other) const;
};


template <typename T>
InputIt<T>::InputIt(const InputIt<T>& other)
{
    this -> ptr = other.ptr;
}

template <typename T>
InputIt<T>& InputIt<T>::operator=(const InputIt<T>& other)
{
    if(this != &other)
    {
        this -> ptr = other.ptr;
    }

    return *this;
}

template <typename T>
const T& InputIt<T>::operator*() const
{
    return *ptr;
}

template <typename T>
const T* InputIt<T>::operator->() const
{
    return ptr;
}

template <typename T>
InputIt<T>& InputIt<T>::operator++()
{
    ptr++;
    return *this;
}

template <typename T>
InputIt<T> InputIt<T>::operator++(int)
{
    InputIt<T> temp = *this;
    ptr++;
    return temp;    
}

template <typename T>
bool InputIt<T>::operator==(const InputIt<T>& other) const
{
    return this->ptr == other.ptr;
} 

template <typename T>
bool InputIt<T>::operator!=(const InputIt<T>& other) const
{
    return this->ptr != other.ptr;
} 

#endif