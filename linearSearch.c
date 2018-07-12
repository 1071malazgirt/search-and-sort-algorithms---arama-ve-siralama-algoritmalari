#include <stdio.h>


int linearSearch(int arr[],int N, int aranan); //parametre olarak sırasıyla dizi, dizinin eleman sayısı,aranan elemanı alan ardışıl sıralama fonksiyonunu bildirdik


int main(int argc, char *argv[]) { //fonksiyonu denemek için basit bir ana program yazalım
	int dizi[] = {10,78,11,25,32,9,30,20};
	int indis,ara;
	printf("Aranan Sayiyi Giriniz: ");
	scanf("%d",&ara);
	indis=linearSearch(dizi,8,ara);
	
	if(indis==-1)
		printf("Aranan eleman bulunamadi!");
	else
		printf("Aranan eleman dizinin %d indisli elemanidir",indis);
	
	return 0;
}


int linearsearch(int arr[],int N, int aranan){
	int i;
	for(i=0;i<N;i++){ //dizinin boyutu (N) kadar çevrilecek döngü oluşturduk
		if(arr[i]==aranan)
			return i;  // aranan bulununca aranan elemanın dizi içindeki indisi  gönderilir ve döngü sonlanır 
	}
	return -1; //aranan eleman dizide yoksa -1 değeri gönderilir
}
