#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _student;
typedef struct _student* Position;
typedef struct _student
{
	char *name;
	char *surname;
	int year;
	Position next;
}Student;

int CreateOnBegin(Position);
int CreateOnEnd(Position);
Position CreateNew(Position);
Position Allocation();
int PrintList(Position);
int PrintOne(Position);
Position FindEl(Position, char*);
int DeleteEl(Position, char*);
int GarbageCollector(Position);
#endif
