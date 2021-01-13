#include<stdio.h>
#define SIZE 5

void main(){

    int a[SIZE];
    int i,j,min,tmp;


    for(i=0;i<SIZE;i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }


    printf("\n Before ..\n");
    for(i=0;i<SIZE;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");


    for(i=0;i<SIZE-1;i++){
    
	min=i;
        
	for(j=i+1;j<SIZE;j++){
            if(a[j] < a[min]){
                min = j;
            }

        }

        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;

    }


    printf("\n After Sorting\n");
    for(i=0;i<SIZE;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");


}
