


#include <stdio.h>
#include <string.h>

/*
int main()
{
    printf("Hello World");

    return 0;
}

int main(void)
{
    int chad = 15;




    printf(" %d ",chad);

//    return 0;
}




// Create variables
int myNum = 15;            // Integer (whole number)
int myNum2 = 16;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character
int 十五 = 15;            // Integer (whole number)

int main(void)
{

    myNum = myNum2;
    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("%d\n", myNum + (int)myFloatNum);
    printf("%d\n", 十五);
*/


/* max - 習題7 case 1 
    int max(int a, int b) {
    
        printf("輸入a的值:");
        scanf("%d",&a);
        printf("輸入b的值:");
        scanf("%d",&b);
    
    
    
        if(a>b){
            printf("最大值= %d",a);
        }
        else {
            printf("最大值= %d",b);
        }
        
        return 0;
    }
*/


/* max - 習題7 case 2 */
int max(int a, int b) {
    
    printf("輸入a的值:");
    scanf("%d",&a);
    printf("輸入b的值:");
    scanf("%d",&b);
    
    
    
    if(a>b) {
        return a;
    }
    else {
        return b;
    }
        
}
/* */




int main(void)
{
    /*
//    int a=10, b=20;
    int a, b;
    int c;

    printf("plz input a: ");
    scanf("%d", &a);
    printf("plz input b: ");
    scanf("%d", &b);
    
    c = a<b;
    printf("c=%d\n",c);
    
    c = a>b;
    printf("c=%d\n",c);

    c = a==b;
    printf("c=%d\n",c);

    if(a<b){
        printf("a<b\n");
    }
    else{
        printf("a>=b\n");
    }

    if(a<b && a>5){
        printf("a<b\n");
    }
    else{
        printf("a>=b 或 a<=5 \n");
    }
    
    

    if(a<b || a>5){
        printf("a<b 或 a>5 \n");
    }
    else{
        printf("a>=b  \n");
    }



    if(a<b ){
        printf("a<b \n");
    }
    else if (a==b){
        printf("a==b  \n");
    }else{
        printf("a>b \n");
        
    }

*/

/*    
    int a, b;

    printf("Please input a: ");
    scanf("%d", &a);
    printf("Please input b: ");
    scanf("%d", &b);

    printf("a^2 + b^2 = %d\n",a*a + b*b);
*/

/*

    float r;

    printf("Please input r (cm): ");
    scanf("%f", &r);

    if(r>=0) {
        printf("圓面積 = %f cm^2\n", 3.1415926*r*r );
        printf("圓周長 = %f cm\n", 2*3.1415926*r );
    }
    else {
        printf("r<0!!!");
    }
*/

/*
    int i,j;
    
    for(i=1;i<10;i++){
        printf("\n",i);
       for(j=1;j<10;j++){
            printf("%dx%d=%d\t",i,j,i*j);
//            printf("i = %d j=%d ",i,j);
        }
    }
*/

/* 習題3 閏年 */
/*
    int year;
    int result=0;

    printf("請輸入西元年: \n");
    scanf("%d", &year);

    if( (year%4 == 0) && (year%100 != 0) ) {
        result = 1;
    }
    else if(year%400 == 0) {
        result = 1;
    }

    if(result == 1) {
        printf("西元%d年是閏年",year);
    }
    else {
        printf("西元%d年不是閏年",year);
    }

*/

/* 習題4 某月天數 */
/*
    int year, month, day;
    int result=0;

    printf("請輸入西元年: \n");
    scanf("%d", &year);
    printf("請輸入月份: \n");
    scanf("%d", &month);

    if( (year%4 == 0) && (year%100 != 0) ) {
        result = 1;
    }
    else if(year%400 == 0) {
        result = 1;
    }

    if(result == 1) {
        printf("西元%d年是閏年\n",year);
    }
    else {
        printf("西元%d年不是閏年\n",year);
    }

    if( (month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12) ) {
        printf("西元%d年%d月有31天", year, month);
    }
    else if(month == 2) {
        if(result == 1) {
            printf("西元%d年%d月有29天", year, month);
        }
        else {
            printf("西元%d年%d月有28天", year, month);            
        }
    }
    else {
        printf("西元%d年%d月有30天", year, month);      
    }
*/

    

    /* 習題5 找最小整數 */
/*
    int int1, int2, int3, int4;
    int result=0;

    printf("請輸入第一個整數: ");
    scanf("%d", &int1);
    printf("請輸入第二個整數: ");
    scanf("%d", &int2);
    printf("請輸入第三個整數: ");
    scanf("%d", &int3);
    printf("請輸入第四個整數: ");
    scanf("%d", &int4);

    if(int1 < int2) {
        result = int1;
    } else {
        result = int2;
    }
    if(int3 < result) {
        result = int3;
    }
    if(int4 < result) {
        result = int4;
    }

    printf("四個整數中，最小的是: %d\n",result);
*/



    /* 習題6 給X找Y */
/*
    int x,y;


    printf("請輸入x的值: ");
    scanf("%d", &x);

    if(x<0) {
        y=1;
    } 
    else if(x==0) {
        y=5;
    }
    else if(x>0) {
        y=3;
    }
    
    printf("y=%d\n",y);
*/



    /* 習題7 找最大值 */    
/*

    int x, y;
    //int result=0;

    //result = max(x, y); // case 1

    printf("最大值= %d", max(x, y));
*/


    /* 習題8 找最大歲數 */    
/*
    int x, y;

    printf("令你的歲數為a，你朋友的歲數為b\n");
    printf("最大者是 %d 歲", max(x, y));
*/



    /* 習題9 判斷是否正確 */    
/*
    int x, y, sum;


    printf("請輸入 x 的值: ");
    scanf("%d", &x);
    printf("請輸入 y 的值: ");
    scanf("%d", &y);
    printf("請輸入 x+y 的值: ");
    scanf("%d", &sum);

    if( sum == (x+y) ) {
        printf("correct!");
    } 
    else {
        printf("error! should be %d!", x+y);
    }
*/    



    /* 習題10 判斷等第 */    
/*
    int x;


    printf("請輸入成績 (0 ~ 100): ");
    scanf("%d", &x);

    if ( x >= 90 ) {
        printf("%d 分為 A 等!", x);
    }
    else if ( x >= 80 ) {
        printf("%d 分為 B 等!", x);
    }
    else if ( x >= 70 ) {
        printf("%d 分為 C 等!", x);
    }
    else if ( x >= 60 ) {
        printf("%d 分為 D 等!", x);
    }
    else {
        printf("%d 分為 E 等!", x);
    }
*/



    /* 習題11 印字串 */    
/*
    char x[80];

    printf("請輸入一個字串: ");
    scanf("%s", x);
    printf("hello, %s", x);
*/



    /* 習題12 印數字和 */    
/*
    int x, y;

    printf("請輸入二個數字(中間以空白間隔): ");
    scanf("%d %d", &x, &y);
    printf("它們的和是: %d", x+y);
*/



    /* 習題13 占卜運勢 */    

    int M, D, S;

    printf("請輸入月分和日期(中間以空白間隔): ");
    scanf("%d %d", &M, &D);

    S=(M*2+D)%3;

    printf("運勢為：\n");
    if ( S == 0 ) {
        printf("普通");
    }
    else if ( S == 1 ) {
        printf("吉");
    }
    else {
        printf("大吉");
    }









}
