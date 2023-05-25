## 碎碎念

**C语言中优先级最高的运算符**
1. 数组下标
2. 函数调用()
3. 结构体取成员 . ->
4. 后缀的++ 
5. 后缀的--

特别注意结构体指针用. ->访问，取成员符号优先级高于指针的*所以需要访问结构体指针的成员需要用(*a).real这样的

**输入输出的格式控制符**

整数一般用%d, short int 用hd； 长整数long ，用ld
长长整数，用lld


浮点类型 float 用%f  double双精度浮点数用lf 
long double 用Lf


**千万别把提示输入的字符放在scanf的输入格式控制符里面**
这不是Python！





## chapter 9 函数

**字符串可以作为数组的下标，需要对常量字符进行缩放处理**

数组的初始化指对所有的元素进行赋值，
指示器是对制定元素进行初始化。

```c
#include<stdbool.h>
bool weekend[7] = {[0]=true，[6]=true}
```

c语言的类型的参数传递为按值赋值传递，

如果不对C语言的函数的返回值进行=之类的保留，那么其使用的值将被丢弃。

需要把需要调用的函数放在main函数调用的位置之前。

调用无参数的函数，void，只需要写出函数名，后面加圆括号。

**函数不能返回数组** 
**省略返回值类型，在c89中默认为int，c99不合法**
形式参数，必须挨个声明其类型

函数返回值类型为void的，可以用简单的一对空的{}作为函数体。

丢失圆括号无法调用。
在函数调用前使用(void) 对函数的返回值进行强制类型转换，说明是故意丢弃返回值的。

**函数定义和函数声明的区别**，函数声明又称为函数原型
**函数原型并不需要说明形式参数的名字**，只需要知道类型，返回值就没有名称的说法了。
c99调用前必须先声明。

### 函数调用的参数类型转换

调用前遇到了原型就是**隐式转换**

没有遇到默认实参提升，float 变double，char short 变int

传入数组作为参数的时候，需要同时传入数组的长度 int len 
即便是sizeof也无法给出数组参数大小的正确结果

**定义和声明函数的时候，传入数组需要使用int a[], int n这样的参数传入。**
调用时需要不能加[] 直接a n。

变长数组参数传递
int sum_arrary(int n, int a[n]) 前面的n是后面的数组的长度，反过来不行。
*号可以 方括号为空也可以


**复合字面量**指的是通过指定其包含的元素而创建的没有名字的数组。 匿名数组，方便直接使用。

total = sum_array((int []){3, 0, 3, 4, 1}, 5)
格式： (类型 []){xxxx初始化器}，可以使用指示器。为左值。

**return**时可能会发生隐式的类型转换。

main函数返回的是状态码，给操作系统，返回0是表示正常终止。

**exit** 位于stdlib
类似于exit(0); return 0;

区别，哪个函数调用exit都会导致程序终止，而return只有main调用会终止，其他函数只是返回上一层。

### 泛型选择。

### 快速排序

一个关键条件，如果middle 或者pivot 符合要求，比如pivot < high 或者pivot > low 
low和high就应该很自然的左移和右移。

直到不符合这个条件时，需要将元素进行换位。

**函数名后面不带括号会怎么样？**
不带的话，会被当成指向函数的指针？对于编译器而言是合法的，但是没有意义的。

**原型和定义中的形参名字并不要求相同**

函数的原型声明可以放在函数的内部，比如main内部，只能被其调用

函数声明的返回值相同可以合并

**实现一个简单的选择排序**
```c
    int a[N], i;
    printf("Enter  %d numbers to sort ", (int) sizeof(a)/sizeof(a[0]));
    for(i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }
```
**需要注意数组元素读入的时候也需要带&符号**

**用递归方式实现的简单的选择排序，写起来会比冒泡简单点，但是感觉空间复杂度会变高**

```c
void selection_sort(int a[], int len)
{
    if (len==1)
        return;

    int i, temp, max = 0;
    for(i=0;i<len;i++)
    {
        if(a[i] > a[max])
            max = i;
    }
    temp = a[len-1];
    a[len-1] = a[max];
    a[max] = temp;
    selection_sort(a, len-1);
}
```

### chapter 10 

### 局部变量
自动存储期限和块作用域

形参也是局部变量，但是形参每次调用前都会重新初始化（通过值传递）


### 静态局部变量
静态存储期，永久储存单元
始终有块作用域，对其他函数不可见

### 外部变量/qrjvbml
静态存储期，文件作用域，可在整个文件内被调用。

