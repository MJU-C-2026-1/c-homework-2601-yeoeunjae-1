/* 
  파일이름: 나의 은행 계좌 관리 프로그램
  작 성 자: 여은재 2026-05-03
  하 는 일: 은행 계좌의 출금을 관리하고 잔액을 표시, 잔액부족 메세지 표시.
*/

#include <stdio.h>
#include <stdlib.h>
 

int main()

{
	
    system("chcp 65001");
    
    
    char initial;       //사용자 이니셜      

    int acc1 = 111, acc2 = 222;       //계좌 번호
    
    float balance1 = 50000, balance2 = 100000;       //계좌 잔액
    
    float interest_rate1 = 0.05, interest_rate2 = 0.03;      //이자율

    int withdraw, acc_number;       //출금할 금액, 계좌 선택

   

 

    printf("은행 계좌 관리 프로그램이 실행되었습니다\n");
    printf("========================================\n");

    printf("당신의 영문 이니셜 한글자를 입력하세요: \n");
    scanf(" %c", &initial);

    printf("당신의 계좌번호를 입력하세요: \n");
    scanf("%d", &acc_number);

    printf("출금하실 금액을 입력하세요: \n");
    scanf("%d", &withdraw);


    //계좌1. 계좌번호가 일치하고 출금액이 잔액보다 작거나 같은 경우
    if(acc_number == acc1 && withdraw <= balance1)
    {
    	balance1 = balance1 - withdraw;
    	balance1 = balance1 + (balance1 * interest_rate1);
    	printf("%c님 111번 계좌 잔액 : %.0f원 \n", initial, balance1);
	}
	
	//계좌2. 계좌번호가 일치하고 출금액이 잔액보다 작거나 같은 경우
	else if (acc_number == acc2 && withdraw <= balance2)
	{
		balance2 = balance2 - withdraw;
		balance2 = balance2 + (balance2 * interest_rate2);
		printf("%c님 222번 계좌 잔액 : %.0f원 \n", initial, balance2);
	}
	
	//계좌번호가 틀렸거나 잔액이 부족한 경우 
	else
	{
		if(acc_number != acc1 && acc_number != acc2)
		{
			printf("계좌번호가 틀렸습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	
	return 0;


}
