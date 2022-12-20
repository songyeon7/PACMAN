#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include <stdlib.h>
#include <time.h>

#define COLOR_YELLOW 6
#define COLOR_BBLUE 11
#define COLOR_WHITE 15
#define COLOR_PINK 13
#define COLOR_RED 4
#define COLOR_SKYBLUE 9
#define LEFT 75  //왼쪽 방향키
#define RIGHT 77 //오른쪽 방향키
#define UP 72   //위쪽 방향키
#define DOWN 80 //아래 방향키
#define PAUSE 112
#define ESC 27

//void p_food();
void draw_menu();//메뉴그리는 함수
void help(void); //도움말 화면 그리는 함수
void draw_game_screen(); //게임 실행 맵
void draw_game_score(); //게임 실행 하는데에 점수
int show_count(); //쇼카운트
int score = 0; //점수
//int userx = 0; //사용자      
//int usery = 0;
void gameover(); //게임 종료 화면
int best_score = 0; // 최고점수
int last_score = 0; // 최저점수
int x = 0, y = 0; //x, y 좌표 저장
void body_crash(void);
void pause(void); //일시정지 
int speed; //게임 속도 

int map[11][25] = { //map[y][x]
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1 },
	{ 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1 },
	{ 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1 },
	{ 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1 },
	{ 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1 },
	{ 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1 },
	{ 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1 },
	{ 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1 },
	{ 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
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
	Monster.x = 5;
	Monster.y = 5;
}

