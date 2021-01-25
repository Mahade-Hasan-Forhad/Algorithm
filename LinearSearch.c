#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Size : ");
    scanf("%d",&n);
    int p=0;
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The value to Search : ");
    scanf("%d",&s);
    for(i=0; i<n; i++)
    {
        if(s==a[i])
        {
            p=i+1;
            break;
        }
    }
    if(p==0)
    {
        printf("Not Found");
    }
    else
    {
      printf("The position of %d : %d",s,p);
    }
    return 0;
}
