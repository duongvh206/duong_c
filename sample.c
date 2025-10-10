#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

void dl(int a)
{
	int add,time,i;
	time=a*10000000;
	for (i=0;i<time;i++)
	{
		add*=i;
		add++;
		add++;
	}
}
void main()
{
	int i;
	char c1[]="Thay em cuoi ";
	for(i=0;i<strlen(c1);i++)
	{
		printf("%c",c1[i]);
		dl(2);
	}
	dl(2);
	char c2[]="mat trong ngan\n";
	for(i=0;i<strlen(c2);i++)
	{
		printf("%c",c2[i]);
		dl(2);
	}
	dl(5);
	char c3[]="Dep nhu giua anh trang dem ram\n";
	for(i=0;i<strlen(c3);i++)
	{
		printf("%c",c3[i]);
		dl(2);
	}
	dl(5);
	char c4[]="Mong mo toi ";
	for(i=0;i<strlen(c4);i++)
	{
		printf("%c",c4[i]);
		dl(3);
	}
	dl(2);
	char c5[]="ve om ap ";
	for(i=0;i<strlen(c5);i++)
	{
		printf("%c",c5[i]);
		dl(4);
	}
	dl(9);
	char c6[]="dem nam\n";
	for(i=0;i<strlen(c6);i++)
	{
		printf("%c",c6[i]);
		dl(6);
	}
	dl(21);
	char c7[]="Den giua doi ";
	for(i=0;i<strlen(c7);i++)
	{
		printf("%c",c7[i]);
		dl(3);
	}
	dl(5);
	char c8[]="co xa voi\n";
	for(i=0;i<strlen(c8);i++)
	{
		printf("%c",c8[i]);
		dl(3);
	}
	dl(5);
	char c9[]="Dieu toi muon noi khong nen loi\n";
	for(i=0;i<strlen(c9);i++)
	{
		printf("%c",c9[i]);
		dl(2);
	}
	dl(7);
	char c10[]="Ngam em ";
	for(i=0;i<strlen(c10);i++)
	{
		printf("%c",c10[i]);
		dl(1);
	}
	char c10b[]="toi nhin tu phia xa ";
	for(i=0;i<strlen(c10b);i++)
	{
		printf("%c",c10b[i]);
		dl(2);
	}
	dl(23);
	char c11[]="xa voi\n";
	for(i=0;i<strlen(c11);i++)
	{
		printf("%c",c11[i]);
		dl(5);
	}
	dl(30);
	
	char c12[]="Co bao gio ";
	for(i=0;i<strlen(c12);i++)
	{
		printf("%c",c12[i]);
		dl(2);
	}
	dl(2);
	char c13[]="thoang trong long\n";
	for(i=0;i<strlen(c13);i++)
	{
		printf("%c",c13[i]);
		dl(2);
	}
	dl(5);
	char c14[]="Rang em cung van vuong mo mong\n";
	for(i=0;i<strlen(c14);i++)
	{
		printf("%c",c14[i]);
		dl(2);
	}
	dl(5);
	char c15[]="Rang em thuong ";
	for(i=0;i<strlen(c15);i++)
	{
		printf("%c",c15[i]);
		dl(2);
	}
	dl(2);
	char c16[]="rang em cung ";
	for(i=0;i<strlen(c16);i++)
	{
		printf("%c",c16[i]);
		dl(2);
	}
	dl(15);
	char c17[]="dong long\n";
	for(i=0;i<strlen(c17);i++)
	{
		printf("%c",c17[i]);
		dl(5);
	}
	dl(23);
	char c18[]="Tieng em cuoi ";
	for(i=0;i<strlen(c18);i++)
	{
		printf("%c",c18[i]);
		dl(2);
	}
	dl(5);
	char c19[]="mat trong ngoi\n";
	for(i=0;i<strlen(c19);i++)
	{
		printf("%c",c19[i]);
		dl(2);
	}
	dl(5);
	char c20[]="Gio day da mai xa toi roi\n";
	for(i=0;i<strlen(c20);i++)
	{
		printf("%c",c20[i]);
		dl(2);
	}
	dl(10);
	char c21[]="Nho thuong ";
	for(i=0;i<strlen(c21);i++)
	{
		printf("%c",c21[i]);
		dl(1);
	}
	char c22[]="nao lai tim den toi ";
	for(i=0;i<strlen(c22);i++)
	{
		printf("%c",c22[i]);
		dl(2);
	}
	dl(23);
	char c23[]="giua doi";
	for(i=0;i<strlen(c23);i++)
	{
		printf("%c",c23[i]);
		dl(5);
	}
	getch();
}
