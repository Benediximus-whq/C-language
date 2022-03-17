#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指包含一个头文件，文件名叫做stdio.h
//int main()
//{
//	printf("hello");
//
//	return 0;
//}
//int函数返回类型（整型的意思）；main是函数名，有且仅有一个main函数；一个工程中可以有多个“.c”文件，但是多个“.c"文件只能有一个main函数
//{...
// ...}是函数体
//prinf-库函数-printf的使用要引用头文件stdio.h
//编译+链接+运行代码的快捷键：ctrl+F5或者ctrl+Fn+F5或者点击“本地Windows调试器”
//printf函数为“打印输出”的意思

//数据类型
//char 字符数据类型（a,b,c...)
//short 短整型
//int 整型
//long 长整型
//long long 长长整型
//float 单精度浮点数
//double 双精度浮点数
//整型没有小数点，浮点数有小数点

//int main()
//{
//	//字符类型
//	char ch='a';
//	//整型
//	int age = 10;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	printf("hello");
//
//	printf("%d\n", 100);//打印一个整数——%d
//
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	//以上得出数值单位为字节byte
//
//	return 0;
//}

//int main()
//{
//	//创建一个变量
//	//变量类型 变量的名字=**；
//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	printf("%d\n", age);
//
//	weight = weight - 10;
//	printf("%lf\n", weight);//字符数据类型输出用%c，整型输出用%d，单精度浮点型float输出用%f，双精度浮点型double输出用%lf，字符串输出用%s
//
//	return 0;
//}

//在花括号{......}外定义的变量为全局变量
//在花括号{......}内定义的变量为局部变量
//当局部变量和全局变量名字冲突的情况下，局部变量优先输出（不建议把全局变量与局部变量的名字写出一样）
//int a = 100;//a为全局变量
//int main()
//{
//	int a = 10;//a为局部变量
//
//	printf("%d", a);
//
//	return 0;
//}

//写一个代码求2个整数的和
//scanf函数为输入函数
//
//int main()
//{
//	int a;
//	int b;
//	int sum;
//	scanf("%d %d", &a, &b);//输入第一个整数%d和第二个整数%d，第一个整数%d放在a处，第二个整数%d放在b处
//	sum = a + b;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//要用代码求和，需要在源文件代码第一行加上"#define _CRT_SECURE_NO_WARNINGS 1"；不建议使用scanf_s函数，因为scanf_s函数是VS编译器提供的，不是C语言标准规定的

//变量的作用域
//局部变量的作用域：就是局部变量所在的局部范围(局部变量所在的花括号内）
//全局变量的作用域：整个工程
//int g_val = 2022;//全局变量
//int main()
//{
//	int a= 10;
//	printf("1:%d\n", g_val);
//	{
//		printf("2:%d\n", g_val);
//
//		int b= 10;
//
//		printf("b=%d\n", b);
//		printf("a=%d\n", a);
//
//		printf("3:%d\n", g_val);
//	}
//	printf("4:%d\n", g_val);
//
//	printf("a=%d\n", a);
//	//printf("b=%d\n", b);显示未定义标识符b
//
//	return 0; 
//}

//变量的生命周期:变量的创建和销毁之间的时间段
//局部变量的生命周期：进入其所在局部范围（花括号）即生命开始，出其所在局部范围（花括号）即生命结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//	{//局部变量a生命开始
//		int a = 10;
//		printf("%d\n", a);
//	}//局部变量a生命结束
//	return 0;
//}

//常量
//1、字面常量
//int main()
//{
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	return 0;
//}
//2、const修饰的常变量(本质上是变量，但具有常属性（不能被改变的属性））
//int main()
//{
//	const int num1 = 10;//const修饰num1，使其具有常属性
//	num1 = 20;//num1被改变了，所以不能被输出
//	printf("num=%d\n", num1);
//
//	return 0；
//}
//3、#define定义的标识符常量
//#define MAX 10000
//int main()
//{
//	//MAX = 2000;#define定义的标识符常量发生改变显示错误
//	int n = MAX;
//	printf("n=%d", n);
//
//	return 0;
//}
//4、枚举常量
//可以一一列举的常量
//enum Sex//枚举性别
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE=3,//可以在此赋值
//    FEMAIE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//枚举类型只能取MALE、FEMALE、SECRET其中之一
//
//	printf("%d\n", MALE);
//
//	return 0;
//}

//字符串：由双引号引起来的一串字符
//字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，不算作字符串内容
// 字符串在结尾的位置隐藏了一个\0的字符
// 一个字符由单引号引起来，多个字符，即字符串，由双引号引起来
//int main()
//{
//	"abcdef";//此即字符串
//	"hello";//此即字符串
//
//	return 0;
//}
//#include<string.h>//引用此头文件，在217行输出过程的时候不会显示strlen未定义（不引用此头文件也可以正常输出）；一个工程中可以存在多个头文件
//int main()
//{
//	//字符数组（数组是一组相同类型的元素）
//	//char arr[]="hello";
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};//此处若没有'0',则220行输出为15，223行输出为乱码
//
//	//求字符串长度用strlen
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	printf("%s\n", arr1);//%s为输出字符串
//	printf("%s\n", arr2);
//
//	return 0;
//}

