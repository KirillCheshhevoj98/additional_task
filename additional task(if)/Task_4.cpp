#include<cstdio>
#include<conio.h>
#include<locale.h>

int main()
{

	/*
	?? ?????????? ???????????? ????? ???????? k ??????. ?????? ??????? ????? ? ?????? ??????? ?????????? m ????? ??????????.
	?? ????? ?????????? ????? ??????? ????????? ? ????? ?????? n ???????
	*/
	setlocale(LC_ALL, "RUS");

	int k, m, n, time;

	printf("???????????? ????? ???????? ?????? ?? ?????????: ");
	scanf("%d", &k);

	printf("?????? ??????? ????? ? ?????? ??????? ?????????? ??????????: ");
	scanf("%d", &m);

	printf("??????? ?????? ???? ?????????: ");
	scanf("%d", &n);

	if (n <= k)
	{
		time = 2 * m;
	}
	else
	{
		if (n * 2 % k == 0)
		{
			time = m * (n * 2 / k);
		}
		else
		{
			time = m * (1 + (n * 2 / k));
		}
	}
	printf("????? ??????? %d", time);
	getchar();
	return 0;
}