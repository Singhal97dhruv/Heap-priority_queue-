// Given an input array we have to return k sorted array
// eg ip=[6,5,3,2,8,10,9]
// op=[2,3,5,6,8,9,10]
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void k_sorted(vector<int>inp,vector<int>&op,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<inp.size();i++){
        pq.push(inp[i]);
        if(pq.size()>k){
            op.push_back(pq.top());
            pq.pop();
        }

    }
    while(!pq.empty()){
        op.push_back(pq.top());
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
    k_sorted(vect,res,k);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}