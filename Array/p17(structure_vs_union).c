/* 17.WAP to show difference between Structure and Union. */

#include<stdio.h>
#include<string.h>

struct StudentStruct
{
    char name[20];
    int age;
    float gpa;
}s1;

union StudentUnion
{
    char name[20];
    int age;
    float gpa;
}s2;

main()
{
	strcpy(s1.name,"Harsh");
	s1.age=20;
	s1.gpa=4.20;  //structure data
	
	strcpy(s1.name,"Raj");
	s1.age=20;
	s1.gpa=6.20;  //Union Data
	
	printf("\n\n\tStructure:\n");
    printf("\n\tName: %s\n", s1.name);
    printf("\n\tAge: %d\n", s1.age);
    printf("\n\tGPA: %.2f\n\n", s1.gpa);
	
	printf("\n\n\tUnio:\n");
    printf("\n\tName: %s\n", s2.name);
    printf("\n\tAge: %d\n", s2.age);
    printf("\n\tGPA: %.2f\n\n", s2.gpa);
	
	printf("\n\n\tSize of structure: %lu bytes\n", sizeof(s1));
    printf("\n\tSize of union: %lu bytes\n", sizeof(s2));	
}
