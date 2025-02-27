#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
void logout(struct user *account, struct user *head)
{
	if (head->loginCounter == 1)
	{
		head->loginCounter = 0;
		printf("successful logout\n");
	}
	else
	{
		printf("please login first\n");
	}
}