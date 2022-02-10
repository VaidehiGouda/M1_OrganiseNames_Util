#include<stdio.h>
#include<string.h>
#define max 100
int no;

struct emp_details
{
    int emp_id;
    char name[20];
    char dept_name[20];
    int salary;
};
struct emp_details v[max];

void read(struct emp_details v[max]);
void compare(struct emp_details v[max]);
void search_name(struct emp_details v[max],char *to_search);
void print_emp_details(struct emp_details v);
void copyEmpDetails(struct emp_details *v1,struct emp_details *v2);

