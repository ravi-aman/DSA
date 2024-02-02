#include <stdio.h>

int main(){
    int n;
    printf("enter N : ");
    scanf("%d",&n);
//1. Write a program to print Ravikant Tiwari N times on the screen
/*
    for(int i ; i <=n;i++){
        printf("\nRavikant Tiwari");

    }

*/
//2. Write a program to print the first N natural numbers.
    for(int i ; i <=n;i++){
        printf("\n%d",i);

    }

//3. Write a program to print the first N natural numbers in reverse order

    for(int i =n ; i >=0;i--){
        printf("\n%d",i);
    }

//4. Write a program to print the first N odd natural numbers

    
    for (int i = 1; i <= n; i=i+2){
        printf("\n%d",i);
    }
//5. Write a program to print the first N odd natural numbers in reverse order.

    if (n%2==0){
        for (int i = n-1; i >= 1; i=i-2){
            printf("\n%d",i);
        }
    }else{
        for (int i = n; i >= 1; i=i-2){
            printf("\n%d",i);
        }
    }

//6. Write a program to print the first N even natural numbers

for (int i = 0; i <= n; i=i+2){
    printf("\n%d",i);
}

//7. Write a program to print the first N even natural numbers in reverse order

    if (n%2==0){
        for (int i = n; i >= 1; i=i-2){
            printf("\n%d",i);
        }
    }else{
        for (int i = n-1; i >= 1; i=i-2){
            printf("\n%d",i);
        }
    }


//8. Write a program to print squares of the first N natural numbers


for (int i = 0; i <= n; i++){
    printf("\n%d",i*i);
}

//9. Write a program to print cubes of the first N natural numbers


for (int i = 0; i <= n; i++){
    printf("\n%d",i*i*i);
}

//10. Write a program to print a table of N.


for (int i = 0; i <= 10; i++){
    printf("\n%d*%d = %d",n,i,n*i);
}


    return 0; 
}