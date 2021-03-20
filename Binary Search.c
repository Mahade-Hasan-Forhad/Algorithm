#include<stdio.h>
int main()
{
    int i, mid, n, s;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int first=0;
    int last = n-1;
    int a[n];//Must be sorted in ascending order
    for (i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter value to find\n");
    scanf("%d", &s);
    while(first <= last)
    {
        mid = (first+last)/2;
        if(a[mid] == s)
        {
            printf(" %d Found at index : %d\n",s,mid);
            break;
        }
        else if(a[mid] < s)
        {
            first = mid +1;
        }
        else
        {
            last = mid - 1;
        }
        if (first > last)
        {
            printf("%d isn't present in the list.\n",s);
        }
    }
    return 0;
}
