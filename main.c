/*
 * main.c
 * This is the... main method? of heapsort. It will ask for a name and salary of (currently)
 * 5 employees. after, it will conduct heapsort in the heap.c file and print a sorted list
 * of employees
 *
 *  Created on: Jan 28, 2024
 *      Author: Tyler Higashihara
 */

#include <stdio.h>
#include "employee.h"
#include "heap.h"
#define MAX_EMPLOYEES 5 // number of employees

int main(int argc, char *argv[])
{
	Employee employees[MAX_EMPLOYEES];

	// Ask for a name and salary for each employee
	for(int i = 0; i < MAX_EMPLOYEES; i++){
		printf("Name: ");
		scanf("%s", employees[i].name);

		printf("Salary: ");
		scanf("%d", &employees[i].salary);
	}

	// Print the current list of employees
	printf("Before: ");
	printList(employees, MAX_EMPLOYEES);

	// conduct heap sort
	heapSort(employees, MAX_EMPLOYEES);

	// Print the sorted list of employees
	printf("After: ");
	printList(employees, MAX_EMPLOYEES);

	return 0;
}
