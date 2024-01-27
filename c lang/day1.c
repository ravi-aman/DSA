#include <stdio.h>

int main() {

//Q1. Write a program to print Hello Students on the screen.*/

	printf("hello");



//Q2. Write a program to print Hello in the first line and Students in the second line.

	printf("Hello\nStudent");


//Q3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

	printf("\n\"Ravikant Tiwari\"");

//Q4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

/*
    float r;

    printf("\n\nEnter the radius of circle: ");
    int y =scanf("%f", &r);
    printf("%d",y);
    while(y==1)
    { 
        if (y != 1) {
            printf("Error: Invalid input. Please enter a floating-point value.\n");
            float area = 3.14 * r * r; 
            int x= printf("Area of the circle is: %.2f square meters\n", area);
            printf("%d",x);
        }
    }



    float r;
    while (1) {  
        printf("\n\nEnter the radi us of circle: ");
        int y = scanf("%f", &r);
        if (y == 1) {  
            break;  
        } else {
            printf("Error: Invalid input. Please enter a floating-point value.\n");
            while (getchar() != '\n'); // please read https://g.co/bard/share/b41f14edbaf7 for better undrerstanding 
        }
    }
    float area = 3.14 * r * r;  
    printf("Area of the circle is: %.2f square meters\n", area);



*/

//Q5. WAP to calculate the length of String using printf function.


/*
    char name[30];
    printf("\nenter your name : ");   
    scanf("%s",&name);
    int i; 
    for(int i = 0;name[i] != "\0" ; i++ ){
        printf("%d",i);
    }
    printf("the no of character in your name is : %d",i);
*/

//Q6 WAP to print the name of the user in double quotes.

    printf("\nhello , \"Ravikant\"");
//Q7 WAP to print “%d” on the screen.

    printf("\n%%d");

//Q8 WAP to print “%d” on the screen.
    printf("\n\\n");
//Q9 WAP to print “%d” on the screen.
    printf("\n\\\\");


/*Q10. WAP in to take date as an input in below given format and convert the date format and display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022) */

/*
    int day , month, year;
    char slash1 , slash2;
    printf("\n\nenter the date in the formate of \"DD/MM/YYYY\"  : ");
    scanf("%d%c%d%c%d",day, slash1,month,slash2,year);

    if (slash1=='/'||slash2 =='/'|| day>0||day<31||month>0||month<=12|| year >1000||year<9999){
        printf("Day – %d ,Month – %d , Year – %d");
    }else{
        printf("enter date in in invalid formate , please enter in the formate of \"DD/MM/YYYY\" ");
    }
    
*/
    
    int day, month, year;
    char slash1, slash2;
    printf("\n\nEnter a date in DD/MM/YYYY format: ");
    scanf("%d%c%d%c%d", &day, &slash1, &month, &slash2, &year);
    if (slash1 != '/' || slash2 != '/' || day < 1 || day > 31 || month < 1 || month > 12 || year < 0) {
        printf("Invalid date format. Please enter in DD/MM/YYYY format.\n");
        return 1; 
    }
    printf("Day - %02d , Month - %02d , Year - %04d\n", day, month, year);

/*WAP to take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example – “11:25” converted to “11 Hour and 25 Minute” */

   
    int min , hour;
    char comma;
    printf("\n\nEnter a time in \"HH:MM\" format: ");
    scanf("%d%c%d",&min,&comma,&hour );
    if (comma != ':' || min < 0 || min > 61 || hour < 0 || hour > 25 ) {
        printf("Invalid time format. Please enter in “HH:MM” format.\n");
        return 1; 
    }
    printf("\nMinute - %02d , Hour - %02d \n", min, hour);


/*Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}*/

// output should be 7

    int x = printf("ineuron");
    printf("%d",x);


    return 0;

}
