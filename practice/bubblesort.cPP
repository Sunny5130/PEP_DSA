#include<iostream>
using namespace std; 
 void bubbleSort(int arr[], int n) {
        for(int i=0;i<=n-2;i++){
            int mini=i;
            for(int j=i;j<=n-1;j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
            }
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
        cout<<"Bubble Sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

void insertionSort(int arr[],int n){
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j<0 &&arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
        cout<<"Insertion sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Original array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bubbleSort(arr,n);
    insertionSort(arr,n);
}