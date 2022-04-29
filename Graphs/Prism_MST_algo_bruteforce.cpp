#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int , int>> adj[] , int a , int b , int wt){

    adj[a].push_back(make_pair(b , wt));
    adj[b].push_back(make_pair(a , wt));

}

void printGraph(vector<pair<int , int>>adj[] , int n){
    
  int v , w;
  
  for(int i=0 ;i<n ;i++){

      cout<<"Node "<<i<<" makes an edge with "<<endl;
      for(auto it : adj[i]){

          v= it.first;
          w=it.second;

          cout<<"\tNode "<<v<<" with edges weight "<<w<<endl;


      }
      cout<<endl;
  }

}


void MST(vector<pair<int,int>>adj[] , int n){
    int parent[n]={-1};
    int key[n] ={INT_MAX};
    int mstSet[n] ={false};

    key[0]=0;

    for(int count=0 ; count<n-1; count++){

        int mini=INT_MAX;
        int u;

        for(int v=0 ;v<n ;v++){
            if(parent[v]==false and key[v]<mini){
                mini = key[v];
                u=v;
            }
        }
        mstSet[u]= true;

        for(auto it :adj[u]){
            int v =it.first;
            int wt = it.second;

            if(mstSet[v]==false and wt<key[v]){
                parent[v]= u;
                key[v]=wt;
            }
        }


    }

     for(int i=1 ;i<n ; i++){
        
        cout<<parent[i]<<" - "<<i<<endl;
    }

}




int main(){
    int n , m;
    cout<<"Enter number of nodes : ";
    cin>>n;
    
    vector<pair<int , int>>adj[n];

    cout<<"Enter number of edges : ";
    cin>>m;
    int a , b , wt;

    for(int i=0 ;i< m ;i++){
        cout<<"For edge "<<i<<" : "<<endl;
        cout<<"Enter starting edge : ";
        cin>>a;
        cout<<"Enter ending edge : ";
        cin>>b;
        cout<<"Enter edge weight : ";
        cin>>wt;
        cout<<endl;

        addEdge(adj ,a , b ,wt);
    }

    MST(adj , n);
    
    
    
}