//转义字符：转变了它原有的意思（该字符有其他规定的含义）
//int main()
//{
//	//printf("c:\test\test.c");//此行输出 c:      est     est.c  ，此处\t的效果是打印8个空格，而不是原本的\test\test
//
//	printf("ab\ncd");//此行输出  ab
//	                 //          cd   ，此处\n的效果是换行，而不是原本的ab\ncd
//
//	return 0;
//
//}
//一、转义字符：\?——在书写连续多个问号时使用，防止它们被解析成三字母词
//二、转义字符：\'——用于表达字符常量'
//int main()
//{
//	printf("%c\n", 'a');//此行输出a
//	//printf("%c\n",''');此行打印不出'，显示错误
//	printf("%c\n",'\'');//此行输出'
//	printf("%s\n", "\"");//此行输出"
//
//	return 0;
//}	
//三、转义字符：\\——用于表示一个反斜杠，防止它被解释为一个转义序列符
//int main()
//{
//	printf("c:\\test\\test");//此行输出 c:\test\test  ，与231行形成对比
//
//	return 0;
//}
//四、转义字符：\a——警告字符，蜂鸣（电脑发出声音）
//五、转义字符：\b——退格符
//int main()
//{
//	printf("abc\b");//此行输出ab
//	return 0;
//}
//六、转义字符：\f——进纸符
//七、转义字符：\r——回车
//int main()
//{
//	printf("abcde\r");//此行输出 bcde（无ab且b前有一空格）
//	return 0;
//}
//八、转义字符：\t——水平制表符
//九、转义字符：\v——垂直制表符
//十、转义字符：\ddd——ddd表示1-3个八进制的数字，如：\130X
//int main()
//{
//	printf("%c\n", '\130');//此行意思是：8进制的130是十进制的多少，为88；此行输出为字符X，字符X——ASCII码值是88
//	return 0;
//}
//十一、转义字符：\xdd——dd表示2个十六进制数字，如：\x30
//int main()
//{
//	printf("%c\n", '\x30');//此行的意思是：十六进制的x30是十进制的多少，为48；此行输出字符0，字符0——ASCII码值是48
//	return 0;
//}
//转义字符也是一种字符，算作一个字符

//选择语句
//int main()
//{
//	int input;//输入的值
//	printf("地球绕什么转\n");
//	scanf("%d", &input);//过程首行有#define _CRT_SECURE_NO_WARNINGS 1，所以输出过程不会示错
//
//	if (input == 1)//如果输入的值是1
//		printf("对，是太阳");
//	else//否则
//		printf("错，不是月亮");
//
//		return 0;
//
//}

//while循环语句
//int main()
//{
//	int line=1;//定义变量line，line从1开始
//	while (line < 30000)//当line小于30000是
//	{
//		printf("hello:%d\n", line);
//		line++;
//	}
//	if (line == 30000)//如果line等于30000
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}

//函数
//int Add(int x, int y)//定义Add函数（定义变量x，定义变量y）
//{
//	int z;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int num1;//定义变量num1
//	int num2;//定义变量num2
//	scanf("%d%d", &num1, &num2);//输入两个整型（整数），第一个整数放入num1，第二个整数放入num2
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

//数组
//int main()
//{
//	//数组——一组相同类型的元素的集合
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组名称为arr
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//
//	return 0;
//}

//操作符
//1、算数操作符:= - * / %
//int main()
//{
//	//int a = 9 / 2;//输出值为4
//	//float a = 9 / 2;//输出值为4.000000（百分号左右为整数没有小数点时，运算默认为取整数）
//	//float a = 9.0/ 2;//输出值为4.500000
//	int a = 9 % 2;//%——取模（取余数）
//	printf("%d\n", a);
//
//	return 0;
//}
//2、移位操作符:>>右移操作符   <<左移操作符
//3、位操作符:&按位与    ^按位异或    |按位或
//4、赋值操作符:=     +=     -=     *=     /=     &=     ^=     |=     >>=     <<=
//5、单目操作符
//int main()
//{
//	int a = 10;
//	//int b = ++a;//前置++(先++,后使用）
//	int c = a++;//后置++(先使用，后++）
//	printf("%d\n", a);
//	//printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}
//6、关系操作符
//7、逻辑操作符：&&逻辑与       ||逻辑或
//int main()
//{
//	int a = 0;
//	int b = 0;//0为假，否则为真
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);//只有当&&两边都是真，输出才是1（真），否则为0（假）
//	printf("%d\n", d);//只有当||两边都是假，输出才是0（假），否则为1（真）
//	if (a && b)
//	{
//
//	}
//
//	return 0;
//}
//8、条件操作符（三目操作符）
//   exp1 ? exp2 : exp3
//exp1成立，exp2计算，整个表达式的结果是：exp2的结果
//exp2不成立，exp3计算，整个表达式的结果是：exp3的结果
//int main()
//{
//	int a;
//	int b;
//	int max;
//	scanf("%d%d", &a, &b);
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = a > b ? a : b;
//
//	printf("%d\n", max);
//
//	return 0;
//}
//9、逗号表达式：以逗号隔开的一串表达式
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int c = 8;
//	int d = (a = b + 5, c = a - 4, b = c + 2);//括号内的即为逗号表达式；整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//
//	return 0;
//}
//10、下标引用、函数调用和结构成员操作符
//    []     ()     .     ->
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组下标从0开始，即，1的下标为0，2的下标为1，以此类推
//	printf("%d\n", arr[5]);//此方括号即为下标引用操作符
//
//	return 0;
//}
//int main()//调用函数的时候，函数后面的（）就是函数调用操作符
//{
//	printf("hello");//此圆括号即为函数调用操作符
//
//	return 0;
//}

