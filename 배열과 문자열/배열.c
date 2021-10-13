//
//  배열.c
//  Clang
//
//  Created by 정익상 on 2021/10/13.
//




/*float score1 = 80;
float score2 = 84;
// ... (생략)
float score29 = 72;
float score30 = 91;

float sum = score1 + score2 + ... (생략) ... + score29 + score30;
float average = sum / 30;


#include <stdio.h>


int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 배열을 생성하고 값 할당

    printf("%d\n", numArr[0]);    // 11: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 66: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 110: 배열의 열 번째(인덱스 9) 요소 출력

    return 0;
}*/
#변수의 자료형
    정수형 변수
    실수형 변수

연산자
#대입연산자와 산술연산자
    =    +
    -    *
    /    %

    num+=1  //num=num+1

#증가,감소 연산자
    ++num    --num
    num++    num--

#관계 연산자
    >    <
    >=    <=
    ==    !=

#논리연산자
    &&:둘다참일떄 참반환
    ||:둘중하나참이면 참반환
    ! :A가 가짓이면 참반환.

#비트연산자
    & : AND연산    // 두 비트가 모두 1일때 1일 반환
    | : OR 연산    // 둘중 하나라도 1이면 1을 반환
    ^ : XOR 연산    // 두개가 서로 다를 경우에 1을 반환
    ~ : 비트반전시킴    // 0을 1로 반환, 1을 0으로 반환
    <<: 비트 열의 좌이동    //num1<<2 2칸 왼쪽으로 이동
    >>: 비트 열의 우이동    //num1>>2 2칸 오른쪽으로 이동


#정수의 표현방법
    MSB(Most Significant Bit) : 부호를 나타낼떄 쓰인다.
        0 0 0 0 0 0 0 0

        맨앞이 MSB.

#자료형

정수형    char        1Byte
    short        2Byte
    int         4Byte
    long        4Byte
    long long    8Byte
실수형    float        4Byte
    double        8Byte
    long double    8Byte
        
        ****sizeof(int)    sizeof(num1)
        ****scanf("%lf",&a);
    double형 데이터를 입력받을때에는 서식문자 %lf를 사용
    

#unsigned
    unsigned가 붙으면 MSB 또한 범위를 나타내는 용도로 쓰이게 된다.
    

#ASCII Code
    문자를 숫자로 표현하기 위하여 정의된 아스키 코드
    //프로그램상에서의 문자표현은 ' '가 사용된다.
    %c    %d
    'A' = 65
    'Z' = 90

#자료형의 변환
    int num1 = 3;
    double num2= 2.5*(double)num1;
    ...
    
#특수문자의 종류
    \a :경고음
    \b :백스페이스
    \f :폼피드
    \n :개행
    \r :캐리지 리턴
    \t :수평탭
    \v :수직탭
    \' :'출력
    \" :"출력
    \? :?출력
    \\ :역슬래쉬출력

#서식문자의 종류와 의미
    %d  : 부호있는 10진수
    %ld : 부호있는 10진수
    %lld: 부호있는 10진수
    %u  : 부호없는 10진수
    %o  : 부호없는 8진수
    %x  : 부호없는 16진수
    %f  : 10진수의 실수
    %Lf : 10진수의 실수
    %e  : e방식의 실수
    %g  : 값에따라 %f, %e 사이에서 선택
    %c  : 값에 대응하는 문자
    %s  : 문자열
    %p  : 포인터의 주소값
        //%#o %#x로 출력할경우 07 0x07로 출력

#필드 폭 지정하여 출력하기
    %8d : 필드 폭 8칸 확보하고 우정렬 하여 출력
    %-8d: 필드 폭 8칸 확보하고 좌정렬 하여 출력


#반복문
    while(조건식)
    for(초기식;조건식;증감식)
#반복문의 생략과 탈출
    continue : 뒤를 생략하고 다시 반복조건을 확인하러 간다.
    break : 가장 가까이에 포함된 반복문을 빠져 나오게 된다.

#조건문
    if..if..if
    if..else if..else
//조건연산자
    (조건) ? data1 : data2
    num1>num2?num1:num2;
    return a<b ?a:b;
    
