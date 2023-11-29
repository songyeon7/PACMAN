// // #include <stdio.h>
// // int main() {

// //     char picman = "🟡";     //팩맨 

// //     char red_ghost = "🟥";      //빨간 유령
// //     char yellow_ghost = "🟨";   //노란 유령
// //     char blue_ghost = "🟦";     //파란 유령
// //     char purple_ghost = "🟪";   //보라 유령

// //     char cherry = "🍒";     //체리 _ 먹는거

// //     printf("%c",red_ghost);

// // }
// #include <stdio.h>
// int main() {
// // char picman = '@';
// // printf("%c", picman);

// int map[29][45] = {
// { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
// { 1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1 },
// { 1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1 },
// { 1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1 },
// { 1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
// { 1,1,1,1,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,1,1,1,1,1 },
// { 1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1 },
// { 1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,1 },
// { 1,0,0,1,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
// { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
// { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 }
// };
// for(int i = 0; i<29; i++){
//     for(int j = 0;j <45;j++){
//         if(map[i][j] == 1){
//             printf("◼︎");
//         }
//         if(map[i][j] == 0){
//             printf(" ");
//         }
//     }
//     printf("\n");
// }
// }

#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include <stdlib.h>
#include <time.h>
 
#define COLOR_YELLOW 6
#define COLOR_BBLUE 11
#define COLOR_WHITE 15
#define COLOR_PINK 13
#define LEFT 75  //왼쪽 방향키
#define RIGHT 77 //오른쪽 방향키
#define UP 72   //위쪽 방향키
#define DOWN 80 //아래 방향키
#define PAUSE 112
#define ESC 27
 
void draw_menu();//메뉴그리는 함수
void help(void); //도움말 화면 그리는 함수
void draw_game_screen(); //게임 실행 맵
void draw_game_score(); //게임 실행 하는데에 점수
void get_player_name(void);//플레이어 이름 입력 받기
int show_count(); //쇼카운트
int score; //점수
char userx = 0; //사용자      
char usery = 0;
char player_name[30] = { 0, };//이름 넣기
void gameover(void); //게임 종료 화면
int best_score = 0; // 최고점수
int last_score = 0; // 최저점수
int x = 0, y = 0; //x, y 좌표 저장
void body_crash(void);
void pause(void); //일시정지 
int speed; //게임 속도 


void intro(){
	printf("");
}


 
int map[29][45] =
{
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,1,1,1,1,1 },
{ 1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1 },
{ 1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,1 },
{ 1,0,0,1,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 }
};
 
 
typedef struct PLAY
{
	int x, y;
 
}PLAY;
 
PLAY Monster;//몬스터
 
typedef struct PLAYS
{
	int x, y;
 
}PLAYS;
 
PLAYS user;//사용자
 
void init_Monster_Position() {
	Monster.x = 1;
	Monster.y = 1;
}
 
void set_Monster_Position() {
	int rand1 = 0, rand2 = 0;
 
	srand((unsigned int)time(NULL));
 
	rand1 = rand() % 2;
	rand2 = rand() % 2;
 
	if (map[Monster.x + rand1][Monster.y + rand2] != 1) {
		map[Monster.x][Monster.y] = 0;
		Monster.x = Monster.x + rand1;
		Monster.y = Monster.y + rand2;
	}
}
void RemoveCursor(void)  //커서 지우기
{
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 0; // bVisible 멤버 변경
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo); // 변경값 적용
}
 
void gotoxy(int x, int y) {
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}
 
int main(void) {
	int num = 0;
	Sleep(speed);
 
	init_Monster_Position(); //   
	while (1) {
		//게임 메인화면 설정하기
		draw_menu();
		RemoveCursor();
		num = input_number();
 
		if (num == 1) {
			//플레이어 이름 받는 화면
			system("cls");
			get_player_name();//플레이어 이름 입력 받기
			 //쇼 카운트 화면
			/*system("cls");
			 show_count();*/   //잠시 생략
			system("cls");
 
			draw_game_screen();
			// 게임 화면 실행
			_getch();
			system("cls");
		}
		else if (num == 2) {
			// 사용법 화면 호출
			system("cls");
			help();
			//키 눌렸을 때 실행되는 화면
			_getch();
			system("cls");
 
		}
		else if (num == 3) {
			//exit(0);
			system("cls");
			gameover();
			_getch();
			system("cls");
		}
	}
	_getch();
}
 
