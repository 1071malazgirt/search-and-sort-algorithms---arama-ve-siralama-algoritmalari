#include <stdio.h>

int insertionSort(int dizi[],int N); //parametre olarak sırasıyla sayı dizisi ve dizinin eleman sayısını alan sıralama fonksiyonumuzu bildirdik
void printArr(int dizi[],int N); //sıralanmış diziyi yazdırmak için fonksiyon bildirdik

int main(int argc, char *argv[]) { //algoritmayı denemek için basit bir ana program yazalım
	int arr[]={3,6,9,7,5};
insertionSort(arr,5);
printArr(arr,5);
	

}

int insertionSort(int dizi[],int N){
	int i,j,ekle;
	for(i=1;i<N;i++){  //i ,eleman sayısından küçük olduğu sürece
		ekle=dizi[i]; 
		for(j=i-1;j>=0 && ekle<=dizi[j];i--){ //i'den önceki indis 0'dan büyük ve i'inci eleman j'inci elemandan küçük veya eşit olduğu sürece
		
			dizi[j+1]=dizi[j]; 
			j=j-1;
		}                       //sağa kaydır
		dizi[j+1]=ekle; 

	}
	 	

}

void printArr(int dizi[],int N){  //dizi yazdırma fonksiyonu
	int i;
	for(i=0;i<N;i++){
		printf("%d\n",dizi[i]);
	}
}
