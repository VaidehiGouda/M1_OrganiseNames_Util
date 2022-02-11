#include"headr.h"

int main()
{
    char temp[10];
    int r,i,j,no;
    int tem_var;
    int select;
    char s_element[10];
    printf("Enter the number of details to be added\n");
    scanf("%d",&no);
    struct emp_details emp[10];
    read(emp,no);
    for(i=0;i<no-1;i++)
    {
        for(j=i+1;j<no;j++)
        {
            r=strcmp(emp[i].name,emp[j].name);
            if(r>0)
            {
                strcpy(temp, emp[i].name);
                strcpy(emp[i].name, emp[j].name);
                strcpy(emp[j].name, temp);
                tem_var=emp[i].emp_no;
                emp[i].emp_no=emp[j].emp_no;
                emp[j].emp_no=tem_var;
            }
        }
    }
    display(emp,no);
    printf("\nIf you wish to search a name type 1 else type2\n");
    scanf("%d",&select);
    switch(select)
    {
    case 1: printf("\nEnter the name to be searched\n");
            scanf("%s",&s_element);
            search_name(emp,s_element,no);
            exit(1);
    case 2: exit(1);
    default:exit(1);
    }
}

void read(struct emp_details emp[], int a)
{
    int i;
    printf("\nEnter the name and the 4 digit employee id\n");
    for(i=0;i<a;i++)
    {
        scanf("%s %d",&emp[i].name,&emp[i].emp_no);
    }
}

void display(struct emp_details emp[], int b)
{
    int i;
    printf("\n The details organised are\n");
    for(i=0;i<b;i++)
    {
        printf("\n %s \t%d",emp[i].name,emp[i].emp_no);
    }
}

void search_name(struct emp_details emp[],char s_element,int a)
{
    int i;
    int r;
    for(i=0;i<a;i++)
    {
       r=strcmp(emp[i].name,s_element);
       if(r==0)
       {
           printf("\n Element found: \n %s",s_element);
       }
       else
       {
           printf("\nThe element was not found");
       }
    }
}