//常见关键字
//1、c语言提供的，不能自己创建关键字
//2、变量名不能是关键字
//auto 自动——每个局部变量都是auto修饰的（auto被省略了）
//break   break   case   shar   const   continue   default   do   double   else   enum   extern   fioat   for   goto   if   int   long
//register   return   short   signed   sizeof   static   struct   switch   typedef   union   unsigned   void   volatile   while
//例:typedef类型重定义
//typedef unsigned int u_int;//将unsigned int重新定义为u_int
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;//454行与455行意思完全一致
//
//	return 0;
//}
//例:static——静态的
//1、static修饰局部变量，改变局部变量的生命周期（本质上是改变了变量的存储类型）
//2、static修饰全局变量
//3、static修饰函数
//void test()
//{
//	int a = 1;
//	a++;//自增，a=2
//	printf("%d\n", a);
//}//局部变量a离开，a=2被销毁，重新开始运行
//int main()
//{
//	int i = 0;
//	while (i < 10)//while循环
//	{
//		test();//开始运行到463行的test函数
//		i++;
//	}
//
//	return 0;
//}//463-479行输出2222222222
//如下，与463-479行对比
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}//由于static修饰，局部变量a未被销毁，a=2进入运行下一个循环
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}//481行-496行输出234567891011
//例:extern——声明外部符号：当同一工程的另一个源文件中存在的全局变量符号，要在该源文件中使用时，需声明“extern 变量名;”即可（全局变量在整个工程中都可以使用)
//但是，static修饰的全局变量，使得这个全局变量只能在自己所在的源文件内部使用，即使同一工程中的另一个源文件声明了，也无法使用
//extern int Add(int, int);//但是不声明似乎也可以使用O_O
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//#define定义常量和宏
//define是一个预处理指令
//1、define定义符号
//#define MAX 1000//此为define定义常量
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//2、define定义宏
//#define ADD(X,Y) X+Y
//int main()
//{
//	//printf("%d\n", ADD(2, 3));//此行输出5
//	printf("%d\n", 4 * ADD(2, 3));//此行输出11，而非20,只有当520行为#define ADD(X,Y) ((X)+(Y))，此行才输出20
//	//524行中，“2，3”呈递给了“X+Y”，使得“4*ADD(2,3)”变成“4*2+3”，即4*X+Y
//
//	return 0;
//}

//指针（就是地址）
//bit比特   byte字节   kb   mb   gb   tb   
//int main()
//{
//	int a = 10;//a在内存中要分配空间——4个字节
//	printf("%p\n", &a);//%p是专门打印地址的（回看75行）
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫作指针变量
//	//* 说明pa是指针变量
//	//int 说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;//将a的地址交给pa
//
//	*pa = 20;//此行意思是通过pa里的地址找到a（*叫作解引用操作符（单目操作符)，*pa就是通过pa里的地址找到a）
//	printf("%d\n", a);//此行输出20
//
//	return 0;
//}//此545-555段是通过a的地址找到a，并把a改为20，而不是直接将a改为20

//结构体(结构体可以让C语言创建新的类型）
//创建一个学生类型
//struct stu//创建结构体变量
//{
//	char name[20];
//	int age;
//	double score;
//};//name、age、score都是结构体成员变量
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct stu s = { "***",20,100 };//结构体的创建和初始化
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);//（“.”操作符）结构体变量.结构体成员变量名
//	
//	struct stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//ps是指针，是指向s的，*ps即解引用ps，所以*ps即为s
//*ps=&s，已知指针ps找的是s的地址，则(*ps).name找的是地址变量中存放的name（数据/元素）
//a表示a对应的存储单元中的数据；&a表示a对应的存储单位的地址；*a表示：首先，要求a对应的存储单元中的数据一定是另一个存储单元的地址，于是，*a表示另一个存储单元中的数据
//指针就是变量的地址，所以*pa=s
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//（“->”操作符）结构体指针->结构体成员变量名
//
//	return 0;
//}

