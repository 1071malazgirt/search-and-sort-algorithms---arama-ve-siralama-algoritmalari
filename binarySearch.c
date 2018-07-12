#include <stdio.h>

int binarySearch(int array[],int max, int aranan){ //parametre olarak sırasıyla sayı dizisi, eleman sayısı ve aranan eleman isteyen arama fonksiyonunu bildirdik

	int kucukIndis=0; //dizinin ilk indisi 0 olarak bildirildi
	int buyukIndis=max-1; //büyük indis eleman sayısının bir eksiği olarak bildirildi
	
	while(buyukIndis>=kucukIndis){  //büyük indis büyük olduğu sürece 
		int orta =(buyukIndis+kucukIndis)/2; //orta indis büyük indisle küçük indisin toplamının yarısı
		if(aranan==array[orta]) {  
		return orta; //aranan eleman bulunduysa orta değişkenini döndür.
	}
	
		else if(array[orta]<aranan) kucukIndis=orta+1; // aranan eleman orta değişkeninden büyükse dizinin sağ tarafına bak
      else buyukIndis=orta-1; //değilse sol tarafa bak
	
	}
return -1; //aranan eleman bulunamazsa -1 değerini döndür
}

int main(int argc, char *argv[]) {  

//algoritmayı denemek için bir ana program yazalım

	int arr[]={3,5,6,9,10,15,20,35,69,77,99};
int search;
do {
puts("Aranan elemanı giriniz: ");
scanf("%d",&search);

int indis =binarySearch(arr,11,search);
if(indis==-1) printf("bulunamadi \n");
else printf("aranan %d indisli eleman \n",indis);
}while(1);
	return 0;
}
