#include <stdio.h>
/* ----- 비트 연산자 -----
	10진수를 2진수 형태로 각 비트별로 연산을 진행
	&(비트 AND 연산): 대응되는 비트가 모두 1이면 1 반환
	|(비트 OR 연산) : 대응되는 비트 중 하나라도 1이면 1을 반환
	^(비트 XOR 연산): 대응되는 비트가 서로 다르면 1을 반환 (같으면 0 반환, 다르면 1 반환) 
	~(비트 NOT 연산): 비트가 0이면 1로 1이면 0으로 반전
	<<(Left Shift 연산): 비트들을 모두 지정 수만큼 왼쪽으로 이동
	>>(Right Shift 연산): 비트들을 모두 지정 수만큼 오른쪽으로 이동
*/
/* 부호 비트(맨 앞에 있는 비트)가 꺼져있을 때(0)는 양수
   부호 비트(맨 앞에 있는 비트)가 켜져있을 때(1)는 음수 */
/* 보수 : 보충해주는 수
   1의 보수 : 각 비트가 1이 되게 만들어주는 수 (2진수 반전시킨 수) >> 사용 안 함 
   2의 보수 : 1의 보수에서 1을 더해주면 됨 (2진수인 1의 보수에 1 더하기 = -1 더한 것)

   0000 1010 = 10
   1111 0101 -> 1의 보수 = -10

   1의 보수를 안 쓰는 이유
   1111 1111 = -0
   0000 0000 = 0
   0은 +/- 나뉘지 않음
   이러한 문제를 해결하기 위해 2의 보수 나옴

   2의 보수에서는 1111 1111 = -1

   0000 1110 = 14
   1111 0001 -> 1의 보수 : -14
   1111 0010 -> 2의 보수 : -14 >> 1의 보수 + 1(2진수)
   */
/* ----- 삼항 연산자 -----
	다른 연산자들과는 다르게 피연산자가 3개이다.
	삼항 연산자의 원형 : 조건식 ? 참일 때의 반환값 : 거짓일 때의 반환값
	*/
/* ----- sizeof 연산자 -----
	넘겨준 값의 크기를 구해주는 연산자
	sizeof 연산자의 원형 : sizeof(크기를 구해줄 값); >> 자료형의 크기 반환
	*/
/* <연산자 종류>
산술 연산자
대입 연산자
복합 대입 연산자
증감 연산자
비교 연산자
논리 연산자
비트 연산자
삼항 연산자
sizeof 연산자 */

/* ----- 조건문 ------
	조건식을 비교하고 해당 조건식이 참이면 종속 문장을 실행, 거짓이면 탈출
	if~else, switch~case 두 개의 조건문 존재

	if~else문
	if (조건식){			//조건문의 시작
		종속 문장;
	}
	else if (조건식){	//조건문의 추가
		종속 문장;
	}
	else{				//나머지
		조건식이 거짓이면 실행되는 종속 문장;
	}

	if~else문에서 조건식 뒤에 ;(세미콜론)을 작성하게 되면 종속 문장이 사라지게 됨
	if~else문에서 종속문장 1 줄이면 중괄호 사용 안해도 됨 (생략 가능)

	switch~case문
	switch(비교할 값 (= 반드시 정수로 나와야함, 연산식이 올 수도 있음)){
		case 해당 값:					// 각 조건
			종속문장;
			break;
		case 해당 값 (다른 거):
			종속문장;
			break;
		default:						// 나머지
			종속문장;
			break;
	}

	switch~case문에서 break 구문은 해당 문법을 탈출하는 용도로 사용됨
	하지만 프로그래머가 의도적으로 break를 작성하지 않은 경우도 있음
	break문이 없으면 실행되는 케이스부터 밑으로 쭉 실행됨

	*** switch~case문에서 비교할 값 공간에는 정수, 정수로 변환할 수 있는 값, 정수가 저장된 변수만 작성할 수 있음
	*** 각 case에 작성되는 값은 반드시 상수로 작성해줘야함!!! (변수 X)
*/