用外部变量实现栈，因为四五个对栈进行操作的函数都需要访问栈的数组和栈的top指针，用外部变量比较合适。
**主要还是不想一直传参吧，传来传去很麻烦，直接用void**


**一个外部变量误用导致的bug**  这里面i是外部变量，静态存储期，在print all row调用后，在调用print one row重置成了11，在all row中立即终止了。
```c
#include <stdio.h>

void print_all_row(void);
void print_one_row(void);
int i;

int main(void)
{

    print_all_row();
}

void print_one_row(void)
{
    for (i=1;i<=10;i++)
        printf("*");
}

void print_all_row(void)
{
    for(i=1;i<=10;i++)
    {
        print_one_row();
        printf("\n");
    }
}
```

### C语音程序的组织顺序
1. #include指令
2. define 指令
3. 类型定义， typedef
4. 外部变量的声明
5. 除main函数之外的函数的原型
6. main函数定义
7. 其他函数定义


一个利用栈对括号进行匹配的例子。有一些冗余的部分。

```c
#include <stdio.h>
#include <stdbool.h>
#include "stack2.h"
#include <stdlib.h>

#define STACK_SIZE 100

/* external variable */

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int element);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    int ch, element;
    printf("Enter parenteses and/or braces: ");
    while((ch = getchar()) != '\n')
    {
        if(ch == '('|| ch == '{')
        {
            push(ch);
        }

        if(ch == ')'|| ch == '}')
        {
            if(is_empty())
            {
                printf("Parenteses/braces are not nested properly");
                exit(0);
            }
            element = pop();
            if (ch == ')'&& element == '(')
            {

            }
            else if (ch == '}'&& element == '{')
            {

            }
            else
            {
                printf("Parenteses/braces are not nested properly");
                exit(0);
            }
        }
        
    }
    printf("Parenteses/braces are nested properly");
    return 0;  
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int element)
{
    if(is_full())
        stack_overflow();
    else    
        contents[top++] = element;
}

int pop(void)
{
    if(is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("the stack is full. overflow!");
    exit(0);
}

void stack_underflow(void)
{
    printf("the stack is empty. underflow");
    exit(0);
}
```


## chapter 11 pointer

可以在指针变量声明的同时进行赋值操作
`int *p = &i`

**不同类型的指针不能简单赋值**
比如&p = q， 一个是指向指针的指针，而q是指向整形的指针（前提里面的）

**取地址运算符&**

**简介寻址运算符***

### 指针作为函数的参数

**典型错误介绍**
```c
/* Function to decompose a float to int part and fract part */

#include <stdio.h>

void decompose(double x, long *int_part, double *fract_part);

int main(void)
{
    double x = 3.1415926;
    long *int_part;
    double *fract_part;
    decompose(x, int_part, fract_part);
    printf("int part of x: %ld\n", *int_part);
    printf("fract part of x: %g\n", *fract_part);
    return 0;
}

void decompose(double x, long *int_part, double *fract_part)
{
    *int_part = (long)x;
    *fract_part = x - *int_part;
}
```
代码的错误在于，声明了两个指针变量，但是他们并没有合适的引用，直接被用来给整数和小数部分复制会导致问题，还是老老实实声明两个普通变量，然后用&赋值更合适。

对于已经是指针变量的，scanf就不需要& 符号了

函数使用指针作为参数的时候，通常假设会修改指针变量的值
**如果不希望修改，可以在形式参数中加入const**，放在类型声明的前面
`void f(const int *p);`

**注意是不允许修改*p的值，而不是不允许修改p**
`void f(int * const p);` 将不允许该p本身

### 指针作为函数的返回值

可以返回指向外部变量或者声明为static的局部变量的指针
**不要返回指向自动局部变量的指针** 返回时，指针指向的将不存在。

指向数组某个元素的指针 &a[n]

使用printf %p的形式输出指针的地址

numerator 分子
denominator 分母

一个简单的化简分数的题目，使用指针返回数值。
开始分模块写的时候把**prototype和定义函数的返回值写错了，发生了报错** 用指针的函数习惯了没有返回值，写void。但是有时候还是需要返回一个整型。


```c
/* Enter a fraction and reduce it to simplest form */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_demoninator);
int find_the_gcd(int num1, int num2);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_demoninator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator, denominator, &reduced_numerator, &reduced_demoninator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_demoninator);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_demoninator)
{
    int gcd;
    gcd = find_the_gcd(numerator, denominator);
    *reduced_numerator = numerator / gcd;
    *reduced_demoninator = denominator / gcd;
}

/**
 * @brief find the greatest common divisor between two integer
 * @param
 */
int find_the_gcd(int num1, int num2)
{
    int temp;
    if (num1 < num2)
        temp = num1;
        num1 = num2;
        num2 = temp;
    
    while(num2 != 0)
    {
        temp = num2;
        num2 =num1 % num2;
        num1 = temp;
    }
    return num1;
}
```

