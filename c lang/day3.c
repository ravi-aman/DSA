#include <stdio.h>
#include <math.h>
int main(){

// 1. Write a program to check whether a given number is positive or non-positive.

    int x;
    printf("enter the value of x :  ");
    scanf("%d",&x);

    if (x>=0)
    {
        printf("the given number is positive");
    }else{
        printf("the number is non- positive");
    }
    

//2. Write a program to check whether a given number is divisible by 5 or not


    if (x%5==0)
    {
        printf("\nthe number is divisible by 5 ");
    }else{
        printf("\nnumber is not divisible by 5");
    }

//3. Write a program to check whether a given number is an even number or an odd number.

    if (x%2==0)
    {
        printf("\nthe given number is even");
    }else{
        printf("\nthe given no is odd");
    }
    

//4. Write a program to check whether a given number is an even number or an odd number without using % operator.

    if ((x& 1)==1)
    {
        printf("\n\nthen given number us odd");
    }else{
        printf("\n\nthe given number is even ");
    }
    
//5. Write a program to check whether a given number is a three-digit number or not.


    if (x<1000||x>=100)
    {
        printf("\nthe given number is 3 digit ");
    }else{
        printf("\nthe given number is not 3 digit");
    }

//6. Write a program to print greater between two numbers. Print one number of both are the same.


    int y;
    printf("\n\nenter the value of y : ");
    scanf("%d",&y);

    if (x<y){
        printf("\ny is greater then x");
    }else if (x>y)
    {
        printf("\nx is greater then y");
    }else{
        printf("\nboth numeber are equal.....");
    }
    
//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

    float a, b, c, discriminant;

  // Read coefficients from the user
    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);


    discriminant = b * b - 4 * a * c;


    if (discriminant > 0) {
        float root1, root2;
    // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f.\n", root1, root2);
    } else if (discriminant == 0) {
        float root;
        root = -b / (2 * a);
        printf("The roots are real and equal: %.2f.\n", root);
    } else {
    // Imaginary roots
        printf("The roots are imaginary.\n");
    }


//8. Write a program to check whether a given year is a leap year or not.

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0) && (not (year % 100 == 0) || (year % 400 == 0))) {
        printf("%d is a leap year.\n", year);
    } else {
    printf("%d is not a leap year.\n", year);
    }

//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

    int a,b,c;
    printf("Enter a year: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b&&a>c){
        printf("a is greatest");
    }else if(b>a&&b>c){
        printf("b is greatest");
    }else{
        printf("c is gratest no. ");
    }

//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.


    float costPrice, sellingPrice, profit, profitPercentage, loss, lossPercentage;


    printf("Enter the cost price of the product: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price of the product: ");
    scanf("%f", &sellingPrice);


    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("You made a profit of %.2f%%.\n", profitPercentage);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("You incurred a loss of %.2f%%.\n", lossPercentage);
    } else {
    printf("You neither made a profit nor incurred a loss.\n");
    }
    

//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>
#include <stdio.h>


    int passed = 1; 

 
    int subject1, subject2, subject3, subject4, subject5;

    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);

    printf("Enter marks for subject 4: ");
    scanf("%d", &subject4);

    printf("Enter marks for subject 5: ");
    scanf("%d", &subject5);


    if (subject1 < 33 || subject2 < 33 || subject3 < 33 || subject4 < 33 || subject5 < 33) {
        passed = 0; 
    }


    if (passed) {
        printf("Congratulations! You passed the examination.\n");
    } else {
        printf("Unfortunately, you failed the examination.\n");
    }

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

    char a;
    printf("enter the character alphabets : ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("it is uppercase");
    } else if (a >= 'a' && a <= 'z') {
    printf("it is lowercase");
    } 

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.



    int number = 12;

    if (number % 2 == 0 && number % 3 == 0) {
        printf("%d is divisible by both 2 and 3.\n", number);
    } else {
        printf("%d is not divisible by both 2 and 3.\n", number);
    }


//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
    int number = 21;

    if (number % 7 == 0 || number % 3 == 0) {
        printf("%d is divisible by either 7 or 3.\n", number);
    } else {
        printf("%d is not divisible by either 7 or 3.\n", number);
    }


//15. Write a program to check whether a given number is positive, negative or zero.

    int number = 5;  

    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("%d is zero.\n", number);
    }


//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.



    char ch = 'A';  

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("%c is an uppercase alphabet.\n", ch);
        } else {
            printf("%c is a lowercase alphabet.\n", ch);
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }


//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.




    int side1, side2, side3;

    printf("Enter the length of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

//18. Write a program which takes the month number as an input and display number of days in that month
int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

 // Determine the number of days based on month and year using if-else
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d has 29 days (leap year).\n", month);
        } else {
            printf("%d has 28 days.\n", month);
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("%d has 30 days.\n", month);
    } else {
        if (month >= 1 && month <= 12) {
            printf("%d has 31 days.\n", month);
        } else {
            printf("Invalid month number.\n");
        }
    }



    return 0;

}
