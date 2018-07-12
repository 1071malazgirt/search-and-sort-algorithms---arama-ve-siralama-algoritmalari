#include <stdio.h>
#include <stdlib.h>

void selectionSort(int dizi[], int N); //seçmeli sıralama fnksiyonunu bildirdik. Parametre olarak sırayla dizi ve dizinin eleman sayısı istendi
void printDizi(int dizi[],int N); //sıralı diziyi yazdırmak için fonksiyon bildirdik


int main(){  //denemek için basit bir ana program
	int array[]={1,10,32,65,23,45,85,2,15,63,100};
	selectionSort(array,11);
	printDizi(array,11);
	scanf("");
	return 0;
}


void selectionSort(int dizi[], int N){
	int i,j,enKucuk,index;
	for(i=0;i<(N-1);i++){ //Son elemana gelene kadar döndür
		enKucuk=dizi[N-1]; 
		index=N-1;
		for(j=i;j<(N-1);j++){ 
			if(dizi[j]<enKucuk){ //gezilen eleman tutulandan küçükse yer değiştir
				enKucuk=dizi[j]; 
				index=j;
			}
		}
		dizi[index]=dizi[i];
		dizi[i]=enKucuk;  
	}
}
void printDizi(int dizi[],int N){
	int i;
	for(i=0;i<N;i++)
	    printf("%d - ",dizi[i]);
}
