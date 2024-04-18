#include<stdio.h>
main(){
     int number;
	 printf("enter any number: ");
	 scanf("%d",&number);
	 if(number>0){
	 	printf("this number has positive value");
	 }else if(number<0){
	 	printf("this number has negitive value");
	 }else{
	 	printf("this number is nutral");
	 }
}