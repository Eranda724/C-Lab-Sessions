#include <iostream>
using namespace std;

class Sorter{
    public:
    int i;
    int j;
    int n;
	for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
                arr[j]=tmp;
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
}}}
};
int main()
{
	int arr[] = { 5, 1, 4, 2, 8};
	int N = sizeof(arr) / sizeof(arr[0]);
	Sorter(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
