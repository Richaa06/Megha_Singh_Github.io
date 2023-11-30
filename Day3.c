
//While Loop

// #include<stdio.h>
// int main()
// {
//     int i=1, sum= 0;  // 
//     while(i<10)       // this is (i<10condition) i<10 again 2<10 again 3<10 untill 10<10 it will run loop in downside block
//     {
//         sum = sum + i; // this is loop   insideé{}
//         i++;           // i =10, 10<10 fales
//     }
//     printf("the sum is %d", sum);  //45 1 to 9 is 45 
//     return 0;
// }

/*

//do-while-loop

#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i < 10);
    printf("the sum is %d", sum);
    return 0;
}
*/

// for loop
/*
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    for (i = 1; i < 10; i++)
    {
        sum = sum + i;
    }
    printf("the sum is %d", sum); // 45
    return 0;
}

*/

//--------------------------------------------------------------------------------------
//arrays

//Datatype     name[size 300only]    size
//int          a[10]                   10
//float        b[10]                   10
//char         c[10]                   10

/*
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // 10  [10 elements elocated in memory]
    float b[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10}; // 10
    char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; // 10
    printf("the value of a is %d", a[0]); // 1
    printf("\nthe value of b is %f", b[0]); // 1.1
    printf("\nthe value of c is %c", c[0]); // a
    return 0;
}
*/

/*

//  Charge an Array Element insert arry
#include <stdio.h>

int main()
{
int myNumbers[] = {25, 50, 75, 100};
myNumbers[0] = 33;

printf("%d", myNumbers[3]);

    return 0;
}// Now outputs 33 instead of 25
*/


//loop through an array w3

//#include <stdio.h>
/*
int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}

*/


//Multidimensional Arrays

#include <stdio.h>
int main()
{
    int myNumbers[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", myNumbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// // Loop Through a 2D Arrays
// #include <stdio.h>
// int main()
// {
// int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

// int i, j;
// for (i = 0; i < 2; i++) {
//   for (j = 0; j < 3; j++) {
//     printf("%d\n", matrix[i][j]);
//   }
// }
// }