## chapter12 指针和数组

###指针的算术运算

当指针指向数组中某个元素的地址时，比如&a[0]，可以对指针进行算术运算。
支持三种：
1. 指针加上整数
2. 指针减去整数
3. 两个指针相减

简单说就是

`p = &a[i];` p+j 等效于 a[i+j] 减法类型
两个指向数组的指针相减得到两个元素的距离。

支持比较运算 判等

指向复合字面量的指针 复合字面量是指类似于 (int []){1,2,3,4} 这样的匿名数组，前面的圆括号里面包含类型名，花括号里面包含生成器或者指示器。

两种方式的比较，前者不再需要先定义一个a[]数组，再指定其指向第一个元素。直接指向了匿名数组的第一个元素。
```c
int *p = (int []){3,4,4,1,4};

****************************

int a[] = {3,4,4,1,4};
int *p = &a[];

```

指针数组处理,**可以写出不用数组下标的循环，不再需要i元素
```c

int a[N], sum, *P;
sum = 0;
for(p = &a[0];p < &a[N]; p++)
{
    sum += *p;
}
****************************************
/* 另一种写法，用数组名做指针 */
int a[N], sum, *p;
sum = 0;
for(p = a;p<a+N;p++)
{
    sum += *p;
}
```

`*p++ = j;`

++ -- 的优先级低于*符号

**数组名作为指针**
```c
int a[n];
*a = 7;
*(a+1) = 5;
```

a可以作为指针使用，见上面的第二个写法。但是不能对a进行运算修改，只能用a+1这样后使用，最好还是复制给一个指针变量使用。

```
int a[N];
p = a;
while(*p != 0)
    p++;
```

**正序和逆序输入输出数组元素的指针用法**
```c
for(p = a; p < a+N; p++)
{
    scanf("%d", p);
}
printf("In reverse order: ");
for(p = a+N-1; p >= a; p--)
{
    printf("%d", *p);
}
```

**要点**
1. 用指针进行数组传参，假设会被修改，不想该修改就添加const，编译器会检查是否被修改，`int find largest(const int a[], int n)`

2. 指针或者int a[]传递数组速度比较快，不会造成不利结果
3. 可以将int a[] 形式参数变成 int *a

这样**仅仅作为形式参数是**合理的，但是单独拿出来声明不行，声明空间不同，把指针当数组会出问题。

4. 可以传递数组的一部分，find largest(&b[5], 10)这样调用会从第5个开始。

**指针名做数组名。** 类似```*p = a; p[i];`操作合理

**几个常用的*p数组调用的方法**
```c
char m[N];
char *p = m;
int ch;
printf("Enter a message: ");
while((ch = getchar()) != '\n')
{
    *p++ = ch;
}

// for(;p>=m;p--)
// {
//     printf("%c", *p);
// }

while(p>m)
    printf("%c", *p--);
printf("\n");
return 0;
```

**注意里面的ch是int型变量，同时是'\n'，不是"\n"

快速排序指针版本，需要递归调用，需要注意几个点：
1. 使用指针作为返回值的函数需要声明，int *split()
2. int a[]本身在快排里面没有用，知道首位元素即可，也就是两个参数int *low int *high
3. 指针的报错提示非常有限，比如第一点就很难检查出来。

```c
/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>
#define N 10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void)
{
    // int a[N], i;

    int i, a[N] = {7, 3, 4, 4, 2, 1, 4, 9, 0, 5};
    quicksort(&a[0], &a[N-1]);

    printf("In sorted order: ");
    for (i=0; i<N;i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int *low, int *high)
{
    int *middle;

    if (low >= high) return;
    middle = split(low, high);
    quicksort(low, middle-1);
    quicksort(middle+1, high);
}

int  *split(int *low, int *high)
{
    int pivot = *low;

    for (;;)
    {
        while (low < high && pivot <= *high)
            high--; 
        if (low >= high)
            break;
        *low++ = *high;

        while( low < high && *low <= pivot)
            low++;
        if(low >= high)
            break;
        *high-- = *low;
    }

    *high = pivot;
    return high;
}
```


## chapter13 string

**字面串常量**
**字符串变量**

字面串仅仅是指代码中，字符串则是储存在系统内的。

C语言把字符串当做字符数组处理

字面串会是char * 类型的指针，指向字面串后，不可修改内容

