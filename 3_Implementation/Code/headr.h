#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NUM 5
#define LEN 20

struct emp_details
{
    int emp_no;
    char *name[20];
};
struct emp_details employees[NUM];

void read(struct emp_details emp[], int a);
void display(struct emp_details emp[], int b);
void demo(char s_element[LEN], int a);
void populateEmpStruct();
void arrangeNames();
void organise();
