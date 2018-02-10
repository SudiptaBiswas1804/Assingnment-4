//Pragramme for bubble sorting of an array
#include <iostream>
using namespace std;

//Main function for the programme
int main() {
int i,n,in,j,temp=0,k;
int arr[n];
cout<<"enter the size of the array "<<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(i=0; i<n; i++) {                 //Taking the values of the array elements
	cin>>in;
	arr[i]=in;
	}
cout<<"the array elements are "<<endl;
for(i=0; i<n; i++){                 //Displaying the original array
cout<<arr[i]<<" ";
}
for(i=0; i<n; i++){                 //Sorting (bubble sorting) the array
	for(j=0; j<n-1; j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		
	}
	}
cout<<"\n"<<"the sorted array elements are "<<endl;             //Displaying the sorted array
for(k=0; k<n; k++){          //Controls the number of cycles of sort     
cout<<arr[k]<<" ";           //Controls the number of swapping
}
return 0;
}
