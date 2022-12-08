#include<iostream>
#include"Stack/stack.h"

int main(){
    stack<int> st;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int Val;
        std::cin>>Val;
        st.push(Val);
    }
    while(!st.empty()){
        std::cout<<st.top()<<' ';
        st.pop();
    }
    std::cout<<'\n'<<st.size()<<'\n';
    return 0;
}