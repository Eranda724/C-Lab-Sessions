#include <iostream>

using namespace std;
void selectionSort(int array[],int size);

int main()
{
    int i,j,p,a;
    //a[5]={20,12,10,15,2};
    selectionSort((4,10,20),2);
    for (p=1 , p<=size , p++){
        for(i=0 , i<size , i++){
            for(j=0 , j<size , j++){
                if (array[i]<=array[j]){
                    continue;
                }
                else{
                    break;
                }
                int tmp=array[i];
                array[i] = array[p];
                array[p] = tmp;
    }}}
    cout<<"Your sorted array is = "<<array[size];
    return 0;
}
void selectionSort(int array[],int size){
   for (int k=0 , k<size , k++){
        array[k] = a[k];
    }
}

