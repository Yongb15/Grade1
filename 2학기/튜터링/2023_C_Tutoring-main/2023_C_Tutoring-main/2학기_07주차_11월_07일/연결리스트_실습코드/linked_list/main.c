#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 노드
typedef struct node
{
	int value;			// 노드의 값을 저장하는 변수
	struct NODE* next;	// 다음 노드의 주소를 저장하는 포인터 변수
}NODE;

NODE* head = NULL; // 첫 노드의 주소를 저장하는 포인터 변수

// 노드 삽입
void insert_node_front(int data)
{
	NODE* new_node; // 생성된 노드의 주소를 저장하는 변수
	new_node = (NODE*)malloc(sizeof(NODE)); // 노드 생성
	new_node->value = data;
	new_node->next = NULL;

	if (head == NULL) // 생성된 노드가 없는 경우 (첫 노드인 경우)
	{
		head = new_node;
		return 0;
	}

	new_node->next = head;
	head = new_node;
}

// 노드 출력 (노드 순회)
void display_node()
{
	NODE* current_node; //방문 노드의 주소를 저장하는 포인터(8바이트)

	if (head == NULL) //아직 연결 된 노드가 없다면???
	{
		printf("\n\n\t\t연결리스트가 구성 되지 않아 출력 할 노드가 없습니다.\n");
		return;
	}

	printf("\n\nSingly Linked List Display : ");

	// head포인터 : 첫 노드의 주소를 저장하는 포인터
	current_node = head; //첫 노드의 주소를 저장

	while (current_node->next != NULL) //방문한 노드의 다음 노드가 있다면? 반복! //마지막 노드는 포함 되지 않는다.
	{
		printf("%d => ", current_node->value);
		current_node = current_node->next;
	}
	printf("%d\n", current_node->value); //마지막 노드를 출력
}

void remove_node_all()
{
	NODE* del_node;
	if (head == NULL)
	{
		printf("\n\n\t\t연결 리스트가 구성 되지 않아 삭제할 노드가 없습니다.\n");
		return;
	}

	while (head != NULL) //첫 노드가 있다면???
	{
		//첫노드 제거
		del_node = head;
		head = head->next;
		free(del_node);
	}
	printf("\n\n\t\t모든 노드를 제거했습니다.\n");
}

int main()
{
	int choice, data;
	while (1)
	{
		system("cls");
		printf("\n\n  *** 단일 연결 리스트(Singly Linked List) ***\n\n");
		printf("=====================================\n");
		printf("1. 노드 삽입\n");
		printf("5. 노드 삭제 (free)\n");
		printf("9. 단일 연결 리스트 출력 (노드 순회)\n");
		printf("0. 프로그램 종료\n");
		printf("=====================================\n");
		printf("\n메뉴 선택 : ");
		scanf("%d", &choice);
		// while (getchar() != '\n');

		switch (choice)
		{
		case 1:
			printf("\n\n 정수 입력 : ");
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
			exit(0); //프로그램 강제 종료
		}
		//switch문을 빠져 나오면 일시 대기 시킨다.
		printf("\n\n\t\t");
		system("pause"); //일시 대기
	}
	return 0;
}