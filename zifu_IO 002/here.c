#include <stdio.h>
//3.��дһ������������#֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ���������еĴ�д��ĸ��Сд
//��ĸ�ĸ����������Сд��ĸ��ֵ�������ġ�
//int main()
//{
//	char ch;
//	int big, small;
//	big = small = 0;
//	printf("Please enter some words,#end they\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch != ' '&& ch != '\n')
//		{
//			if (ch >= 'A' && ch <= 'Z')
//				big++;
//			if (ch >= 'a' && ch <= 'z')
//				small++;
//			printf("%c", ch);
//		}
//		else
//			printf("%c", ch);
//	}
//	printf("\n�ղ�������ܹ���%d����д��ĸ��%d��Сд��ĸ\n", big, small);
// return 0;
//}


//4.��дһ������������#֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ����ƽ��ÿ�����ʵ���ĸ��
//��Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ�������Ҳ��Ӧ��ͳ�ơ�

//int main()
//{
//	char ch;
//	double aver=0;
//	double words=1;
//	int small, big;
//	small = big = 0;
//	int sum = 0;
//	printf("Please enter some words,#end they\n");
//	while ((ch = getchar()) != '#')
//	{
//			if (ch >= 'a' && ch <= 'z')
//				small++;
//			if (ch >= 'A' && ch <= 'Z')
//				big++;
//				printf("%c", ch);
//		if (ch == ' ')
//		{
//		
//			if ((ch = getchar()))
//			{
//				if (ch >= 'a' && ch <= 'z')
//				{
//					small++;
//					words++;
//				}
//				if (ch >= 'A' && ch <= 'Z')
//				{
//					big++;
//					words++;
//				}
//				printf("%c", ch);
//			}
//			if (ch == '#')
//			{
//				if (words == 1)
//				{
//					words =0;
//					printf("\n��Ч����\n");
//				}
//				break;
//			}
//		}
//		
//	}
//	sum += small + big;
//	if(words!=0&&sum!=0)
//	aver = sum / words;
//	printf("\n��������%.1lf��������%d����ĸƽ��ÿ��������ĸ��Ϊ%.1lf", words, sum, aver);
//	return 0;
//}

//5.���һ�������ֳ���100���ڣ������磬���������50��ѯ���û��ǲ´��˻��ǲ�С�˻��ǲ¶��ˡ������С��
//��ô��һ�β²��ֵӦ����50��100����ֵ�������β´��ˣ���ô��һ�β�0��50����ֵ.

//int main()
//{
//	int num = 50;
//	int min = 0;
//	int max = 100;
//	printf("����������һ��100���ڵ�����,������,��������bС������s��������y\n");
//	int faluse = 1;
//	char ch;
//	int hi=0;
//	Sleep(2000);
//	printf("�Ǹ�������%d��\n", num);
//	while (faluse)
//	{
//		scanf("%c", &ch);
//		if (ch == 's')
//		{
//			min = num;//С����Сֵ��Ϊ�µ���
//			 hi = (num + max) / 2;
//			printf("��ô��%d��", hi);
//			num=hi;
//		}
//		if (ch == 'b')
//		{
//			max = num;//�������ֵ��Ϊ�µ���
//			 hi = (num + min) / 2;
//			printf("��ô��%d��", hi);
//			 num=hi;
//			 
//		}
//		if (ch == 'y')
//		{
//			printf("Not difficult\n");
//			break;
//		}
//
//
//	}
//}


//6.����Ը����ض�ȡ�ĵ�һ���ǿհ��ַ��ĺ���
//char get_first(void)
//{
//	char ch;
//	while ((ch = getchar()) == ' ')
//		continue;
//	return ch;
//}
//int main()
//{
//	char arr;
//	printf("������һ��ֵ�����򽫷�������ĸ\n");
//	arr = get_first();
//	printf("��һ���ǿհ��ַ�Ϊ%c", arr);
//	return 0;
//}


//7.����Ը��Ӽ��˳��ĺ�����ѡ�����Ȼ�������������֣�����ʧ�������ٴ�����.������������Ϊ0
float getnum(void);
char get_first(void)
{
	char ch;
	ch = getchar();                        //while(ch=getchar()!=' ') contniue; ����ֱ��˫��ʹ��
	while (getchar() != '\n')//*�����з���
		continue;
	return ch;
}
void menu();
void add();
void subtract();
void multiply();
void divide();
int main()
{
	menu();
	char ch;
	//ch = get_first;
	ch = getchar();
	while (getchar() != '\n')
		continue;
	if (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd')
	{
		printf("Try again!:");
		printf("ch is %c\n", ch);
		ch = get_first();
		printf("ch is %c\n", ch);
		//ch = getchar();
	}
	while (ch != 'q')
	{
		if (ch == 'a')
			add();
		if (ch == 's')
			subtract();
		if (ch == 'm')
			multiply();
		if (ch == 'd')
			divide();
		ch = get_first();
		while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd')
		{
			printf("Try again!:");
			ch = get_first();
			//ch = getchar();
		}
	}
	printf("Done!\n");
	return 0;
}
void menu()
{
	printf("Enter the operation of your choice\n");
	printf("a.add                   s.subtract\n");
	printf("m.multiply              d.divide\n");
	printf("q.quit\n");
}
void add()
{
	float first, second;
	printf("Enter first number:");
	first = getnum();
	/*if((scanf("%f", &first)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &first);
	}*/
	printf("Enter second number:");
	second = getnum();
	/*if ((scanf("%f", &second)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &second);
	}*/
	
	printf("%f+%f=%f\n", first, second, first + second);
	printf("��ѡ����һ��������������q����\n");
	menu();
}
void subtract()
{
	float first, second;
	printf("Enter first number:");
	first = getnum();
	/*if ((scanf("%f", &first)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &first);
	}*/
	printf("Enter second number:");
	second = getnum();
	/*if ((scanf("%f", &second)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &second);
	}*/
	printf("%f-%f=%f\n", first, second, first - second);
	printf("��ѡ����һ��������������q����\n");
	menu();
}

void multiply()
{
	float first, second;
	printf("Enter first number:");
	first = getnum();
	/*if ((scanf("%f", &first)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &first);
	}*/
	printf("Enter second number:");
	second = getnum();
	/*if ((scanf("%f", &second)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &second);
	}*/
	printf("%f*%f=%f\n", first, second, first * second);
	printf("��ѡ����һ��������������q����\n");
	menu();
}
void divide()
{
	float first, second;
	printf("Enter first number:");
	first = getnum();
	/*if ((scanf("%f", &first)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &first);
	}*/
	printf("Enter second number:");
	second = getnum();
	/*if ((scanf("%f", &second)) == 0)
	{
		printf("Wrong!Enter again!:");
		scanf("%f", &second);
	}*/
	if (second == 0)
	{
		printf("Wrong second can't be 0!Enter again!:");
		//scanf("%f", &second);
		second = getnum();
	}
	printf("%f/%f=%f\n", first, second, first / second);
	printf("��ѡ����һ��������������q����\n");
	menu();
}

//��������ʱ���ʹ��
float getnum(void)
{
	float f;
	char c;
	while ((scanf("%f", &f)) != 1)
	{
		while (c = getchar() != '\n')
			putchar(c);
		printf("is not an number.\n");
		printf("Please enter a right one:");
	}
	return f;
}