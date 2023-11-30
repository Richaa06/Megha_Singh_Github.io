// post fix operator 

/*
#include<stdio.h> 

// ***post increacment and pre increament 

int main()
{
    int a = 30;
    printf("\n value of a  %d", a);// 30
    printf("\n value of a++ %d", a++);//30 || because a++ is post increament work here but line 11 again we given a so i will print firt a after a++;
    printf("\n value of ++a %d", ++a);//31 || because ++a is pre increament work here but line 11 again we given a so i will print firt ++ after a;;
    printf("\n value oƒa again %d",a);//31

    return 0;
    getch();
}

*/

//WAP conditional operator
/* 

#include<stdio.h> 
#include<conio.h>
int main()
{
    int a,b,large;
    scanf("%d",&a);
    scanf("%d",&b);
    large = (a>b)?a:b;
printf("the largest number is %d", large);

return 0;
getch();
}
*/

// WAP find the area of Circle
/*
#include <stdio.h>
#include<conio.h>

int main(){
    float  radius, area, circumference;
    printf("enter the radius of the circle:");
    scanf("%f", &radius);
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("the circumference of the circle is %.3f", circumference); //.2 means controlling decemel places 2places of decimel
    printf("\nthe area of the circle is %.3f", area);
    return 0;
    getch();
}
*/



/*
//WAP to SWAP TWO NUMBERS
// two concepts in swap is there using third varaible or not using third variable

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b; 
    printf("enter the two number ");
    scanf("%d",&a);   
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;

    // or using third variable 
    // * c =b; //  c= b is b value o so b=a a value and a  =c b value;
    // * b=a;
     //* a=c;

    printf("the value of a is %d", a);
    printf("\nthe value of b is %d", b);


    return 0;
    getchar();
}
*/


/*
//WAp to convert fahrenheit to celsius

#include <stdio.h>
#include <conio.h>

int main()
{
    float f, c;
    printf("enter the value of fahrenheit");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9; // c = (0.56)*(f - 32);
    printf("the value of celsius is %f", c);
    return 0;
    getch();        
}

*/


    /* sections/branching
        |          |
        |          |
  _____________________________
        |             |
  ^
  conditions      |   uncodinal
_____________________________
|if if =-else      | while looop |do-while loop
if-else-if switch  |       for lopp     


    */

/*

//WAP conditional operator

#include <stdio.h>
#include <conio.h>

//nested if else statments

int main()
{
    char x;
    printf("enter the character");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }

    return 0;
    getch();
}

*/

// WAP TO FIND LEAP YEAR

/*

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("enter the year");
    scanf("%d", &year);
    if (year % 4 == 0)
   {
    printf("it is leap year");
   }
   else
   {
    printf("it is not leap year");
   }

        return 0;
        getchar();
}
*/

/*
//IF ELSE 
#include <stdio.h>
#include <conio.h>
int main()
{
    int mark;
    printf("it is your mark");
    scanf("%d", &mark);
    if (mark >= 80)
    {
        printf("1st class");
    }
    else if(mark >=65 && mark < 80)
    {
        printf("1st class");
    }
    else if (mark >=65 && mark < 60)
    {
        printf("just pass");
    }
    else if (mark < 60)
    {
        printf("fail");
    }
    getchar();
    return 0;
}
*/
// switch statement

#include <stdio.h>
#include <conio.h>

int main()
{
    int day;
    printf("day enter 1 to 7 only:") ;   // 1 2 3 4 5 6 7;
    scanf("%d", &day);
    switch (day)
    {
        case 1 : printf("monday");
                 break;              /// if not given break all mixed monday to sunday 
        case 2 : printf("tuesday");
                 break;
        case 3 : printf("wednesday");
                 break;
        case 4 : printf("thursday");
                 break;
        case 5 : printf("friday");
                 break;
        case 6 : printf("saturday");
                 break;
        case 7 : printf("sunday");
                 break;
        default:
            printf("invalid day");
    }
    
    return 0;
    getchar();
    }
