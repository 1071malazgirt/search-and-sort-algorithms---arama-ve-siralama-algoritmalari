#include <stdio.h>


void merge(int dizi[],int l,int m,int r); //parametre olarak sırasıyla dizi,dizinin sol indisi,orta indisi ve sağ indisini alan esas fonksiyonumuz
void mergeSort(int dizi[],int l,int r); //yardımcı fonksiyonumuz
void yazDizi(int arr[],int N); //dizi yazdırma fonksiyonumuz


int main(int argc, char *argv[]) { //deneyelim


int array[]={33,25,6,98,20,23,35,2,65,39};

mergeSort(array,0,9);
yazDizi(array,10);



	return 0;
}



void merge(int dizi[],int l,int m,int r){
	int i,j,k;
	int sol = m-l+1; //sol dizi boyutu için değişken
	int sag=r-m;  //sağ dizi boyutu için değişken
	int L[sol]; //geçici dizilerimiz
	int R[sag];
	
	for(i=0;i<sol;i++)   //geçici dizilere eleman atar
		L[i]=dizi[l+i];
	for(j=0;j<sag;j++)
		R[j]=dizi[m+1+j];
	i=0,j=0,k=l;
	
	while(i<sol && j<sag){ //sol ve sağ dizide eleman oldukça döngü devam edecek döngü
		if(L[i]<=R[j]){    //sol dizinin i. elemanı sağ dizinin j. elemanından küçük eşitse
			dizi[k]=L[i];  //yeni dizinin ilk elemanı sol dizinin ilk elemanı olur
			i++;
		}
		else{
			dizi[k]=R[j]; //değilse sağ dizinin ilk elemanı yeni dizinin ilk elemanı
			j++;
		}
		k++;
	}
	while(i<sol){  //sol dizide boşta eleman kaldıysa boş kalan yerlere yerleştir
		dizi[k]=L[i];
		i++;
		k++;
	}
	while(j<sag){  //dizide boşta eleman kaldıysa boş kalan yerlere yerleştir
		dizi[k]=R[j];
		j++;
		k++;
	}
	
}


void mergeSort(int dizi[],int l,int r){ 
	if(l<r){
		int m=l+(r-l)/2;  //dizinin ortası 
		mergeSort(dizi,l,m);
		mergeSort(dizi,m+1,r);
		merge(dizi,l,m,r); //esas fonksiyona gerekli parametreleri gönderiyoruz
		
	}
}


void yazDizi(int dizi[],int N){
	int a;
	for(a=0;a<N;a++)
		printf(" %d \n",dizi[a]);
}
