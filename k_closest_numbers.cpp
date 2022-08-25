// Given an input array and intgers k and x where k represent the numbers we have to return and x represent that close to that number we have to return numbers
//ip=[5,6,7,8,9]
// k=3,x=7
// op=6,7,8
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void k_closest(vector<int>vect,int k,int x,vector<int>& res){
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<vect.size();i++){
        pq.push({abs(vect[i]-x),vect[i]});
        if(pq.size()>k)pq.pop();
    }
    while(!pq.empty()){
        res.push_back(pq.top().second);
        pq.pop();
    }
}
int main(){
    int n,k,x;
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
    cout<<"Enter x: ";
    cin>>x;
    k_closest(vect,k,x,res);
    for(int i:res)
    {
        cout<<i<<" ";
    }
}