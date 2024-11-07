// c structures
#include <stdio.h>
#include <string.h>

struct employee{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee;
int main(){
    //struct employee;
    strcpy(employee.name,"John Doe");
    employee.id = 12345;
    strcpy(employee.department,"Human resources");
    employee.salary = 55000.50;
    strcpy(employee.email ,"john.doe@company.com");

    //output
    printf("name of employee:%s\n",employee.name);
    printf("id of emoloyee;%d\n",employee.id);
    printf("department of employee:%s\n",employee.department);
    printf("employee salary:%.2lf\n", employee.salary);
    printf("employee email:%s\n",employee.email);



    return 0;
    }
