#include <stdio.h>
//3.编写一个程序，在遇到#之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写
//字母的个数。假设大小写字母数值是连续的。
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
//	printf("\n刚才输入的总共有%d个大写字母和%d个小写字母\n", big, small);
// return 0;
//}


//4.编写一个程序，在遇到#之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数
//不要把空白统计为单词的字母。实际上，标点符号也不应该统计。

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
//					printf("\n无效输入\n");
//				}
//				break;
//			}
//		}
//		
//	}
//	sum += small + big;
//	if(words!=0&&sum!=0)
//	aver = sum / words;
//	printf("\n你输入了%.1lf个单词有%d个字母平均每个单词字母数为%.1lf", words, sum, aver);
//	return 0;
//}

//5.设计一个猜数字程序（100以内），例如，程序最初猜50，询问用户是猜大了还是猜小了还是猜对了。如果猜小了
//那么下一次猜测的值应该是50和100的中值，如果这次猜大了，那么下一次猜0到50的中值.

//int main()
//{
//	int num = 50;
//	int min = 0;
//	int max = 100;
//	printf("请在心中想一个100以内的整数,我来猜,大了输入b小了输入s对了输入y\n");
//	int faluse = 1;
//	char ch;
//	int hi=0;
//	Sleep(2000);
//	printf("那个数字是%d吗？\n", num);
//	while (faluse)
//	{
//		scanf("%c", &ch);
//		if (ch == 's')
//		{
//			min = num;//小了最小值设为猜的数
//			 hi = (num + max) / 2;
//			printf("那么是%d吗？", hi);
//			num=hi;
//		}
//		if (ch == 'b')
//		{
//			max = num;//大了最大值设为猜的数
//			 hi = (num + min) / 2;
//			printf("那么是%d吗？", hi);
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


//6.设计以个返回读取的第一个非空白字符的函数
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
//	printf("请输入一串值，程序将返还首字母\n");
//	arr = get_first();
//	printf("第一个非空白字符为%c", arr);
//	return 0;
//}


//7.设计以个加减乘除的函数，选择操作然后输入两个数字，输入失败允许再次输入.除法除数不能为0
float getnum(void);
char get_first(void)
{
	char ch;
	ch = getchar();                        //while(ch=getchar()!=' ') contniue; 不可直接双层使用
	while (getchar() != '\n')//*处理换行符！
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
	printf("请选择下一个操作或者输入q结束\n");
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
	printf("请选择下一个操作或者输入q结束\n");
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
	printf("请选择下一个操作或者输入q结束\n");
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
	printf("请选择下一个操作或者输入q结束\n");
	menu();
}

//输入数字时最好使用
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