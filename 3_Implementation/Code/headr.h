#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct emp_details
{
    int emp_no;
    char name[20];
};
void read(struct emp_details emp[], int a);
void display(struct emp_details emp[], int b);
void search_name(struct emp_details emp[],char s_element,int a);
