#pragma once

#include<cstddef>

template<typename T>class stack{
    private:
    template<typename t>struct node
    {
        t Value;
        node<t> *next=NULL, *last=NULL;
    };
    node<T> *Top;
    int stack_size=0;
    public:
    stack();
    ~stack();
    int size();
    void push(T);
    void pop();
    bool empty();
    T top();
};