#switch
    switch(num)
    {
    case 1:
        puts("1 = one");
        break;
    case 'a':
        puts("a = A");
        break;
    default:
        puts("I Don't Know..");
    }
    return 0;

#goto문
    if(n==1)
        goto ONE;
    ...
ONE:
    printf("input 1 \n");
    goto END;
TWO:
    printf("input 2 \n");
    goto END;
OTHER:
    printf("3 or other num..\n");
END:
    return 0;

#함수 활용하기
   -인자0,반환0
    int Add(int n1,int n2)
    {
        return n1+n2;
    }
   -인자0,반환x
    ShowAdd(int num)
    {
        printf("덧셈결과 : %d\n",num);
    }
   -인자x,반환0
    int Readnum()
    {
        int num;
        scanf("%d",&num);
        return num;
    }
   -인자x.반환x
    Howto()
    {
        puts("Explain...");
    }

#지역변수
    선언된 함수내에서만 접근이 가능
    선언된 함수가 반환하면 지역변수와 마찬가지로 소멸.
    중괄호내에서만 적용됨

    반복문과 조건문에서 또한 선언가능
    반복문에서 선언시 탈출과 진입을 여러번 반복한다.
    그러므로 반복문내에서 초기화 할경우
    반복 할때마다 초기화가 이루어진다.

#전역변수
    지역변수와 동일한 이름으로 선언이 된다면?
     해당 지역내에서는 전역변수가 가려지고 지역변수로의 접근이 이루어짐
    
#Static변수
    선언된 함수내에서만 접근이 가능
    딱 1회 초기화되고 프로그램 종료시까지 메모리 공간에 존재.

    static int num1=0;
        *주로 반복문의 변수선언에 쓰면 적당.
        탈출과 진입으로 인해 매번초기화되지않고 1회만 초기화되어
        유지되기에.
#재귀함수
    함수내에서 자신을 다시 호출하는 함수
    Recursive()
    {
        printf("Test..\n");
        Recursive();
    }
    :wq
    Recursive(int num)
    {
        if(num<=0)
            return;
        printf("Call.. %d\n",num);
        Recursive(num-1);
    }
    :wq

#1차원 배열
    int arr[5]={1,2};
    =>>    1 2 0 0 0
    
    arrlen=sizeof(arr)/sizeof(int)

#문자열 변수표현
    char str[14]="Good Morning!";
     NULL을 포함하여 14byte가 사용.
    null='\0'
    문자열을 입력받을때에는 배열의 이름앞에 '&'를 붙이면 안된다.
    
    scanf함수호출을 통해서 입력받은 문자열의 끝에도 널문자가 삽입됨
    C언어에서 표현하는 모든 문자열의 끝에는 널문자가 삽입됨.

#포인터
    포인터변수란 메모리의 주소값을 저장하기 위한 변수이다.
    int num;
    int *pnum;
    pnum=&num;

    &num : 변수 num의 주소값
    pnum = &num
    pnum에는 num의 시작 주소가 위치하여 있다.

#포인터 &연산자와 *연산자
    & : 피연산자의 주소값을 반환하는 연산자
        피연산자는 변수이여야하며, 상수는 피연산자가 될수없다.
    * : 포인터가 가리키는 메모리를 참조하는 연산자
        *pnum=20;
        pnum이 가리키는 메모리공간 변수num에 접근을하여...
    사실상 *pnum은 변수num의 값을 의미하는것이다

#포인터와 배열의 관계
    배열의 이름은 포인터이다.
    arr= &arr[0]
    arr[1] = *(arr+1) = *(ptr+1)
    ptr[1] =  *(ptr+1)
>>>>[]와 * 둘중 하나라도 있다면 그것은 값을 나타낸다는 뜻이다.
    
    포인터를 배열의 이름처럼 사용가능
    int arr[i];
    int *ptr;
    ptr=arr;    //ptr = &arr[0];
    printf("%d\n",ptr[i]);
    
   ########## arr[i] = *(arr+i) ##### [ ] or * #############
*(ptr+0), *(ptr+1), *(ptr+2)
ptr[0]      ptr[1]    ptr[2]
*(arr+0), *(arr+1), *(arr+2)
arr[0]      arr[1]    arr[2]
열별로 모두 같은 값이다.
==========================================
#include <stdio.h>

