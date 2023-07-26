/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    /* 練習1 for loop */
    /*
    int i;
    int stud_num=45;
    for(i=0;i<10;i++){
        if((i%3)==0){
            printf("%d. Hello World %d students \n",0,stud_num);
        }else if ((i%3)==1){
            printf("%d. Hello World %d students \n",1,stud_num);
        }else if ((i%3)==2){
            printf("%d. Hello World %d students \n",2,stud_num);
        }



    }   
    
    */

    /* 練習2 找60的因數 */
    /*
    int i;
    int num=60;
    for(i=2; i<=num/2; i++){
        if( (num % i)==0 ) {
            printf("找到60的因數 %d \n", i);
        }



    }   
    */
    

    /* 練習3 switch case */
    /*
    int i;
    int stud_num=45;
    for(i=0;i<10;i++){
        switch(i%3){
            case 0:
            printf("%d. Hello World %d students \n",0,stud_num);
            break;
            case 1:
            printf("%d. Hello World %d students \n",1,stud_num);
            break; 
            case 2:
            printf("%d. Hello World %d students \n",2,stud_num);
            break;            
        }


    }   
*/


    /* 練習4 switch case + - * / */
/*
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands (using space to separate):");
    scanf("%lf %lf", &first, &second);
    switch (operator) {
        case '+':
            printf ("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf ("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf ("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            printf ("%.1lf / %.1lf = %.1lf", first, second, first / second);
            break;
        default:
            printf("Error! operator is not correct");
    }


*/


    /* 練習5 array */
/*
    int a[10];
    for (int i=0; i<10; i++) {
        a[i] = i;
        //scanf("%d",&a[i]);
        //printf("\n");
    }
    for (int i=9; i>=0; i--) {
        printf("a[%d] = %d \n", i, a[i]);
        
    }
    printf("Hello World");
*/      


    /* 習題12 array */
/*
    float a[10];
    float sum=0;
    for (int i=0; i<10; i++) {
        scanf("%f",&a[i]);
        sum = sum + a[i]; 
    }

    printf("sum = %.1f \n", sum);
*/        


    /* 10. 從鍵盤輸入10個整數，統計其中 正數、負數和零的個數，並在螢幕上輸出。 */
/*

    int a[10];
    int 正數=0;
    int 負數=0;
    int 零=0;
    printf("請輸入十個整數:\n");
    for (int i=0; i<=9; i++) {
        scanf("%d",&a[i]);
        if ( a[i] > 0 ) {
            正數 = 正數 + 1;
        } else if ( a[i] == 0) {
            零 = 零 + 1;
        } else {
            負數 = 負數 + 1;
        }
    }

    printf("正數個數=%d, 零的個數=%d, 負數個數=%d", 正數, 零, 負數);
*/    


    /* 11、程式設計序實現求1-200之間的所有數的乘積並輸出。 */
/*
    double result=1;
    for (int i=1; i<=50; i++) {
        result = result * i;
        printf("1-%d之間的所有數的乘積 = %.0lf\n", i, result);
    }
*/



    /* 12. 從鍵盤上輸入10個數，求其平均值。 */
/*
    int a[10];
    int sum=0;

    printf("請輸入十個整數:\n");
    for (int i=0; i<=9; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("輸入的數字是：");

    for (int i=0; i<=9; i++) {
        printf("%d ", a[i]);
    }

    printf("\n其平均值 = %d", sum/10);
*/



    /* 13、程式設計序實現求1-1000之間的所有奇數的和並輸出。 */
/*
    long int result=0;
    int i=1;

    while (i<=1000) {
        result = result + i;
        i = i + 2;
    }

    printf("1-1000之間的所有奇數的和 = %ld:\n", result);
*/



    /* 14. 輸入n的值，n代表行數，輸出如圖所示的圖形。 */
/*
    int n;

    printf("請輸入一個1~10之間的正整數：");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=(i*2-1); j++) {
            printf("* ");
        }
        printf("\n\n");
    }
*/



    /* 15. 數字三角形，輸入數字，輸出小等於這數字的三角形，如下面範例: */
/*
    int n;

    printf("請輸入一個1~9之間的正整數：");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
*/



    /* 16. 數字金字塔，輸入數字，輸出小等於這數字的金字塔，如下面範例: */
/*
    int n;

    printf("請輸入一個1~9之間的正整數：");
    scanf("%d", &n);

    

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            printf("_");     // print underlines (the number is from (n-1) to 0) 
        }
        for (int j=1; j<=(i*2-1); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
*/


    /* 17. 九九乘法表(一) */
/*
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            printf("%dx%d=%2d  ",j ,i , i*j);
        }
        printf("\n");
    }
*/    



    /* 18. 九九乘法表(二) */
/*
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=3; j++) {
            printf("%dx%d=%2d  ",j ,i , i*j);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=1; i<=9; i++) {
        for (int j=4; j<=6; j++) {
            printf("%dx%d=%2d  ",j ,i , i*j);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=1; i<=9; i++) {
        for (int j=7; j<=9; j++) {
            printf("%dx%d=%2d  ",j ,i , i*j);
        }
        printf("\n");
    }
*/


    /* https://zerojudge.tw/ShowProblem?problemid=a005 
       Eva的家庭作業裏有很多數列填空練習。
       填空練習的要求是：已知數列的前四項，填出第五項。
       因為已經知道這些數列只可能是等差或等比數列，她決定寫一個程式來完成這些練習。
       
       輸入說明
       第一行是數列的數目t（0 <= t <= 20）。 
       以下每行均包含四個整數，表示數列的前四項。 
       約定數列的前五項均為不大於105的自然數，等比數列的比值也是自然數。
       
       輸出說明
       對輸入的每個數列，輸出它的前五項。
    */

    int a[20][5];
    int 等差[3];
    int 等比[3];
    int t;
    scanf("%d", &t);
    
    for (int i=0; i<t; i++) {
        scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
        for (int j=0; j<3; j++) {
            等差[j] = a[i][j+1] - a[i][j];
            等比[j] = a[i][j+1] / a[i][j];
        }
        if ( (等差[0]==等差[1]) && (等差[1]==等差[2]) ) {
            a[i][4] = a[i][3] + 等差[0];
        }
        else if ( (等比[0]==等比[1]) && (等比[1]==等比[2]) ) {
            a[i][4] = a[i][3] * 等比[0];
        }
        else {
            a[i][4] = 0;
        }
    }

    for (int i=0; i<t; i++) {
        for (int j=0; j<5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }



    /* https://zerojudge.tw/ShowProblem?problemid=a006
        內容
        求一元二次方程式 ax2+bx+c=0 的根
        輸入說明
        每組輸入共一行，內含三個整數 a, b, c 以空白隔開。
        輸出說明
        Two different roots x1=?? , x2=??
        Two same roots x=??
        No real root
        PS: 答案均為整數，若有兩個根則大者在前
*/










}
