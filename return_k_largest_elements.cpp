//Given an array and an integer k we have to return k largest integers
//ip=[7,10,4,3,20,15]
//op=20,15,10
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct compare{
        bool operator ()(int &a,int &b){
                    if(a>b)return true;
                    else{
                        return false;
                    }
        }
};
void k_largest(vector<int>inp,int k,vector<int>&res){
    priority_queue<int,vector<int>,compare>pq;
    for(int i=0;i<inp.size();i++){
        pq.push(inp[i]);
        if(pq.size()>k)pq.pop();
    }
    while(!pq.empty()){
        res.push_back(pq.top());
        pq.pop();
    }
}
int main(){
    int n,k;
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    vector<int>vect(n,0);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }
    vector<int>res;
    k_largest(vect,k,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}