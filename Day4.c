

//reverse a number
/*
#include<stdio.h>

int main()
{
    int num, temp;
    printf("enter the number here");
    scanf("%d", &num);
    while(num!=0)
    {
        temp = num%10;
        printf("%d", temp);
        num = num/10;
    }
    return 0;
}

*/

//sum of the cubes of the first n numbers
/*
#include<stdio.h>  
#include<conio.h>
#include<math.h> 

int main()
{
    int n,i,term,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        term =pow(i,3);
        sum = sum+term;
    }
    printf("the sum is %d", sum); //224 but i need 225 something wrong here
    return 0;
}
*/


//Armstrom number find

/*

#include <stdio.h>
#include <math.h>

int main()
{
    int num, r, n, sum = 0;
    printf("enter a number");
    scanf("%d", &num);
    n = num;
    while (num > 0)
    {
        r = n % 10;
        sum = sum + pow(r, 3);
        n = n / 10;
    }
    if (sum == num)
    {
        printf("it is an armstrong number");
    }
    else
    {
        printf("it is not an armstrong number"); // something error here i coudn't find that
    } 

    return 0;
}
*/

//call by value and call by reference

/*

#include <stdio.h>

void swap_by_value(int , int);
void swap_by_reference(int *, int *);

int main()
{
    int a=1,b=2,c=3,d=4;
    printf("in main the value of a is %d and b is %d", a, b);
    swap_by_value(a, b);
   printf("\nin main the value of a is %d and b is %d", a, b);
   printf("\nin main the value of c is %d and d is %d", c, d);
   void swap_by_reference(int *c, int *d);
    printf("\nnin main the value of a is %d and b is %d", c,d);


    return 0;
}

void swap_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nnin function by value the value of a is %d and b is %d", a, b);
}

void swap_by_reference(int *c, int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("\nin function by value the value of a is %d and b is %d", *c, *d);
} 
*/

#include <stdio.h>

float calculatearea(float radius);
int main()
{
float area, radius;
printf("enter the radisu");
scanf("%f", &radius);
area = calculatearea(radius);
printf("the area is %.2f", area);
return 0;
}
float calculatearea(float radius)
{
     //float is the datatype 
        return(3.14 * radius * radius);

}