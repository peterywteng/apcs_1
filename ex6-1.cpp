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
#define Size 80

void sort1d(int a[Size], int b[Size], int length) {
	int j=0;
	while (j < length) {
		int max = 0;
		int max_index;
		for (int i=0; i < length; i++) {
			if (a[i] >= max) {
				max = a[i];
				max_index = i;
			}
		}
		a[max_index] = -1;
		b[j] = max;
		j++;		
	}
}




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
/*
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
*/



	/* https://zerojudge.tw/ShowProblem?problemid=a104
		輸入說明
			第一行有一個正整數n(1<=n<=1000)，代表有幾個數字要請你幫忙排
			第二行有n個可以用int儲存的正整數
		輸出說明
			輸出n個已由小到大排序好的正整數
 */

		/* 33、從鍵盤輸入10名學生的成績資料，按成績從高到低的順序排列並輸出。（提示：用陣列存放成績資料） */
/*
	int length;
	printf("Enter the length of the array: ");		
	scanf("%d", &length);

	int a[Size];

	printf("Enter the contents of the array (use space in between): ");		

	for (int i=0; i<length; i++) {
		scanf("%d", &a[i]);
	}

	int b[length];
	int j=0;
	while (j<length) {
		int min = 100;
		int min_index;
		for (int i=0; i<length; i++) {
			if (a[i] <= min) {
				min = a[i];
				min_index = i;
			}
		}
		a[min_index] = 100;
		b[j] = min;
		j++;		
	}

	
	printf("Sorting result: ");		
	for (int i=0; i<length; i++) {
		printf("%d ", b[i]);
	}
*/  



	/*
	https://zerojudge.tw/ShowProblem?problemid=a147
 		大於 0、整數、不可以被 7 整除、小於 n，請輸出所有可能的數字。
	*/
/*
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);

	printf("The positive integers smaller than %d and without 7 factors are:\n", num);

	for (int i=1; i<num; i++) {
		if (i%7 != 0) {
			printf("%d ", i);
		}
	}
*/



	/* https://zerojudge.tw/ShowProblem?problemid=a148
		你考了 n 科筆試題目，每科的滿分都是 100 分。老師說，如果平均大於 59 你就過關了。
		輸入說明
			輸入第一行為一個數字 n，代表n科；接著有 n 個正整數。代表n科的成績。
		輸出說明
			若你被當了，請輸出「yes」，否則輸出「no」。
 	*/
/*
	int num;
	printf("Please input the number of subjects: ");
	scanf("%d", &num);

	float grades[num];
	float sum = 0;
	printf("Please input the grades of all subjects (use space in between): ");
	for (int i=0; i<num; i++) {
		scanf("%f", &grades[i]);
		sum += grades[i];
	}

	float average = sum/num;
	if (average > 59) {
		printf("no");
	} else {
		printf("yes");
	}
*/


	/* 
 	https://zerojudge.tw/ShowProblem?problemid=a244
	輸入說明
		第一行有一個正整数N，代表接下來有N行每行有三個正整數 a , b , c    
	輸出說明
		如果 a = 1  請輸出  b+c 
		如果 a = 2  請輸出  b-c 
		如果 a = 3  請輸出  b*c 
		如果 a = 4  請輸出  b/c  
		結果請用整数輸出
  	*/

	int num;
	printf("Please input the number of operations: ");
	scanf("%d", &num);

	int a[num], b[num], c[num];
	int result[num];
	for (int i=0; i<num; i++) {
    	printf("Please input a b c (use space in between): ");
		scanf("%d %d %d", &a[i], &b[i], &c[i]);

        switch (a[i]) {
            case 1:
                result[i] = b[i] + c[i];
                break;
            case 2:
                result[i] = b[i] - c[i];
                break;
            case 3:
                result[i] = b[i] * c[i];
                break;
            case 4:
                result[i] = b[i] / c[i];
                break;
            default:
                printf("Error! a=%d should be within [1,4]!", a[i]);
        }
	}

    printf("The results are: \n");
	for (int i=0; i<num; i++) {
	    printf("%d\n", result[i]);
	}


	




/*

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