int input_number() {
	int num;
 
	gotoxy(55, 26); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("▷ 입력 : ");
	scanf("%d", &num);
	if (num != 1 && num != 2 && num != 3) {
		gotoxy(47, 30); printf("숫자 1,2,3 중에 골라 적어주세요.");
	}
	return num;
}
 
void draw_menu() {
	gotoxy(7, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(15, 5); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);  printf(" ■■■■       ■         ■■■■■            ■        ■         ■        ■         ■");
	gotoxy(15, 6); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);  printf(" ■      ■   ■  ■      ■                    ■ ■    ■ ■      ■  ■     ■ ■       ■");
	gotoxy(15, 7); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);  printf(" ■■■■    ■    ■     ■           ■■■   ■  ■  ■  ■     ■    ■    ■   ■     ■");
	gotoxy(15, 8); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);  printf(" ■         ■■■■■    ■                    ■    ■    ■    ■■■■■   ■     ■   ■");
	gotoxy(15, 9); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);  printf(" ■        ■        ■   ■                    ■          ■   ■        ■  ■       ■ ■");
	gotoxy(15, 10); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK); printf(" ■       ■          ■   ■■■■■           ■          ■  ■          ■ ■         ■");
 
 
	for (int i = 0; i < 30; i++) {
		gotoxy(7, 3 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
		printf("□");
		gotoxy(115, 3 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
		printf("□");
	}
	gotoxy(50, 18); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("< 번호를 입력해 주세요 >");
	gotoxy(55, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_BBLUE);
	printf("1.게임 시작");
	gotoxy(55, 22); printf("2.게임 방법");
	gotoxy(55, 24); printf("3.게임 종료  ");
	gotoxy(7, 33);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(100, 35); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("1705058 이예진");
	gotoxy(100, 36); printf("1705081 배지은");
 
}
 
void draw_game_screen()
{
	char ch;
	PLAY user = { 20,20 };
 
	//while (1) 
	{
 
		system("cls");
		set_Monster_Position();
 
		for (int i = 0; i < sizeof(map) / sizeof(map[0]); i++)
		{
			for (int j = 0; j < sizeof(map[0]) / sizeof(map[0][0]); j++)
			{
				ch = map[i][j];
				switch (ch)
				{
				case 0:
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
					printf(" ");
					break;
				case 1:
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
					printf("*");
					break;
				}
			}
			printf("\n");
		}
		draw_game_score();
 
		while (1)
		{
#if 1
			gotoxy(Monster.x, Monster.y); // x,y로 커서 이동
			printf(".");
			set_Monster_Position();
			if (user.x == Monster.x || user.y == Monster.y) {
				score_count();
			}
			gotoxy(Monster.x, Monster.y); // x,y로 커서 이동         
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
			printf("♣");
 
			gotoxy(user.x, user.y); // x,y로 커서 이동
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
			printf("옷"); //그 자리에 '옷' 출력
			printf("\n");
#endif
			Sleep(500);
 
			if (kbhit())   //kbhit() =>키보드의 입력을 감지하는 함수 
			{
				gotoxy(user.x, user.y);//이전의 좌표로가서
 
				printf(" ");//이전의 위치를 지워라
 
				switch (getch()) // 벽돌 만나면 더 이상 이동하지 않고 그 외에는 움직이는 코드
				{
 
				case LEFT:
					if (map[user.y][user.x / 2 - 1] > 0)//x는 1/2칸만큼씩만 움직이므로 user.x/2.
					{
						break;
					}
 
					user.x -= 2;
 
					break;
 
				case RIGHT:
					if (map[user.y][user.x / 2 + 1] > 0)
					{
						break;
					}
 
					user.x += 2;
					break;
 
				case UP:
					if (map[user.y - 1][user.x / 2] > 0)
					{
						break;
					}
					user.y -= 1;
					break;
 
				case DOWN:
					if (map[user.y + 1][user.x / 2] > 0)
					{
						break;
					}
					user.y += 1;
					break;
 
				case ESC:
					exit(0);
				}
			}
		}
	}
}
void body_crash(void)
{
	if (Monster.x == user.x && Monster.y == user.y) {
		gameover();
	}
}
void draw_game_score()
{
 
	gotoxy(60, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	gotoxy(73, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("Lv.1");
	gotoxy(62, 7);
	printf("▶ Name : %s", player_name);
	gotoxy(62, 9);
	printf("▶ Score : %d점",score);
	gotoxy(62, 11);
	printf("▶ Highest Score : %d점");
	gotoxy(62, 13);
	printf("▶ ESC : 게임종료 ");
	gotoxy(62, 15);
	printf("▶ 걸린 시간 : %.2f");
	gotoxy(60, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
 
}
 
void get_player_name(void) {
	//사용자의 정보 저장
	gotoxy(33, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < 10; i++) {
		gotoxy(33, 13 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
		printf("┃");
		gotoxy(84, 13 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
		printf("┃");
	}
	gotoxy(33, 22);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
 
	gotoxy(38, 15); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("▶ 게임 할 때 사용할 이름을 입력해주세요 ◀");
 
	gotoxy(53, 19);
	printf("입력 : ");
	scanf("%s", player_name);
 
}
 
void help(void) { //도움말(2번키 눌렸을 때 보일 화면)
 
	gotoxy(19, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < 30; i++) {
		gotoxy(19, 3 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
		printf("┃");
		gotoxy(103, 3 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
		printf("┃");
	}
	gotoxy(29, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("▷ 조작키 ◁");
	gotoxy(29, 7);
	printf("▶ 이동 : ← ↑ ↓ →");
	gotoxy(29, 12);
	printf("▷ 규칙 ◁");
	gotoxy(29, 14);
	printf("① 방향키를 이용해 몬스터들을 피해다닙니다.");
	gotoxy(29, 16);
	printf("② 피해다니면서 점들을 먹으면 점수가 올라가게 됩니다.");
	gotoxy(29, 18);
	printf("③ 레벨(난이도)는 점수 30, 50, 80, 100을 달성하면 자동으로 올라갑니다.");
	gotoxy(29, 20);
	printf("④ 몬스터들에게 닿이면 게임이 종료됩니다.");
	gotoxy(29, 25);
	printf("▷ 개발자 ◁");
	gotoxy(29, 27);
	printf("이예진, 배지은");
	gotoxy(29, 30);
	printf("ESC : 그만보기");
	gotoxy(19, 33);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
}
 
 
int show_count()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	gotoxy(35, 13);
	printf("                         ■■■                          ");
	gotoxy(35, 14);
	printf("                      ■      ■                         ");
	gotoxy(35, 15);
	printf("                               ■                        ");
	gotoxy(35, 16);
	printf("                               ■                        ");
	gotoxy(35, 17);
	printf("                           ■■                          ");
	gotoxy(35, 18);
	printf("                               ■                        ");
	gotoxy(35, 19);
	printf("                     ■        ■                        ");
	gotoxy(35, 20);
	printf("                       ■      ■                        ");
	gotoxy(35, 21);
	printf("                         ■■■                          ");
 
	Sleep(500); //1초간 sleep
 
	gotoxy(35, 13);
	printf("                         ■■■                          ");
	gotoxy(35, 14);
	printf("                       ■      ■                        ");
	gotoxy(35, 15);
	printf("                               ■                        ");
	gotoxy(35, 16);
	printf("                              ■                         ");
	gotoxy(35, 17);
	printf("                            ■                           ");
	gotoxy(35, 18);
	printf("                          ■                             ");
	gotoxy(35, 19);
	printf("                        ■                               ");
	gotoxy(35, 20);
	printf("                      ■                                 ");
	gotoxy(35, 21);
	printf("                      ■■■■■■                       ");
 
	Sleep(500); //1초간 sleep
 
	gotoxy(35, 13);
	printf("                           ■                            ");
	gotoxy(35, 14);
	printf("                         ■■                            ");
	gotoxy(35, 15);
	printf("                           ■                            ");
	gotoxy(35, 16);
	printf("                           ■                            ");
	gotoxy(35, 17);
	printf("                           ■                            ");
	gotoxy(35, 18);
	printf("                           ■                            ");
	gotoxy(35, 19);
	printf("                           ■                            ");
	gotoxy(35, 20);
	printf("                           ■                            ");
	gotoxy(35, 21);
	printf("                         ■■■                          ");
 
 
	Sleep(500); //1초간 sleep
 
	gotoxy(35, 13);
	printf("                         ■■■                          ");
	gotoxy(35, 14);
	printf("                       ■      ■                        ");
	gotoxy(35, 15);
	printf("                       ■      ■                        ");
	gotoxy(35, 16);
	printf("                       ■    ■■                        ");
	gotoxy(35, 17);
	printf("                       ■  ■  ■                        ");
	gotoxy(35, 18);
	printf("                       ■■    ■                        ");
	gotoxy(35, 19);
	printf("                       ■      ■                        ");
	gotoxy(35, 20);
	printf("                       ■      ■                        ");
	gotoxy(35, 21);
	printf("                         ■■■                          ");
 
	Sleep(500); //1초간 sleep
}
 
int score_count(void) //점수를 카운트하는 함수
{
	score += 10;
	return score;
}
 
void gameover(void) {
	gotoxy(1, 1);
	printf("■━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━■");
	for (int i = 0; i < 34; i++) {
		gotoxy(1, 2 + i);
		printf("┃");
		gotoxy(121, 2 + i);
		printf("┃");
	}
	gotoxy(23, 3);
	printf("  ▒▒▒▒▒▒            ▒▒▒       ▒▒▒      ▒▒▒   ▒▒▒▒▒▒▒▒");
	gotoxy(23, 4);
	printf("▒            ▒          ▒▒▒       ▒▒▒      ▒▒▒   ▒");
	gotoxy(23, 5);
	printf("▒                      ▒      ▒     ▒▒▒      ▒▒▒   ▒");
	gotoxy(23, 6);
	printf("▒                      ▒      ▒     ▒    ▒  ▒    ▒   ▒");
	gotoxy(23, 7);
	printf("▒                      ▒      ▒     ▒    ▒  ▒    ▒   ▒");
	gotoxy(23, 8);
	printf("▒        ▒▒▒▒      ▒      ▒     ▒    ▒  ▒    ▒   ▒▒▒▒▒▒▒▒");
	gotoxy(23, 9);
	printf("▒              ▒      ▒      ▒     ▒      ▒      ▒   ▒");
	gotoxy(23, 10);
	printf("▒              ▒    ▒▒▒▒▒▒▒   ▒      ▒      ▒   ▒");
	gotoxy(23, 11);
	printf("▒              ▒    ▒          ▒   ▒              ▒   ▒");
	gotoxy(23, 12);
	printf("▒              ▒    ▒          ▒   ▒              ▒   ▒");
	gotoxy(23, 13);
	printf("  ▒▒▒▒▒▒▒      ▒          ▒   ▒              ▒   ▒▒▒▒▒▒▒▒");
 
	gotoxy(23, 16);
	printf("  ▒▒▒▒▒▒▒      ▒          ▒   ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒");
	gotoxy(23, 17);
	printf("▒              ▒    ▒          ▒   ▒                   ▒              ▒");
	gotoxy(23, 18);
	printf("▒              ▒    ▒          ▒   ▒                   ▒              ▒");
	gotoxy(23, 19);
	printf("▒              ▒    ▒          ▒   ▒                   ▒              ▒");
	gotoxy(23, 20);
	printf("▒              ▒      ▒      ▒     ▒                   ▒              ▒ ");
	gotoxy(23, 21);
	printf("▒              ▒      ▒      ▒     ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒ ");
	gotoxy(23, 22);
	printf("▒              ▒      ▒      ▒     ▒                   ▒              ▒");
	gotoxy(23, 23);
	printf("▒              ▒      ▒      ▒     ▒                   ▒              ▒  ");
	gotoxy(23, 24);
	printf("▒              ▒        ▒▒▒       ▒                   ▒              ▒");
	gotoxy(23, 25);
	printf("▒              ▒        ▒▒▒       ▒                   ▒              ▒");
	gotoxy(23, 26);
	printf("  ▒▒▒▒▒▒▒          ▒▒▒       ▒▒▒▒▒▒▒▒▒   ▒              ▒");
	gotoxy(35, 28);
	printf("────────────────────────────────────────────────────");
	gotoxy(55, 30);
	printf("이름 : %s", player_name);
	gotoxy(55, 33);
	printf("점수 : %d", score);
	gotoxy(35, 35);
	printf("────────────────────────────────────────────────────");
	gotoxy(1, 36);
	printf("■━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━■");
 
}