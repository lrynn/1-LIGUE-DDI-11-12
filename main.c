
// A5BGLEAGUE ClubManager  V 1.2.0 Debug

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#define MAX_LEN 30

int main()
{
	int functions;

	SetConsoleTitle(TEXT("A5BGLEAGUE Club Manager 1.2.0"));

	while (1) // ���α׷� ����
	{
		printf("\n\n----------------------------\n");
		printf("\nA5BG FOOTBALL LEAGUE 1 LIGUE DDI 12-01 ���� �Ŵ���");

		printf("\n1. �� ���� ����");
		printf("\n2. ���� ���� �߰�");
		printf("\n3. �� �� ������ ���� ����");
		printf("\n4. ���α׷� ����");
		printf("\n\n�����Ϸ��� ��� ��ȣ �Է� : ");
		scanf("%d", &functions);
		printf("\n----------------------------\n\n");

		switch (functions) {
		case 1: // �� ���� ����
		{
			printf("���α׷��� ��ġ�� ��ο� team.txt ������ �����˴ϴ�.\n�̹� �ش� ��ο� �ִ� team.txt�� ������ �ʱ�ȭ�Ǵ� �������ּ���.\n\n");

			FILE* pFile;
			char string[100];
			pFile = fopen("team.txt", "w");

			int i = 0;
			char c = 1;

			fgets(string, MAX_LEN, stdin);
			c = string[0];

			printf("���� ���� : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 30) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("�ѱ� ��Ī : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 6) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("���� �ڵ� : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 5) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("Ȩ���� �̸� : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 30) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			printf("������ (0~5, ���������� ��������) : ");
			fgets(string, MAX_LEN, stdin);
			fputc(string[0], pFile);
			fputc(';', pFile);

			printf("���� ���� (0~5, ���������� ������) : ");
			fgets(string, MAX_LEN, stdin);
			fputc(string[0], pFile);
			fputc(';', pFile);

			i = 0;
			printf("1���� ŰĿ ���ȣ : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 2) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("2���� ŰĿ ���ȣ : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 2) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("3���� ŰĿ ���ȣ : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 2) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("1���� �ڳ�ű ŰĿ ���ȣ : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 2) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("2���� �ڳ�ű ŰĿ ���ȣ : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 2) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			i = 0;
			printf("3���� �ڳ�ű ŰĿ ���ȣ : ");
			fgets(string, MAX_LEN, stdin);
			while (1) {
				c = string[i];
				if (c == '\n' || i == 2) {
					fputc(';', pFile);
					break;
				}
				fputc(c, pFile);
				++i;
			}

			fclose(pFile);

			printf("\n�� ���� ������ �Ϸ�Ǿ����ϴ�.\n�Ŵ��� ���α׷��� ���� ��ο� ������ team.txt ������ �����ϰ��� �ϴ� �� ������ ù �ٿ� �������.\n");

			int chooseloop;
			while (functions == 1) // ���� ����
			{
				printf("\n----------------------------\n");
				printf("\n1. ������ team.txt ���Ͽ� ��ϵ� �� ���� ����");
				printf("\n2. ���� ȭ������ �̵�");
				printf("\n\n�����Ϸ��� ��� ��ȣ �Է� : ");
				scanf("%d", &chooseloop);
				printf("\n----------------------------\n\n");

				switch (chooseloop)
				{
				case 1: // ������ team.txt ���Ͽ� ��ϵ� �� ���� ����
				{
					FILE* pFile;
					pFile = fopen("team.txt", "r");

					if (pFile == NULL)
						perror("���� �б� ����.\n�Ŵ��� ���α׷��� ������ ��ο� team.txt ������ �ִ��� Ȯ�����ּ���.");
					else {
						char teamname[30], korname[6], engname[5], stadium[30];
						int orgability = 0, offensivity = 0;
						int firstkicker, secondkicker, thirdkicker;
						int firstcorner, secondcorner, thirdcorner;

						i = 0;
						c = '0';

						for (i = 0; string[i] != ';'; i++) // ���� ���� �о���̱�
						{
							string[i] = fgetc(pFile);
							teamname[i] = string[i];
						}
						fgetc(pFile);

						for (i = 0; string[i] != ';'; i++) // �ѱ� ��Ī �о���̱�
						{
							string[i] = fgetc(pFile);
							korname[i] = string[i];
						}
						fgetc(pFile);

						for (i = 0; string[i] != ';'; i++) // ���� ��Ī �о���̱�
						{
							string[i] = fgetc(pFile);
							engname[i] = string[i];
						}
						fgetc(pFile);

						for (i = 0; string[i] != ';'; i++) // Ȩ���� �̸� �о���̱�
						{
							string[i] = fgetc(pFile);
							stadium[i] = string[i];
						}
						fgetc(pFile);

						orgability = fgetc(pFile); // ���� �ɷ� �о���̱�
						fgetc(pFile);

						offensivity = fgetc(pFile); // ���� ���� �о���̱�
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 1���� ŰĿ �о���̱�
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							firstkicker = string[0];
						else
							firstkicker = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 2���� ŰĿ �о���̱�
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							secondkicker = string[0];
						else
							secondkicker = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 3���� ŰĿ �о���̱�
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							thirdkicker = string[0];
						else
							thirdkicker = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 1���� �ڳ�ű ŰĿ �о���̱�
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							firstcorner = string[0];
						else
							firstcorner = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 2���� �ڳ�ű ŰĿ �о���̱�
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							secondcorner = string[0];
						else
							secondcorner = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 3���� �ڳ�ű ŰĿ �о���̱�
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							thirdcorner = string[0];
						else
							thirdcorner = string[0] * 10 + string[1];
						fgetc(pFile);

						fclose(pFile);

						printf("%s\n%s, %s\nȨ���� : %s\n�����ɷ� %d, ���ݼ��� %d (5�� ����)", teamname, korname, engname, stadium, (int)orgability, (int)offensivity);
						printf("\n1���� ŰĿ %d, 2���� ŰĿ %d, 3���� ŰĿ %d", firstkicker, secondkicker, thirdkicker);
						printf("\n1���� �ڳ�ű ŰĿ %d, 2���� �ڳ�ű ŰĿ %d, 3���� �ڳ�ű ŰĿ %d\n(���ȣ�� ǥ��)", firstcorner, secondcorner, thirdcorner);
						printf("\n\n�� ���� �о���� ����. ���͸� �Է��Ͻø� ���� ȭ������ ���ư��ϴ�.");
						system("PAUSE");
					}
					functions = 0;
					break;
				}
				case 2: // ���� ȭ������ �̵�
				{
					printf("\n\n�� ���� �о���� ����. ���͸� �Է��Ͻø� ���� ȭ������ ���ư��ϴ�.");
					system("PAUSE");
					functions = 0;
					break;
				}
				default:
					printf("���� �߻� : ������ �Է� ���� ���.\n ���͸� �Է��Ͻø� ���� ȭ������ ���ư��ϴ�.");
					system("PAUSE");
				}
			} // ���� ���� ����
		}
		case 2: // ���� ���� �߰�
		{
			break;
		}
		case 3: // �� �� ������ ���� ����
		{
			break;
		}
		case 4: // ���α׷� ����
		{
			system("PAUSE");
			return 0;
		}
		default:
			printf("���� �߻� : ������ �Է� ���� ���.\n���� ȭ������ ���ư��ϴ�.");
		} // switch �� ����
	} // ���α׷� ���� ����
}