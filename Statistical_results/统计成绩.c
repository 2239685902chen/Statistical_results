#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Condition(const void* e1, const void* e2)
{
	return (*((int*)e1) - *((int*)e2));
}
int main()
{
	int q = 0;//输入多少科成绩
	int p = 0;
	float w = 0, e = 0, r = 0, t = 0, y = 0, u = 0;
	scanf("%d", &q);
	scanf("%f%f%f%f%f", &w, &e, &r, &t, &y);
	u = (w + e + r + t + y)/q;
	float i[] = { w,e,r,t,y };
	int a = sizeof(i) / sizeof(i[0]);
	qsort(i, a, sizeof(i[0]), Condition);
	printf("%.2f %.2f %.2f\n", i[a-1], i[0], u);
	return 0;
}