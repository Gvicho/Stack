#include<cstddef>
#include"stack.h" //it is recommended to save stack.h and stack.cpp files in the same folder

template<typename T> stack<T>::stack(){
    stack<T>::node<T>  *Temporary_node;
    Temporary_node = new stack<T>::node<T>;
    Temporary_node->last=NULL;
    Temporary_node->next=NULL;
    Top=Temporary_node;
}
template<typename T> stack<T>::~stack(){
    stack<T>::node<T>  *Temporary_node;
    Temporary_node=Top->last;
    if(Temporary_node==NULL)return;
    while(Temporary_node!=NULL){
        delete Top;
        Top=Temporary_node;
        Temporary_node=Top->last;
    }
    delete Top;
}
template<typename T>int stack<T>::size(){
    return stack_size;
}
template<typename T>void stack<T>::push(T element){
    Top->Value=element;
    stack<T>::node<T>  *Temporary_node;
    Temporary_node = new stack<T>::node<T>;
    Temporary_node->last=Top;
    Temporary_node->next=NULL;
    Top->next = Temporary_node;
    Top=Temporary_node;
    stack_size++;
}
template<typename T>void stack<T>::pop(){
    if(Top->last==NULL)return;
    stack<T>::node<T>  *Temporary_node;
    Temporary_node = Top->last;
    if(Temporary_node->last==NULL){
        Top->last=NULL;
        delete Temporary_node;
    }else{
        Top->last=Temporary_node->last;
        (Temporary_node->last)->next=Top;
        delete Temporary_node;
    }
    stack_size--;
}
template<typename T>bool stack<T>::empty(){
    return stack_size==0;
}

template<typename T>T stack<T>::top(){
    return (Top->last)->Value;
}
//we don't have to call this function
//it just protects my template class from linking errors
void TemporaryFunction ()
{
    stack<int> st;
    st.push(5);
    st.pop();
    st.size();
    st.empty();
    st.top();
}
