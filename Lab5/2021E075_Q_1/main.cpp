// K.J.M.U.G.S. Eranda Jayasinghe
// 2021E075
// EC2010
// Group B
// Lab05
// array
// I certify that the code in the method function main of this project
// is entirely my own work.
#include<iostream>
using namespace std;


void bubble_Sort(int arr[], int n){
    int i,j,k,a;
    for(i=0; i<n; i++){
        for(j = 0; j<n-1; j++){
            if( arr[j] > arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }}}
}
void print_array(int arr[],int a)
{
    cout<<"Sorted Array = ";
    for(int i=0;i<a;i++)
        cout<<arr[i]<<" ";
}

int main(){

    int arr[] = {3,2,1,10,8,6,45,22,15,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array = ";
    for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
    }
    cout<<endl;
    bubble_Sort(arr,n);
    print_array(arr,n);
    return(0);
}
