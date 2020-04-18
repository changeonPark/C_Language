#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
  구조체: 여러 개의 변수를 묶어 하나의 객체를 표현.
*/
typedef struct
{
  char studentId[10];
  char name[20];
  int grade;
  char major[50];
} Student;


void printPractice(){
  Student *Student = malloc(sizeof(Student));
  //struct Student Student = {"20160844", "changeon Park", 3, "Computer Science"}; --> Student.studentId
  strcpy(Student->studentId, "20160844");
  strcpy(Student->name, "changoen Park");
  Student->grade = 3;
  strcpy(Student->major, "Computer Science");
  printf("id: %s\nname: %s\ngrade: %d\nmajor: %s\n",Student->studentId, Student->name, Student->grade, Student->major);
  free(Student);
}

void main(){
  printPractice();
}