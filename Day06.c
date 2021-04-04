#include <stdio.h>

/* ----- 변수의 범위 -----
	지역 변수: 블록 내부에서 선언된 변수, 블록 내부에서만 유효하고 블록 끝나면 해제
	전역 변수: 함수 외부에서 선언된 변수, 프로그램 종료시 해제
	정적 변수: 지역 변수와 전역 변수의 특성 모두 갖고 있음
*/

/* ----- 변수의 선언 범위 ------
	지역 변수: 지역 내부에 새로운 지역에서 같은 이름의 변수가 선언되면 외부에 있는 변수보다 내부에 있는 변수가 더 높은 우선순위 갖게됨
	==> 같은 이름의 변수가 {} 괄호 안에 하나, 밖에 하나 있으면... 괄호 안에 있는 코드는 괄호 안에 있는 변수를 사용 >> 해당 변수가 바깥 변수보다 우선순위가 더 높음
	
	전역 변수: 별도의 초기화를 진행하지 않으면 0으로 초기화됨 <---> 지역 변수는 초기화 진행 안하면 쓰레기값 갖고 있음
	
	전역변수와 지역 변수가 이름이 같다면 '해당 지역에 선언된 지역 변수'가 더 높은 우선순위를 갖게됨

	정적 변수: 지역 변수와 전역 변수의 특성을 모두 가지고 있다.
		전역 변수의 특성인 프로그램 종료시 공간 해제된다는 특성 갖고 있음
		지역 변수의 특성인 블록 내부에서만 유효하다는 특성 갖고 있음
		정적 변수를 사용하여 

	정적 변수 선언 방법: static 자료형 변수명;
*/
/* ----- 구조체 -----
	여러 개의 멤버(변수)들을 모아서 하나의 '새로운 자료형'을 만드는 방식
	하나의 새로운 자료형 만들어주는 방식
	구조체 변수의 멤버에 접근할 때는 구조체변수.멤버 형식으로 접근함
		ex) struct Data d;
			d.data1=10;
	구조체 크기는 구조체 멤버들을 모두 더한 크기이다. (자료형 크기 더한 값)
	기본 구조체 원형:

	struct 구조체이름{
		멤버;
	};

*/

// 기본 구조체 정의
struct Data { // 하나의 구조체
	int data1;
	int data2;
}; // 8바이트 크기 갖고 있는 구조체 Data(int형 변수 2개 >> 4(int)+4(int) = 8 바이트)


// 별칭을 이용한 구조체 정의
// 별칭을 이용해 정의할 때는 구조체 이름, 별칭 모두 사용 가능
typedef struct Data2 {	//typedef 별칭을 사용하겠다는 의미
	int data1;
	int data2;
}Da;	//typedef를 통해 별칭 Da 붙여줌

// 익명 구조체 정의
// 익명 구조체를 사용하면 구조체 이름으로 변수 선언 X, 별칭만 사용 가능
typedef struct { // 이름 없음(존재X) >> 별칭만 있음 
	int data1;
	int data2;
}Da1 ;

struct Data3 {
	int korean;
	int mathematics;
	int english;
	int total3;
	double avg3;
	char grade3;
};

int num; // 전역변수 num 선언
/* void Func() {
	//printf("num의 값: %d\n", num);
	int n1 = 3;
	static int n2 = 3; // 정적변수 n2 다시 Func() 함수 불러올 때 초기화하지 X (기존에 갖고 있는 공간 있으니까)
	printf("%d %d\n", n1, n2);
	n1++; // 지역변수 n1은 블록{}이 끝나면서 해제 (사라짐) >> n1 = 4이지만 {} 끝나면서 다시 리셋됨 (n1=3)
	n2++; // 정적변수 n2는 '프로그램 끝나면 해제' (사라짐) >> {}블록이 끝나더라도 실행 중 >> 프로그램 끝날 때까지!!! >> ***전역변수의 특성을 가진 정적변수
		// n2 = 4이지만 프로그램 아직 끝나지 않았으니 또 다시 Func()함수 불러오면 n2 = 4를 출력하고 n2++로 인해 n2 = 5로 됨
} */
int Func(int a) {
	a++;
	return a; // 이거 없고 num변수에 다시 대입 안 시키면 메인함수에서 출력시 4로 나옴
}