main()
{
        int arr[6]={1,2,3,4,5,6};
        int *fp=&arr[0];
        int *bp=&arr[5];
        int i,temp;

        for(i=0;i<3;i++)
        {
                temp=*fp;
                *fp=*bp;
                *bp=temp;

                fp++;
                bp--;
        }
        for(i=0;i<6;i++)
        {
                printf("%d ",arr[i]);
        }
}
===========================================
#상수형태의 문자열을 가리키는 포인터
    char str1[] = "My String";    //배열길이 자동계산
    char *str2 = "Your String";    //문자열의 첫번째 주소값반환
    
    str1 : 그자체로 문자열 전체를 저장하는 배열
    str2 : 메모리상에 저장된 문자열의 첫번째 문자만 단순히 가리키고있음.

    printf("Show your string");
    printf(0x1234);
    ***   " "로 묶여서 표현되는 문자열은 그 형태에 상관없이 메모리 공간에 저장 된후 그 주소값이 반환된다.
    그러므로 printf 함수는 문자열을 통째로 전달받는 함수가 아닌, 문자열의 주소값을 전달받는 함수이다.

#포인터배열
    포인터배열 : 주소값의 저장이 가능한 배열
int *arr[3]={&n1,&n2,&n3};
printf("%d %d %d \n", *arr[0],*arr[1],*arr[2]);

        []와 *가 동시에 있다면 그것은 포인터배열이다.

#문자열을 저장하는 포인터배열
    char *strarr[3]={"123","456","789"};
    printf("%s",strarr[0]);
    ==char *strarr[3]={0x1004,0x1048,0x2012};

#함수의 인자로 배열전달
    **함수 호출시 전달되는 인자의 값은 매개변수에 복사가 된다.***
        복사!!!

    배열을 인자로 줄수 없기에 주소를 인자로 받는다.
    simplefun(int *ptr)
    {...}
    main()
    {int arr[5];int *ptr=arr;...simplefun(ptr)...}

    배열의 주소값을 알아야 어디서든 배열에 접근하여 저장된 값을 참조하고 변경할수 있다.

scanf함수 호출시 &를 붙이는 이유 : 프로그램사용자로부터 값을 입력받아서 변수 num에 그 값을 채우는 일을 scanf함수가 하는것이다. 그리고 이를 위해서 num의 주소값을 알앙한다. 바로 변수 num에 접근하여 값을 채워넣을수 있기때문이다.

>>>>문자열이 배열에 저장될때 &를 쓰지 않는 이유는?
    "문자열" = 0x1234 이기 때문이다. 즉 그 자체로 주소이기에 &연산자가 필요없이 바로 그 주소를 알수 있기 때문이다. > 그 주소에 접근을한다.


#Const선언
Const 선언은 변수에 저장된 값을 변경하는 것을 허용하지 않겠다는 뜻이다.
즉 const 선언은 값을 변경하는 방법에 제한을 두는 것이지 무엇인가를 상수로
만드는 선언은 아니다
        +++Reversing으로는 그 값의 수정이 가능했음



#2차원배열
int arr[3][4];
        00 01 02 03
        10 11 12 13
        20 21 22 23
int arr[2][6];
        00 01 02 03 04 05
        10 11 12 13 14 15

        TYPE arr [세로][가로]

    for(i)
        for(j)
            arr[i][j]
    
1 2 3
4 5 6
7 8 9    >>    int arr[3][3] = {1,2,3,4,5,6,7,8,9};


#2중 포인터
int **dptr;
    int num=1;
    int *ptr=&num;
    int **dptr=&ptr;

    *dptr=...    //*dptr은 포인터변수 ptr을 의미함
    **dptr=...    //**dptr은 num을 의미함
 다중포인터의 필요성
  : 함수 내에서 함수 외부에 선언된 변수에 접근하는 방법을 제시해준다.

        
#함수 포인터
:변수만 메모리공간에 저장되는 것은아니다. 프로그램 실행의 흐름을 구성하는 하수들도 바이너리형태로 메모리공간에 저장되어서 호출시 실행됨.


