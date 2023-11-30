
//Auto storage Class 
/*
#include<stdio.h>

void fun1()
{
    int a= 10;
    printf("a=%d\n", a);
    //auto interger local to func1()
}

void fun2()
{
    int a= 20;
    printf("a=%d\n", a);
     //auto interger local to func2()
}


void main()  //auto interger local to main()
{
    int a= 30;
    fun1();
    fun2();
    printf("a=%d\n", a); // 10, 20. 30
}
*/

//Regester storage class 
/*
#include<stdio.h>

int exp(int a, int b);

int main()
{
    int a = 3, b = 5, res;
    res = exp(a, b);
    printf("\n %d to the power of %d = %d", a, b, res);
    return 0;
}

int exp(int a, int b)
{
    register int res = 1;
    int i;
    for (i = 1; i <= b; i++)
        res = res * a;
    return res;
}
*/


//Factorial program Recursive concepts
/*
#include<stdio.h>

int fact (int);
int main()
{
    int num,factorial;
    printf("enter the number");
    scanf("%d",&num);
    factorial=fact(num); //
    printf("the factorial of %d is %d",num,factorial);
    return 0;

}
int fact (int n) //n=1
{
    if(n==1)  //true
    return 1;
    else           //5*4*3*2*1
    return (n*fact(n-1)); //out put 120 given 5
}
*/

/*
//Program to print the FIBONACCI series  ///***** refer personal notes


#include<stdio.h>
int Fibonacci(int);
int main()
{
    int n, i =0, res;
    printf("enter the number");
    scanf("%d",&n);
    printf("the fibonacci series is\n");
    for(i=0; i<n; i++)  // i = 0 1 1 23 , 3<5
    {
        res = Fibonacci(i);
        printf("%d\t", res);
    }
    return 0;
}
int Fibonacci(int n) //n=3
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return Fibonacci(n-1)+Fibonacci(n-2); // 0 1123
}

*/

// function done here