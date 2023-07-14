#include<stdio.h>
void main (){
	
	int i,j,r,c,sum=0;
	
	printf("Enter  Size of Array : ");
	scanf("%d",&i);
	printf("Enter  Column of Array : ");
	scanf("%d",&j);
	
	int a[i][j];
	
	
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			printf("a[%d][%d]:",r,c);
			scanf("%d",&a[r][c]);
		}
	}for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			if(a[r][c]>sum)
			{
				sum =a[r][c];
			}
		}
	}
   printf("max number is :- %d",sum);	
	
}

