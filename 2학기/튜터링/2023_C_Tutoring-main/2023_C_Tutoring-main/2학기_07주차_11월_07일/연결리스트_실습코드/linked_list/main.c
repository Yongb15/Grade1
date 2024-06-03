#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���
typedef struct node
{
	int value;			// ����� ���� �����ϴ� ����
	struct NODE* next;	// ���� ����� �ּҸ� �����ϴ� ������ ����
}NODE;

NODE* head = NULL; // ù ����� �ּҸ� �����ϴ� ������ ����

// ��� ����
void insert_node_front(int data)
{
	NODE* new_node; // ������ ����� �ּҸ� �����ϴ� ����
	new_node = (NODE*)malloc(sizeof(NODE)); // ��� ����
	new_node->value = data;
	new_node->next = NULL;

	if (head == NULL) // ������ ��尡 ���� ��� (ù ����� ���)
	{
		head = new_node;
		return 0;
	}

	new_node->next = head;
	head = new_node;
}

// ��� ��� (��� ��ȸ)
void display_node()
{
	NODE* current_node; //�湮 ����� �ּҸ� �����ϴ� ������(8����Ʈ)

	if (head == NULL) //���� ���� �� ��尡 ���ٸ�???
	{
		printf("\n\n\t\t���Ḯ��Ʈ�� ���� ���� �ʾ� ��� �� ��尡 �����ϴ�.\n");
		return;
	}

	printf("\n\nSingly Linked List Display : ");

	// head������ : ù ����� �ּҸ� �����ϴ� ������
	current_node = head; //ù ����� �ּҸ� ����

	while (current_node->next != NULL) //�湮�� ����� ���� ��尡 �ִٸ�? �ݺ�! //������ ���� ���� ���� �ʴ´�.
	{
		printf("%d => ", current_node->value);
		current_node = current_node->next;
	}
	printf("%d\n", current_node->value); //������ ��带 ���
}

void remove_node_all()
{
	NODE* del_node;
	if (head == NULL)
	{
		printf("\n\n\t\t���� ����Ʈ�� ���� ���� �ʾ� ������ ��尡 �����ϴ�.\n");
		return;
	}

	while (head != NULL) //ù ��尡 �ִٸ�???
	{
		//ù��� ����
		del_node = head;
		head = head->next;
		free(del_node);
	}
	printf("\n\n\t\t��� ��带 �����߽��ϴ�.\n");
}

int main()
{
	int choice, data;
	while (1)
	{
		system("cls");
		printf("\n\n  *** ���� ���� ����Ʈ(Singly Linked List) ***\n\n");
		printf("=====================================\n");
		printf("1. ��� ����\n");
		printf("5. ��� ���� (free)\n");
		printf("9. ���� ���� ����Ʈ ��� (��� ��ȸ)\n");
		printf("0. ���α׷� ����\n");
		printf("=====================================\n");
		printf("\n�޴� ���� : ");
		scanf("%d", &choice);
		// while (getchar() != '\n');

		switch (choice)
		{
		case 1:
			printf("\n\n ���� �Է� : ");
			scanf("%d", &data);
			insert_node_front(data);
			break;
		case 5:
			remove_node_all();
			break;
		case 9:
			display_node();
			break;
		case 0:
			exit(0); //���α׷� ���� ����
		}
		//switch���� ���� ������ �Ͻ� ��� ��Ų��.
		printf("\n\n\t\t");
		system("pause"); //�Ͻ� ���
	}
	return 0;
}