```c
char *p;
p = "abc";

ch = "abc"[1];
```

字符串定义的惯用法。

```c
#define STR_LEN 80

char str[STR_LEN+1];
```

逐个读取字符串
```c

int read_line(char str[], int n);

int read_line(char str[], int n)
{
    int ch, i =0;  \* 这里面的ch 为int 类型 *\
    while((ch = getchar()) != '\n')  \* 注意是'\n' 不是"\n" *\
    {
        if (i<n)
            str[i] = ch;
    }
    str[i] = '\0';  \* 末尾手动添加一个空字符，在scanf和gets都会自动添加 *\
    return i;
}
```

**统计字符串中的空格数量** 两种写法
```c

/* 数组下标写法 */
int count_spaces(const char s[])
{
    int count = 0, i;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] == ' ')
            count++
    }
    return count;
}

/* 指针写法，形式参数也不相同 */
int count_spaces(const char *s)
{
    int count = 0;
    for(;*s !='\0';s++)
    {
        if(*s == ' ')
            count++;
    }
    return count;
}
```

这里面有个问题，第二种写法会不会修改了，和const导致错误？
const 这里是指定s只想的对象不可以修改，s本身可以修改。 s只是函数传入的指针的简单值传递的副本。
第二个，就是数组名的作为指针是不可以修改的，而指针的可以修改，在不影响原始指针的情况下是没事的。

### 字符串标准库 string.h

直接比较两个字符串的指针，只会比较指针的地址，并不是真的比较两个字符串。

char *strcpy(char *s1, const char *s2)
从s2复制到s1，并返回s1的地址。可能s2过大，访问越界。s2中的空字符也会被复制

char *strncpy(char *s1, const char *s2, sizeof(s1)-1)
限制了复制的个数

size_t strlen(const char *s);

### 字符串函数的惯用方法
```c
/* 搜索字符的结尾 */
size_t mystrlen(const char *s)
{
    const char *p = s;

    while (*s)
        s++;
    return s - p
}

while(*s++)
    ;

while(*s)
    s++;

```

复制字符串,**空字符等于0，判断为假。

```c
/* 最原始版本，先移动到末尾，然后逐个从s2搬运到s1 */
char *strcat(char *s1, const char *s2)
{
    int *p = s1;
    while(*p != '\0')
        p++;
    while(*s2 != '\0')
        {
            *p = *s2;
            p++;
            s2++;
        }
    *p = '\0';
    return s1;
}

/* 通过while(*p)简化的版本 */

char *strcat(char *s1, const char *s2)
{
    int *p = s1;
    while(*p);
        *p++;
    while(*p++ = *s2++) /* 可以不看++ --，如果*s2等于"'\0'时，赋值给*p后，然后循环终止 */
    ；
    return s1；
}
```

### 字符串数组

元素是指向字符串的指针的数组

`char *planet[] ={"mercury", "earth"};`


### 命令行参数

```c
int main(int argc, char *argv[])
{
/* 数组下标实现访问命令行参数数组 argv的第一个值为执行文件本身的名字 */
    int i;
    printf("%d\n", argc);

    for(i=0;i<argc;i++)
    {
        printf("%s\n", argv[i]);
    }

    printf(" \n");

/* 指针实现，通过一个指向指针的指针 */
    char **p;
    for(p=argv;*p!=NULL;p++)
        printf("%s\n", *p);
}

  chapter13 git:(master) ✗ ./argc_argv 1 2 3
4
./argc_argv
1
2
3
 
  chapter13 git:(master) ✗ 
 ```

### stdlib.h中的实用函数

字符串转换成数值
atol atoi atof


一个简单的置换字符串两边元素的方法，使用两个指针。
```c
    char m[N];
    char *q, *p = m, temp;
    int ch;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n')
    {
        *p++ = ch;
    }

    p--;
    q = m;
    while(p > q)
    {
        temp = *p;
        *p = *q;
        *q = temp;
        p--;
        q++;
    } 
    printf("Reversal is: ");
    printf("%s", m);
    printf("\n");
    return 0;
```

在**逆转字符串**和**判断回文序列**里面都有，双指针方法，一个指向头，另一个用while(*p)的方法指向空字符然后-1，开始循环，直到两个相遇，奇数个是指向同一个地址，偶数个是先start小于end，然后循环最后一次，end小于start，同时start++ end--

```c
void reverse(char *message)
{
    char *start, *end, temp;
    start = message;
    end = message;
    while(*end)
    {
        end++;
    }
    end--;
    
    while(end > start)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }   
}  
 ```

 