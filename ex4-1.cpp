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


int addNumbers(int a, int b);  // 宣告函式


int add(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
int dvd(int a,int b) {
    return a/b;
}

void print(){
    printf("this hello function \n");
}

int xtoy(int x){
    int y;
    
    if (x<0){
        y = 1;
    } else if (x>0) {
        y = 3;
    } else if (x==0) {
        y = 5;
    }
    
    return y;
    
}


int area(int h, int w){
    return (h*w);
    
}


int hrtomin(int hr, int min){
    return (hr*60+min);
    
}


int max2(int a, int b){
	if (a>=b) {
		return (a);
	} else {
		return (b);
	}
}


int roctoad(int rocYear){
	return (rocYear+1911);
}


float celtof(float celDegree){
	return (celDegree*9/5 + 32);
}


int judgePrime(int primeNum){
	for(int i=2; i<=primeNum/2; i++) {
		if (primeNum%i == 0) {
			return 0;
		}
	}	
	return (1);
}


int findFactor(int num, int factor[100]){
	int j=0;
	for(int i=2; i<=num/2; i++) {
		if (num%i == 0) {
			factor[j] = i;
			j++;
		}
	}
	
	if (j==0) {
		return (0);  // prime number
	} else {
		return (j);  // factor numbers
	}
}


int findGCF(int a, int b){
	int j=0;
	int max=0;
	int gcf=1;
	
	if (a >= b) {
		max = a;
	} else {
		max = b;
	}
	
	for(int i=2; i<=max/2; i++) {
		if ( (a%i == 0) && (b%i == 0) ) {
			gcf = i;
		}
	}
	
	return (gcf);
}


int findLCM(int a, int b){
	int j=0;
	int max=0;
	int lcm=1;
	
	if (a >= b) {
		max = a;
	} else {
		max = b;
	}

	while (1) { 
		for(int i=2; i<=max/2; i++) {
			if ( (a%i == 0) && (b%i == 0) ) {
				lcm = lcm * i;
				a = a / i;
				b = b / i;
				max = max / i;
				break;
			}
		}
		break;  // can not find any common factor
	}
		
	return (lcm*a*b);
}









int main(void)
{

    /* 練習1 - Function + - * / */
/*
    int a=7, b=2;
    
    #if 1
    printf("%d + %d = %d \n", a, b, a+b);
    printf("%d - %d = %d \n", a, b, a-b);
    printf("%d * %d = %d \n", a, b, a*b);
    printf("%d / %d = %d \n", a, b, a/b);
    #else
    printf("%d + %d = %d \n", a, b, add(a,b));
    printf("%d - %d = %d \n", a, b, sub(a,b));
    printf("%d * %d = %d \n", a, b, mul(a,b));
    printf("%d / %d = %d \n", a, b, dvd(a,b));
    #endif

    printf("\n");
    print();

*/


    /* 練習2 - Function addNumber */
/*
    int n1,n2,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1,n2);
    printf("sum = %d", sum);
*/

    /* 練習6 - Function x to y */
/*
    int x;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("y=%d", xtoy(x));
*/

    /* 練習20 - Function area */
/*
    int h, w;
    
    printf("Enter two numbers (space to separate): ");
    scanf("%d %d",&h, &w);
    printf("area = %d", area(h, w));
*/    


    /* 練習21 - Function time */
/*
    int hr, min;
    
    printf("Enter two numbers (space to separate): ");
    scanf("%d %d",&hr, &min);
    printf("minutes = %d", hrtomin(hr, min));
*/

    /* 練習題 - Function  */
/*
    int i_num = 4;
    double f_num = 4.0;

    f_num = pow(8.0, i_num);
    printf(" %f \n", f_num);
    printf("Square root of %lf is %lf \n",4.0,sqrt(4.0));
    printf("Square root of %lf is %lf \n",5.0,sqrt(5.0));

    printf("8的%.0lf次方 = %lf \n",4.0,f_num);
*/


	/* 習題7 - 從鍵盤輸入兩個數，求出其最大值
	  （要求使用函式完成求最大值，並在主函式中呼叫該函式）
	*/
/*	
    int a, b;
    
    printf("請輸入兩個數 (用空白做間隔): ");
    scanf("%d %d",&a, &b);	
    printf("最大值是: %d", max2(a, b));
*/


	/* 習題19. 編寫程式，其中自定義一函式，作民國與西元的換算 */
/*
    int rocYear;
    
    printf("請輸入民國幾年: ");
    scanf("%d",&rocYear);	
    printf("民國 %d 年是西元 %d 年", rocYear, roctoad(rocYear));
*/


	/* 習題23 - 主函式輸入 輸入 a degree C ，其中自定義一函式，溫度轉換，輸出  b degree F */
/*
    float celDegree;
    
    printf("請輸入攝氏度數: ");
    scanf("%f",&celDegree);	
    printf("攝氏 %.1f 度是華氏 %.1f 度", celDegree, celtof(celDegree));
*/


	/* 習題24 - 編寫程式，其中自定義一函式，用來判斷一個整數是否為質數，主函式輸入一個數，輸出是否為質數。 */
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


	/* 習題25 - 編寫程式，主函式輸入一個數，其中自定義一函式，用來判斷數字是否有因數，如果是，逐一輸出。 */
/*
	#define 	N	 100
    int num;
	int factor[N];
	int factorNum = 0;
    
    printf("請輸入一個整數: ");
    scanf("%d",&num);	

	for (int i=0; i<N; i++) {
		factor[i] = 0;
	}

	factorNum = findFactor(num, factor);

	if (factorNum == 0) {
		printf("整數 %d 是質數", num);
	} else {
		printf("整數 %d 不是質數\n", num);
		printf("整數 %d 有以下 %d 個因數: \n", num, factorNum);
		for (int i=0; i<factorNum; i++) {
				printf("%d ", factor[i]);				
		}
	}
*/


	/* 習題26 - 編寫兩個函式分別求兩個整數的最小公倍數和最大公約數，
	   用主函式呼叫這兩個函式並輸出結果。兩個整數由鍵盤輸入。
	*/
/*
    int a, b;
    
    printf("請輸入兩個整數 (用空白做間隔): ");
    scanf("%d %d",&a, &b);	
    printf("最小公倍數是: %d\n", findLCM(a, b));
    printf("最大公因數是: %d\n", findGCF(a, b));
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

	/* 28 - 主函式輸入 2 個數，其中自定義一函式，產生介於這兩個數的亂數。 */

		

}


int addNumbers(int a,int b) {
    int result;
    result = a+b;
    return result;
}


