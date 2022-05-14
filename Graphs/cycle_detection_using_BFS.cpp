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

bool checkForCycle(int i , vector<int>adj[] , vector<int>&vis){

    queue<pair<int , int>>q;
    vis[i]=1;
    q.push({i, -1});

    while(!q.empty()){

        int node = q.front().first;
        int par =q.front().second;
        q.pop();

        for(auto it:adj[node]){

            if(!vis[it]){
                q.push({it , node});
                vis[it]=1;

            }
            else if(par!=it){
                return true;
            }
        }


    }
    return false;


}

bool isCycle(vector<int>adj[] , int n){

    vector<int>vis(n+1 , 0);

    for(int i=1 ;i<=n ;i++){

        if(!vis[i]){
            if(checkForCycle(i , adj , vis)){
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

   printGraph(adj , n);

   cout<<isCycle(adj ,n);







}
