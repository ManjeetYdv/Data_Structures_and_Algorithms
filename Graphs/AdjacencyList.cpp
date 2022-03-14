#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int>adj[] , int u , int v){
   
   adj[u].push_back(v);
   adj[v].push_back(u);



}

void printGraph(vector<int>adj[] , int V){      //V is number of node
   
   for(int i=0 ;i<V ;i++){
     
     cout<<"Adjacency list of vertex "<<i<<" : "3;
     cout<<"head";
     for(auto x: adj[i]){
         cout<<" -> "<<x;

     }
     cout<<endl<<endl;



   }

   


}

int main()
{

   //graph has zero based indexing

   int n , m;
   int u , v;
   cout<<"Enter number of nodes : ";
   cin>>n;
   
   vector<int>adj[n];

   cout<<"Enter number of edges : ";
   cin>>m;
   cout<<endl;

   for(int i=0 ;i<m ;i++){
       
       cout<<"For edge "<<i+1<<"->"<<endl;
       cout<<"Enter starting node : ";
       cin>>u;
       cout<<"Enter ending node : ";
       cin>>v;
       cout<<endl;

       addEdge(adj , u , v);

   }

   printGraph(adj , n);







}


