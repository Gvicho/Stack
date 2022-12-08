#include<iostream>
#include"Stack/stack.h" // In this case stack.h is saved in Stack folder, if u save all three files together thant remove "Stack/" 

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
