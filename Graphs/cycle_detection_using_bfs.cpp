#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int>adj[] , int u , int v){
   
   adj[u].push_back(v);
   adj[v].push_back(u);



}

void printGraph(vector<int>adj[] , int V){      //V is number of node
   
   for(int i=1 ;i<=V ;i++){
     
     cout<<"Adjacency list of vertex "<<i<<" : ";
     cout<<"head";
     for(auto x: adj[i]){
         cout<<" -> "<<x;

     }
     cout<<endl<<endl;



   }
}

bool checkForCycle(int node , int parent , vector<int>adj[] , vector<int>&vis){

    vis[node]=1;

    for(auto it:adj[node]){
        if(!vis[it]){
            if(checkForCycle(it , node , adj , vis)){
                return true;
            }
        }
        else if(it!=parent){
            return true;
        }
    }

    return false;
}



bool isCycle(vector<int>adj[] , int n){

    vector<int>vis(n+1 , 0);

    for(int j=1 ;j<=n ;j++){
        
        if(!vis[j]){
            if(checkForCycle(j ,  -1 , adj , vis)){
                return true;
            }
        }


    }
    return false;

}



int main()
{



   int n , m;
   int u , v;
   cout<<"Enter number of nodes : ";
   cin>>n;
   
   vector<int>adj[n+1];

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


    cout<<isCycle(adj , n);
  





}
