#include"headr.h"

int main()
{
    char temp[10];
    int r,i,j,no;
    int tem_var;
    int select;
    char s_element[10];
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
    case 1: scanf("%s",&s_element);
            search_name(emp,s_element,no);
    case 2: exit(1);
    default:exit(1);
    }
}

void read(struct emp_details emp[], int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        scanf("%s %d",&emp[i].name,&emp[i].emp_no);
        printf("%s, %d",emp[i].name,emp[i].emp_no);

    }
}

void display(struct emp_details emp[], int b)
{
    int i;
    for(i=0;i<b;i++)
    {
        printf("\n %s  %d",emp[i].name,emp[i].emp_no);
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
    }

}
