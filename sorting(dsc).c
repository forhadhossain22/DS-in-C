#include<stdio.h>
void main()
{
    int A[30],i,j,n,temp;
    printf("Enter your number of Elements: ");
    
    scanf("%d",&n);
    printf("Enter %d integer\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        
    j=i;
    while(j>0 && A[j]>A[j-1]){
        temp=A[j];
        A[j]=A[j-1];
        A[j-1]=temp;
        j--;
    }
    }
    
    printf("\nIN DSC ORDER\n");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}