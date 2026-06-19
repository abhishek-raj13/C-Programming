#include<stdio.h>
int main(){
    int age =45;
    if(age>60){
        printf("You can drive and You are senior citizen");
    }
    else if(age>40){
        printf("You can drive and You are Elder");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}