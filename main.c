#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// A5BGLEAGUE Simulator V 1.1.0 RC1

int main()
{
	printf("\nA5BG FOOTBALL LEAGUE ZODDESLIGA 09-10");
	printf("\n��� �ùķ����� 1.1.0 Release");

	//Ȩ

	int home_def_left = 0, home_def_center = 0, home_def_right = 0,
		home_mid_left = 0, home_mid_center = 0, home_mid_right = 0,
		home_for_left = 0, home_for_center = 0, home_for_right = 0;

	int home_gk = 0, home_swk = 0, home_cb = 0, home_lb = 0, home_rb = 0,
		home_dm = 0, home_lwb = 0, home_rwb = 0, home_lw = 0, home_rw = 0,
		home_cm = 0, home_clw = 0, home_crw = 0, home_ss = 0, home_st = 0;

	int sform[14];

	char home_name[30];

	printf("\n\nȨ �� �̸��� �Է����ּ��� : ");
	scanf(" %[^\n]", &home_name);

	printf("\nȨ �� �ڵ尪�� �Է����ּ��� : ");
	for (int sformcodes = 0; sformcodes < 14; ++sformcodes) {
		scanf("%d", &sform[sformcodes]);
	}

	switch (sform[0]) { // Ȩ ��Ű�� ���� �ɷ�ġ ����
	case 0:
		home_def_left += 3; home_def_center += 3;  home_def_right += 3;
	case 1:
		home_def_left += 2; home_def_center += 2; home_def_right += 2;
		home_mid_left += 2; home_mid_center += 2; home_mid_right += 2;
	}

	home_def_center += (2 * sform[1]); // Ȩ ���͹� ���� �ɷ�ġ ����

	switch (sform[2]) // Ȩ ���� Ǯ�� ���� �ɷ�ġ ����
			case 1: home_def_left += 3;

	switch (sform[3]) // Ȩ ������ Ǯ�� ���� �ɷ�ġ ����
			case 1: home_def_right += 3;

	home_def_center += sform[4]; // Ȩ ������ �߿� ���� �ɷ�ġ ����
	home_mid_center += (3 * sform[4]);

	switch (sform[5]) // Ȩ ���� ���� ���� �ɷ�ġ ����
			case 1: home_def_left++; home_mid_left += 3;

	switch (sform[6]) // Ȩ ������ ���� ���� �ɷ�ġ ����
			case 1: home_def_right++; home_mid_right += 3;

	switch (sform[7]) // Ȩ ���� ���� ���� �ɷ�ġ ����
			case 1: home_mid_left += 8;

	switch (sform[8]) // Ȩ ������ ���� ���� �ɷ�ġ ����
			case 1: home_mid_right += 8;

	home_mid_center += (5 * sform[9]); // Ȩ �߿� �̵��ʴ� ���� �ɷ�ġ ����

	switch (sform[10]) // Ȩ ������ ���� ���� ���� �ɷ�ġ ����
			case 1: home_for_left += 10;

	switch (sform[11]) // Ȩ ������ ������ ���� ���� �ɷ�ġ ����
			case 1: home_for_right += 10;

	switch (sform[12]) // Ȩ ������ ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: home_mid_center += 3; home_for_center += 5;

	switch (sform[13]) // Ȩ ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: home_for_center += 10;

	// ����

	int away_def_left = 0, away_def_center = 0, away_def_right = 0,
		away_mid_left = 0, away_mid_center = 0, away_mid_right = 0,
		away_for_left = 0, away_for_center = 0, away_for_right = 0;

	int away_gk = 0, away_swk = 0, away_cb = 0, away_lb = 0, away_rb = 0,
		away_dm = 0, away_lwb = 0, away_rwb = 0, away_lw = 0, away_rw = 0,
		away_cm = 0, away_clw = 0, away_crw = 0, away_ss = 0, away_st = 0;

	int aform[14];

	char away_name[30];

	printf("\n\n���� �� �̸��� �Է����ּ��� : ");
	scanf(" %[^\n]", &away_name);

	printf("\n���� �� �ڵ尪�� �Է����ּ��� : ");
	for (int aformcodes = 0; aformcodes < 14; ++aformcodes) {
		scanf("%d", &aform[aformcodes]);
	}

	switch (aform[0]) { // ���� ��Ű�� ���� �ɷ�ġ ����
	case 0:
		away_def_left += 3; away_def_center += 3;  away_def_right += 3;
	case 1:
		away_def_left += 2; away_def_center += 2; away_def_right += 2;
		away_mid_left += 2; away_mid_center += 2; away_mid_right += 2;
	}

	away_def_center += (2 * aform[1]); // ���� ���͹� ���� �ɷ�ġ ����

	switch (aform[2]) // ���� ���� Ǯ�� ���� �ɷ�ġ ����
			case 1: away_def_left += 3;

	switch (aform[3]) // ���� ������ Ǯ�� ���� �ɷ�ġ ����
			case 1: away_def_right += 3;

	away_def_center += aform[4]; // ���� ������ �߿� ���� �ɷ�ġ ����
	away_mid_center += (3 * aform[4]);

	switch (aform[5]) // ���� ���� ���� ���� �ɷ�ġ ����
			case 1: away_def_left++; away_mid_left += 3;

	switch (aform[6]) // ���� ������ ���� ���� �ɷ�ġ ����
			case 1: away_def_right++; away_mid_right += 3;

	switch (aform[7]) // ���� ���� ���� ���� �ɷ�ġ ����
			case 1: away_mid_left += 8;

	switch (aform[8]) // ���� ������ ���� ���� �ɷ�ġ ����
			case 1: away_mid_right += 8;

	away_mid_center += (5 * aform[9]); // ���� �߿� �̵��ʴ� ���� �ɷ�ġ ����

	switch (aform[10]) // ���� ������ ���� ���� ���� �ɷ�ġ ����
			case 1: away_for_left += 10;

	switch (aform[11]) // ���� ������ ������ ���� ���� �ɷ�ġ ����
			case 1: away_for_right += 10;

	switch (aform[12]) // ���� ������ ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: away_mid_center += 3; away_for_center += 5;

	switch (aform[13]) // ���� ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: away_for_center += 10;

	printf("Ȩ �� %s : ���� �� %s\n\n", home_name, away_name);

	// Ȩ �� ���, ����

	int random = rand(time(NULL));
	int home_yellows = 0;
	int away_yellows = 0;

	if (home_gk != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_gk_red_time = (rand(random) + 100) % 90;
				home_def_center -= home_gk_red_time / 30;
				home_def_left -= home_gk_red_time / 30;
				home_def_right -= home_gk_red_time / 30;
				printf("Ȩ ��Ű�� %d�� ����", home_gk_red_time);
			}
		}
	}
	if (home_swk != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_swk_red_time = (rand(random) + 100) % 90;
				home_def_center -= home_swk_red_time / 45;
				home_def_left -= home_swk_red_time / 45;
				home_def_right -= home_swk_red_time / 45;
				home_mid_center -= home_swk_red_time / 45;
				home_mid_left -= home_swk_red_time / 45;
				home_mid_right -= home_swk_red_time / 45;
				printf("Ȩ ��Ű�� %d�� ����", home_swk_red_time);
			}
		}
	}
	if (home_cb != 0) {
		for (home_cb; home_cb > 0; home_cb--) {
			if (rand(random) % 10 == 0) {
				home_yellows++;
				++random;
				if (rand(random) % 10 == 0) {
					int home_cb_red_time = (rand(random) + 100) % 90;
					home_def_center -= home_cb_red_time / 45;
					printf("Ȩ ���͹� %d�� ����", home_cb_red_time);
				}
			}
		}
	}
	if (home_lb != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_lb_red_time = (rand(random) + 100) % 90;
				home_def_left -= home_lb_red_time / 30;
				printf("Ȩ ���� Ǯ�� %d�� ����", home_lb_red_time);
			}
		}
	}
	if (home_rb != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_rb_red_time = (rand(random) + 100) % 90;
				home_def_right -= home_rb_red_time / 30;
				printf("Ȩ ������ Ǯ�� %d�� ����", home_rb_red_time);
			}
		}
	}
	if (home_dm != 0) {
		for (home_dm; home_dm > 0; home_dm--) {
			if (rand(random) % 10 == 0) {
				home_yellows++;
				++random;
				if (rand(random) % 10 == 0) {
					int home_dm_red_time = (rand(random) + 100) % 90;
					home_def_center -= home_dm_red_time / 90;
					home_mid_center -= home_dm_red_time / 30;
					printf("Ȩ ������ �̵��ʴ� %d�� ����", home_dm_red_time);
				}
			}
		}
	}
	if (home_lwb != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_lwb_red_time = (rand(random) + 100) % 90;
				home_def_left -= home_lwb_red_time / 90;
				home_mid_left -= home_lwb_red_time / 30;
				printf("Ȩ ���� ���� %d�� ����", home_lwb_red_time);
			}
		}
	}
	if (home_rwb != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_rwb_red_time = (rand(random) + 100) % 90;
				home_def_right -= home_rwb_red_time / 90;
				home_mid_right -= home_rwb_red_time / 30;
				printf("Ȩ ������ ���� %d�� ����", home_rwb_red_time);
			}
		}
	}
	if (home_lw != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_lw_red_time = (rand(random) + 100) % 90;
				home_mid_left -= home_lw_red_time / 11;
				printf("Ȩ ���� ���� %d�� ����", home_lw_red_time);
			}
		}
	}
	if (home_rw != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_rw_red_time = (rand(random) + 100) % 90;
				home_mid_right -= home_rw_red_time / 11;
				printf("Ȩ ������ ���� %d�� ����", home_rw_red_time);
			}
		}
	}
	if (home_cm != 0) {
		for (home_cm; home_cm > 0; home_cm--) {
			if (rand(random) % 10 == 0) {
				home_yellows++;
				++random;
				if (rand(random) % 10 == 0) {
					int home_cm_red_time = (rand(random) + 100) % 90;
					home_mid_center -= home_cm_red_time / 14;
					printf("Ȩ �߾� �̵��ʴ� %d�� ����", home_cm_red_time);
				}
			}
		}
	}
	if (home_clw != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_clw_red_time = (rand(random) + 100) % 90;
				home_for_left -= home_clw_red_time / 9;
				printf("Ȩ ���� ������ ���� %d�� ����", home_clw_red_time);
			}
		}
	}
	if (home_crw != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_crw_red_time = (rand(random) + 100) % 90;
				home_for_right -= home_crw_red_time / 9;
				printf("Ȩ ������ ������ ���� %d�� ����", home_crw_red_time);
			}
		}
	}
	if (home_ss != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_ss_red_time = (rand(random) + 100) % 90;
				home_mid_center -= home_ss_red_time / 30;
				home_for_center -= home_ss_red_time / 14;
				printf("Ȩ ������ ��Ʈ����Ŀ %d�� ����", home_ss_red_time);
			}
		}
	}
	if (home_st != 0) {
		if (rand(random) % 10 == 0) {
			home_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int home_st_red_time = (rand(random) + 100) % 90;
				home_for_center -= home_st_red_time / 9;
				printf("Ȩ ��Ʈ����Ŀ %d�� ����", home_st_red_time);
			}
		}
	}

	// ���� ���, ����

	if (away_gk != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_gk_red_time = (rand(random) + 100) % 90;
				away_def_center -= away_gk_red_time / 30;
				away_def_left -= away_gk_red_time / 30;
				away_def_right -= away_gk_red_time / 30;
				printf("���� ��Ű�� %d�� ����", away_gk_red_time);
			}
		}
	}
	if (away_swk != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_swk_red_time = (rand(random) + 100) % 90;
				away_def_center -= away_swk_red_time / 45;
				away_def_left -= away_swk_red_time / 45;
				away_def_right -= away_swk_red_time / 45;
				away_mid_center -= away_swk_red_time / 45;
				away_mid_left -= away_swk_red_time / 45;
				away_mid_right -= away_swk_red_time / 45;
				printf("���� ��Ű�� %d�� ����", away_swk_red_time);
			}
		}
	}
	if (away_cb != 0) {
		for (away_cb; away_cb > 0; away_cb--) {
			if (rand(random) % 10 == 0) {
				away_yellows++;
				++random;
				if (rand(random) % 10 == 0) {
					int away_cb_red_time = (rand(random) + 100) % 90;
					away_def_center -= away_cb_red_time / 45;
					printf("���� ���͹� %d�� ����", away_cb_red_time);
				}
			}
		}
	}
	if (away_lb != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_lb_red_time = (rand(random) + 100) % 90;
				away_def_left -= away_lb_red_time / 30;
				printf("���� ���� Ǯ�� %d�� ����", away_lb_red_time);
			}
		}
	}
	if (away_rb != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_rb_red_time = (rand(random) + 100) % 90;
				away_def_right -= away_rb_red_time / 30;
				printf("���� ������ Ǯ�� %d�� ����", away_rb_red_time);
			}
		}
	}
	if (away_dm != 0) {
		for (away_dm; away_dm > 0; away_dm--) {
			if (rand(random) % 10 == 0) {
				away_yellows++;
				++random;
				if (rand(random) % 10 == 0) {
					int away_dm_red_time = (rand(random) + 100) % 90;
					away_def_center -= away_dm_red_time / 90;
					away_mid_center -= away_dm_red_time / 30;
					printf("���� ������ �̵��ʴ� %d�� ����", away_dm_red_time);
				}
			}
		}
	}
	if (away_lwb != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_lwb_red_time = (rand(random) + 100) % 90;
				away_def_left -= away_lwb_red_time / 90;
				away_mid_left -= away_lwb_red_time / 30;
				printf("���� ���� ���� %d�� ����", away_lwb_red_time);
			}
		}
	}
	if (away_rwb != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_rwb_red_time = (rand(random) + 100) % 90;
				away_def_right -= away_rwb_red_time / 90;
				away_mid_right -= away_rwb_red_time / 30;
				printf("���� ������ ���� %d�� ����", away_rwb_red_time);
			}
		}
	}
	if (away_lw != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_lw_red_time = (rand(random) + 100) % 90;
				away_mid_left -= away_lw_red_time / 11;
				printf("���� ���� ���� %d�� ����", away_lw_red_time);
			}
		}
	}
	if (away_rw != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_rw_red_time = (rand(random) + 100) % 90;
				away_mid_right -= away_rw_red_time / 11;
				printf("���� ������ ���� %d�� ����", away_rw_red_time);
			}
		}
	}
	if (away_cm != 0) {
		for (away_cm; away_cm > 0; away_cm--) {
			if (rand(random) % 10 == 0) {
				away_yellows++;
				++random;
				if (rand(random) % 10 == 0) {
					int away_cm_red_time = (rand(random) + 100) % 90;
					away_mid_center -= away_cm_red_time / 14;
					printf("���� �߾� �̵��ʴ� %d�� ����", away_cm_red_time);
				}
			}
		}
	}
	if (away_clw != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_clw_red_time = (rand(random) + 100) % 90;
				away_for_left -= away_clw_red_time / 9;
				printf("���� ���� ������ ���� %d�� ����", away_clw_red_time);
			}
		}
	}
	if (away_crw != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_crw_red_time = (rand(random) + 100) % 90;
				away_for_right -= away_crw_red_time / 9;
				printf("���� ������ ������ ���� %d�� ����", away_crw_red_time);
			}
		}
	}
	if (away_ss != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_ss_red_time = (rand(random) + 100) % 90;
				away_mid_center -= away_ss_red_time / 30;
				away_for_center -= away_ss_red_time / 14;
				printf("���� ������ ��Ʈ����Ŀ %d�� ����", away_ss_red_time);
			}
		}
	}
	if (away_st != 0) {
		if (rand(random) % 10 == 0) {
			away_yellows++;
			++random;
			if (rand(random) % 10 == 0) {
				int away_st_red_time = (rand(random) + 100) % 90;
				away_for_center -= away_st_red_time / 9;
				printf("���� ��Ʈ����Ŀ %d�� ����", away_st_red_time);
			}
		}
	}

	// Ȩ ������

	float share_left = (float)home_mid_left / ((float)home_mid_left + (float)away_mid_left);
	float share_center = (float)home_mid_center / ((float)home_mid_center + (float)away_mid_center);
	float share_right = (float)home_mid_right / ((float)home_mid_right + (float)away_mid_right);

	int home_offense_left = (home_for_left - away_def_left) * share_left;
	int away_offense_left = (home_for_left - away_def_left - 1) * (1 - share_left);

	int home_offense_center = (home_for_center - away_def_center) * share_center;
	int away_offense_center = (away_for_center - home_def_center - 1) * (1 - share_center);

	int home_offense_right = (home_for_right - away_def_right) * share_right;
	int away_offense_right = (away_for_right - home_def_right - 1) * (1 - share_right);

	int home_goals = 0, away_goals = 0;
	int goal;

	// Ȩ �� ���
	for (home_offense_left; home_offense_left > 0; home_offense_left--) {
		++random;
		srand(random);
		goal = rand() % 3;
		if (goal == 0)
			home_goals++;
	}
	for (home_offense_center; home_offense_center > 0; home_offense_center--) {
		++random;
		srand(random);
		goal = rand() % 3;
		if (goal == 0)
			home_goals++;
	}
	for (home_offense_right; home_offense_right > 0; home_offense_right--) {
		++random;
		srand(random);
		goal = rand() % 3;
		if (goal == 0)
			home_goals++;
	}

	// ���� �� ���
	for (away_offense_left; away_offense_left > 0; away_offense_left--) {
		++random;
		srand(random);
		goal = rand() % 3;
		if (goal == 0)
			away_goals++;
	}
	for (away_offense_center; away_offense_center > 0; away_offense_center--) {
		++random;
		srand(random);
		goal = rand() % 3;
		if (goal == 0)
			away_goals++;
	}
	for (away_offense_right; away_offense_right > 0; away_offense_right--) {
		++random;
		srand(random);
		goal = rand() % 3;
		if (goal == 0)
			away_goals++;
	}

	printf("\n\nRESULTS");
	printf("\n%s %d : %d %s", home_name, home_goals, away_goals, away_name);
	if (home_goals > away_goals)
		printf("\nȨ �� %s ��\n���� +3, ���� +%d", home_name, home_goals - away_goals);
	else if (home_goals < away_goals)
		printf("\n���� �� %s ��\n���� +3, ���� +%d", away_name, away_goals - home_goals);
	else
		printf("\n���º�\n���� ���� +1");

	system("PAUSE");
	return 0;
}