//C语言是结构化的程序设计语言：顺序结构     选择结构     循环结构
// 语句：C语言中由一个分号隔开的就是一条语句
//分支语句（选择结果）
//if else语句
//int main()
//{
//	int age = 18;
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int age;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//    	printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("天命\n");
//
//	return 0;
//}//如果条件成立，要执行多条语句，可以将语句列表用花括号框出，这里的一对{   }就是一个代码块
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else
//		    printf("haha\n");
//
//	return 0;
//}//else至于离它最近的if匹配，所以在此段代码中631行if和633行else匹配
//在进入630行中，因为a等于0不等于1，且没有与630行的if匹配的else，所以直接运行636行，所以此626-637无任何输出
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)//C语言中 a%b 表示变量a对b取余，即如果a除以b的余数为0，那么a%b的结果就为1（1表示真），如果a除以b的余数不为1，那么a%b的结果就为0（0表示假）
//	{
//		printf("奇数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)//自增运算符（++） 和 自减运算符（--），这种特殊的运算符则用来表示 变量的 自增 1 或则 自减 1
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}//“+=”——自增，a+=b 相当于 a=a+b，i+=2相当于i=i+2

//switch语句
//switch (整型表达式)
//{
//	语句项；
//}
//语句项（case语句）
//case 整型常量表达式：
//    语句；
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	    printf("星期1\n");
//		break;//跳出此case，否则会一直运行完所有的case
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	
//	return 0;
//}//switch语句允许嵌套使用

//while循环
//while(表达式)//表达式结果如果为真（为非0），循环语句就要被执行，否则不被执行
//    循环语句；
//int main()
//{
//	int i = 1;
//	while (i <= 10)//在while中，break用于永久的终止循环；continue的作用是跳过本次循环中continue后面的代码，直接运行判断部分的代码，看是否进行下一次循环
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar的意思是获取字符；EOF——end of file——文件结束标志
//		putchar(ch);//putchar的意思是输出一个字符
//
//	return 0;
//}//按Ctrl+Z——getchar就读取结束
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}//此745-756行输入字母字符不输出，输入数字字符才输出相同的数字字符

//for循环
//for(表达式1（初始化）；表达式2（判断）；表达式3（调整）)
//    循环语句；
//int main()
//{
//	int i;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//当i=5是，跳出for循环，最终输出1 2 3 4
//			continue;//忽略771行的输出5，直接回到循环，最终输出1 2 3 4 6 7 8 9 10
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i;
//
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}//不在for循环体内修改循环变量，防止for循环失去控制
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	for (;;)//判断部分省略，则判断部分恒为真，陷入死循环
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i;
//	int k;
//	for (i = 0, k = 0; k = 0; i++, k++)//表达式2（判断），k=0的意思是将0赋值给k，0即为假，假则不进入循环
//		k++;
//	return 0;
//}//此818-825行的for循环，循环0次

//do...while()循环
//do
//    循环语句；
//while（表达式）；
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}//do语句循环的循环体至少循环一次

//计算n的阶乘
//int main()
//{
//	int i;
//	int n;
//	int ret = 1;//ret是用来存储计算结果的变量名，也可以换作其他名字
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//计算1！+2！+3！+......+10！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;//计算n的阶乘之前，把ret初始为1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//1、自动生成一个1-100之间的随机数字
//2、猜数字
//   a.猜对了   恭喜你，游戏结束
//   b.猜错了   显示猜大了，还是猜小了，继续猜，直到猜对为止
//3、游戏一直玩，除非退出游戏
//#include<stdlib.h>
//#include<time.h>
//void menu()//void是指此函数没有返回值，即没有“return 0；”
//{
//	printf("**********************\n");
//	printf("******* 1.play *******\n");
//	printf("******* 0.exit *******\n");
//	printf("**********************\n");
//}
//void game()//猜数字游戏的实现
//{
//	//1、先生成随机数
//	int ret = rand()&100+1;//rand函数是生成一个随机数，需要引头文件“#include<stdlib.h>”（902行）;rand函数返回了0-32767之间的数字，但数字不够随机
//	//&100的余数是0-99，然后+1，ret范围就是1-100
//	//printf("%d\n", ret);
//
//	//2、猜数字
//	int guess;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//				break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));//此括号内需要一个随机数，rand函数才能生成一个随机数
//    //time()函数，时间戳
//	do
//	{
//		menu();//打印菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，重新选择");
//			break;
//		}
//	} while (input);
//    
//	return 0;
//}

