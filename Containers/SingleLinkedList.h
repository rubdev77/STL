#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

#include <iostream>

template <typename T>
class Node
{
    public:
    Node* next;
    T data;
    Node(T d) : next(nullptr), data(d) {}
};

template <typename T>
class List
{
    private:
    Node<T>* head;
    public:
    List();

    void push_front(const T& d);
    void pop_front();
    void push_back(const T& d);
    void pop_back();
    void Print();
};

template <typename T>
List<T>::List() : head(nullptr) {}

template <typename T>
void List<T>::push_front(const T& d)
{
    Node<T>* newNode = new Node<T>(d);
    newNode->next = head;
    head = newNode;
}

template <typename T>
void List<T>::pop_front()
{
    if(head==nullptr) return;
    Node<T>* temp = head->next;
    delete head;
    head = temp;
}

template <typename T>
void List<T>::push_back(const T& d)
{
    Node<T>* newNode = new Node<T>(d);
    if(head==nullptr)
    {
        head = newNode;
        return;
    }
    Node<T>* temp = head;
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

template <typename T>
void List<T>::pop_back()
{
    if(head==nullptr) return;
    if(head->next==nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node<T>* temp = head;
    while(temp->next->next!=nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

template <typename T>
void List<T>::Print()
{
    Node<T>* temp = head;
    while(temp!=nullptr)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

#endif
