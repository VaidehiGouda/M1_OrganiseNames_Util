#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][7];
    char new_name[10][8];
    char temp[10];
    int r,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
        strcpy(new_name[i],name[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            r=strcmp(name[i],name[j]);
            if(r>0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s      %s\n",name[i],new_name[i]);
    }
}
