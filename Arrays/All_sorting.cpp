#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[] , int n){         //bubble sort         

    for(int i= 0;i<n-1 ;i++){

        for(int j=0 ;j<n-1-i ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void insertionSort(int arr[] , int n){      //insertionsort

    for(int i=1 ;i<n ;i++){
        int j=i-1;
        int temp = arr[i];

        while(arr[j]>temp and j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void selectionSort(int arr[] , int n){      //selectionsort

    for(int i=0 ;i<n-1 ;i++){
        int min= i;

       for(int j =i+1 ;j<n ;j++){
           if(arr[j]<arr[min]){
               min=j;
           }
       } 
       if(i!=min){
           swap(arr[i] , arr[min]);
       }
    }
}
int partition(int arr[] , int l , int m){

   
    int j= l-1;
    int pivot = arr[m];

    for(int i=l ;i<m ;i++){
        if(arr[i]<pivot){
            j++;
            swap(arr[j] ,arr[i]);
        }
    }
    swap(arr[j+1] , arr[m]);
    return j+1;
}

void quicksort(int arr[] , int l , int m){              //quicksort

    if(l<m){
        int pi = partition(arr   , l , m);

        quicksort(arr , l , pi-1);
        quicksort(arr ,  pi+1 , m);
    }

}

void merge(int arr[] , int l  , int mid , int m){

    int n1 = mid-l+1;
    int n2 = m-mid;

    int a1[n1];
    int a2[n2];

    for(int i=0 ;i<n1 ;i++){
        a1[i]= arr[l+i];
    }
    for(int i=0 ;i<n2 ;i++){
        a2[i]=arr[mid+1+i];
    }

    int i =0;
    int j =0;
    int k=l;

    while(i<n1 and  j<n2){

        if(a1[i]<a2[j]){
            arr[k++]=a1[i];
            i++;

        }
       else{
           arr[k++]=a2[j];
           j++;
       }
    }

    while(i<n1){
        arr[k++]=a1[i];
        i++;
    }
    while(j<n2){
        arr[k++]=a2[j];
        j++;
    }



}


void mergesort(int arr[] , int l , int m){          //mergesort

    if(l<m){

        int mid = (l+m)/2;
        
        mergesort(arr , l , mid);
        mergesort(arr , mid+1 , m);
        merge(arr , l , mid , m);
    }

}



void countingsort(int arr[] , int n){           //countsort

    int m = arr[0];
    for(int i=1 ;i<n ;i++){
        m = max(arr[i] , m);
    }

    int count[m+1]={0};

    for(int i =0; i<n ;i++){
        count[arr[i]]++;

    }

    for(int i=1 ;i<m+1 ;i++){
        count[i]=  count[i]+count[i-1];

    }

    int sorted[n];

    for(int i=n-1 ;i>=0 ;i--){
        sorted[--count[arr[i]]] = arr[i];
    }

    for(int i= 0;i<n ;i++){
        arr[i]= sorted[i];
    }

}


int maxElement(int arr[] , int n){
    int m = arr[0];

    for(int i=1 ; i<n ;i++){
        m = max(arr[i] , m);

    }
    return m;
}



void countRadixSort(int arr[] , int n , int div){       

    int count[10]={0};
    int sorted[n];

    for(int i= 0;i<n ;i++){
        count[(arr[i]/div)%10]++;

    }
    for(int i=1 ;i<10 ;i++){
        count[i]=count[i]+count[i-1];

    }

    for(int i=n-1 ; i>=0 ;i--){
        sorted[ --count[(arr[i]/div)%10]] = arr[i];
    }

    for(int i=0 ; i<n ;i++){
        arr[i]= sorted[i];
    }
}



void radixSort(int arr[] , int n){          //radixsort

    int m = maxElement(arr , n);
    for(int i=1 ; m/i>0 ; i*=10){
        countRadixSort(arr , n , i);
    }

}


void bucketsort(int arr[] , int n){         //bucketsort

    vector<int>b[n];

    for(int i= 0; i<n ; i++){
        int bi = n*arr[i];
         b[bi].push_back(arr[i]);
    }

    int index =0 ;
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;i<b[i].size();j++){
            arr[index++]= b[i][j];
        }
    }
   
}


void printArray(int arr[] , int n){     //print array 
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

  
    radixSort(arr ,  n);
    printArray(arr , n);

    
 }
