//Liner is unsort ans sort and binary work for only sorted search both are searchimng of elemnt
//Day-7 = 3.5 Merging two sorted arrays unit-3
/*
//Merging two sorted arrays
#include <stdio.h>
#include<conio.h>

int main()
{
    int arr1[10],arr2[10],arr3[20] ;
    int i,n1,n2,m, index=0;
    int index_first = 0, index_second =0;


    printf("\n enter the number of elements in array1:");
    scanf("%d",&n1);
    printf("\n\n enter the elements of the first array:");
    for(i=0;i<n1;i++)
     scanf("%d",&arr1[i]);

    printf("\n enter the number of elements in array2:");
    scanf("%d",&n2);
    printf("\n enter the elements of the second array:");
    for(i=0;i<n2;i++)
     scanf("%d",&arr2[i]);
     m=n1+n2;
    while(index_first<n1 && index_second<n2)
    {
    if(arr1[index_first]<arr2[index_second])
    {
         arr3[index]=arr1[index_first];
        index_first++;
    }
   
    else 
    {
        arr3[index]=arr2[index_second];
        index_second++;

    }
    index++;
}
// if elements of the first array over and the second array has some elements
if (index_first == n1)
{
    while(index_second<n2)
    {
        arr3[index]=arr3[index_second];
        index_second++;
        index++;
    }
}

// if elements of the second array over and the first array has some elements
else if (index_second == n2)
{
    while(index_first<n1)
    {
        arr3[index]=arr3[index_first];
        index_first++;
        index++;
    }
}
  printf("\n the contents of the merged array are  : ");

  for(i=0;i<m;i++)
  printf("\t Arr[%d]=%d",i,arr3[i]);
}
*/



/*

//Liner search

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],num,n,i,found = 0, pos=0;

    printf("\n enter the number of elements in the array:");
    scanf("%d",&n);


    printf("\n enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Enter the number that has to be seached: ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            found = 1;
            pos = i;
            printf("\n %d found in the array at position %d",num,pos);
            break;
        }
}
    if (found == 0)
    printf("\n %d not found in the array",num); 

}
*/

/*

// Write a program to Implement Binary search

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],num,i,n,pos=-1,beg,end,mid,foun=0;

    printf("\n enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("\n enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the number that has to be searched: ");
    scanf("%d",&num);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid = (beg+ end)/2;
        if(arr[mid]==num)
        {
            printf("\n %d found in the array at position =  %d",num,mid);
            foun=1;
            break;
        }
        else if (arr[mid]<num)
        end = mid-1;
        else 
        beg = mid+1;
    }
    if (beg<end && foun==0)
    printf("\n %d not found in the array",num);
    return 0;
}

*/


//write a program to enter n number in array. redisplay the array with elements being sorted ascendinng order.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n, temp, j, arr[10];

    printf("\n enter the number of elements in the array:");
    scanf("%d",&n);

    printf(" enter the elements :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n the array sorted in ascending order is:\n");
    for(i=0;i<n;i++)
    printf(" \t %d",arr[i]);  // input given by user 9,2,5,6, output is 2,5,6,9
    return 0;
}