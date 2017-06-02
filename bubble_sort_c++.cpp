#include <iostream>

int count = 0;

using namespace std;



template<typename T>
void swap_(T* priv,T* next){
	T temp;
	temp = *priv;
	*priv = *next;
	*next = temp;
}


template<typename T>
void bubble_sort(T arr[]){
	int arrLength =11;
	for(int i = arrLength - 1; i > 0 ; i--){
		for(int j = 0 ; j < i ; j++){
			if( arr[j] > arr[j+1] ){
		        swap_(&arr[j],&arr[j+1]);
				count++;
			}
			
		}
	}
}

template<typename T>
void traversal(T arr[]){
	for (int i = 0; arr[i]!='\0'; i++)
		cout << arr[i] << ' ';
	cout << endl;
}



int main(){
	int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
	bubble_sort(arr);
	traversal(arr);
	cout << "counts: " << count;
}