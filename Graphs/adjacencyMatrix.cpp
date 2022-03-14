#include<bits/stdc++.h>
using namespace std;

int main(){
   int n , m;
   int u , v;
   cout<<"Enter number of nodes : ";
   cin>>n;

   cout<<"Enter number of edges : ";
   cin>>m;

   int adj[n+1][n+1]={0};


  
   cout<<endl;
   for(int i=0 ;i<m ;i++){
       cout<<"For edge "<<i+1<<" -->"<<endl;
       cout<<"Enter starting node : ";
       cin>>u;
       cout<<"Enter ending node : ";
       cin>>v;
       cout<<endl;
       
       adj[u][v]=1;
       adj[v][u]=1;        //remove this for directed graph


   }

    for(int i=1 ; i<n+1 ;i++){
       for(int j=1; j<n+1 ;j++){
           cout<<adj[i][j]<<" ";
       }
       cout<<endl;
   }




}
