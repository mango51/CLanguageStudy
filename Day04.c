#include <stdio.h>
#include <windows.h>
/*	----- 반복문 -----
* 조건식을 비교하면서 참일 경우 종속 문장을 실행시키고 변화식을 거쳐 조건식을 또 다시 비교하는 문법
* for(), while(), do~while() 3가지 존재
* 
* 1. for문
* for(초기식; 조건식; 변화식)
* {
*	종속문장;
* }
* 
* 초기식 > 조건식 > 종속문장 > 변화식 > 조건식 > 종속문장 > 변화식 >>>... 순으로 진행
* for문에서 무한루프를 사용하고 싶을 때, 초기식, 조건식, 변화식 생략 O (ex) for(;;)
* for문에서 종속 문장이 한 줄일 때는 중괄호 {} 생략 O
* 
* 2. while()문
* 초기식;
* while(조건식){
*	종속문장 및 변화식;
* }
* while문에서 초기식은 while문 바깥에 존재해야하고, 변화식은 종속 문장과 같이 존재함
* 
* ※ 무한루프
* while(1){
*	종속문장;
* }
* >> 초기식, 변화식은 필요없는 무한루프
* while문에서 무한루프 사용할 때는 '조건식에 1' 작성
* while문에 종속 문장 한 줄이면 중괄호 {} 생략 가능
* 하지만 종속 문장에 변화식이 같이 작성되기 때문에 {} 중괄호 생략 경우 거의 없음
* 
* 3. do~while문
* 초기식;
* do
* {
*	종속 문장 및 변화식;
* } while(조건식);
* 
* do~while문은 while문과 전체적으로 비슷하지만 종속 문장 최소 한 번은 실행시킴
* do~while문에서 무한루프 사용할 때 while문과 마찬가지로 조건식에 1 작성하기
*/

/* ----- 기타 구문 -----
	break: 해당 구문 만나게 되면 반복문 탈출
	continue: 해당 구문 만나게 되면 continue보다 아래 있는 종속 문장은 실행하지 않고 진행
*/

