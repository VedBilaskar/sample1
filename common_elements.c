#include <stdio.h>

void common_pairs(int A[],int B[],int C[],int n1,int n2,int n3)
{
    int common;
    int i,j,k,x;
    for(i=0;i<n1;i++)
    {
        x = A[i];
        for(j=0;j<n2;j++)
        {
            if(x == B[j])
            {
                for(k=0;k<n3;k++)
                {
                    if(x == C[k])
                    {
                        printf("%d ",x);
                    }
                }
            }
        }
    }
    return;
}

int main()
{
    int A[] = {1,5,10,20,40,80,120,150};
    int B[] = {6,7,20,80,100,120,150};
    int C[] = {3,4,15,20,30,70,80,120,150,200};
    common_pairs(A,B,C,8,7,10);
    return 0;
}