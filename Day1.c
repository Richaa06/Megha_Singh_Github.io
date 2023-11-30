
//Swap Add two numbers

#include <stdio.h> // this all preprocessor directive
#include <conio.h>
#include<math.h> // this header is for power or sqrt

int main()
{
    int a, b, c; //int foloat , char this all are dData types
    printf("enter the two number ");

    //int is %d || float is %f|| double is %lf || char is %c|
    scanf("%d", &a); //scanf is the taking user input
    scanf("%d", &b);

    c = a + b;
    printf("c value is %d", c); // print the values || in print f no need to add &c

    return 0;

    getch(); //untile press key board hold the values
}
//6 main tokens, there in c
// 1. keyword means = int, float,
//2.variable means = variable datatype and name (int a),
//3.constant means con't change value and we can use any where that value in programm like (const float = 3.14); pie =3.14 we don't need to enter to value in every where we just add (a)

// 4.string  = means user value is given like output asks entire the name we eter name it will be a string output all types not only numbers somties charachters also there
//5. operator= **Arithmetic Operators**: || **Relational Operators**:  **Logical Operators**: **Bitwise Operators**:  **Assignment Operators      ||       uniary operators**:
            //   + - / % ++ -- *,        || == != <, >, >= =<        || && || !             || & | ^ ~ <<, >>     || = += -= *= /+= %= &= |= ^=   || sizeof operator = sizeof(), and &, ?:
//6.special charachters = @ etc

