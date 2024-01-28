#include <stdio.h>

int main(){

    //Q1. Write a program to print unit digit of a given number in c
/*
    int n ;
    printf("Enter the  : ") ;
    scanf("&d",n);
    printf("the unit digit is %d of the number %d " ,n%10,n);

    //Q2. Write a program to print unit digit of a given number in c
*/

/*
    int x;
    printf("Enter the  : ") ;
    scanf("&d",x);
    int y = x%10;
    int z=x-y;
    printf("\n\nthen remaining no. is %d", z/10);
*/
    
    int number = 5557453, number_without_last_digit;

//    printf("Enter a number: ");
//    scanf("%d", &number);

    number_without_last_digit = number / 10;
    printf("The number without its last digit is %d\n", number_without_last_digit);


//Q3. Write a program to swap values of two int variables


    int a=5 , b =6,temp;
    temp =a ;
    a=b;
    b=temp;
    printf("a = %d, b = %d",a,b);

//Q4 Write a program to swap values of two int variables without using a third variable.

    int s=10 , t=30;
    s=s+t;//40
    t=s-t;//10
    s=s-t;//30
    printf("\n\ns = %d, t = %d",s,t);

    
/*there is 4 method of swaping  ( note )
1. using temproary variabli
        (a)simply using temp variable
        (b)using concept of pointer
2. wthout using temp variable 
        (a)using adition substraction
        (b)using bit wise operator
*/

//Q5. Write a program to input a three-digit number and display the sum of the digits.

    int f =10 , g =20 , d=30;
    printf("\n\nsum of the three nomber is %d",f+g+d);

//Q6. Write a program which takes a character as an input and displays its ASCII code.

    char ch;
    printf("\n\nEnter a character: ");
    scanf("%c", &ch);
    printf("The ASCII code of %c is %d\n", ch, ch);






    return 0;
}