
#include <iostream>

using namespace std;


int linearSearch(int arr[], int size, int x) {
	int rec;

	size--;

	if (size >= 0) {
		if (arr[size] == x)
			return size;
		else
			rec = linearSearch(arr, size, x);
	}
	else
		return -1;

	return rec;
}

int main() {
	
	
	
	int n;
	
	cout<<"Input number of elements in the array : ";
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n;i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		
	}
	cout<<endl;
	int x ;
	cout<<"Enter element to search : ";
	cin>>x;
	
	int index;

	index = linearSearch(arr, n, x);

	if (index != -1)
		cout << "Element " << x << " is present at index " << index+1 << endl;
	else
		cout << "Element " << x << " is not present" << endl;

	return 0;
}



