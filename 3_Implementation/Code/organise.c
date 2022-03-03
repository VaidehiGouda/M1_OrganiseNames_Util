#include"headr.h"
#include<string.h>

void organise()
{
    char temp[LEN];
    int r,i,j,no;
    int tem_var;
    int select;
    char s_element[LEN];
    struct emp_details emp[10];

    setbuf(stdout, NULL);
    populateEmpStruct();
    no = NUM;
    /*
    printf("Enter the number of details to be added\n");
    scanf("%d",&no);
    ;
    read(emp,no);
    printf("\nThe entered details are as follows\n");       */

    display(employees,no);
    arrangeNames();
    printf("\n The details as organised are:\n");
    display(employees,no);
    printf("\nIf you wish to search a name type 1 else type2\n");
    scanf("%d",&select);
    switch(select)
    {
    case 1: printf("\nEnter the name to be searched\n");
            scanf("%s",&s_element);
            demo(s_element,no);
            exit(1);
    case 2: exit(1);
    default:exit(1);
    }
}

void arrangeNames()
{
    int i, j, r, no = NUM, tem_var;
    char temp[20];
    for(i=0;i<no-1;i++)
    {
        for(j=i+1;j<no;j++)
        {
            r=strcmp(employees[i].name,employees[j].name);
            if(r>0)
            {
                strcpy(temp, employees[i].name);
                strcpy(employees[i].name, employees[j].name);
                strcpy(employees[j].name, temp);
                tem_var=employees[i].emp_no;
                employees[i].emp_no=employees[j].emp_no;
                employees[j].emp_no=tem_var;
            }
        }
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
    for(i=0;i<b;i++)
    {
        printf("\n %s \t%d",emp[i].name,emp[i].emp_no);
    }
}

void demo(char s_element[LEN],int a)
{
    short i=0,j=0,k=0;
    int in;
    short textlen=0;
    short keylen=0;
    char flag=0;
    char text[20];

    for(i=0;s_element[i]!='\0';i++);
    keylen=i;
    for(in=0;in<a;in++)     //looping employee struct
    {
        strcpy(text, employees[in].name);
        textlen = strlen(text);
        if(textlen == keylen) {
            for(i=0;i < textlen;i++){
                j=0;
                while(j < keylen){

                    if(text[j] == s_element[j]){
                        j++;
                    }
                    else
                        break;
                }
                if(j == keylen){
                    flag++;
                }
            }
        }
    }
    if(flag==0)
    {
        printf("\nNot found");
    }
    else
        printf("\nFound");
}

void populateEmpStruct()
{
    int i = 0;
    char *names[] = {"Anish", "Ravi", "Pushpa", "Srikant", "Nirmala"};
    int empIds[] = {1001, 1002, 1003, 1004, 1005};
    for(i = 0; i < NUM; i++)
    {
        strcpy(employees[i].name, names[i]);
        employees[i].emp_no = empIds[i];
    }
    return;
}