void Func1(int* num) { // int* num = 주소값 >> 주소값 넣는 공간
	// 포인터형 num
	(*num)++; // 매개변수 num 주소값 가진 *num 에 ++ 하여 num 공간에 가서 ++ 하기
	// 메인 함수에서 Func1(&num1);일 때... &num1 (num1의 주소값) 가져와서 해당 주소에다가 ++ 하기
	// ==> num1이라는 공간에 접근해서 수정 >> 포인터 없이는 다른 공간에서 수정해서 리턴하여 기존 값에다가 대입했었음
}
// void FuncAdd(int* num, int* num1, int* num2, int* num3) {	// 굳이 주소를 넘겨줄 필요가 없어서 사용하지 않아도 됨
// num, num1, num2는 사용만하고 수정하지 않을테니 굳이 주소값(&) 사용할 필요 없음, num3은 직접 접근해서 변경할 필요 있으니까 주소값 필요함
void FuncAdd(int num, int num1, int num2, int* num3){
	// int* num = &kor; >> kor를 가리키는 포인터 num, kor의 주소를 갖고 있는 num
	// 포인터형 *num, *num1, *num2, *num3 >> *num = kor니까 int kor와 같은 의미
	// *num3 = *num + *num1 + *num2; // *num은 포인터 num으로 num이 가리키는 곳을 의미함 >> num이 가리키고 있는 화살표로 가보니 kor에 도착 >> *num = kor
	// num의 주소값을 가진 곳에 접근하여 num에 접근하니 국어 성적 값 있음 >> 입력한 국어 성적 값 = *num에 접근하면 있는 num값

	*num3 = num + num1 + num2;
}
// void FuncSub(int* num, double* num1) { // double* num1 = &avg 이므로 포인터 num1은 avg를 가리키고 있음 
void FuncSub(int num, double* num1){
	// ***** num1은 avg를 가리키고 있는 포인터이고 *num은 가리키고 있는 곳을 화살표를 따라가서 도착한 곳 = avg 임 >> *num1 = avg (num3이 가리키는 곳)
	// *num1 = *num / 3.0; // 3.0은 double형이니까 *num이 int형이라도 double형과 나누니 결과값은 double형
	// 매개변수 double* num1이 아닌 double num1이면 값을 메인함수에서 받았을 뿐 {} 끝나면 다시 돌려주진 않음 >> 각자 다른 공간이기 때문에
	// 하지만 double* num1이면 메인함수에서 받은 변수를 수정해서 다시 원래대로 돌려줄 수 있도록 포인터로 길(화살표) 연결 
	// >> 포인터로 접근하여 값을 FuncSub()함수에서 수정하면 메인함수로 다시 가서 값 넣어줌 
	// 포인터를 사용하면 같은 공간에서 수정하는 것 >> 포인터는 해당 공간의 주소값을 가지고 있으니 같은 공간에서 수정 (화살표, 길로 연결되어 있기 때문에 같은 공간으로 취급)

	*num1 = num / 3.0;
}
//void FuncGrade(double* num, char* num1) {	//double형 avg를 갖고 있는 주소값을 받는 매개변수 = double* num
	// 해당 주소값 접근하여 직접 수정 (num이라는 포인터 매개변수 사용)
void FuncGrade(double num, char* num1){
	// int gra = (int)(*num) / 10;
	int gra = (int)num / 10;
	switch (gra) {
	case 10:
	case 9:
		*num1 = 'A';
		break;
	case 8:
		*num1 = 'B';
		break;
	case 7:
		*num1 = 'C';
		break;
	case 6:
		*num1 = 'D';
		break;
	default:
		*num1 = 'F';
		break;
	}
}

