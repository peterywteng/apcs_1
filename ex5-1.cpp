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
#define size37 10

int f(int i) {
	if (i <= 1) {
		return 1;
	}
	return i * f(i-1);
}


int f2(int i) {
	if (i <= 1) {
		return 1;
	} else {
		printf("i = %d \n", i);
	}
	return f2(i-1);
}


void display(int age1, int age2) {
	printf("%d\n", age1);
	printf("%d\n", age2);
}


void display2(int* pAgeArray) {

	int i=0;
	while(1) {
		printf("%d\n", *(pAgeArray+i));
		i++;
		if (i >= sizeof(*pAgeArray)) {
			break;
		}
	}
}


int rand2(int a, int b) {
//    int guess;
    int answer;
//	int i = 0;
	time_t t;

	int max, min;

	if (a >= b) {
		max = a;
	} else {
		min = a;
	}
	
	// Intializes random number generator
	srand((unsigned) time(&t));
    answer = min + rand() % (max-min+1);  // answer = [min, max]
	
	return answer;

}


int judgePrime(int primeNum){
	for(int i=2; i<=primeNum/2; i++) {
		if (primeNum%i == 0) {
			return 0;
		}
	}	
	return (1);
}


void sort1d(float a[size37], float b[size37]) {
	int j=0;
	while (j < size37) {
		int max = 0;
		int max_index;
		for (int i=0; i < size37; i++) {
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


void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
	
}




int main(void)
{

    /* 練習1 - recursive */
/*
	int n=5;
	printf("f(%d) = %d \n", n, f(n));
*/
	
	
    /* 練習2 - recursive#2 */
/*
	int n=5;
	printf("f(%d) = %d \n", n, f2(n));
*/


    /* 練習3 - 陣列 */
/*
	float a[n];
	int i;

	printf("請輸入三個浮點數 (以enter切換): \n");
	
	for (i=0; i<n; i++) {
		scanf("%f", &a[i]);
	}

	for (i=0; i<n; i++) {
		printf("a[%d] = %f \n", i, a[i]);
	}
*/


    /* 練習4 - 矩陣#1 */
/*
	int num;
	float a[100];
	float max=0;

	printf("Enter the total number of elements: ");
	scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("Enter number %d: ", i+1);		
		scanf("%f", &a[i]);
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("Largest number = %f", max);		
*/


    /* 練習5 - 矩陣#2 */
/*
	int num=6;
	float a[6];
	float sum=0;

	//printf("Enter the total number of elements: ");
	//scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("%d. Enter number: ", i+1);		
		scanf("%f", &a[i]);
		sum = sum + a[i];
	}
	printf("Average = %f", sum/6);		
*/


    /* 練習6 - size of array */
/*
	int arr[] = {1,2,3,4,7,98,0,12,35,99,14};
	
	printf("Number of elements: %lu ", sizeof(arr) / sizeof(arr[0]));
*/

    /* 練習7 -  */
/*
	char x[6] = {'h', 'a', 'p', 'p', 'y', '\0'};
	int a[2][3] = {{1,2,3},{4,5,6}};
	int a[2][3] = {1,2,3,4,5,6};
*/


    /* 練習8 - 傳值到function */
/*
	int ageArray[] = {2,8,4,12};

	display(ageArray[1], ageArray[2]);
*/
	

    /* 練習8 - 傳矩陣到function */




  /* 10. 從鍵盤輸入10個整數，統計其中正數、負數和零的個數，並在螢幕上輸出。 */
/*
    int a[10];
    int pos=0;
    int zero=0;
    int neg=0;
    printf("Please input 10 numbers:\n");
    
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if (a[i]>0) {
            pos++;
        } else if (a[i]==0) {
            zero++;
        } else {
            neg++;
        }
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negaive numbers = %d\n", neg);
    printf("Zero numbers = %d\n", zero);
*/


	/* 12. 從鍵盤上輸入10個數，求其平均值。 */
/*	
	int num=10;
	float a[10];
	float sum=0;

	//printf("Enter the total number of elements: ");
	//scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("%d. Enter number: ", i+1);		
		scanf("%f", &a[i]);
		sum = sum + a[i];
	}
	printf("Average = %f", sum/10);		
*/



	/* 27 - 猜數遊戲。系統隨機產生一個整數，通過鍵盤輸入資料猜數，猜對為止，並要求統計猜的次數。 */
/*
    int guess;
    int answer;
	int i = 0;
	time_t t;
   
   
	// Intializes random number generator
	srand((unsigned) time(&t));
    answer = rand() % 1001;  // answer = [0, 1000]
	
	while (1) {
		printf("請猜一個整數 (0~1000): ");
		scanf("%d",&guess);	
		i++;
		//printf("答案是: %d ", answer);
		
		if (answer > guess) {
			printf("猜錯了! 還要再大一點!\n");
		} else if (answer < guess) {
			printf("猜錯了! 還要再小一點!\n");
		} else {
			printf("答對了! 總共猜了 %d 次!", i);
			break;
		}
	}
*/



	/* 28、主函式輸入 2 個數，其中自定義一函式，產生介於這兩個數的亂數。 */
/*
	int a, b;

	printf("Please input two numbers (use space in between): ");
	scanf("%d %d", &a, &b);	

	printf("The random number between %d and %d = %d", a, b, rand2(a, b));
*/



	/* 29. 編寫程式，其中自定義一函式，用來判斷一個整數是否為質數，主函式輸入一個數，輸出是否為質數。 */
/*
    int primeNum;
    
    printf("請輸入一個整數: ");
    scanf("%d",&primeNum);	

	if (judgePrime(primeNum) == 1) {
		printf("整數 %d 是質數", primeNum);
	} else {
		printf("整數 %d 不是質數", primeNum);
	}
*/



	/* 30. 用陣列實現以下功能：輸入5個學生成績，而後求出這些成績的平均值並顯示出來。 */
/*
	int num=5;
	float a[5];
	float sum=0;

	//printf("Enter the total number of elements: ");
	//scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("Enter the grade of #%d student: ", i+1);		
		scanf("%f", &a[i]);
		sum = sum + a[i];
	}
	printf("Average = %f", sum/5);		
*/


	/* 31. 將一個有5個元素的陣列中的值(整數)按逆序重新存放。
   例: 原來順序為:8、6、5、4、1，要求改為1、4、5、6、8
   */
/*
	int num=5;
	int a[5];

	//printf("Enter the total number of elements: ");
	//scanf("%d", &num);

    printf("Please input 5 numbers:\n");
	for (int i=0; i<num; i++) {
		scanf("%d", &a[i]);
	}

	printf("The reverse order is:\n");
	for (int i=4; i>=0; i--) {
		printf("%d\n", a[i]);
	}
*/


	/* 32、從鍵盤輸入10名學生的成績資料，求其中的最高分、最低分和平均分。 */
/*
	int num=10;
	float a[10];
	float max=0, min=100, sum=0;

	//printf("Enter the total number of elements: ");
	//scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("Enter the grade of #%d student: ", i+1);		
		scanf("%f", &a[i]);		
		sum = sum + a[i];
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("Max = %f\n", max);		
	printf("Min = %f\n", min);		
	printf("Average = %f\n", sum/10);		
*/
	
	

	/* 33、從鍵盤輸入10名學生的成績資料，按成績從高到低的順序排列並輸出。（提示：用陣列存放成績資料） */
/*
	int num=10;
	float a[10];

	for (int i=0; i<num; i++) {
		printf("Enter the grade of #%d student: ", i+1);		
		scanf("%f", &a[i]);		
	}
	
	float b[10];
	int j=0;
	while (j<10) {
		int max = 0;
		int max_index;
		for (int i=0; i<num; i++) {
			if (a[i] >= max) {
				max = a[i];
				max_index = i;
			}
		}
		a[max_index] = -1;
		b[j] = max;
		j++;		
	}
	
	printf("Sorting result: ");		
	for (int i=0; i<num; i++) {
		printf("%f ", b[i]);
	}
*/		



	/* 34、用迴圈的方法構造一個5行5列的二維陣列，使主對角線上的變數為1，其它為0，並將陣列中所有項按行按列顯示出來。 */
/*
//	int a[3][3]={{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	

	int a[5][5]={{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1}};
	
	printf("%d %d %d %d %d\n", a[0][0], a[0][1], a[0][2], a[0][3], a[0][4]);
	printf("%d %d %d %d %d\n", a[1][0], a[1][1], a[1][2], a[1][3], a[1][4]);
	printf("%d %d %d %d %d\n", a[2][0], a[2][1], a[2][2], a[2][3], a[2][4]);
	printf("%d %d %d %d %d\n", a[3][0], a[3][1], a[3][2], a[3][3], a[3][4]);
	printf("%d %d %d %d %d\n", a[4][0], a[4][1], a[4][2], a[4][3], a[4][4]);
*/



	/* 35、求一個3×3矩陣對角線元素之和。從鍵盤輸入矩陣元素的值並輸出和的值. */
/*
	int a[3][3];
	
	printf("Please input the three elements of the 1st row (use space in between):\n");
	scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
	printf("Please input the three elements of the 2nd row (use space in between):\n");
	scanf("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
	printf("Please input the three elements of the 3rd row (use space in between):\n");
	scanf("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);

	printf("The input 3x3 array is:\n");	
	printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
	printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
	printf("%d %d %d\n", a[2][0], a[2][1], a[2][2]);

	printf("The sum of diagonal elements is: %d\n", a[0][0]+a[1][1]+a[2][2]);	
*/



	/* 36、從鍵盤上輸入一個23的矩陣，將其轉置後形成32的矩陣輸出。 */
/*
	int a[2][3];
	
	printf("Please input the three elements of the 1st row (use space in between):\n");
	scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
	printf("Please input the three elements of the 2nd row (use space in between):\n");
	scanf("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);

	printf("The input 2x3 array is:\n");	
	printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
	printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);

	printf("The transposed 3x2 array is:\n");	
	printf("%d %d\n", a[0][0], a[1][0]);
	printf("%d %d\n", a[0][1], a[1][1]);
	printf("%d %d\n", a[0][2], a[1][2]);
*/


	/* 37、定義一個5行3列的陣列，從鍵盤輸入各陣列元素的值，計算各陣列元素之和。 */
/*
	int a[5][3];
	int sum = 0;
	
	printf("Please input the three elements of the 1st row (use space in between):\n");
	scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
	printf("Please input the three elements of the 2nd row (use space in between):\n");
	scanf("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
	printf("Please input the three elements of the 3rd row (use space in between):\n");
	scanf("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);
	printf("Please input the three elements of the 4th row (use space in between):\n");
	scanf("%d %d %d", &a[3][0], &a[3][1], &a[3][2]);
	printf("Please input the three elements of the 5th row (use space in between):\n");
	scanf("%d %d %d", &a[4][0], &a[4][1], &a[4][2]);

	printf("The input 5x3 array is:\n");	
	printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
	printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
	printf("%d %d %d\n", a[2][0], a[2][1], a[2][2]);
	printf("%d %d %d\n", a[3][0], a[3][1], a[3][2]);
	printf("%d %d %d\n", a[4][0], a[4][1], a[4][2]);

	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {		
			sum = sum + a[i][j];
		}
	}
	printf("The sum of all elements is: %d\n", sum);	
*/


	/* 38、程式設計實現如下功能：
	1）在主函式中，實現從鍵盤輸入10名學生某門課的成績，儲存在一維陣列中；呼叫排序函式；對排序後的陣列中的元素按從高到低列印輸出。
	2）編寫排序函式，使用陣列名做函式引數，實現對該成績的排序。 */
/*
	int num=10;
	float a[10];
	float b[10];

	for (int i=0; i<num; i++) {
		printf("Enter the grade of #%d student: ", i+1);		
		scanf("%f", &a[i]);		
	}
	
	sort1d(a, b);
	
	printf("Sorting result: ");		
	for (int i=0; i<num; i++) {
		printf("%f ", b[i]);
	}
*/



	/* 39、程式設計實現如下功能：從鍵盤輸入一行字元，統計其中大寫英文字元，小寫英文字元和其他字元的個數。 */
/*
	char str[80];
	int i=0;
	int big=0;
	int small=0;
	int others=0;

	// ASCII CODE:
	//   A - Z: 65 - 90
	//   a - z: 97 - 122

	printf("Enter a string: ");		
	scanf("%s", str);		

	while (1) {
		if (str[i] == '\0') {
			break;
		} else if ( (str[i] >= 65) && (str[i] <= 90) ) {
			big++;
		} else if ( (str[i] >= 97) && (str[i] <= 122) ) {
			small++;
		} else {
			others++;
		}
		i++;
	}

	printf("There are %d upper case letters!\n", big);		
	printf("There are %d lower case letters!\n", small);		
	printf("There are %d other letters!\n", others);		
*/



	/* 40、輸入兩個整數，利用指標變數作為函式引數，程式設計實現兩數互換功能，並將交換後的資料重新輸出。 */
/*
	int a, b;
	
	printf("Enter two numbers (use space in between): ");		
	scanf("%d %d", &a ,&b);
	
	swap(&a, &b);

	printf("After swapping, the two numbers become: %d %d", a, b);		
*/



	/* 41、程式設計實現如下功能： 實現從鍵盤輸入兩個字串，分別存入兩個不同的字元陣列中；將兩個字串連線為一個字串，並列印輸出連線後的整個字元。 */
/*
	char str1[80], str2[80], str3[160];
	int i=0, j=0;

	printf("Enter the 1st string: ");		
	scanf("%s", str1);
	printf("Enter the 2nd string: ");		
	scanf("%s", str2);

	while (str1[i] != '\0') {
		str3[j] = str1[i];		
		i++;
		j++;
		//printf("str3[%d] = %c\n", j, str3[j]);  // debug
	}

	i=0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];		
		i++;
		j++;
		//printf("str3[%d] = %c\n", j, str3[j]);  // debug
	}

	printf("After string combination: %s", str3);		
*/



	/* 42. 輸入一數字，請將此數字的所有位數，作所有位數的加總 */
/*
	int a;
	int sum = 0;
	
	printf("Enter a number of [0, 9999]: ");		
	scanf("%d", &a);
	
	sum += a%10;
	//printf("sum = %d\n", sum);  // debug
	sum += ((a-a%10)%100)/10;
	//printf("sum = %d\n", sum);  // debug
	sum += ((a-(a-a%10)%100)%1000)/100;
	//printf("sum = %d\n", sum);  // debug
	sum += ((a-((a-(a-a%10)%100)%1000))%10000)/1000;
	//printf("sum = %d\n", sum);  // debug
	
	printf("Sum of each digit is: %d", sum);		
*/



	/* 43. 輸入一數字，請將此數字的所有位數，數字倒轉 */
/*
	int a;
	int inv_a[4];
	
	printf("Enter a number of [0, 9999]: ");		
	scanf("%d", &a);

	inv_a[0] = a%10;
	inv_a[1] = ((a-a%10)%100)/10;
	inv_a[2] = ((a-(a-a%10)%100)%1000)/100;
	inv_a[3] = ((a-((a-(a-a%10)%100)%1000))%10000)/1000;

	printf("The reverted number becomes: ");		
	for (int i=0; i<4; i++) {
		printf("%d", inv_a[i]);
	}
*/



	/* 44、從鍵盤輸入30名學生的成績資料，求其中的最高分、最低分和平均分。 */
/*
	int num=30;
	float a[30];
	float max=0, min=100, sum=0;

	//printf("Enter the total number of elements: ");
	//scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("Enter the grade of #%d student: ", i+1);		
		scanf("%f", &a[i]);		
		sum = sum + a[i];
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("Max = %f\n", max);		
	printf("Min = %f\n", min);		
	printf("Average = %f\n", sum/30);		
*/



	/* 45、從鍵盤輸入某班學生某門課的成績及其學號（班級人數最多40人，具體人數由鍵盤輸入），輸出該班最高分和最低分及其學生學號；並輸出該班該課程的總分和平均分。請編寫程式。 */

	int num;
	float a[40];
	int b[40];
	float max=0, min=100, sum=0;
	int max_index, min_index;

	printf("Enter the total number of students: ");
	scanf("%d", &num);

	for (int i=0; i<num; i++) {
		printf("Enter the grade and number of #%d student (use space in between): ", i+1);		
		scanf("%f %d", &a[i], &b[i]);		
		sum = sum + a[i];
		if (a[i] > max) {
			max = a[i];
			max_index = b[i];
		}
		if (a[i] < min) {
			min = a[i];
			min_index = b[i];
		}
	}
	printf("Max grade: %f (#%d)\n", max, max_index);		
	printf("Min grade: %f (#%d)\n", min, min_index);		
	printf("Total = %f\n", sum);		
	printf("Average = %f\n", sum/num);		









}




