/*
- Create an employee structure with 3 members:
    - name (char array)
    - hireDate (int)
    - salary (float)
- Delcare and initialize an instance of an employee type
- Read in a second employee from the console and store it in a structure of type
employee
- Print out the contents of each employee
*/
#include <stdio.h>
struct Employee
{
  char name[50];
  char hireDate[15];
  float salary;
};

int printEmployee(struct Employee employee);

int main()
{
  struct Employee employee1 = {
      .name = "Murphy", .hireDate = "10/31/2023", .salary = 50000};
  struct Employee employee2;

  printf("Enter the name of your employee:\n");
  scanf("%s", employee2.name);
  printf("Enter the employees hire date:\n");
  scanf("%s", employee2.hireDate);
  printf("Enter the employees salary:\n");
  scanf("%f", &employee2.salary);

  printEmployee(employee1);
  printEmployee(employee2);
  return 0;
}

int printEmployee(struct Employee employee)
{
  printf("EMPLOYEE:\nName: %s\nHire Date: %s\nSalary: %f\n\n", employee.name,
         employee.hireDate, employee.salary);
  return 0;
}