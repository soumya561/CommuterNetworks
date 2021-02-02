#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a[10],t[30],i,j,k,count,n;
    printf("enter length:");
    
    scanf("%d",&n);
    printf("enter values\n");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if(a[i]==1){
            t[j]=a[i];
            for(k=i+1;a[k]==1&&k<n&&count<5;k++){
                j++;
                t[j]=a[k];
                count++;
                if(count==5) {
                    j++;
                    t[j]=0;
                }
                i=k;
                
            }   
        }
        else{
                t[j]=a[i];
        }
    i++;
    j++;
    }
    printf("after stuffing:");
        
    for(i=0;i<j;i++)
    printf("%d",t[i]);
        
    return 0;
    }