스트림과 데이터의
#스트림과 데이터의 이동
프로그램 안으로 데이터가 흘러들어오는 것이 입력이고, 프로그램밖으로 데이터가 흘러나가는 것이 출력이다. 그리고 이러한 다리의 역할을 하는 매게차가 바로 스트림이다.
    stdin : 표준입력 스트림
    stdout: 표준출력 스트림
    stderr: 표준에러 스트림
@문자단위 입력
    getchar();
    fgetc(File *stream);
        ch1=getchar();    //문자입력
        ch2=fgetc(stdin);//엔터키입력
@문자단위 출력
    putchar(int c);
    fputc(int c, FILE *stream);
        putchar(ch1);    //문자출력
        fputc(ch2,stdout);    //엔터키 출력
while(1)
{
    ch=getchar();
    if(ch==EOF)
        break;        //EOF : Control+Z or Control+D
    putchar(ch);
}
>>EOF가 입력될떄까지 입력이 가능하며 여러문자를 한번에 입력할경우
그 문자수만큼 getchar 함수가 반복되어 모든 문자를 읽어드린다.

@문자열단위 입력
    char *gets(char *s);
    char *fgets(char*s,int n,file*stream);
        char str[7];
        gets(str);    //지정한 배열을 넘어서는 길이의 문자열이
            **********입력되면 할당되지 않은메모리공간을 침범.
        char str[7];
        fgets(str,sizeof(str),stdin);
    //stdin으로부터 문자열을 입력 받아서 제시한 크기만큼 str에 저장
    //문자열을 입력받으면 널문자가 자동추가.
    //fgets의 경우 \n을 만날떄까지 문자열읽어드리며 \n또한 받아드림

@문자열단위 출력
    int puts(const char *s);
    int fputs(const cahr *s,File*stream);
        puts(str);
        puts("So Simeple String");
        fputs(str,stdout);
        fputs("So Simple String",stdout);
        

#표준입출력과 버퍼
    입력버퍼 지우기
        while(getchar()!='\n');
        //\n이 읽혀질때까지 입력버퍼에 저장된 문자들을 지우는 코드

#문자열함수    //#include <string.h>
strlen : 전달된 문자열의 길이를 반환하되, 널문자는 길이에 포함X
    char str[100];
    ...
    int len=strlen(str);
    ...
    len-1=0 >> \n이 있던자리에 null을 삽입.

@문자열 복사함수
strcpy(str2,str1);    //str1의 문자열을 str2에 복사
strncpy(str1,str2,sizeof(str2));//str1을 str2로 복사하되 sizeof(Str2)만큼
    ***null문자의 삽입공간을 남겨두어야 한다.
    //len-1=0

@문자열 덧붙이는 함수
strcat(str1,str2);    //str1의 뒤에 str2를 덧붙인다.
strncat(str1,str2,8);    //str1의 뒤에 str2를 최대 8개만큼 덧붙여라

@문자열을 비교하는 함수들
strcmp(str1,str2)    //둘이 동일하면 0이 반환됨
strncmp(str1,str2,3)    //앞의 세문자가 동일한경우 0이반환
    ...
    char str1[]="test test";
    char str2[]="test test";
>>>    if(str1==str2)    //문자열의 내용을 비교하는게 아니라 배열의 주소비교
        ...


#구조체
Structure : 하나이상의 변수를 묶어서 새로운 자료형을 정의
    struct pos
    {
        int xpos;
        int ypos;
    }
    struct person
    {
        char name[20];
        char pnum[20];
        int age;
    }
    main()
    {
        struct pos pos1,pos2;
        ...
        scanf("%d %d",&pos1.xpos,&pos1.ypos);
        ..
        scanf("%d %d",&pos2.xpos,&pos2.ypos);
    }

    (*ptr).xops=10;    //ptr이 가리키는 xpos에 10저장
    (*ptr).ypos=20;    //ptr이 가리키는 ypos에 20저장
==    ptr->xpos=10;    위와 같은의미로 사용이 가능하다.
    ptr->ypos=20;

    ptr->xpos +=1;    //ptr이 가리키는 xpos의 값을 1증가
    ptr->ypos +=2;    //""    ""    ""         2증가

