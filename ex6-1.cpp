/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define n 3






int main(void)
{






	/* https://zerojudge.tw/ShowProblem?problemid=a015
		矩陣的翻轉
		input: 第一行會有兩個數字，分別為 列(row)<100 和 行(column)<100，緊接著就是這個矩陣的內容
		output: 直接輸出翻轉後的矩陣
	*/
/*
	int row, column;
	
	printf("Please input the row and column of the array (use space in between):\n");
	scanf("%d %d", &row, &column);
	int a[row][column];

	for (int i=0; i<row; i++) {
		printf("Please input the elements of the #%d row (use space in between):\n", i+1);
		for (int j=0; j<column; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("The input array is as below:\n");
	for (int i=0; i<row; i++) {
		for (int j=0; j<column; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("The transposed array is as below:\n");
	for (int i=0; i<column; i++) {
		for (int j=0; j<row; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
*/



	/* https://zerojudge.tw/ShowProblem?problemid=a022	
		請判斷一個字串是否是一個迴文 (正向，反向讀到的字串均相同)？
		input: abba
		output: yes
	*/  

	char str[80];
	
	printf("Please input a string:\n");
	scanf("%s", str);

  int length = strlen(str);
  int judge = 1;
  for (int i=0; i<length; i++) {
    printf("Debug: str[%d]=%c; str[%d]=%c\n", i, str[i], length-i, str[length-1-i]);  // debug
    if (str[i] != str[length-1-i]) {
      judge = 0;
      break;
    }
  }

  if (judge == 0) {
    printf("no");
  } else {
    printf("yes");
  }







  


  


/*


https://zerojudge.tw/ShowProblem?problemid=a104

https://zerojudge.tw/ShowProblem?problemid=a147

https://zerojudge.tw/ShowProblem?problemid=a148

https://zerojudge.tw/ShowProblem?problemid=a244

https://zerojudge.tw/ShowProblem?problemid=a263

https://zerojudge.tw/ShowProblem?problemid=a417

https://zerojudge.tw/ShowProblem?problemid=a524

https://zerojudge.tw/ShowProblem?problemid=a647

https://zerojudge.tw/ShowProblem?problemid=a693

https://zerojudge.tw/ShowProblem?problemid=a915

https://zerojudge.tw/ShowProblem?problemid=a981

https://zerojudge.tw/ShowProblem?problemid=b558

https://zerojudge.tw/ShowProblem?problemid=b971

https://zerojudge.tw/ShowProblem?problemid=b911

https://zerojudge.tw/ShowProblem?problemid=a248
*/





}
