#include<stdio.h>
int main(){
	int n,value,index;
    int array[100];
	printf("hay nhap so luong phan tu cho mang:");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		printf("hay nhap gia tri cua phan tu %d:",i);
		scanf("%d",&array[i]);
	}
		for(int i =0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("hay nhap vi tri can them (1-->%d):\n",n);
	scanf("%d",&index);
	printf("hay nhap gia tri can them:");
	scanf("%d",&value);
    if(index<1||index>n+1){
		printf("vi tri can them khong hop le!");
		return 1;
	}
	for(int i = n;i<n;i--){
		 array[i] = array[i - 1];
	}
	array[index -1]=value;
	n++;
		for(int i =0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
