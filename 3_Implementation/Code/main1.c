#include "nwawe.h"
#define max 100
int no;

int main()
{
    char to_search[10];
    printf("Enter the no of names to be displayed\n");
    scanf("%d",&no);
    read(v);
 //   print_emp_details(v);
  //  compare(v);
    printf("\n Enter the name you want to search\n");
    scanf("%s",&to_search);
    search_name(v,to_search[10]);
}

void read(struct emp_details v[max])
{
    int i;
  //  char temp[20];
    for(i=0;i<no;i++)
    {
       // scanf("%s %d %s %d",&v[i].name, &v[i].emp_id,&v[i].dept_name, &v[i].salary);
       strcpy(v[i].name,"hani");
       v[i].emp_id=123;
       strcpy(v[i].dept_name,"cs");
       v[i].salary=300;
        print_emp_details(v[i]);
    }

}

void compare(struct emp_details v[max])
{
    int i,j,r;
 //   char temp[max];
   // int ad1;
    for(i=0;i<no-1;i++)
    {
        for(j=i+1;j<no;j++)
        {
            r=strcmp(v[i].name,v[j].name);
            if(r>0)
            {
                copyEmpDetails(&v[i], &v[j]);
            }
            print_emp_details(v[i]);
        }
    }
    for(i=0;i<no;i++)
    {
        printf("%s\t%d\n",v[i].name,v[i].emp_id);
    }
}

void search_name(struct emp_details v[max], char *to_search)
{
   //char a[10];
   int r,i;
   printf("nnn");
   for(i=0;i<no;i++)
   {
       r=strcmp(v[i].name, to_search);
       printf("%d ",r);
       if(r==0)
        {
            printf("Name found: %s",to_search);
            break;
        }

   }
}

void print_emp_details(struct emp_details v)
{
    int i;
    printf("\n%s, %d %s %d\n",v.name, v.emp_id,v.dept_name, v.salary);

    printf("\n");
}

void copyEmpDetails(struct emp_details *v1,struct emp_details *v2)
{
    int ad1;
    char *temp;
    strcpy(temp,v1->name);
    strcpy(v1->name,v2->name);
    strcpy(v2->name,temp);

    ad1=v1->emp_id;
    v1->emp_id=v2->emp_id;
    v2->emp_id=ad1;

    strcpy(temp,v1->dept_name);
    strcpy(v1->dept_name,v2->dept_name);
    strcpy(v2->dept_name,temp);

    ad1=v1->salary;
    v1->salary=v2->salary;
    v2->salary=ad1;
}
