/*1. What will be the output of this program 
int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); */

#include<stdio.h>
int main(){
    int a = 10;
    if(a=11)
    printf("I am 11");
    else
    printf("I am not 11");
    return 0;
}
/* Here output will be I am 11
 because in if (a=10):- because of = sign which is already taken here == sign will be use */