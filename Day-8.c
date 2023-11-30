//1.selection array
//2. Quick sort 
/*
//selection sort 3.5
// write pàrogram to sort an array using selction sort alogrithm
#include<stdio.h>
#include<conio.h>

int smallest(int arr[],int k, int n);
void seclection_sort(int arr[], int n);
int main()
{
    int arr[10],n,i;
    printf("\n enter the number of elements in the array:");
    scanf("%d",&n);

    printf("\n enter the elements :");
    for(i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);
      }  
    
    seclection_sort(arr,n);
    printf("\n the sorted array is :\n");
    for(i=0;i<n;i++)
        printf("\t%d",arr[i]);
        getch();
}
int smallest(int arr[],int k, int n)
{
    int pos = k, small=arr[k],i;
    for(i=k+1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

void seclection_sort(int arr[],int n)
{
   int k,pos,temp;
   for(k=0;k<n-1;k++)
   {
       pos = smallest(arr,k,n);
       temp = arr[pos];
       arr[pos] = arr[k];
       arr[k] = temp;
   }
}

*/


/**/
//2. Quick sort 
//write a program to implement quick sort alogrithm
#include<stdio.h>
#include<conio.h>
#define size 100

int partition(int a[],int beg,int end);
void quick_sort(int a[],int beg,int end);

void main()
{
    int a[size],i,n;
    printf("\n enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\n enter the elements :");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    quick_sort(a,0,n-1);
    printf("\n the sorted array is :\n");

    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    getch();

}
int partition(int a[],int beg,int end)
{
    int left,right,temp,loc,flag;
    loc = left = beg;
    right = end;
    flag = 0;
    while(flag !=1)
    {
        while(a[loc] <= a[right] && (loc !=right))
        right--;
        if(loc==right)
        flag=1;
        else if (a[loc] > a[right])
        {
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }
        if (flag!=1)
        {
            while((a[loc] >= a[left]) && (a[loc] != left))
            left++;
            if(loc==left)
            flag=1;
            else if (a[loc] < a[left])
            {
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    }
    return 0;
}

void quick_sort(int a[],int beg,int end)
{
    int loc;
    if(beg < end)
    {
        loc = partition(a,beg,end);
        quick_sort(a,beg,loc-1);
        quick_sort(a,loc+1,end);
    }
}
/**/