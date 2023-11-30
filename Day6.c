//


// UNit-3 
//program to read and display n muber using array
/*
#include<stdio.h>
int main()
{
    int n, i=0, arr[20];//Here, n is used to store the number of elements, i is a loop counter, and arr is an array that can store up to 20 integers.
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(i=0;i<n;i++)
    {
        printf("\n Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n the array element are \n"); 
    for(i=0;i<n;i++)
    
        printf("Arr[%d] = %d\t",i,arr[i]); // 
    return 0;
}
*/

// Program to print the position the smallest of n numbers using arrays
/*
#include<stdio.h>
int main()
{
    int n, i, arr[20], small,pos;
    printf("\n enter the number of elementsin the array:");
    scanf("%d",&n);

    printf("\n enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    small = arr[0];  // logic
    pos = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
    }
    printf("\n the position of smallest element is %d",pos);
    printf("\n the smallest element is %d",small);

    return 0;
}
*/

/* // program to insert a number at a given location in an arrays
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,num, pos,arr[10];

    printf("\n enter the number of elements in array:");
    scanf("%d",&n);

    printf("\n enter the values:");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]); 

    printf("\n enter the number you want to insert:"); 
    scanf("%d",&num);//num=87 
    printf("\n enter the position which the number has to be added:");
    scanf("%d",&pos);// pos=2

    for(i=n;i>=pos;i--)
    arr[i+1]=arr[i];
    arr[pos]=num;
    n++;
    printf("\n the array after insertion of %d is: ",num);

    for(i=0;i<n;i++)
    printf("\t%d",arr[i]);
    
}
*/

/* //program to Delete a number at a given location in an arrays
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,num, pos,arr[10];

    printf("\n enter the number of elements in array:");
    scanf("%d",&n);

    printf("\n enter the values:");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]); 

    printf("\n enter the number you want to delete:"); 
    scanf("%d",&pos);

    for(i=pos;i<n;i++)
    arr[i]=arr[i+1];
    n--;
    printf("\n the array after deletion of %d is: ", pos);

    for(i=0;i<n;i++)
    printf("\n Arr[%d] = %d",i,arr[i]);
}
*/

/*// Program to marge two unsorted arrays*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[10],arr2[10],arr3[20] ;
    int i,n1,n2,m, index=0;

    printf("\n enter the number of elements in array1:");
    scanf("%d",&n1);

    printf("\n enter the elements of the first array:");
    for(i=0;i<n1;i++)
    scanf("%d",&arr1[i]);

    printf("\n enter the number of elements in array2:");
    scanf("%d",&n2);

    printf("\n enter the elements of the second array:");
    for(i=0;i<n2;i++)
    scanf("%d",&arr2[i]);

    m=n1+n2;
    for(i=0;i<n1;i++){
        arr3[index]=arr1[i];
        index++;
    }
    for(i=0;i<n2;i++){
        arr3[index]=arr2[i];
        index++;
    }
    printf("\n the merged array is: ");

    for(i=0;i<m;i++){
        printf("\n Arr[%d] = %d",i,arr3[i]); // try to understand again here that logic 
    }
    
}