/* ----- 기타 함수 -----
	system(): system("명령어"), "" 큰 따옴표 안에 작성되는 명령어를 실행시켜주는 함수
	Sleep(): Sleep(멈춰줄 시간), 시간 단위 : 1/1000초 = 콘솔창을 잠깐 재워주는 함수, 멈춰줄 함수
	system, Sleep 함수 사용하기 위해서 windows.h 헤더파일 선언해줘야함
*/
int main() {
	/* char letter, ch;
	int num;

	for (int i = 65; i < 91; i++) {
		printf("%c", i);
	}
	printf("\n");
	for (char i = 'A'; i <= 'Z'; i++) { // for문 안에 char 사용해도 컴퓨터가 알아서 char를 int으로 해석해서 사용(계산)
		// 초기식과 조건식에 int형이 아닌 char 사용할 수 있음!!! ***
		printf("%c", i);
	} */

	/*printf("\n입력: ");
	scanf("%c", &letter);
	printf("출력: ");
	for (int i = 97; i <= letter; i++) {
		// letter + 1을 하면 자동 형 변환으로 char형(1) + int형(4) 이라서 결과값은 int형으로 나옴 >> 굳이 강제 형 변환할 필요 없음!!!
		printf("%c ", i);
	}
	printf("\n"); */
	
	/* printf("\n입력: ");
	scanf("%c", &ch);
	printf("출력: ");
	for (char i = 'a'; i <= ch; i++) { // 위의 for문에서 int형 i 변수를 선언했지만 char형으로도 선언 가능!! (컴퓨터가 알아서 int형으로 해석해서 사용함)
		printf("%c", i);
	}
	
	for (;;) {
		printf("\n입력: ");
		scanf("%d", &num);
		printf("출력: %d\n",num);
		if (num == 9) {
			printf("9가 입력되어 프로그램을 종료합니다.\n");
			break;
			// break문으로 반복문 탈출
		}
	}

	int i = 0; //초기식
	while (i < 10) { //조건식
		printf("hello\n");
		i++; //변화식
	} */

	/* int i=65;
	while (i <= 90) {
		printf("%c", i);
		i++;
	}
	printf("\n");
	char let = 'A';
	while (let <= 'Z') {
		printf("%c", let);
		let++;
	}

	char j;
	char k = 'a';
	printf("\n입력 : ");
	scanf("%c", &j);
	printf("출력 : ");
	while (k <= j) {
		printf("%c ", k);
		k++;
	}

	int num=0;
	while (num != 9) {
		printf("\n입력: ");
		scanf("%d", &num);
		if (num != 9) {
			printf("출력: %d", num);
		}
	}
	printf("9가 입력되어 프로그램을 종료합니다.");

	int num1;
	while (1) {
		printf("\n입력: ");
		scanf("%d", &num);
		if (num == 9) {
			printf("9가 입력되어 프로그램을 종료합니다.");
			break;
		}
		printf("출력: %d", num);
	} */

	/* int i = 7;
	do {
		printf("hi \n");
		i++;
	} while (i < 5); */

	/*
	int num; // 이렇게 변수 선언하면 쓰레기값 들어가있음
	do {
		printf("\n입력 : ");
		scanf("%d", &num); // 여기서 쓰레기값을 치우고 입력한 값 들어옴 (덮어씌워짐)
		printf("출력 : %d\n", num);
	} while (num % 2);
	printf("\n짝수가 입력되어 프로그램 종료합니다.");

	//while문으로 하면...
	//int num;
	//while(num%2){...}
	//에러 발생할 수도 있음 >> 쓰레기값을 가진 num이라서 2로 나눌 때 너무 큰 숫자로 컴퓨터에서 에러 경고 뜨게할 수 있음
	*/

	/* printf("ABCD\n");
	system("cls");
	Sleep(5000);
	printf("EFGH\n"); */

int card = 10000;
int num,add,sub; // 값 선언되지 않은 num,sub, add는 쓰레기 값 할당되어 있음
do { //do~while문 사용하면 종속문장 먼저 실행하고 그 다음 while문 적용 (한 번쯤은 종속문장 실행함)
	// 쓰레기값 있는 num을 우선 실행하고 종속문장 중 num에 값 입력되어 해당 num 값을 while문에 적용
	//while문으로 하면 위의 num의 값을 초기화하고 시작해야함 >> 초기화하지 않으면 쓰레기값이 있어서 while문에 적용하기엔 너무나 큰 숫자라 실행 안 됨
	system("cls"); // window.h 사용해서 system 기능 사용 (system 기능 중 cls 기능 사용)
	printf("카드 잔액: %d\n",card);
	printf("1. 카드 잔액 충전\n");
	printf("2. 카드 잔액 사용\n");
	printf("3. 종료\n");
	printf("입력: ");
	scanf("%d", &num);
	switch (num) {
	case 1:
			system("cls");
			printf("카드 잔액: %d\n", card);
			printf("충전 금액 입력: ");
			scanf("%d", &add);
			card += add;
			printf("%d원 충전해서 %d원 사용가능합니다.\n", add, card);
			Sleep(3000);
			break;
	case 2: 
		system("cls");
			while (1) {
				printf("카드 잔액: %d\n", card);
				printf("사용 금액 입력: ");
				scanf("%d", &sub);
				if (card>= sub) {
					card -= sub;
					printf("%d원 사용하고 %d원 남았습니다. \n", sub, card);
					Sleep(3000);
					break;
				}
				else { // 위의 if문이 실행되면 어짜피 break문을 통해 while문 빠져나가니까 else문 사용 안해도 됨 (else와 괄호 안 쓰고 사용해도 됨)
					system("cls");
					printf("잔액이 부족합니다. \n");
					continue;
				}
			}
			break;

	case 3: 
			system("cls");
			break;
			//break; 추가해도 위에서 이미 break;를 해서 switch문 나갔기 때문에 추가한 break;문 사용 안됨!!!

	default:
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
			Sleep(1000);
			break;

	}

} while (num != 3); //세미콜론까지 작성해야하는 do~while문
//do~while문 사용하지 않고 switch문 안에 if(num==3){ break; } 사용해서 프로그램 종료할 수 있음!

	return 0;
}