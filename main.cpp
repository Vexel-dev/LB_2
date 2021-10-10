#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {	
	setlocale(LC_ALL, "Russian");
	int operation = 0;
	int n = 0;
	int m = 0;
	cout <<"¬ведите размерность 1-го множества: ";
	cin >> n;
	int arr1[n];
	for(int i = 0; i < n; i++){
       	   	  cin >> arr1[i]; 
	   }
	cout <<"¬ведите размерность 2-го множества: ";
	cin >> m;
	int arr2[m];
	
		for(int i = 0; i < m; i++){
       	   	  cin >> arr2[i]; 
	   }

	   int h = 0;
	   int flag = 0;
    int arr_ob[n+m];

		for(int i = 0;i < n;i++){
			h++;
			arr_ob[i] = arr1[i];
		}
		h--;
		for(int j = 0;j < m;j++){

			for(int i = 0; i < n; i++){
				if(arr2[j] == arr1[i]){
					flag = 1;
				}
			}
			if(flag == 0){
					h++;
					arr_ob[h] = arr2[j];
				}
			flag = 0;
		}
		
		cout <<"\n\nќбъединение: ";
		for(int i = 0; i < h+1; i++){
       	   	  cout << arr_ob[i];
			  cout << " ";
	        }
	h = 0;
	flag = 0;

	return 0;
}
