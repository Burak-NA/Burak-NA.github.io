---
title: " Grades Attendance Program!"
date: `2025-03-14`
---

This is a program that says whether the student pass or failed the lecture.

  
```c
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int grade,attendance;
	
	printf("Enter how many weeks you attended to this lecture>");
	scanf("%d", &attendance);

	if(attendance <= 5){
		printf("You failed the lecture!");
		abort();
	}
	else{ 
	   printf("Enter your grade>");
		scanf("%d", &grade);	
		if((grade>=60 && attendance>=8) || (grade>=70 && attendance>=6))
			printf("You passed the lecture!");
		else     
			printf("You failed the lecture.");
}

	return 0;
}

```
