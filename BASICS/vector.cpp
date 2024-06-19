#include<bits/stdc++.h>
using namespace std;

void vecex(){
    vector<int> vx(4,20);
    // vector<int>::iterator it=vx.begin();  //vx.end() use it-- //vx.rend() use it++ //vx.rbegin() use it--
    // it++;
    // cout<<*(it)<<" ";
    //cout<<vx.back()<<" ";  

    //General Printing
    // for(vector<int>::iterator it=vx.begin();it !=vx.end();it++){
    //     cout<<*(it)<<endl;
    // }

    //Printing Vector using auto
    // for(auto it=vx.begin();it !=vx.end();it++){
    //     cout<<*(it)<<endl;
    // }

    //Printing Using auto shortcut
    // for(auto it:vx){
    //     cout<<it<<" ";
    // }

    //Erasing from vector
    vx.erase(vx.begin()+1);
    for(auto it:vx){
        cout<<it<<" ";
    }
}
void explainstack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);                 //O(1) constant time for stack
    st.push(4);                 //LIFO
    st.push(5);
    cout<<st.top();

}

void explainqueue(){        
    queue<int> q;       
    q.push(1);                  //FIFO
    q.push(2);                  
    q.push(3);                  
    q.push(4);                  
    q.emplace(5);   

    q.back() += 5;
    cout<<q.back();  //prints 10
    q.front();       //prints 1
    q.pop();         //pops first element             


}
void explainpriorityqueue(){        
    priority_queue<int> pq;       
    pq.push(1);                  //FIFO
    pq.push(2);                  
    pq.push(3);                  
    pq.push(4);                  
    pq.emplace(5);   

    cout<<pq.top();

    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq;      
    cout<<pq.top();
 


}

int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // cout<<v[0]<<endl;
    // cout<<v[1];m 

    //vecex();
    explainstack();
    return 0;
}
 

void stackg(){
    stack<int> g;
    g.push(1);
}