//函数
//C语言函数分类：1、库函数      2、自定义函数
//1、库函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//strcpy()——字符串复制,把arr2里的字符串复制放入arr1
//	printf("%s",arr1);//打印arr1这个字符串 %s——以字符串格式打印
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);//将arr1字符串的前五个字符设置成x；memset（）——设置内存块
//	printf("%s\n", arr1);
//
//	return 0;
//}
//使用库函数，必须包含#include对应的头文件
//2、自定义函数——自定义函数和库函数一样，有函数名，返回值类型和函数参数
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);//strcpy()函数须引用 #include<string.h>,即988行 （但似乎不引用也可以编译O_O)
//
//	printf("%s\n", arr2);
//
//	return 0;
//}
// 函数的组成：
//ret_type fun_name(para1, *)
//{
//	statement;//语句项
//}（其中，“ret_type为返回类型，fun_name为函数名，（para1,*)括号内的为函数参数，花括号内的为函数体）
//例：写出一个函数可以找到两个整数中的最大值
//int get_max(int x,int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//
//	return z;//返回z——返回较大值
//}
//int main()
//{
//	int a;
//	int b;
//
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//
//	printf("max=%d\n", max);
//
//	return 0;
//}
//写一个函数可以交换两个整型变量的内容
//void Swap(int * pa,int * pb)//函数返回类型的地方写void，表示这个函数不需要任何返回值，也不需要返回
////函数定义，其中int*pa、int*pb称为形式参数（简称形参）
//{
//	int z;
//	z = * pa;
//	* pa = * pb;
//	* pb = z;
//}//通过地址交换a、b的值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	//写一个函数，交换两个整型变量的值
//	Swap(&a,&b);//函数调用，其中&a、&b称为实际参数（简称实参）
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}//*pa是a，是变量，int*t是指针变量，之内存地址，不能存a
//实参：真实传给函数的参数，可以是常量、变量、表达式、函数等。无论实参是哪种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传给形参
//形参：函数后面括号中的变量，形参只有在函数被调用的过程中才实例化（分配内存单元），在函数调用完成之后就销毁了，因此形参只在函数中有效
// Swap在被调用的时候，实参传给形参，实际上形参是实参的一份临时拷贝，改变形参不能改变实参
//int main()
//{
//	int a = 10;//给了a四个字节的空间
//	int* pa = &a;//pa就是一个指针变量，将a的地址交代给了pa这个变量
//	*pa = 20;//此时的*pa就是a
//	printf("%d\n", a);//输出20
//
//	return 0;
//}

//函数的调用
//1、传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//2、传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用方式，这种传参方式可以让函数和函数外边的变量建立起真正的联系，
//             也就是函数内部可以直接操作函数外部的变量
//例：打印100-200之间的素数
//int is_prime(int n)//是素数返回0，不是素数返回1/
//{
//	int j;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//
//	return 1;
//}//return 0表示函数正常终止；return 1表示函数异常终止（此返回是返回给操作台，是操作系统识别的，对程序无影响）
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//例：写一个函数，实现整型有序数组的二分查找
//int binary_search(int arr[], int key, int sz)
//{
//	int left=0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组下标从0开始
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)是指整个字符串的大小（40个字节）；sizeof（arr[0])是指字符串里单个字符的大小（4个字节）
//	//找到了就返回找到位置的下标
//	//找不到就返回-1
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)//==是等于；!=是不等于
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//写一个函数，每调用一次函数，就会将num的值增加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//3、嵌套调用
//函数不能嵌套定义
//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();;
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}
//4、链式访问
//#include<string.h>
//int main()
//{
//
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//将arr2的内容拷贝入arr1
//
//	printf("%s\n", arr1);
//	printf("%s\n", strcpy(arr1, arr2));
//
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//此行输出4321
//	//printf函数返回的是打印在屏幕上的字符的个数
//
//	return 0;
//}

//函数的声明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	//函数声明：告知一个函数
//	int Add(int, int);
//
//	printf("%d", c);
//
//	return 0;
//}
//int Add(int x, int y)//函数的定义：创造一个函数
//{
//	return x + y;
//}//函数的定义需要放在调用该函数的主函数之前
//函数的声明一般要放在头文件中，要满足先声明后使用

