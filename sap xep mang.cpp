#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	do{
	printf("Nhap vao so luong so nguyen duong cua mang ");
	scanf("%d",&n);
    } while(n<1);
	int *p;
	p=(int *)malloc(n*sizeof(int));//ham malloc cap phat dong o nho

	for(int i=0; i<n; i++) {
		printf("Nhap vao phan tu thu %d ",i);
		scanf("%d",(p+i));
	}
	p=(int *)realloc(p,n*sizeof(int));
	for(int i=n;i<2*n;i++){
		printf("Nhap pt thu %d ",i);
		scanf("%d",(p+i));
	}
	for(int i=0;i<2*n;i++){      //No chi can chay n-1 lan vi lan cuoi thi luon xuat ra roi
		for(int j=0;j<2*n-i-1;j++){
			if(*(p+j)>*(p+j+1)){
				int doi=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=doi;
			}
		}
	}
	for(int i=0;i<2*n;i++){
	printf("%d\t",*(p+i));
    }
    
}