@typedef 선언
    typedef int INT //int의 또다른 이름 INT를 부여
    typedef struct point Point //struct point에 Point라는 이름부여
    
    typedef struct point
    {
        int xpos;
        int ypos;
    }Point;

@구조체 이름의 생략
    typedef struct
    {
        int xpos;
        int ypos;
    }Point;


#공용체
:하나의 메모리 공간을 둘 이상의 방식으로 접근할수 있다.
    typedef union    ubox
    {
        int mem1;
        int mem2;
        double mem3;
    }

#열거형    //syllable형
    typedef enum syllable
    {
        Do=1,Re=2,Mi=3,Fa=4,So=5;
    }Syllable;


#파일 입출력
        if(fp==NULL)    //문자열의경우
            puts("Faill OPEN..\n");
            return -1; 통해 파일이 제대로 열리지 않을경우 인지

-fopen:스트림을 형성할때 호출하는 함수.
    FILE * fopen(const char *filename,const char *mode);

    FILE *fp=fopen("data.txt","wt");
    fputc('A',fp);
    ...
    fclose(fp);    //스트림의 소멸을 요청하는 함수.

    fopen은 출력 스트림이기에 파일에 데이터를 쓸수는 있지만 읽진 못함.
    

Mode        성격    파일없을경우
    r:읽기가능     에러
    w:쓰기가능    생성
    a:끝에덧붙이기    생성
    r+:읽기/쓰기    에러
    w+:읽기/쓰기    생성
    a+:읽기/덧붙이기    생성

    text_file  > t
    binary_file> b

    MS-DOS 개행 : \r\n
    Mac의 개행  : \r
    Unix계열개행 : \n

    **위에서의 stdin,stdout대신 fp를 넣으면 해당 파일로 바로 전송된다
    fputc('a',fp);
    fputs("Test 1 Test"\n",fp);
    
    ch=fgetc(fp);
    fgets(str,sizeof(str),fp);


#메모리의 동적할당
데이터영역(Data area)
        전역변수와 static으로 선언되는 변수가 할당
스택영역
        지역변수와 매개변수가 할당된다.
힙 영역
        프로그래머가 원하는 시점에 변수를 할당하고 소멸


#힙영역의 메모리 공간 할당과 해제
int main()
{
    void * ptr1 = malloc(4);    4byte가 힙 영역에 할당
    void * ptr2 = malloc(12);    12byte가 힙영역에 할당
    ...
    free(ptr1);    //ptr1의 4byte 메모리 공간해제
    free(ptr2);    //ptr2의 12byte메모리 공간해제
}
    //malloc함수는 주소값을 반환한다. 따라서 포인터를 이용해 메모리 공간에 접근하여야 한다.
    malloc 함수의 호출을 통한 메모리 공간의 할당을 가리켜 동적할당(dynamic allocation)이라 한다.

#선행처리 명령문
    #define 지시자
    #define 매크로 매크로몸체
    #define NAME "Kali"
    ..
    printf("%s ",NAME);    // Kali로 출력됨

#매크로 함수
    #define SQUARE(X) X*X
    int a= SQUARE(2)    //a=4;

#조건부 컴파일
    #if...#endif : 참이라면(#else if 가능)
    #ifdf..#endif: 정의되었다면(#else가능)
    #ifndf.#endif: 정의되지 않았다면(#else가능)

    #if
    #else
    #endif
-----------
#include <stdio.h>
#define ADD 1
#define MIN 0

int main()
{
    int a,b;
    printf ("input 2 num\n");
    scanf("%d %d",&a,&b);
    
#if ADD    //ADD가 '참'이라면
    puts("Good");
#endif

#if MIN    //MIN이 '참'이라면
    puts("MIN GOOD");
#endif
    return 0;
}


#define CON(UP,LOW) UP ## 00 ## LOW
    int num = COM(22,77)    //220077

        ##연산자는 매크로 함수의 전달인자를 다른 대상과 이어줄때 사용한다.


출처: https://kali-km.tistory.com/entry/C언어-요약정리 [Kali-KM_Security Study]
