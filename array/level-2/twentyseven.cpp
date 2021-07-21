/*Implement two stacks in an array
Difficulty Level : Easy
Last Updated : 09 Mar, 2021
Create a data structure twoStacks that represents two stacks. Implementation of twoStacks should use only one array, i.e., both stacks should use the same array for storing elements. Following functions must be supported by twoStacks.
push1(int x) –> pushes x to first stack 
push2(int x) –> pushes x to second stack
pop1() –> pops an element from first stack and return the popped element 
pop2() –> pops an element from second stack and return the popped element
Implementation of twoStack should be space efficient.*/
#include <bits/stdc++.h>

using namespace std;

class twostacks{
    int *arr;
    int size;
    int top1,top2;
    public:
    twostacks(int n){
        arr=new int[n];
        size=n;
        top1=0;
        top2=n-1;
    }
    
    void insert1(int a){
        if(top1<top2-1){
            arr[top1]=a;
            top1++;
        }
        else{
            cout<<"array overflow :("<<endl;
        }
    }
    
    void insert2(int a){
        if(top1<top2){
            arr[top2]=a;
            top2++;
        }
        else{
            cout<<"Array overflow :(("<<endl;
        }
    }
    
    void pop1(){
        if(top1>=0){
            cout<<"The poped element from the first stack is "<<top1<<endl;
            top1++;
        }
        else{
            cout<<"Stack underflow :("<<endl;
        }
    }
    
    void pop2(){
        if(top2<size){
            cout<<"The poped element from the second stack is "<<top2<<endl;
            top2--;
        }
        else{
            cout<<"Stack underflow :("<<endl;
        }
    }
    
};

int main()
{
    twostacks t(6);
    t.insert1(1);
    t.insert1(5);
    t.insert2(2);
    t.insert2(4);
    t.insert2(3);
    t.pop1();
    t.pop2();
    t.pop1();
}
