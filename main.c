#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// A5BGLEAGUE Simulator V 1.1.3 Release

int main()
{
	SetConsoleTitle(TEXT("ZODDESLIGA Simulator 1.1.3"));
	printf("\nA5BG FOOTBALL LEAGUE ZODDESLIGA 09-10 경기 시뮬레이터");

	//홈

	int home_def_left = 0, home_def_center = 0, home_def_right = 0,
		home_mid_left = 0, home_mid_center = 0, home_mid_right = 0,
		home_for_left = 0, home_for_center = 0, home_for_right = 0;

	int home_gk = 0, home_swk = 0, home_cb = 0, home_lb = 0, home_rb = 0,
		home_dm = 0, home_lwb = 0, home_rwb = 0, home_lw = 0, home_rw = 0,
		home_cm = 0, home_clw = 0, home_crw = 0, home_ss = 0, home_st = 0;

	int sform[14];

	char home_name[30];

	printf("\n\n홈 팀 이름을 입력해주세요 : ");
	scanf(" %[^\n]", &home_name);

	printf("\n홈 팀 코드값을 입력해주세요 : ");
	for (int sformcodes = 0; sformcodes < 14; ++sformcodes) {
		scanf("%d", &sform[sformcodes]);
	}

	switch (sform[0]) { // 홈 골키퍼 관련 능력치 설정
	case 0:
		home_def_left += 3; home_def_center += 3;  home_def_right += 3;
	case 1:
		home_def_left += 2; home_def_center += 2; home_def_right += 2;
		home_mid_left += 2; home_mid_center += 2; home_mid_right += 2;
	}

	home_def_center += (2 * sform[1]); // 홈 센터백 관련 능력치 설정

	switch (sform[2]) // 홈 왼쪽 풀백 관련 능력치 설정
			case 1: home_def_left += 3;

	switch (sform[3]) // 홈 오른쪽 풀백 관련 능력치 설정
			case 1: home_def_right += 3;

	home_def_center += sform[4]; // 홈 수비형 중원 관련 능력치 설정
	home_mid_center += (3 * sform[4]);

	switch (sform[5]) // 홈 왼쪽 윙백 관련 능력치 설정
			case 1: home_def_left++; home_mid_left += 3;

	switch (sform[6]) // 홈 오른쪽 윙백 관련 능력치 설정
			case 1: home_def_right++; home_mid_right += 3;

	switch (sform[7]) // 홈 왼쪽 윙어 관련 능력치 설정
			case 1: home_mid_left += 8;

	switch (sform[8]) // 홈 오른쪽 윙어 관련 능력치 설정
			case 1: home_mid_right += 8;

	home_mid_center += (5 * sform[9]); // 홈 중원 미드필더 관련 능력치 설정

	switch (sform[10]) // 홈 공격형 왼쪽 윙어 관련 능력치 설정
			case 1: home_for_left += 10;

	switch (sform[11]) // 홈 공격형 오른쪽 윙어 관련 능력치 설정
			case 1: home_for_right += 10;

	switch (sform[12]) // 홈 세컨드 스트라이커 관련 능력치 설정
			case 1: home_mid_center += 3; home_for_center += 5;

	switch (sform[13]) // 홈 스트라이커 관련 능력치 설정
			case 1: home_for_center += 10;

	// 원정

	int away_def_left = 0, away_def_center = 0, away_def_right = 0,
		away_mid_left = 0, away_mid_center = 0, away_mid_right = 0,
		away_for_left = 0, away_for_center = 0, away_for_right = 0;

	int away_gk = 0, away_swk = 0, away_cb = 0, away_lb = 0, away_rb = 0,
		away_dm = 0, away_lwb = 0, away_rwb = 0, away_lw = 0, away_rw = 0,
		away_cm = 0, away_clw = 0, away_crw = 0, away_ss = 0, away_st = 0;

	int aform[14];

	char away_name[30];

	printf("\n\n원정 팀 이름을 입력해주세요 : ");
	scanf(" %[^\n]", &away_name);

	printf("\n원정 팀 코드값을 입력해주세요 : ");
	for (int aformcodes = 0; aformcodes < 14; ++aformcodes) {
		scanf("%d", &aform[aformcodes]);
	}

	switch (aform[0]) { // 원정 골키퍼 관련 능력치 설정
	case 0:
		away_def_left += 3; away_def_center += 3;  away_def_right += 3;
	case 1:
		away_def_left += 2; away_def_center += 2; away_def_right += 2;
		away_mid_left += 2; away_mid_center += 2; away_mid_right += 2;
	}

	away_def_center += (2 * aform[1]); // 원정 센터백 관련 능력치 설정

	switch (aform[2]) // 원정 왼쪽 풀백 관련 능력치 설정
			case 1: away_def_left += 3;

	switch (aform[3]) // 원정 오른쪽 풀백 관련 능력치 설정
			case 1: away_def_right += 3;

	away_def_center += aform[4]; // 원정 수비형 중원 관련 능력치 설정
	away_mid_center += (3 * aform[4]);

	switch (aform[5]) // 원정 왼쪽 윙백 관련 능력치 설정
			case 1: away_def_left++; away_mid_left += 3;

	switch (aform[6]) // 원정 오른쪽 윙백 관련 능력치 설정
			case 1: away_def_right++; away_mid_right += 3;

	switch (aform[7]) // 원정 왼쪽 윙어 관련 능력치 설정
			case 1: away_mid_left += 8;

	switch (aform[8]) // 원정 오른쪽 윙어 관련 능력치 설정
			case 1: away_mid_right += 8;

	away_mid_center += (5 * aform[9]); // 원정 중원 미드필더 관련 능력치 설정

	switch (aform[10]) // 원정 공격형 왼쪽 윙어 관련 능력치 설정
			case 1: away_for_left += 10;

	switch (aform[11]) // 원정 공격형 오른쪽 윙어 관련 능력치 설정
			case 1: away_for_right += 10;

	switch (aform[12]) // 원정 세컨드 스트라이커 관련 능력치 설정
			case 1: away_mid_center += 3; away_for_center += 5;

	switch (aform[13]) // 원정 스트라이커 관련 능력치 설정
			case 1: away_for_center += 10;

	printf("\n홈 팀 %s : 원정 팀 %s\n", home_name, away_name);

	// 홈 팀 경고, 퇴장

	srand(time(NULL));
	int home_yellows = 0;
	int away_yellows = 0;

	if (home_gk != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_gk_red_time = (rand() + 100) % 90;
				home_def_center -= home_gk_red_time / 30;
				home_def_left -= home_gk_red_time / 30;
				home_def_right -= home_gk_red_time / 30;
				printf("홈 골키퍼 %d분 퇴장", home_gk_red_time);
			}
		}
	}
	if (home_swk != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_swk_red_time = (rand() + 100) % 90;
				home_def_center -= home_swk_red_time / 45;
				home_def_left -= home_swk_red_time / 45;
				home_def_right -= home_swk_red_time / 45;
				home_mid_center -= home_swk_red_time / 45;
				home_mid_left -= home_swk_red_time / 45;
				home_mid_right -= home_swk_red_time / 45;
				printf("홈 골키퍼 %d분 퇴장", home_swk_red_time);
			}
		}
	}
	if (home_cb != 0) {
		for (home_cb; home_cb > 0; home_cb--) {
			if (rand() % 10 == 0) {
				home_yellows++;
				if (rand() % 10 == 0) {
					int home_cb_red_time = (rand() + 100) % 90;
					home_def_center -= home_cb_red_time / 45;
					printf("홈 센터백 %d분 퇴장", home_cb_red_time);
				}
			}
		}
	}
	if (home_lb != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_lb_red_time = (rand() + 100) % 90;
				home_def_left -= home_lb_red_time / 30;
				printf("홈 왼쪽 풀백 %d분 퇴장", home_lb_red_time);
			}
		}
	}
	if (home_rb != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_rb_red_time = (rand() + 100) % 90;
				home_def_right -= home_rb_red_time / 30;
				printf("홈 오른쪽 풀백 %d분 퇴장", home_rb_red_time);
			}
		}
	}
	if (home_dm != 0) {
		for (home_dm; home_dm > 0; home_dm--) {
			if (rand() % 10 == 0) {
				home_yellows++;
				if (rand() % 10 == 0) {
					int home_dm_red_time = (rand() + 100) % 90;
					home_def_center -= home_dm_red_time / 90;
					home_mid_center -= home_dm_red_time / 30;
					printf("홈 수비형 미드필더 %d분 퇴장", home_dm_red_time);
				}
			}
		}
	}
	if (home_lwb != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_lwb_red_time = (rand() + 100) % 90;
				home_def_left -= home_lwb_red_time / 90;
				home_mid_left -= home_lwb_red_time / 30;
				printf("홈 왼쪽 윙백 %d분 퇴장", home_lwb_red_time);
			}
		}
	}
	if (home_rwb != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_rwb_red_time = (rand() + 100) % 90;
				home_def_right -= home_rwb_red_time / 90;
				home_mid_right -= home_rwb_red_time / 30;
				printf("홈 오른쪽 윙백 %d분 퇴장", home_rwb_red_time);
			}
		}
	}
	if (home_lw != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_lw_red_time = (rand() + 100) % 90;
				home_mid_left -= home_lw_red_time / 11;
				printf("홈 왼쪽 윙어 %d분 퇴장", home_lw_red_time);
			}
		}
	}
	if (home_rw != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_rw_red_time = (rand() + 100) % 90;
				home_mid_right -= home_rw_red_time / 11;
				printf("홈 오른쪽 윙어 %d분 퇴장", home_rw_red_time);
			}
		}
	}
	if (home_cm != 0) {
		for (home_cm; home_cm > 0; home_cm--) {
			if (rand() % 10 == 0) {
				home_yellows++;
				if (rand() % 10 == 0) {
					int home_cm_red_time = (rand() + 100) % 90;
					home_mid_center -= home_cm_red_time / 14;
					printf("홈 중앙 미드필더 %d분 퇴장", home_cm_red_time);
				}
			}
		}
	}
	if (home_clw != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_clw_red_time = (rand() + 100) % 90;
				home_for_left -= home_clw_red_time / 9;
				printf("홈 왼쪽 공격형 윙어 %d분 퇴장", home_clw_red_time);
			}
		}
	}
	if (home_crw != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_crw_red_time = (rand() + 100) % 90;
				home_for_right -= home_crw_red_time / 9;
				printf("홈 오른쪽 공격형 윙어 %d분 퇴장", home_crw_red_time);
			}
		}
	}
	if (home_ss != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_ss_red_time = (rand() + 100) % 90;
				home_mid_center -= home_ss_red_time / 30;
				home_for_center -= home_ss_red_time / 14;
				printf("홈 세컨드 스트라이커 %d분 퇴장", home_ss_red_time);
			}
		}
	}
	if (home_st != 0) {
		if (rand() % 10 == 0) {
			home_yellows++;
			if (rand() % 10 == 0) {
				int home_st_red_time = (rand() + 100) % 90;
				home_for_center -= home_st_red_time / 9;
				printf("홈 스트라이커 %d분 퇴장", home_st_red_time);
			}
		}
	}

	// 원정 경고, 퇴장

	if (away_gk != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_gk_red_time = (rand() + 100) % 90;
				away_def_center -= away_gk_red_time / 30;
				away_def_left -= away_gk_red_time / 30;
				away_def_right -= away_gk_red_time / 30;
				printf("원정 골키퍼 %d분 퇴장", away_gk_red_time);
			}
		}
	}
	if (away_swk != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_swk_red_time = (rand() + 100) % 90;
				away_def_center -= away_swk_red_time / 45;
				away_def_left -= away_swk_red_time / 45;
				away_def_right -= away_swk_red_time / 45;
				away_mid_center -= away_swk_red_time / 45;
				away_mid_left -= away_swk_red_time / 45;
				away_mid_right -= away_swk_red_time / 45;
				printf("원정 골키퍼 %d분 퇴장", away_swk_red_time);
			}
		}
	}
	if (away_cb != 0) {
		for (away_cb; away_cb > 0; away_cb--) {
			if (rand() % 10 == 0) {
				away_yellows++;
				if (rand() % 10 == 0) {
					int away_cb_red_time = (rand() + 100) % 90;
					away_def_center -= away_cb_red_time / 45;
					printf("원정 센터백 %d분 퇴장", away_cb_red_time);
				}
			}
		}
	}
	if (away_lb != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_lb_red_time = (rand() + 100) % 90;
				away_def_left -= away_lb_red_time / 30;
				printf("원정 왼쪽 풀백 %d분 퇴장", away_lb_red_time);
			}
		}
	}
	if (away_rb != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_rb_red_time = (rand() + 100) % 90;
				away_def_right -= away_rb_red_time / 30;
				printf("원정 오른쪽 풀백 %d분 퇴장", away_rb_red_time);
			}
		}
	}
	if (away_dm != 0) {
		for (away_dm; away_dm > 0; away_dm--) {
			if (rand() % 10 == 0) {
				away_yellows++;
				if (rand() % 10 == 0) {
					int away_dm_red_time = (rand() + 100) % 90;
					away_def_center -= away_dm_red_time / 90;
					away_mid_center -= away_dm_red_time / 30;
					printf("원정 수비형 미드필더 %d분 퇴장", away_dm_red_time);
				}
			}
		}
	}
	if (away_lwb != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_lwb_red_time = (rand() + 100) % 90;
				away_def_left -= away_lwb_red_time / 90;
				away_mid_left -= away_lwb_red_time / 30;
				printf("원정 왼쪽 윙백 %d분 퇴장", away_lwb_red_time);
			}
		}
	}
	if (away_rwb != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_rwb_red_time = (rand() + 100) % 90;
				away_def_right -= away_rwb_red_time / 90;
				away_mid_right -= away_rwb_red_time / 30;
				printf("원정 오른쪽 윙백 %d분 퇴장", away_rwb_red_time);
			}
		}
	}
	if (away_lw != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_lw_red_time = (rand() + 100) % 90;
				away_mid_left -= away_lw_red_time / 11;
				printf("원정 왼쪽 윙어 %d분 퇴장", away_lw_red_time);
			}
		}
	}
	if (away_rw != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_rw_red_time = (rand() + 100) % 90;
				away_mid_right -= away_rw_red_time / 11;
				printf("원정 오른쪽 윙어 %d분 퇴장", away_rw_red_time);
			}
		}
	}
	if (away_cm != 0) {
		for (away_cm; away_cm > 0; away_cm--) {
			if (rand() % 10 == 0) {
				away_yellows++;
				if (rand() % 10 == 0) {
					int away_cm_red_time = (rand() + 100) % 90;
					away_mid_center -= away_cm_red_time / 14;
					printf("원정 중앙 미드필더 %d분 퇴장", away_cm_red_time);
				}
			}
		}
	}
	if (away_clw != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_clw_red_time = (rand() + 100) % 90;
				away_for_left -= away_clw_red_time / 9;
				printf("원정 왼쪽 공격형 윙어 %d분 퇴장", away_clw_red_time);
			}
		}
	}
	if (away_crw != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_crw_red_time = (rand() + 100) % 90;
				away_for_right -= away_crw_red_time / 9;
				printf("원정 오른쪽 공격형 윙어 %d분 퇴장", away_crw_red_time);
			}
		}
	}
	if (away_ss != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_ss_red_time = (rand() + 100) % 90;
				away_mid_center -= away_ss_red_time / 30;
				away_for_center -= away_ss_red_time / 14;
				printf("원정 세컨드 스트라이커 %d분 퇴장", away_ss_red_time);
			}
		}
	}
	if (away_st != 0) {
		if (rand() % 10 == 0) {
			away_yellows++;
			if (rand() % 10 == 0) {
				int away_st_red_time = (rand() + 100) % 90;
				away_for_center -= away_st_red_time / 9;
				printf("원정 스트라이커 %d분 퇴장", away_st_red_time);
			}
		}
	}

	// 홈 점유율

	float share_left = (float)home_mid_left / ((float)home_mid_left + (float)away_mid_left);
	float share_center = (float)home_mid_center / ((float)home_mid_center + (float)away_mid_center);
	float share_right = (float)home_mid_right / ((float)home_mid_right + (float)away_mid_right);

	int home_offense_left = (home_for_left - away_def_left) * share_left;
	int away_offense_left = (home_for_left - away_def_left - 1) * (1 - share_left);

	int home_offense_center = (home_for_center - away_def_center) * share_center;
	int away_offense_center = (away_for_center - home_def_center - 1) * (1 - share_center);

	int home_offense_right = (home_for_right - away_def_right) * share_right;
	int away_offense_right = (away_for_right - home_def_right - 1) * (1 - share_right);

	if (home_offense_center < 0)
		home_offense_center = 0;
	if (home_offense_left < 0)
		home_offense_left = 0;
	if (home_offense_right < 0)
		home_offense_right = 0;

	if (away_offense_center < 0)
		away_offense_center = 0;
	if (away_offense_left < 0)
		away_offense_left = 0;
	if (away_offense_right < 0)
		away_offense_right = 0;

	int home_goals = 0, away_goals = 0;
	int goal;

	// 홈 골 계산
	for (home_offense_left; home_offense_left > 0; home_offense_left--) {
		goal = rand() % 3;
		if (goal == 0)
			home_goals++;
	}
	for (home_offense_center; home_offense_center > 0; home_offense_center--) {
		goal = rand() % 3;
		if (goal == 0)
			home_goals++;
	}
	for (home_offense_right; home_offense_right > 0; home_offense_right--) {
		goal = rand() % 3;
		if (goal == 0)
			home_goals++;
	}

	// 원정 골 계산
	for (away_offense_left; away_offense_left > 0; away_offense_left--) {
		goal = rand() % 3;
		if (goal == 0)
			away_goals++;
	}
	for (away_offense_center; away_offense_center > 0; away_offense_center--) {
		goal = rand() % 3;
		if (goal == 0)
			away_goals++;
	}
	for (away_offense_right; away_offense_right > 0; away_offense_right--) {
		goal = rand() % 3;
		if (goal == 0)
			away_goals++;
	}

	printf("\n\nRESULTS");
	printf("\n%s %d : %d %s\n", home_name, home_goals, away_goals, away_name);
	if (home_goals > away_goals)
		printf("\n홈 팀 %s 승\n승점 +3, 골득실 +%d", home_name, home_goals - away_goals);
	else if (home_goals < away_goals)
		printf("\n원정 팀 %s 승\n승점 +3, 골득실 +%d", away_name, away_goals - home_goals);
	else
		printf("\n무승부\n양측 승점 +1");

	system("PAUSE");
	return 0;
}