int main() {
	/* int num = 3;
	printf("num의 값: %d\n", num); // 지역변수 num 사용해서 num =3 출력
	Func(); // 위의 함수 전역변수 num 사용해서 num = 0 출력
	// 지역 변수 n1은 해제, 정적 변수 n2는 해제 X
	Func(); // 지역 변수 n1=3, 정적 변수 n2 =4 출력
	// printf("%d\n", n2); >> 에러!!!
	// n2는 지역변수이므로 해당 블록{} 안에서만 유효하기 때문에 해당 함수 밖에서는 유효 X >> ***지역변수의 특성을 가진 정적변수 */

	int num = 4;
	num = Func(num); // 이렇게 하면 다른 공간에서 만들어서 가져와서 num에 저장하는 것
	// 만약 num에다가 대입하지 않고 Func(num); 만 했다면 4로 출력 >> 수정된 값 가져오지 못함 >> 다른 공간에서 수정했기 때문에
	// 이렇게 하지 않고 기존의 num공간에서 바꾸는 방법 : 포인터 사용하기

	printf("%d", num);

	int num1 = 4;
	Func1(&num1);	// num1의 주소값을 가지고 가서 Func1() 함수에 가기
	printf("\n%d\n", num1);

	int kor, math, eng, total2;
	double avg2;
	char grade2;

	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &kor, &math, &eng); // 주소값을 사용해서 해당 공간에 접근해서 수정해주기 때문에 &주소값 사용해야함
	// FuncAdd(&kor, &math, &eng, &total2); 
	FuncAdd(kor, math, eng, &total2); // total2 값이 없으므로 total2의 공간에 접근해서 값 넣어주기 위해서 &total2 (total2의 주소값)으로 접근
	//total2만 사용하면 FuncAdd()함수에 들어가서 total2 값이 변경되지만 {} 끝나면 반환값 없기 때문에 (리턴값 void임) 변경된 total2값 {}로 해제됨 (변경된 값 사라짐)
	//total2만 사용하면 FuncAdd()함수에서 변경된 total값 {} 끝나고 사라져서 메인함수에서 변경된 total2 값 적용 X 
	//FuncAdd()함수의 total2과 메인함수의 total2이 '다른 공간(값)'이기 때문에 FuncAdd()에서 변경된 total2 값 메인함수 total2에 적용 X
	//변경된 total2값 적용하고 싶으면 &(주소값) 사용해서 직접 total2에 접근해서 수정하기
	printf("총합: %d\n", total2); 
	// FuncSub(&total2, &avg2); // total2라는 공간에 접근해서 수정 (해당 공간에 가서 직접 수정하기)
	FuncSub(total2, &avg2);	// avg2에 값이 없으므로 avg2의 공간에 접근해 수정하기 위해서 (&)주소값 사용
	printf("평균: %.2f\n", avg2);
	// FuncGrade(&avg2,&grade2); // 주소값을 통해 avg2라는 공간에 직접 접근해서 수정
	FuncGrade(avg2, &grade2);
	printf("등급: %c\n", grade2);

	struct Data d; // 해당 (struct)구조체 Data를 통한 변수 선언
	d.data1 = 10;
	d.data2 = 20;
	printf("%d %d\n", d.data1, d.data2);
	printf("d의 크기: %d\n", sizeof(d)); // d의 크기(총 자료형 크기) sizeof(d)로 확인 가능

	Da d1; // Da는 struct Data1의 별칭 >> Da만 사용해도 됨
	// 별칭의 단점: struct가 없기 때문에 구조체인지 헷갈림 >> 같은 기능의 구조체임에도 불구하고 별칭과 원래 이름 모두 외우고 있어야함
	// >> 이를 해결하기 위해 익명 구조체 있음
	Da1 d2; // 별칭만 사용해야하는 불편함 있는 익명 구조체

	struct Data3 d3;
	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &d3.korean, &d3.mathematics, &d3.english);
	FuncAdd(d3.korean, d3.mathematics, d3.english,&d3.total3);
	printf("총합: %d\n",d3.total3);
	FuncSub(d3.total3, &d3.avg3);
	printf("평균: %.2f\n", d3.avg3);
	FuncGrade(d3.avg3, &d3.grade3);
	printf("등급: %c", d3.grade3);

	return 0;
}