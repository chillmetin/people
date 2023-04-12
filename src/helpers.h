#ifndef HELPERS_H
#define HELPERS_H

#include "constants.h"
#include <time.h> // timeof() requires time_t so must declare here also

// DATE & Time-related functions
void setTimespan(int input);
int getTimespan(void);

void getTodaysDate(int *date);
int compareDates(int *today, int *comparisonDate);
time_t timeof(int mon, int day, int yr);

// String handling
char* concatArgumentVector(int argc, char*argv[]);
char* getLowercase(char* name);

// LinkedList & Database handling
person* getLinkedListFromNAMEFILE(void);
void pushPersonToLinkedList(person * head, char* name, char* date);
void freeList(person *head);
void rewriteDirectory(person* head);
void sortLinkedListByName(person* head);


#endif