int main() {
	// 0101 0111 = 87

	// 10 = 0000 1010 = (8진수) 012 = (16진수) 0xA
	// 35 = 0010 0011 = (8진수) 043 = (16진수) 0x23
	// 46 = 0010 1110 = (8진수) 056 = (16진수) 0x2E
	// 31 = 0001 1111 = (8진수) 037 = (16진수) 0x1F
	// 62 = 0011 1110 = (8진수) 076 = (16진수) 0x3E
	// 255 = 1111 1111 = (8진수) 0377 = (16진수) 0xFF

	// 88 = 0101 1000
	// 76 = 0100 1100

	// 76<<1 = 왼쪽으로 1만큼 움직이기 : 1001 1000 = 152
	// 88>2 = 오른쪽으로 2만큼 움직이기: 0001 0110 = 22
	// 쉬프트로 움직일 때는 빈 공간 0으로 채우기

	/* printf("비트 AND 연산 결과: %d\n", 88 & 76);
	printf("비트 OR 연산 결과: %d\n", 88 | 76);
	printf("비트 XOR 연산 결과: %d\n", 88 ^ 76);
	printf("Left Shift 연산 결과: %d\n", 76<<1);
	printf("Right Shift 연산 결과: %d\n", 88>>2); */

	/* char num1 = 78, num2 = 37, num3 = 18, num4 = 4, num5 = 106;
	// num1 = 0100 1110
	// num2 = 0010 0101
	// num3 = 0001 0010
	// num4 = 0000 0100
	// num5 = 0110 1010

	printf("%d\n", num1 | num3); // 0101 1110 = 94
	printf("%d\n", num5 & num2); // 0010 0000 = 32
	printf("%d\n", num4 ^ num3); // 0001 0110 = 22
	printf("%d\n", ~num4); // 1111 1011 = 251 = -5 = -4-1
	printf("%d\n", num4<<3); // 0010 0000 = 32
	printf("%d\n", num3>>1); // 0000 1001 = 9 */

	// -59 = (1의 보수) 1100 0100 = (2의 보수) 1100 0101
	// -7 = (1의 보수) 1111 1000 = (2의 보수) 1111 1001
	//-100 = (1의 보수) 1001 1011 = (2의 보수) 1001 1100

	// 2의 보수는 1의 보수 (2진수)에서 1 더해주기
	// 계산할 때, 나온 값에서 -1해주기 (-1은 기본값)

	// 1111 1111 = -1 (-0은 없으니까 -1로 시작하는 2의 보수)
	// 1111 1110 = -1-1 = -2 (거꾸로 계산할 때는 -1 더해주기)
	// 1111 1101 = -2-1 = -3 (거꾸로 계산할 때는 -1 더해주기)

	/* printf("연산 결과: %d\n", 3 == 5 ? 10 : 20);
	int num;
	printf("값을 입력하세요 : ");
	scanf("%d",&num);
	// num의 주소(&)를 따라 num을 접근하여 거기에 값을 입력
	// scanf는 &주소값 꼭 입력해야함 >> 그 주소 따라가서 거기에 값 입력
	printf("연산 결과 : %s\n", num >= 14 ? "14보다 크거나 같은 수" : "14보다 작은 수"); */

	/* int numnum;
	int three = 3;
	printf("3의 배수인 값을 입력하세요 : ");
	scanf("%d", &numnum);
	printf("출력 : %s\n", (numnum%three) ? "거짓" : "참"); // 삼항 연산자라서 조건식의 산술연산자(%) 1개, ?, : 라서 총 연산자 3개
	// 거짓과 참을 반환해줘야하니까 서식지정자 %s로 적어야함
	// numnum%three = 1,2이면 3의 배수 아니지만 조건식에서 결과값 1,2이기 때문에 true로 반환되어 조건식 참일 때 반환값에 거짓이라고 써서 '거짓'이라고 반환시키기
	// numnum%three= 0이면 3의 배수이지만 조건식에서 결과값 0이기 때문에 false로 반환되어 조건식 거짓일 때 반환값에 참이라고 써서 '참'이라고 반환시키기
	// numnum%three==0이면 산술연산자(%)와 비교연산자(==) 사용 */

	// 보안성 검사 끄고 진행하기 (배포할 프로젝트 아니기 때문에 보안성 검사 꺼둬됨)

	//printf("sizeof() 연산 결과: %d\n", sizeof(5.143));
	// 자료형 정수의 기본형 int의 크기는 4바이트이므로 sizeof(정수) = 4 (정수 자료형의 기본형인 int의 크기)
	// 자료형 실수의 기본형 double의 크기는 8바이트이므로 sizeof(실수) = 8 (실수 기본형 double의 크기)

	/* int numnumnum;
	printf("입력: ");
	scanf("%d", &numnumnum);
	if (numnumnum>10) {
		printf("값은 10보다 큽니다. \n");
	} // 조건문 실행
	if (numnumnum > 5) {
		printf("값은 5보다 큽니다. \n");
	} // 조건문 실행
	else if (numnumnum > 3) {
		printf("값은 3보다 큽니다. \n");
	} // 위의 if 조건문 안될 경우 실행 (위의 if문 실행되었으면 실행 안함)
	else {
		printf("값은 3보다 작거나 같습니다.\n");
	} // 위의 모든 조건문들 실행되지 않았으면 (다 거짓이라서 조건문 실행 X) 실행
	// else문은 뒤에 조건식 쓸 수 없음 */

	/* int guess;
	printf("입력: ");
	scanf("%d", &guess);
	if (num == 5) {
		printf("guess는 5입니다. \n");
	}
	// ; 은 코드의 끝을 표현하는 기호 (종결한다는 뜻) */

	/* int num14;
	printf("입력 : ");
	scanf("%d", &num14);
	// \n 안해줘도 알아서 다음 줄로 넘어감
	//num14의 주소를 통해 num14에 접근하여 값 입력
	if (num14 > 14) {
		printf("14보다 크거나 같은 수\n");
		//종속 문장 한 줄이라서 중괄호 생략 가능
	}
	else {
		printf("14보다 작은 수");
	} */


	/* int num0;
	printf("입력 : ");
	scanf("%d", &num0);
	if (num0 % 3) {
		printf("거짓, 3의 배수 아님");
	}
	else {
		printf("참, 3의 배수임");
		// 0이면 3의 배수, 하지만 0은 거짓을 반환하는 것이기 때문에 else문에 '참' 작성 
	} */

	/* int kor;
	int math;
	int eng;
	// double av; 로 위에 변수 선언하는 것이 바람직함
	printf("국어: ");
	scanf("%d", &kor);
	printf("수학: ");
	scanf("%d", &math);
	printf("영어: ");
	scanf("%d", &eng);
	double av = ((double)(kor + math + eng) / 3);
	// double av = (kor+math+eng)/3.0; 도 가능함 000 
	// double av = (double)((kor+math+eng)/3); 은 안됨!!! XXX >> 이미 int형으로 저장된 결과값을 double형으로 강제 형 변환하면 소수점 .00으로 나옴 (int형 정수에서 double형 실수로 바꿨기 때문) 
	// 강제 형 변환으로 kor + math + eng을 double형으로 강제적으로 변환하여 /3했을 때 결과값이 double형으로 나오게하기
	// 강제 형 변환하지 않으면 (int형 + int형 + int형)/int형 의 결과값이므로 int형으로 나옴 >> 그렇게 되면 int형으로 나온 값을 double형 av 변수에 대입함 >> double형 av에 대입해도 소수점 사라진 상태로 저장되었기 때문에 소수점 .00임 
	printf("평균: %.2f\n", av);
	
	// cf) 입력할 때는!!! double형을 받는 서식지정자이면 %lf 사용하기! (%f는 float형 받는 서식지정자)

	printf("등급: ");
	if (av >= 90) {
		printf("A \n");
	}
	else if (av >= 80) {
		printf("B \n");
	}
	else if (av >= 70) {
		printf("C\n");
	}
	else if (av >= 60) {
		printf("D\n");
	}
	else {
		printf("F\n");
	} */

	/* int switchcasenum;
	printf("입력: ");
	scanf("%d", &switchcasenum);

	switch (switchcasenum) { // switchcasenum이 비교 대상
	case 1: // 1일 경우
		printf("값은 1입니다.\n");
		break; // break문을 사용하지 않으면 밑에 있는 case들도 실행
	case 2:
		printf("값은 2입니다.\n");
		break; // 2를 입력하면 case 1:은 해당되지 않기 때문에 넘어갔지만 case 2:는 해당되어 실행됨
		// 하지만 break문 사용하지 않으면 case 2:가 실행될 뿐만 아니라 그 밑에 있는 case들과 default까지 실행됨
	case 3:
		printf("값은 3입니다.\n");
		break;
	default:
		printf("1~3 중 하나르 입력해주세요. \n");
		break;
	} // 만약 4를 입력하면 case들 중 해당하지 않았으므로 아무 것도 출력 안 됨 >> 하지만 default 넣으면 default문 실행 */

	/*int getnum;
	printf("입력: ");
	scanf("%d", &getnum);
	switch (getnum) {
		// getnum은 무조건 정수이어야함 (실수 X)
	case 5:
		// case 뒤의 내용은 반드시 상수이어야함
		printf("5");
	case 4:
		printf("4");
	case 3:
		printf("3");
	case 2:
		printf("2");
	case 1:
		printf("1");
	} */
	
	/* // 이 코드의 아래 코드가 더욱 효율적이고 간단한 코드임
	int numforSwitch;
	printf("입력 : ");
	scanf("%d", &numforSwitch);
	if (numforSwitch >= 14) {
		numforSwitch = 1;
	}
	else {
		numforSwitch = 0;
	}
	switch (numforSwitch) {
	case 1:
		printf("14보다 크거나 같은 수\n");
		break;

	case 0:
		printf("14보다 작은 수\n");
		break;
	}

	int numnumforSwitch;
	printf("입력 : ");
	scanf("%d", &numnumforSwitch);
	if (numnumforSwitch % 3) {
		numnumforSwitch = 0;
	}
	else {
		numnumforSwitch = 1;
	}
	switch (numnumforSwitch) {
	case 0:
		printf("거짓\n");
		break;
	case 1:
		printf("참\n");
		break;
	} */

	/* // 더 간단하고 효율적이 코드
	int anothernum;
	printf("입력 : ");
	scanf("%d", &anothernum);
	switch (anothernum>=14) {	
	// anothernum >= : 14 처럼 비교할 대상 칸에 연산식 올 수 있음, 결과는 정수로 나오니까
	case 0:
		printf("14보다 작은 수\n");
		break;
	default:
		printf("14보다 크거나 같은 수\n");
		break;
	}

	int anothernum2;
	printf("입력 : ");
	scanf("%d", &anothernum2);
	switch (anothernum2 % 3) {
	case 0:
		printf("참\n");
		break;
	default:
		printf("거짓\n");
		break;
	} */

	int korean, mathma, engli,intavg;
	double avg;
	printf("국어: ");
	scanf("%d", &korean);
	printf("수학: ");
	scanf("%d", &mathma);
	printf("영어: ");
	scanf("%d", &engli);
	avg = ((double)(korean + mathma + engli)) / 3;
	intavg = (korean + mathma + engli) / 3;
	if (avg - intavg == 0) {
		printf("\n평균: %.lf\n", avg);
	}
	else {
		printf("\n평균: %.2f\n", avg);
	}
	switch ((int)(avg / 10)) {
	case 10:
		//종속문장 사용하지 않고 다음으로 넘기면 case 9의 종속문장을 같이 사용
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
	return 0;
}