//函数的递归：函数直接或者间接调用自身的一种方法
//int main()
//{
//	printf("hello\n");
//
//	main();
//
//	return 0;
//}//栈溢出
//递归的必要条件：1、存在限制条件，当满足这个限制条件的时候，递归便不再继续
//                2、每次递归调研之后越来越接近这个限制条件
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num;//unsigned是无符号的意思
//	scanf("%u", &num);//%u是打印无符号整型（十进制）的意思，默认为正数
//	print(num);//printf函数可以打印参数部分数字的每一位
//
//	return 0;
//}//在1241行输入123，到1242行运行print函数，回到1230行。因为123大于9，在1234行123/10得到12，12同样大于9，所以在此之后并没有运行1236行，而是回到1232行进行判断并
//在1234行12/10得到1，1小于9，在1236行1%10打印1，在此之后回到上一个循环，即1234行得到的12在1236行12%10打印2，在此之后再次回到上一个循环，即1234行得到的123在
//1236行123%10打印3。综上所述，最终输出1 2 3 
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
//递归与迭代
//例：计算n的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}
//例：计算第n个斐波那契数(不考虑溢出）
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;//统计第三个斐波那契额数的计算次数
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//
//	return 0;
//}//重复大量的计算，效率低，调试速度慢
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//一维数组
//#include<string.h>
//int main()
//{
//	int a = 10;//初始化
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化，初始化内容为1 2 3 4 5 0 0 0 0 0 
//
//	int arr3[] = { 1,2,3 };//[]中没有指定数组元素的个数，则根据{}内初始化的内容来确定它的个数，即[]内默认是3
//
//	char ch1[10] = "hehe";//初始化内容为h e h e \0 0 0 0 0 0
//	char ch2[] = "hehe";//初始化内容为h e h e \0
//
//	char ch3[] = "hello";
//	char ch4[] = { 'h','e','l','l','o'};
//	printf("%s\n", ch3);//输出hello，因为1342行字符串后面默认有\0
//	printf("%s\n", ch4);//输出hello烫烫烫烫烫蘦ello，因为1343行字符串后面没有\0，会一直打印随机值形成乱码,当加上'\0'之后正常打印hello
//	//计算字符串长度
//	printf("%d\n", strlen(ch3));//输出5,在hello之后加上\0依旧输出5,需要注意的是，字符串长度为5，但字节长度为6,加上\0字节长度为7
//	printf("%d\n", strlen(ch4));//输出21(随机值）,在加上'\0'之后输出5,需要注意的是，字节长度为5，,加上'\0'字节长度为6
//	//strlen计算字符串长度，sizeof计算字节长度
//	//使用strlen（）函数需要使用头文件string.h(但是不加这个头文件依旧可以正常运行，没有错误或者警告O_O）
//
//	return 0;
//}//数组的创建，[]内要给一个常量才可以，不能是变量；[]为下标引用操作符
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//数组的下标由0开始，arr[4]对应的是第五个数
//
//	int i;
//
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof arr[0]);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小计算sz = sizeof(arr) / sizeof(arr[0])（数组总大小除以数组第一个元素的大小）
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//输出0 0 0 0 5 0 0 0 0 0
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//%p——按照地址格式打印（十六进制的打印）
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	
//	return 0;
//}

//二维数组
//创建：
//int main()
//{
//	int arr[3][4];//数组3行4列
//	char ch[3][10];//数组3行10列
//
//	return 0;
//}
//初始化：
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,12 };//第一行1 2 3 4；第二行5 6 7 8；第三行9 10 11 12
//	int arr2[3][4] = { 1,2,3,4,5,6 };//第一行1 2 3 4；第二行5 6 0 0；第三行0 0 0 0
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };//第一行1 2 0 0；第二行3 4 0 0；第三行5 6 0 0
//	//二维数组的行可以省略，但列不可以省略
//	//二维数组行号与列号都是从0开始的
//	//printf("%d\n", arr3[1][1]);//输出第一行第一列的数为4
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//二维数组在数组中的存储地址
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//数组作为函数参数
//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j;
//		for (j = 0; j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//将排序降序改为升序
//	//冒泡排序:两两相邻的元素进行比较，并且可能的话需要交换
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//数组传参的时候，传递的实际是数组首元素的地址
//
//	return 0;
//}

//数组名是什么
//数组名是首元素的地址
//但是有两个例外
//1、sizeof（数组名）——数组名表示整个数组——计算的是整个数组的大小，单位是字节
//2、&数组名——数组名表示整个数组——取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//
//	return 0;
//}

//算数操作符：+   -   *   /   %（取模）
//int main()
//{
//	int a = 3 / 5;
//	printf("%d\n", a);
//
//	return 0;
//}

// 移位操作符：<<     >>
//int main()
//{
//	int a = 2;//二进制为00000000000000000000000000000010
//	int b = a << 1;//把a的二进制位向左移动一位
//	int c = a >> 1;//把a的二进制位向右移动一位
//	printf("b=%d\n", b);//输出4：4的二进制为00000000000000000000000000000100
//	printf("c=%d\n", c);//输出1：1的二进制为00000000000000000000000000000001
//  一个字节对应8个比特位，32个比特位对应四个字节，一个整型变量是四个字节的长度
// 
//	return 0;
//}
//整数的二进制表示形式有三种：内存中用于计算的都是补码，实际输出的是原码
//原码：原码就是符号位加上真值的绝对值, 即用第一位表示符号, 其余位表示值
//      [+1]原 = 0000 0001         [-1]原 = 1000 0001
//反码：正数的反码是其本身；负数的反码是在原码的基础上，原码的符号位不变，其他位按位取反就是反码
//      [+1] = [00000001]原 = [00000001]反         [-1] = [10000001]原 = [11111110]反
//补码：正数的补码就是其本身，负数的补码是在其原码的基础上, 符号位不变, 其余各位取反, 最后 + 1. (即在反码的基础上 + 1)
//      [+1] = [00000001]原 = [00000001]反 = [00000001]补     [-1] = [10000001]原 = [11111110]反 = [11111111]补

