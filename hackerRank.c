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

/*6*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
   
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }
    if(1<=n && n<=9)
    {
        if(n==1)
        {
            printf("one");
        }
        else  if(n==4)
        {
            printf("four");
        }
        else  if(n==2)
        {
            printf("two");
        }
        else  if(n==3)
        {
            printf("three");
        }
        else  if(n==5)
        {
            printf("five");
        }
        else  if(n==6)
        {
            printf("six");
        }
        else  if(n==7)
        {
            printf("seven");
        }
        else  if(n==8)
        {
            printf("eight");
        }
        else 
        {
            printf("nine");
        }
    }
    else if(n> 9)
    {
        printf("Greater than 9");
    }

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

/*7*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int labels_index;
      for (int i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", labels[labels_index]);
    }

    return 0;
}

/*8*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum = 0;
    scanf("%d", &n);
    while(n>0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}

/*9*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int maxA = 0;
  int maxO = 0;
  int maxX = 0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if((i&j)>maxA && (i&j)<k)
          {
              maxA = i&j;
          }
          if((i|j)>maxO && (i|j)<k)
          {
              maxO = i|j;
          }
          if((i^j)>maxX && (i^j)<k)
          {
              maxX = i^j;
          }
      }
  }
  printf("%d\n%d\n%d",maxA,maxO,maxX);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
 
    return 0;
}

/*10*/
#include<stdio.h>
int main() 
{

    int n;
    int min;
    scanf("%d", &n);
    int len = n*2;
    for(int i=1;i<len;i++){
        for(int j=1;j<len;j++){
            if(i<j)
            {
                min = i;
            }
            else {
                min = j;
            }
             if(min < len-i)
             {
                 min = min;
                
             }
             else {
                 min = len-i;
             }
             if(min < len-j)
             {
                 min = min;
             }
             else {
              min = len-j;
             }
            printf("%d ", n-min+1);
        }
        printf("\n");
    }
    return 0;
}

/*11*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arr[100],n,sum=0;
int main() {
   
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
        scanf("%d",&arr[i]);
   
    for(int i=0;i<=n;i++)
        sum = sum + arr[i];
    printf("%d",sum);

}

/*12*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,temp=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


   for(i = num-1; i>-1; i--)
        printf("%d ", *(arr + i));
    return 0;
}

/*13*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (char *c = s; *c != NULL; c++) {
    if (*c == ' ') {
        *c = '\n';
    }
}
printf("%s", s);
    return 0;
}

/*14*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char input;
int b[10]={},temp,a;
do{
    a = scanf("%c",&input);
    temp = input-48;
    if(temp<10) b[temp]++;
}while(a>=1);
for(temp=0;temp<10;temp++){
    printf("%d ",*(b+temp));
}  
    return 0;
}

/*15*/
int marks_summation(int* marks, int number_of_students, char gender) {
 
    int sum = 0;
    for (int i = (gender != 'b' ? 1 : 0); i < number_of_students; i = i + 2) 
        sum += *(marks + i);
    
    return sum;
}

/*16*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
