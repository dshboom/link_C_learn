#include<stdio.h>
#include<stdlib.h>

void welcome();
int menu(int *choose);
void link_add();
void link_single_del();
void link_all_del();
int end();

int main()
{
	int choose = 0;
	int state_menu = -1;
	do
	{
		state_menu = menu(&choose);
	}
	while(state_menu != -1);
	// printf("The var 'choose' is:%d",choose); // This is a test.
	
	system("pause");
	return 0;
}

void welcome()
{
	printf("------�������------\n");
}
int menu(int *choose)
{
	int state;
	printf("------�������------\n");
	printf("1.���ӽڵ�\n");
	printf("2.ɾ���ڵ�\n");
	printf("3.ɾ������\n");
	printf("0.�˳�����\n");
	printf("---------------------\n");
	printf("����:");
	scanf("%d",choose);
	switch(*choose)
	{
		case 1:
			link_add();
			break;
		case 2:
			link_single_del();
			break;
		case 3:
			link_all_del();
			break;
		case 0:
			state = end();
			if(state != 0)
			{
				return 1;
			}
			break;
		default:
			printf("test... ...\n");
	}
}
void link_add()
{
	// TODO
}
void link_single_del()
{
	// TODO
}
void link_all_del()
{
	// TODO
}
int end()
{
	char is_exit;
	int state_Error = 0;
	system("cls");
	Error_input:
	if(state_Error == 0)
	{
		printf("��ȷ��Ҫ�˳�������(Y/N):");
	}
	else
	{
		printf("�������,���ٴ�����:(Y/N):");
	}
	fflush(stdin);
	scanf("%c",&is_exit);
	if(is_exit == 'Y' || is_exit == 'y')
	{
		printf("��лʹ�ã������˳���\n"); 
		exit(0);
	}
	else if(is_exit == 'N' || is_exit == 'n')
	{
		system("cls");
		return 1;
	}
	else
	{
		state_Error = 1;
		goto Error_input; 
	}
}
