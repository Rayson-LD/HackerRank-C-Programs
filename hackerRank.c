#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*1*/
int main()
{
    char s[100] = "Welcome to C programming.";
    printf("Hello, World!\n");
   
    printf("%s",s);
    return 0;
    
}

/*2*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char ch,s[50],sen[500];

scanf("%c",&ch);

scanf("%s",s);

scanf("\n");

scanf("%[^\n]%*c",sen);

printf("%c\n",ch);

printf("%s\n",s);

printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

/*3*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,s1,m1;
    float c,d,s2,m2;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    s1 = a + b;
    m1 = a - b;
    s2 = c + d;
    m2 = c - d;
    printf("%d %d\n",s1,m1);
    printf("%0.1f %0.1f",s2,m2);
    return 0;
}

/*4*/
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d)
    {
    printf("%d", a);
    }
    else if(b>a && b>c && b>d)
    {
    printf("%d", b);
    }
    else if(c>a && c>b && c>d)
    {
    printf("%d", c);
    }
    else {
    printf("%d",d);
    }
    return 0;
}

/*5*/
#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b) {
    // Complete this function
    int aa = *a;
    *a = *a+*b;
    *b = aa-*b;
    if(*b < 0)*b *= -1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa,pb);
    printf("%d\n%d", a,b);
   
   
}
