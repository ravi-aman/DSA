#include <stdio.h>

int main(){


//1. Write a program to print Ravikant Tiwari 5 times on the screen

for (int i = 0; i <= 5; i++){
    printf("\nRavikant Tiwari");
}

//2. Write a program to print the first 10 natural numbers. 


for (int i = 0; i <= 10; i++){
    printf("\n%d",i);
}

//3. Write a program to print the first 10 natural numbers in reverse order 


for (int i = 10; i >= 1; i--){
    printf("\n%d",i);
}

//4. Write a program to print the first 10 odd natural numbers 



for (int i = 1; i <= 20; i=i+2){
    printf("\n%d",i);
}

//5. Write a program to print the first 10 odd natural numbers in reverse order.


for (int i = 19; i >= 1; i=i-2){
    printf("\n%d",i);
}

//6. Write a program to print the first 10 even natural numbers 

for (int i = 0; i <= 20; i=i+2){
    printf("\n%d",i);
}

//7. Write a program to print the first 10 even natural numbers in reverse order


for (int i = 20; i >= 1; i=i-2){
    printf("\n%d",i);
}


//8. Write a program to print squares of the first 10 natural numbers


for (int i = 0; i <= 10; i++){
    printf("\n%d",i*i);
}

//9. Write a program to print cubes of the first 10 natural numbers


for (int i = 0; i <= 10; i++){
    printf("\n%d",i*i*i);
}

//10. Write a program to print a table of 5.



for (int i = 0; i <= 10; i++){
    printf("\n5*%d = %d",i,5*i);
}

    return 0;
}