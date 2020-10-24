
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

	while (1) // 프로그램 루프
	{
		printf("\n\n----------------------------\n");
		printf("\nA5BG FOOTBALL LEAGUE 1 LIGUE DDI 12-01 구단 매니저");

		printf("\n1. 팀 정보 변경");
		printf("\n2. 선수 정보 추가");
		printf("\n3. 팀 및 선수단 정보 보기");
		printf("\n4. 프로그램 종료");
		printf("\n\n실행하려는 기능 번호 입력 : ");
		scanf("%d", &functions);
		printf("\n----------------------------\n\n");

		switch (functions) {
		case 1: // 팀 정보 변경
		{
			printf("프로그램이 설치된 경로에 team.txt 파일이 생성됩니다.\n이미 해당 경로에 있는 team.txt는 내용이 초기화되니 유의해주세요.\n\n");

			FILE* pFile;
			char string[100];
			pFile = fopen("team.txt", "w");

			int i = 0;
			char c = 1;

			fgets(string, MAX_LEN, stdin);
			c = string[0];

			printf("정식 팀명 : ");
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
			printf("한글 약칭 : ");
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
			printf("영어 코드 : ");
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
			printf("홈구장 이름 : ");
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

			printf("조직력 (0~5, 높아질수록 조직주의) : ");
			fgets(string, MAX_LEN, stdin);
			fputc(string[0], pFile);
			fputc(';', pFile);

			printf("공격 성향 (0~5, 높아질수록 공격적) : ");
			fgets(string, MAX_LEN, stdin);
			fputc(string[0], pFile);
			fputc(';', pFile);

			i = 0;
			printf("1순위 키커 등번호 : ");
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
			printf("2순위 키커 등번호 : ");
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
			printf("3순위 키커 등번호 : ");
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
			printf("1순위 코너킥 키커 등번호 : ");
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
			printf("2순위 코너킥 키커 등번호 : ");
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
			printf("3순위 코너킥 키커 등번호 : ");
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

			printf("\n팀 정보 설정이 완료되었습니다.\n매니저 프로그램과 같은 경로에 생성된 team.txt 파일을 수정하고자 하는 팀 파일의 첫 줄에 덮어쓰세요.\n");

			int chooseloop;
			while (functions == 1) // 선택 루프
			{
				printf("\n----------------------------\n");
				printf("\n1. 생성된 team.txt 파일에 기록된 팀 정보 보기");
				printf("\n2. 메인 화면으로 이동");
				printf("\n\n실행하려는 기능 번호 입력 : ");
				scanf("%d", &chooseloop);
				printf("\n----------------------------\n\n");

				switch (chooseloop)
				{
				case 1: // 생성된 team.txt 파일에 기록된 팀 정보 보기
				{
					FILE* pFile;
					pFile = fopen("team.txt", "r");

					if (pFile == NULL)
						perror("파일 읽기 실패.\n매니저 프로그램과 동일한 경로에 team.txt 파일이 있는지 확인해주세요.");
					else {
						char teamname[30], korname[6], engname[5], stadium[30];
						int orgability = 0, offensivity = 0;
						int firstkicker, secondkicker, thirdkicker;
						int firstcorner, secondcorner, thirdcorner;

						i = 0;
						c = '0';

						for (i = 0; string[i] != ';'; i++) // 정식 팀명 읽어들이기
						{
							string[i] = fgetc(pFile);
							teamname[i] = string[i];
						}
						fgetc(pFile);

						for (i = 0; string[i] != ';'; i++) // 한글 약칭 읽어들이기
						{
							string[i] = fgetc(pFile);
							korname[i] = string[i];
						}
						fgetc(pFile);

						for (i = 0; string[i] != ';'; i++) // 영어 약칭 읽어들이기
						{
							string[i] = fgetc(pFile);
							engname[i] = string[i];
						}
						fgetc(pFile);

						for (i = 0; string[i] != ';'; i++) // 홈구장 이름 읽어들이기
						{
							string[i] = fgetc(pFile);
							stadium[i] = string[i];
						}
						fgetc(pFile);

						orgability = fgetc(pFile); // 조직 능력 읽어들이기
						fgetc(pFile);

						offensivity = fgetc(pFile); // 공격 성향 읽어들이기
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 1순위 키커 읽어들이기
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							firstkicker = string[0];
						else
							firstkicker = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 2순위 키커 읽어들이기
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							secondkicker = string[0];
						else
							secondkicker = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 3순위 키커 읽어들이기
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							thirdkicker = string[0];
						else
							thirdkicker = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 1순위 코너킥 키커 읽어들이기
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							firstcorner = string[0];
						else
							firstcorner = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 2순위 코너킥 키커 읽어들이기
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							secondcorner = string[0];
						else
							secondcorner = string[0] * 10 + string[1];
						fgetc(pFile);

						for (i = 0, string[1] == NULL; string[i] != ';'; i++) // 3순위 코너킥 키커 읽어들이기
							string[i] = fgetc(pFile);
						if (string[1] == NULL)
							thirdcorner = string[0];
						else
							thirdcorner = string[0] * 10 + string[1];
						fgetc(pFile);

						fclose(pFile);

						printf("%s\n%s, %s\n홈구장 : %s\n조직능력 %d, 공격성향 %d (5점 만점)", teamname, korname, engname, stadium, (int)orgability, (int)offensivity);
						printf("\n1순위 키커 %d, 2순위 키커 %d, 3순위 키커 %d", firstkicker, secondkicker, thirdkicker);
						printf("\n1순위 코너킥 키커 %d, 2순위 코너킥 키커 %d, 3순위 코너킥 키커 %d\n(등번호로 표기)", firstcorner, secondcorner, thirdcorner);
						printf("\n\n팀 정보 읽어오기 성공. 엔터를 입력하시면 메인 화면으로 돌아갑니다.");
						system("PAUSE");
					}
					functions = 0;
					break;
				}
				case 2: // 메인 화면으로 이동
				{
					printf("\n\n팀 정보 읽어오기 성공. 엔터를 입력하시면 메인 화면으로 돌아갑니다.");
					system("PAUSE");
					functions = 0;
					break;
				}
				default:
					printf("오류 발생 : 지정된 입력 범위 벗어남.\n 엔터를 입력하시면 선택 화면으로 돌아갑니다.");
					system("PAUSE");
				}
			} // 선택 루프 종료
		}
		case 2: // 선수 정보 추가
		{
			break;
		}
		case 3: // 팀 및 선수단 정보 보기
		{
			break;
		}
		case 4: // 프로그램 종료
		{
			system("PAUSE");
			return 0;
		}
		default:
			printf("오류 발생 : 지정된 입력 범위 벗어남.\n메인 화면으로 돌아갑니다.");
		} // switch 문 종료
	} // 프로그램 루프 종료
}