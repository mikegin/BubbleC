#include <stdio.h>
void swap(float *x, float *y){
float temp = *x;
*x = *y;
*y = temp;
}
void bubbleSort(float *array, int size){

int i, j,k;
	for(i = 1; i<size; i++){
	int flag = 0;
		for(j = 0; j<size-i; j++){
			if(array[j]>array[j+1]){
			swap(&array[j], &array[j+1]);
			flag = 1;
			}
		}
	if(flag == 0){
	break;
	}
	}
}
int main(){
int n;
printf("Please enter the number of values to be sorted: ");
scanf("%d", &n);
printf("Please enter %d values: ", n);
int i;
float array[n];
for(i = 0;i<n;i++){
scanf("%f", &array[i]);
}
bubbleSort(array, n);
printf("Sorted list in ascending order:\n");
for(i = 0;i<n-1;i++){
printf("%.1f ", array[i]);
}
printf("%.1f",array[n-1]);
printf("\n");

return 0;
}

