#include <stdio.h>
#include <stdlib.h>

#define Name "Valeriia"
#define Surname "Kravetska"
#define GroupCode "ARE-21"
#define Faculty "RTF"
#define University "KPI"

int main()
{
    unsigned int age;
    unsigned int semester;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double averageGrade;

    printf("%s %s, please provide the following info:\n", Name, Surname);
    printf("What is Your age? ");
    scanf("%u", &age);
    printf("Semester number: ");
    scanf("%u", &semester);
    printf("What is your admission score? ");
    scanf("%f", &admissionScore);
    printf("Your grade 1 ");
    scanf("%d", &grade1);
    printf("Your grade 2 ");
    scanf("%d", &grade2);
    printf("Your grade 3 ");
    scanf("%d", &grade3);
    printf("Your grade 4 ");
    scanf("%d", &grade4);
    printf("Your grade 5 ");
    scanf("%d", &grade5);
    averageGrade = (double)(grade1+grade2+grade3+grade4+grade5)/5;

    system("cls");
    printf("PLACE OF STUDY");
    printf("\nUniversity: %s\n", University);
    printf("Faculty: %s\n", Faculty);
    printf("Group: %s\n", GroupCode);
    printf("^^^^^^^^^^^^^^^");
    printf("\nINFORMATION ABOUT THE STUDENT");
    printf("\nFull name: %s %s", Name, Surname);
    printf("\nAge: %u\n", age);
    printf("Semester: %u\n", semester);
    printf("***************");
    printf("\nAdmission score: %.2f\n", admissionScore);
    printf("Average grade: %.3lf\n", averageGrade);
}