//位操作符：&按位与     |按位或     ^按位异或
//注意：&、|、^三个操作符的操作数必须是整数
//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	int c = a & b;//按（二进制）位与，上下同为0得到0，为1、0得到0，同为1得到1
//	          //00000000000000000000000000000001
//	int d = a | b;//按（二进制）位或，上下同为0得到0，为1、0得到1，同为1得到1
//	          //00000000000000000000000000000111
//	int e = a ^ b;//按（二进制）为异或，上下同为0得到0，为1、0得到1，同为1得到0
//	          //00000000000000000000000000000110
//
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	return 0;
//}
//例：交换a、b的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//
//	a = a ^ b;
//	printf("a=%d\n", a);
//	//a       00000000000000000000000000000011(3)
//	//b       00000000000000000000000000000101(5)
//	//a=a^b   00000000000000000000000000000110(6)
//	b = a ^ b;
//	printf("b=%d\n", b);
//	//a       00000000000000000000000000000110(6)
//	//b       00000000000000000000000000000101(5)
//	//b=a^b   00000000000000000000000000000011(3)
//	a = a ^ b;
//	printf("a=%d\n", a);
//	//a       00000000000000000000000000000110(6)
//	//b       00000000000000000000000000000011(3)
//	//a=a^b   00000000000000000000000000000101(5)
//
//	return 0;
//}

//赋值操作符:
//基本赋值运算符:=
//复合赋值运算符:+=(加赋值)、-=(减赋值)、*=(乘赋值)、/=(除赋值)、％=(求余赋值)、 <<=(左移赋值)、>>=(右移赋值)、&=(按位与赋值)、|=(按位或赋值)、^=(按位异或赋值)
//int main()
//{
//	int a = 10;
//	a = 100;
//
//	int b = 10;
//	b = b + 100;
//	b += 100;
//
//	int c = 10;
//	c = c << 3;
//	printf("%d\n", c);
//	c <<= 3;
//
//	return 0;
//}

//单目操作符:!(逻辑反操作)、-(负值)、+(正值)、&(取地址)、sizeof(操作数的类型长度(以字节为单位))、~(对一个数的二进制按位取反)、
//           --(前置、后置--)、++(前置、后置++)、*(间接访问操作符(解引用操作符))、(类型)(强制类型转换)
//单目操作符只有一个操作数
//int main()
//{
//	int flag;
//	while (scanf("%d", &flag))
//	{
//		if (flag)//flag为真
//		{
//			printf("hehe\n");
//		}
//		if (!flag)//flag为假
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char arr[10] = { 0,1,2,3,4 };
//	printf("%d\n", sizeof(a));//输出4
//	printf("%d\n", sizeof(int));//输出4
//	printf("%d\n", sizeof(arr));//输出10
//	printf("%d\n", sizeof(char));//输出1
//	printf("%d\n", sizeof(arr[10]));//输出1
//	printf("%d\n", sizeof(char[10]));//输出10
//
//	return 0;
//}
//int main()
//{
//	short a = 10;
//	int b = 20;
//	printf("%d\n", sizeof(a = a + b));//输出2
//	printf("%d\n", a);//输出20
//	//sizeof只是操作符，而非函数，sizeof中的运算不影响变量的原始值
//
//	return 0;
//}
//int main()
//{
//	int a = -1;//二进制序列为10000000000000000000000000000001——原码
//	                       //11111111111111111111111111111110——反码
//	                       //11111111111111111111111111111111——补码
//	//~按位取反（无论是否是符号位，一律按位取反）
//	int b = ~a;//二进制序列为00000000000000000000000000000000
//	printf("%d\n", b);//输出0 
//
//	return 0;
//}
//int main()
//{
//	int a = 13;
//	//把a的二进制中的第5位置换成1
//	a = a | (1 << 4);//将a的二进制序列由第1位向左移动4位，即对第5位进行工程
//	printf("a=%d\n", a);
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101 
//	
//	//把a的二进制中的第5位置换成0
//	a = a & ~(1 << 4);
//	printf("a=%d\n", a);
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//00000000000000000000000000001101
//
//	return 0;
//}//完全看不懂ε(┬┬﹏┬┬)3
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用（先将a赋值给b），再++（再a自增1）
//	//int b = ++a;//前置++，先++（先a自增1），再使用（再将a赋值给b）
//	//int b = a--;//后置--，先使用（先将a赋值给b），再--（再a自减1）
//	//int b = --a;//前置--，先--（先a自减1），再使用（再将a赋值给b）
//  //后置++的优先级高于前置++
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//
//	printf("%d\n", a--);//打印10
//	printf("%d\n", a);//打印9
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&——取地址操作符；地址是以16进制展示的一串字符，本质上是二进制
//	int* pa = &a;//pa是用来存放地址的——pa就是一个指针变量；a的类型是int，所以pa的类型也是int；这里的*代表的是“说明pa是指针变量”
//	*pa = 20;//*——解引用操作符（间接访问操作符），在这里，*pa就是a
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//3.14为浮点型，通过（int）强制类型转换将3.14转换为整型
//
//	return 0;
//}

