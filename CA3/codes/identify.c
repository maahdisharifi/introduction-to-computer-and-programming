#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
int identify(char *str, struct user *head, struct usersLiked *Head)
{
	// this function will identify what the user's input is;
	int i = 0;

	struct user *temp = head;
	temp = temp->next;
	char *userOrder;
	int index = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		i++;
	}

	index = i;
	userOrder = (char*) malloc(index* sizeof(char));
	memcpy(userOrder, str, sizeof(char) *index);
	userOrder[i] = '\0';

	int status;
	static struct user * account;
	if ((status = strcmp(userOrder, "signup")) == 0)
	{
		status = 1;
		char *start = strchr(str, ' ');	//find the first space in str;
		if (start == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		start++;
		char *end = strchr(start, ' ');	//find the first space in start;
		if (end == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		char *target = (char*) malloc(end - start + 1);	//target is the name between two spaces;
		memcpy(target, start, end - start + 1);
		target[end - start] = '\0';
		while (temp != NULL)
		{
			status = strcmp(temp->name, target);
			if (status == 0)
			{
				printf("this name has already taken choose something else:(\n");

				return -1;
			}

			temp = temp->next;
		}

		char *password = strrchr(str, ' ');	//find the last space in str
		if (password == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		password++;
		printf("signed up successfully\n");
		signup(head, target, password);

		return 0;
	}
	else if ((status = strcmp(userOrder, "login")) == 0)
	{
		if (head->loginCounter != 1)
		{
			// check to see if it's the first time that user is trying to login or not

			char *start = strchr(str, ' ');	//find the first space in str;
			if (start == NULL)
			{
				printf("incorrect command\n");
				return -1;
			}

			start++;
			char *end = strchr(start, ' ');	//find the first space in start;
			if (end == NULL)
			{
				printf("incorrect command\n");
				return -1;
			}

			char *target = (char*) malloc(end - start + 1);
			memcpy(target, start, end - start + 1);
			target[end - start] = '\0';
			char *password = strrchr(str, ' ');	//find the last space in str
			if (password == NULL)
			{
				printf("incorrect command\n");
				return -1;
			}

			password++;
			account = login(target, password, head);
			return 0;
		}
		else
		{
			printf("please logout and try again\n");
		}
	}
	else if ((status = strcmp(userOrder, "post")) == 0)
	{
		insertPost(account, str, head);
	}
	else if ((status = strcmp(userOrder, "logout")) == 0)
	{
		logout(account, head);
	}
	else if ((status = strcmp(userOrder, "delete")) == 0)
	{
		char *id = strchr(str, ' ');
		if (id == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		id++;
		int Id = atoi(id);

		deletePost(account, Id);
	}
	else if ((status = strcmp(userOrder, "like")) == 0)
	{
		char *start = strchr(str, ' ');	//find the first space in str;
		if (start == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		start++;
		char *end = strchr(start, ' ');	//find the first space in start;
		if (end == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		char *target = (char*) malloc(end - start + 1);
		memcpy(target, start, end - start + 1);
		target[end - start] = '\0';	// target is the username
		char *id = strrchr(str, ' ');	//find the last space in str
		if (id == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		id++;
		int Id = atoi(id);

		like(head, head->HeadPost, target, Id, Head, account);
	}
	else if ((status = strcmp(userOrder, "info")) == 0)
	{
		if (account->loginCounter == 1)
		{
			info(account);
		}
		else
		{
			printf("please login\n");
		}
	}
	else if ((status = strcmp(userOrder, "find_user")) == 0)
	{
		char *name = strchr(str, ' ');
		if (name == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		name++;
		findUser(head, name);
	}
	else
	{
		printf("i can't understand you:(\n");
	}
}