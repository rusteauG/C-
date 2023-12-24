#include<iostream>
using namespace std;
void SelectionSort(int A[],int n)
{
	int min,temp;
	for (int i=0;i<n-2;i++){
		min = i;
		for (int j=i+1;j<n;j++){
			if( A[j] < A[min])
			{
				min =j;
			}
		
		}
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
	}
	
	//display A
	for(int i=0;i<n;i++){
		cout << A[i] << " " ;
	}
}

int main()
{
	int A[] = {20,10,6,9,11,33,45,67,89,90,7,2,1,3};
	SelectionSort(A,sizeof(A)/sizeof A[0]);
	return 0;
}