//关系操作符：>     <     >=     <=     !=(不等于）     ==（等于）
//比较两个字符串相等，不能使用==

//逻辑运算符：&&逻辑与     ||逻辑或     （!非）
//注意：第1698-1713行代码有问题，但是找不出ε(┬┬﹏┬┬)3
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d,%d", &a, &b);
//	if (a && b)
//	{
//		printf("haha");
//	}
//	else
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}//注意：第1698-1713行的代码，若第1703行为&&，当输入的值不含0时输出haha；只含一个0时输出haha；全部都是0是输出hehe
//若第1703行为||，当输入的值不含0时输出haha；只含一个0时输出haha；全部都是0时输出haha
//按照常理，对于&&，当输入的值全为真时才进if判断，对于||，当输入的值有真时就进入if判断
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a为后置++，先使用再++，a=0，&&后面的就不会再运算了，所以i=0，然后a自增1得到1
//
//	printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n",i, a, b, c, d);//i=0,a=1,b=2,c=3,d=4
//
//	return 0;
//}// 对于逻辑运算a && b，如果a为false，则不进行b的运算判定；对于逻辑运算a || b，如果a为true，则不进行b的运算判定
//C语言的逻辑运算符是自左向右进行的，如果左边的结果已经能够决定结果了，就不会做右边的计算

//条件操作符（三目操作符）
//条件运算符是C语言中类似于if语句的一种特殊运算符，它由符号?和:组成，其格式为"表达式1?表达式2:表达式3"，表达式1、表达式2和表达式3可以是任何类型的表达式
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = -1;
//	}
//
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//
//	return 0;
//}//条件表达式的计算步骤是首先计算出表达式1的值，如果其值不为零（即结果为真），则计算表达式2的值并且将其值作为整个条件表达式的值，
//否则（结果为0，即为假）计算表达式3的值并将其值作为整个条件表达式的值

//逗号表达式：exp1,exp2,exp3,...expN
//逗号运算符，优先级别最低，它将两个及其以上的式子联接起来，从左往右逐个计算表达式，整个表达式的值为最后一个表达式的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

//下标引用操作符：[]
//操作数：一个数组名+一个索引值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组是通过下标来访问的，而下标从0开始
//	//如果要找到数组中的5，那么通过5的下标4来找到5
//	printf("%d\n", arr[4]);//此行中的arr[4]的[]就是下标引用操作符
//	//对于下标引用操作符[]，操作数有两个，一个是arr，一个是[]中的数
//
//	return 0;
//}

//函数调用操作：()
//第1778-1782行为函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int ret = Add(a, b);//此行中的Add()的()就是函数调用操作符
//
//	return 0;
//}

//结构体中访问成员点操作符和箭头操作符
//.      结构体变量名.成员名
//->     结构体指针->成员名
//创建了一个自定义的类型Book
//struct Book//其中struct是C语言中用来定义一系列具有相同类型或不同类型的数据构成的数据集合，也叫结构体
//{
//	char name[20];
//	char id[20];//书号
//	int price;
//};//其中name、id、price为结构体成员（变量）
//int main()
//{
//	//int num = 10;
//	struct Book b = { "C语言","C123456789",55 };//char类型才需要引号
//	printf("书名：%s\n", b.name);
//	printf("书号：%s\n", b.id);
//	printf("定价：%d\n", b.price);//通过.操作符找到结构体成员
//
//	return 0;
//}
//int main()
//{
//	struct Book b = { "C语言","C123456789",55 };
//	struct Book* pb = &b;//其中*pb就是b
//
//	//printf("书名：%s\n", (*pb).name);
//	//printf("书号：%s\n", (*pb).id);
//	//printf("定价：%d\n", (*pb).price);
//
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//
//	return 0;
//}

//表达式求值
//表达式的求值顺序一部分是由操作符的优先级和结合性决定
//同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//
//	return 0;
//}

//隐式类型转换
//整型提升
//C的整型算术运算总是至少以缺省整型类型的精度来进行的，为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为“整型提升”
//例如：{char a,b,c;
//       .....
//       a=b+c;//其中，b和c的值被提升为普通整型，然后再执行加法运算，运算结束后，结构被截断，然后再储存在a中
//整型提升是按照变量的数据类型的符号位来提升的
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011——3（反码）
//	//00000011——a
//	char b = 127;
//	//00000000000000000000000001111111——127（反码）
//	//01111111——b
//	char c = a + b;
//	//发现a和b都是char类型，都没有到达int类型的大小，于是这里发生整型提升
//	//00000000000000000000000000000011——a的整型提升
//	//00000000000000000000000001111111——b的整型提升
//	//00000000000000000000000010000010——a的整型提升+b的整型提升（反码）
//	//10000010——截断得到c
//
//	printf("%d\n", c);//输出-126
//	//因为要输出整型（%d），所以要将c整型提升
//	//11111111111111111111111110000010——c的整型提升（补码）
//	//11111111111111111111111110000001——反码
//	//10000000000000000000000001111110——原码（-126）
//
//	return 0;
//}