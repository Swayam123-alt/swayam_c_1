#include<stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s1;
    printf("enter name:");
    scanf("%s",&s1.name);
    printf("enter roll number:");
    scanf("%d",&s1.roll);
    printf("enter marks");
    scanf("%f",&s1.marks);
    printf("\nStudentdetails:\n");
    printf("name:%s\nroll:%d\nmarks:%.2f\n",    s1.name,s1.roll,s1.marks);
    return 0;
    
    
}
