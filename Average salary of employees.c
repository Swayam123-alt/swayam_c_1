#include <stdio.h>

struct Employee 
{
    char name[50];
    int id;
    float salary;
};


float calculateAverageSalary(struct Employee employees[], int count) {
    float totalSalary = 0.0;

    for (int i = 0; i < count; i++) 
{
        totalSalary += employees[i].salary;
    }

    return totalSalary / count;
}

int main() 
{
    int n;
 printf("Enter the number of employees: ");
    scanf("%d", &n);
 struct Employee employees[n];
for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    
    float averageSalary = calculateAverageSalary(employees, n);
    printf("\nThe average salary of employees is: %.2f\n", averageSalary);

    return 0;
}
