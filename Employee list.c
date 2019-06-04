#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

struct emp
{
	int rn, id, ph;
	char add[30], na[20], d[15], in[5];
	struct emp *next;
}*h = NULL, *p, *q, *t;


void add()
{
	int ts=0;
	system("cls");

	p = (struct emp*)malloc(sizeof(struct emp));

	printf("\nEnter the Initials of Employee : ");
	scanf("%s", &p->in);
	printf("\nEnter the Last Name of Employee : ");
	scanf("%s", &p->na);
	printf("\nEnter the ID of Employee : ");
	scanf("%d", &p->id);
	printf("\nEnter the Roll No. of Employee : ");
	scanf("%d", &p->rn);
	printf("\nEnter the role of Employee : ");
	scanf("%s", &p->add);
	printf("\nEnter the salary of Employee: ");
	scanf("%d", &p->ph);
	
	

	p->next = NULL;

	if (h == NULL)
	{
		h = p;
	}
	else
	{
		q = h;
		while (q->next != NULL)
			q = q->next;
		q->next = p;
	}
	ts++;
}

void addAt(int r)
{
	int ts=0;
	q = h;
	while (q->rn != r || q == NULL)
		q = q->next;
	if (q->rn == r)
	{
		system("cls");
		p = (struct emp *)malloc(sizeof(struct emp));
		printf("\nEnter the Initials of Employee : ");
		scanf("%s", &p->in);
		printf("\nEnter the Last Name of Employee : ");
		scanf("%s", &p->na);
		printf("\nEnter the ID of Employee : ");
		scanf("%d", &p->id);
		printf("\nEnter the Roll No. of Employee : ");
		scanf("%d", &p->rn);
		printf("\nEnter Employee's role : ");
		scanf("%s", &p->add);
		printf("\nEnter monthly salary of employee : ");
		scanf("%d", &p->ph);
		
		p->next = q->next;
		q->next = p;
		ts++;
	}
	else
	{
		printf("\n\nRecord Not Found.");
	}
}


void delAt(int r)
{
	int ts=0;
	q = h;
	while ((q->next)->rn != r || q == NULL)
		q = q->next;
	if ((q->next)->rn == r)
	{
		q->next = (q->next)->next;
		printf("\n\nRecord Deleted.");
		ts--;
	}
	else
		printf("\n\nRecord Not Found.");
}




void search(char ni[5])
{
	int flag = 0;
	q = h;
	system("cls");
	while (q != NULL)
	{
		if (_stricmp(q->in, ni) == 0)
		{
			flag = 1;
			printf("\n\nInitals of Employee :   %s ", q->in);
			printf("\n\nLast Name of Employee : %s ", q->na);
			printf("\n\nID of Employee :        %d ", q->id);
			printf("\n\nRoll No. of Employee :  %d", q->rn);
			printf("\n\n Role of Employee :   %s", q->add);
			printf("\n\n Salary of Employee :    %d", q->ph);
			
			printf("\n\n\n");
		}
		q = q->next;
	}
	if (flag == 0)
		printf("\n\nNo Match Found.");
}

/*void sort()
{
	int result;
	p = h;
	while (p != NULL)
	{
		q = h;
		while (q != NULL)

		{
			result = _stricmp(q->in, q->next);
			if (result > 0 )
			{
				strcpy(t->in, q->in);
				strcpy(t->na, q->na);
				t->id = q->id;
				t->rn = q->rn;
				t->ph = q->ph;
				strcpy(t->add, q->add);
				strcpy(t->d, q->d);


				strcpy(q->in, (q->next)->in);
				strcpy(q->na, (q->next)->na);
				q->id = (q->next)->id;
				q->rn = (q->next)->rn;
				q->ph = (q->next)->ph;
				strcpy(q->add, (q->next)->add);
				strcpy(q->d, (q->next)->d);

				strcpy((q->next)->in, t->in);
				strcpy((q->next)->na, t->na);
				(q->next)->id = t->id;
				(q->next)->rn = t->rn;
				(q->next)->ph = t->ph;
				strcpy((q->next)->add, t->add);
				strcpy((q->next)->d, t->d);

			}
			q = q->next;
		}
		p = p->next;
	}

}*/

void disp()
{
	p = h;
	system("cls");
	while (p != NULL)
	{
		printf("\nInitals of Employee :   %s ", p->in);
		printf("\nName Employee :      %s ", p->na);
		printf("\nID of Employee :        %d ", p->id);
		printf("\nRoll No. of Employee :  %d", p->rn);
		printf("\n Role of Employee:   %s", p->add);
		printf("\nMonthly salary of Employee :    %d", p->ph);
		
		printf("\n\n");
		p = p->next;
	}
}

void main()
{
	int ch = 0, r;
	char ni[5];
	system("cls");
	while (ch != 8)
	{
		system("cls");
		printf("1.Add the Record.\n\n2.Add Record at Locn.\n\n3.Delete Record.");
		printf("\n\n4.Search Record.\n\n5.Sort Records.");
		printf("\n\n6.Display\n\n7.Exit");
		printf("\n\nEnter the Choice: ");
		scanf_s("%d", &ch);
		switch (ch)
		{
		case 1:
			add();
			break;

		case 2:
			printf("\nEnter the Roll No. : ");
			scanf_s("%d", &r);
			addAt(r);
			break;

		case 3:
			printf("\nEnter the Roll No. : ");
			scanf_s("%d", &r);
			delAt(r);
			break;

		

		case 4:
			printf("\nEnter the Initials : ");
			scanf("%s", &ni);
			search(ni);
			break;

		case 5:
			
			printf("\n\nSorted");
			break;
		case 6:
			disp();
			break;
		}
		_getch();
	}
	_getch();
}
