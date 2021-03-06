/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
입력의 마지막에는 0 두 개가 들어온다.
*/

#include <stdio.h>

int main(void)
{
    int A[100]; // 배열 A 선언
    int B[100]; // 배열 B 선언
    int i=0; // 변수 i 선언 및 초기화
    
    while(1) // 무한 반복
    {
        scanf("%d %d", &A[i], &B[i]); // 사용자로부터 A[i], B[i] 값 입력받기
        
        if(A[i]==0 && B[i]==0)
            break; // 센티널 값(0, 0)이 입력되면 반복문 종료!
        i++; // i에 1 더하기
    }
    
    for(i=0;A[i]!=0 && B[i]!=0;i++) // i가 0부터 A[i]가 0이 아니고, B[i]가 0이 아니면 i에 1씩 더해가며 반복하기
    {
        printf("%d\n", A[i]+B[i]); // A[i]+B[i] 출력하기!
    }
    
    return 0;
}
