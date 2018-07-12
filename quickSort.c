#include <stdio.h>
#include <stdlib.h>

int quickSort(int array[],int l,int r);  //parametre olarak sırayla dizi,sol indis ve sağ indis alan esas fonksiyonumuz
int printArray(int array[],int N); //dizi yazdırma fonksiyonumuz


int main(int argc, char *argv[]) { //deneme
	int dizi[]={3,5,6,7,1,8,0,2,4};
	quickSort(dizi,0,8);
	printArray(dizi,9);
	return 0;
}


int quickSort(int array[],int l,int r){
	
	int i=l, j=r, temp; 
	int pivot = array[(l+r)/2]; //ortadaki indisi pivot olarak seçtik
	
	while(i<=j){
		while(array[i]<pivot) 
			i++;
		while(array[j]>pivot)
			j--;
	if(i<=j){
	
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;
		i++;
		j--;
}
	}
	if(l<j)
		quickSort(array,l,j); 
	if(i<r)
		quickSort(array,i,r);
}

int printArray(int array[],int N){
	int a;
	for(a=0;a<N;a++)
		printf("%d - ",array[a]);
}
