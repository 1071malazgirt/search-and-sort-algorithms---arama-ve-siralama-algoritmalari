#include <stdio.h>
#include <stdlib.h>



void kabarcikSirala(int array[],int N){ //Parametre olarak dizi ve dizinin eleman sayısı isteyen fonksiyonumuz
	int i,j,temp;
	for(i=N-1;i>0;i--)
	{
		for(j=0;j<N;j++)
		{
			if (array[j]>array[j+1]){ //komşu elemanları karşılaştırır ve gerekirse yer değiştirir
		 temp = array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			}
		} 
	}
	

}
int main(int argc, char *argv[]) { //deneyelim
    int dizi[]={3,2,6,7,5,13,1};
    kabarcikSirala(dizi,7);
    int k;
    for(k=0;k<7;k++)
    	printf("%d - ",dizi[k]);
	return 0;
}
