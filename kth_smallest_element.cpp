//Given an integer array in which numbers given we have to find the kth smallest number among them;
//eg:   ip=[7,10,4,3,2,0,15]  k=3
// op=3
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int k_th_smallest(vector<int>v,int k){
    priority_queue<int>pq;
    for(int i:v){
        pq.push(i);
        if(pq.size()>k)pq.pop();
    }
    return pq.top();
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
    cout<<"kth smallest number is: "<<k_th_smallest(vect,k);
    
}