void set_Monster_Position() { //!!
	int rand1 = 0, rand2 = 0, rand3 = 0, rand4 = 0;

	srand((unsigned int)time(NULL));

	rand1 = rand() % 2;
	rand2 = rand() % 2;
	rand3 = rand() % 2;
	rand4 = rand() % 2;
	if (rand3 == 0)
		rand1 * -1;
	if (rand4 == 0)
		rand2 * -1;

	int rex = Monster.x + rand2;
	int rey = Monster.y + rand1;
	//int rand3 = rand() % 2;

	/*
	if (map[Monster.x + rand1][Monster.y + rand2] != 1 ) {
		map[Monster.x][Monster.y] = 0;
		Monster.x = Monster.x + rand1;
		Monster.y = Monster.y + rand2;
	}
	*/

	if (map[rey][rex] != 1 && rey < 11 && rey>0 && rex < 25 && rex > 0) {
		map[Monster.y][Monster.x] = 0;
		Monster.x = rex;
		Monster.y = rey;
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

	//init_Monster_Position();
	while (1) {
		//게임 메인화면 
		draw_menu();
		RemoveCursor();
		num = input_number();

		if (num == 1) {
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
			return 0;
		}
	}
	_getch();
}

int input_number() {
	int num;

	gotoxy(55, 26); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("번호를 골라주세요 :");
	scanf("%d", &num);
	if (num != 1 && num != 2 && num != 3) {
		gotoxy(47, 30); printf("숫자 1,2,3 중에 골라 적어주세요.");
	}
	return num;
}

/*void p_food()
{
	if (strcmp(map[user.y][user.x],"˙")==0) {
		map[user.y][user.x] = " ";
		score += 1;
	}
}*/

void draw_menu() {
	gotoxy(7, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(15, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);  printf(" ■■■■       ■         ■■■■■            ■        ■         ■        ■         ■");
	gotoxy(15, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);  printf(" ■      ■   ■  ■      ■                    ■ ■    ■ ■      ■  ■     ■ ■       ■");
	gotoxy(15, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);  printf(" ■■■■    ■    ■     ■           ■■■   ■  ■  ■  ■     ■    ■    ■   ■     ■");
	gotoxy(15, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);  printf(" ■         ■■■■■    ■                    ■    ■    ■    ■■■■■   ■     ■   ■");
	gotoxy(15, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);  printf(" ■        ■        ■   ■                    ■          ■   ■        ■  ■       ■ ■");
	gotoxy(15, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW); printf(" ■       ■          ■   ■■■■■           ■          ■  ■          ■ ■         ■");


	for (int i = 0; i < 30; i++) {
		gotoxy(7, 3 + i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
		printf("□");
		gotoxy(115, 3 + i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
		printf("□");
	}
	gotoxy(50, 18);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("번호를 골라주세요");
	gotoxy(55, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_BBLUE);
	printf("1.게임 시작");
	gotoxy(55, 22);
	printf("2.게임 설명");
	gotoxy(55, 24);
	printf("3.게임 종료  ");
	gotoxy(7, 33);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(100, 35);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
	printf("10603 김송연");
	gotoxy(100, 36);
	printf("10611 박민솔");

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
	gotoxy(62, 9);
	printf("Score : %d점", score);
	gotoxy(62, 11);
	//printf("Highest Score : %d점");
	gotoxy(62, 13);
	printf("ESC : 게임종료 ");
	gotoxy(62, 15);
	//printf("걸린 시간 : %.2f");
	gotoxy(60, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_PINK);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

}

void help(void) { //도움말(2번키 눌렸을 때 보일 화면)

	gotoxy(19, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_SKYBLUE);
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < 30; i++) {
		gotoxy(19, 3 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_SKYBLUE);
		printf("┃");
		gotoxy(103, 3 + i); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_SKYBLUE);
		printf("┃");
	}
	gotoxy(29, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_SKYBLUE);
	printf("조작키");
	gotoxy(29, 7);
	printf("이동 : ← ↑ ↓ →");
	gotoxy(29, 12);
	printf("규칙");
	gotoxy(29, 14);
	printf("1. 방향키를 이용해 몬스터들을 피해다닙니다.");
	gotoxy(29, 16);
	printf("2. 피해다니면서 점들을 먹으면 점수가 올라가게 됩니다.");
	gotoxy(29, 18);
	printf("3. 레벨(난이도)는 점수 30, 50, 80, 100을 달성하면 자동으로 올라갑니다.");
	gotoxy(29, 20);
	printf("4. 몬스터들에게 닿이면 게임이 종료됩니다.");
	gotoxy(29, 30);
	printf("esc : 그만보기");
	gotoxy(19, 33);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_SKYBLUE);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
}

void gameover(void) {
	system("cls");
	printf("점수 : %d", score);

}

void draw_game_screen()
{
	int game = 1;
	system("cls");
	user.x = 5;
	user.y = 5;
	Monster.x = 2;
	Monster.y = 3;

	while (game)
	{
		system("cls");

		for (int i = 0; i <= 11; i++)
		{
			for (int j = 0; j <= 25; j++)
			{
				int ch = map[i][j];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_YELLOW);
				gotoxy(j * 2, i);
				switch (ch)
				{
				case 0:
					printf(" ");
					break;
				case 2:
					printf("˙");
					break;
				case 1:
					printf("■");
					break;
				}
			}
			//printf("\n");
		}



		set_Monster_Position();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_WHITE);
		gotoxy(Monster.x * 2, Monster.y); // x,y로 커서 이동
		printf("R");

		gotoxy(user.x * 2, user.y); // x,y로 커서 이동
		printf("P");


		draw_game_score();
		//if (_kbhit())   //kbhit() =>키보드의 입력을 감지하는 함수 
		//{
			//gotoxy(user.x, user.y);//이전의 좌표로가서

			//printf(" ");//이전의 위치를 지워라
		char key = _getch();
		int tmpx, tmpy;
		switch (key) // 벽돌 만나면 더 이상 이동하지 않고 그 외에는 움직이는 코드
		{
		case LEFT:
			if (map[user.y][user.x - 1] == 1)//x는 1/2칸만큼씩만 움직이므로 user.x/2.
			{
				break;
			}
			user.x -= 1;
			break;

		case RIGHT:
			if (map[user.y][user.x + 1] == 1)
			{
				break;
			}
			user.x += 1;
			break;

		case UP:
			if (map[user.y - 1][user.x] == 1)
			{
				break;
			}
			user.y -= 1;
			break;

		case DOWN:
			if (map[user.y + 1][user.x] == 1)
			{
				break;
			}
			user.y += 1;
			break;

		case ESC:
			exit(0);
			//}
		}
		if (map[user.y][user.x] == 2) {
			score += 10;
			map[user.y][user.x] = 0;
		}



		if (user.x == Monster.x && user.y == Monster.y) {
			system("cls");
			game = 0;

		}

		//Sleep(1000);

	}
	gameover();


}
