/*
�����ļ��ϴ󣬱��������ʱ����ܽϳ��������ĵȴ��� 
��
��
ShowWindow(hwnd,0);
#pragma comment(lib, "winmm.lib")
����color�����0�Ǳ���ɫ���ţ�A��ǰ��ɫ���š�����ɫ�������£� 
0=��ɫ 
1=��ɫ 
2=��ɫ 
3=����ɫ 
4=��ɫ 
5=��ɫ 
6=��ɫ 
7=��ɫ 
8=��ɫ 
9=����ɫ 
A=����ɫ 
B=��ǳ��ɫ 
C=����ɫ 
D=����ɫ 
E=����ɫ 
F=����ɫ 
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
0=��ɫ��1=��ɫ��2=��ɫ��3=����ɫ��4=��ɫ��5=��ɫ��
 
6=��ɫ��7=��ɫ��8=��ɫ��9=����ɫ��A=����ɫ��B=ǳ��ɫ��
 
C=����ɫ��D=����ɫ��E=����ɫ��F=����ɫ��
VK_LBUTTON             ������                      0x01
VK_RBUTTON             ����Ҽ�                      0x02
VK_CANCEL              Ctrl + Break                  0x03
VK_MBUTTON             ����м�                      0x04
 
VK_BACK                Backspace ��       0x08
VK_TAB                 Tab ��                        0x09
 
VK_RETURN              �س���                        0x0D
 
 
VK_SHIFT               Shift ��                      0x10
VK_CONTROL             Ctrl ��                       0x11
VK_MENU                Alt ��                 0x12
VK_PAUSE               Pause ��                      0x13
VK_CAPITAL             Caps Lock ��                  0x14
 
VK_ESCAPE              Esc ��                        0x1B
 
VK_SPACE               �ո��         0x20
VK_PRIOR               Page Up ��                    0x21
VK_NEXT                Page Down ��                  0x22
VK_END                 End ��                        0x23
VK_HOME                Home ��                       0x24
VK_LEFT                ���ͷ��                      0x25
VK_UP                  �ϼ�ͷ��                      0x26
VK_RIGHT               �Ҽ�ͷ��                      0x27
VK_DOWN                �¼�ͷ��                      0x28
VK_SNAPSHOT            Print Screen ��               0x2C
VK_Insert              Insert ��                     0x2D
VK_Delete              Delete ��                     0x2E
 
'0' �C '9'             ���� 0 - 9                    0x30 - 0x39
'A' �C 'Z'             ��ĸ A - Z                    0x41 - 0x5A
 
VK_LWIN                ��WinKey(104���̲���)         0x5B
VK_RWIN                ��WinKey(104���̲���)         0x5C
VK_APPS                AppsKey(104���̲���)          0x5D
 
VK_NUMPAD0            С���� 0 ��                    0x60
VK_NUMPAD1            С���� 1 ��                    0x61
VK_NUMPAD2            С���� 2 ��                    0x62
VK_NUMPAD3            С���� 3 ��                    0x63
VK_NUMPAD4            С���� 4 ��                    0x64
VK_NUMPAD5            С���� 5 ��                    0x65
VK_NUMPAD6            С���� 6 ��                    0x66
VK_NUMPAD7            С���� 7 ��                    0x67
VK_NUMPAD8            С���� 8 ��                    0x68
VK_NUMPAD9            С���� 9 ��                    0x69
 
VK_F1 - VK_F24        ���ܼ�F1 �C F24               0x70 - 0x87
 
VK_NUMLOCK            Num Lock ��                   0x90
VK_SCROLL             Scroll Lock ��                0x91


SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//��ɫ
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//��ɫ
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//��ɫ
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);//��ɫ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
*/ 
#include<bits/stdc++.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<cstdio>
#pragma GCC optimize(3)
#pragma GCC target("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC optimize(2)
#define get(VK_NONAME) (GetAsyncKeyState(VK_NONAME))
#define clean (system("cls"))
#define sl(x) (Sleep(x))
//��ʽ1���ϴ�����÷� ��ߵ÷� 
//��ʽ2�� �ϴ�����(�����գ� �ϴ������ۼ�ʱ�䣨���ӣ� {�Ժ�} 
//��ͼ :7*100    0:��   1����������   
//������ 
//����Σ�շ��� 
using namespace std;
HWND hwnd=GetForegroundWindow();
int getcc;
void cls(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coordScreen = { 0, 0 };
    SetConsoleCursorPosition( hConsole, coordScreen );
}
void HideCursor(){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);
}
void out(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(40);
	}
	cout<<"\n";	
}
void Bye(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(50);
	}
}
void quicklyout(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(20);
	}
	cout<<"\n";
}
void getz(){
	while(1){
		if(get(0x5A)){
			clean;
			break;
		}
		if(get(0x43)){
			clean;
			getcc=1;
			break;
		}
	}
}
void goin(){
	system("mode con cols=50 lines=10");  
	mciSendString("play music/mus_date_tense.mp3 repeat", 0, 0, 0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ   
	out("��...\n��������...\n\n\n\n��Z����\n��C����");
	getz();
	if(getcc==1)return ;
	out("������...\nPLAYER...\n��,ֻ��һ����...\n\n\n��Z����\n");
	getz();
}
void shiyong(){
	if(getcc==1){
		mciSendString("stop music/mus_date_tense.mp3", 0, 0, 0);  
		return ;
	}
	out("������֪��\n��A/D����ѡ�񣬰�Zȷ��ѡ��\n��X������Ϸ��\n��������ƶ���");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
	cout<<"��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	out("����   ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout<<"��";	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	out("��Σ�շ���  ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout<<"��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	out("��ͨ����\n��Z����");
	getz();
	mciSendString("stop music/mus_date_tense.mp3", 0, 0, 0);  
}
void mainchose(){
	/*
	        Beginning Or Ending����R��
	        ----------------------------
	        |         start           |
	        ---------------------------
	               ���빱�װ� 
	             ����ï�� ������
	*/
	mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout<<"         Beginning Or Ending ?\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
	cout<<"      ---------------------------\n      |         start           |\n      ---------------------------\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout<<"               ����"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	cout<<"���װ�\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
	cout<<"            ����ï�� ������";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	getz();
	mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
}
/*
��������������������������������������������������������������������������������������������������
��������������������������������������������������������������������������������������������������
��������������������������������������������������������������������������������������������������
��������������������������������������������������������������������������������������������������
��������������������������������������������������������������������������������������������������
��������������������������������������������������������������������������������������������������

��1
��2
��3

1111111111111111111111111111111111111111111111111
1222233222222232222232223222322232223333222233322
1222222223232232222232323232323232322332233233222
1222222232222322232232323232323232332222333232222
1222222232222222322222322232223222333223333222322
1111111111111111111111111111111111111111111111111

��>��>��>��
*/
int mp[6][56]={
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//0
{1,2,2,2,2,3,3,2,2,2,2,2,2,2,3,2,2,2,2,2,3,2,2,2,3,2,2,2,3,2,2,2,3,2,2,2,3,3,3,3,2,2,2,2,3,3,3,2,2,2,2,1,1,1,1},//1
{1,2,2,2,2,2,2,2,2,3,2,3,2,2,3,2,2,2,2,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,2,3,3,2,2,3,3,2,3,3,2,2,2,2,2,1,1,1,1},//2
{1,2,2,2,2,2,2,2,3,2,2,2,2,3,2,2,2,3,2,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,3,2,2,2,2,3,3,3,2,3,2,2,2,2,2,2,1,1,1,1},//3
{1,2,2,2,2,2,2,2,3,2,2,2,2,2,2,2,3,2,2,2,2,2,3,2,2,2,3,2,2,2,3,2,2,2,3,3,3,2,2,3,3,3,3,2,2,2,3,2,2,2,2,1,1,1,1},//4
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} //5
};
void print(int x,int y){
	cls();
	for(int i=0;i<6;i++){
		for(int j=1;j<=5-y;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			cout<<"��";
		}
		for(int j=max(0,y-5);j<=min(55,y+5);j++){
			if(mp[i][j]==3){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"��";	
			}
			else if(i==x&&j==y){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
				cout<<"��";
			}
			else if(mp[i][j]==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
				cout<<"��";
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"��";
			}
		}
		cout<<"\n";
	}
}
void print_end(int x,int y){
	for(int i=0;i<6;i++){
		for(int j=45;j<=55;j++){
			if(mp[i][j]==3){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"��";	
			}
			else if(i==x&&j==y){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
				cout<<"��";
			}
			else if(mp[i][j]==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
				cout<<"��";
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"��";
			}
		}
		cout<<"\n";
	} 
}
bool mp_error[6][60];
void print_error(int x,int y){
	while(1){
		bool all_error=true;
		for(int i=0;i<6;i++){
			for(int j=45;j<=55;j++){
				int er=rand()%3;
				if(er==1){
					mp_error[i][j]=true;
				}
				if(mp_error[i][j]==true){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ 
					cout<<"��";
				} 
				else{
					all_error=false;
					if(j>50){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
						cout<<"��";
					}
					else if(mp[i][j]==3){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
						cout<<"��";	
					}
					else if(i==x&&j==y){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
						cout<<"��";
					}
					else if(mp[i][j]==2){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
						cout<<"��";
					}
					else{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
						cout<<"��";
					}
				}
			}
			cout<<"\n";
		} 
		if(all_error)break;
		cls();
		Sleep(400);
	}
	Sleep(2000);
	clean;
}
void End(int x,int y){
	print_end(x,y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
	out("*�㿴������ķ���.");
	Sleep(2000);
	clean;
	print_end(x,y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
	out("*�ƺ������;�������յ�.");
	Sleep(2000);
	clean;
	print_end(x,y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
	out("*����......");
	Sleep(2000);
	clean;
	print_error(x,y);
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
	Bye("                  ����ϵ����Ϸ");
	Sleep(1000);
	cout<<"\n\n\n";
	Bye("                       ��"); 
	getz();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
	Bye("                     �� ��\n\n\n\n                      WJR");
	Sleep(1500);
	clean;
	Bye("                     �� ��\n\n\n\n                      WJR");
	Sleep(1500);
	clean;
	Bye("                     �� ��\n\n\n\n                      WJR");
	Sleep(1500);
	clean;
	Bye("                   �ر���л\n\n\n                   ����ï��\n\n                    ������\n\n               ����С���򿪷���\n\n              ����ϵ����Ϸ������");
	Sleep(3000);
	clean;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
	Bye("\n\n\n\n                     �ټ���");
	Sleep(1000);
	getz();
	return ;
} 
int choseagain(){
	int chosea=1,tf=1;
	while(1){
		if(get(0x5A))break;
		bool f=0;
		if(tf==1){
			tf=0;
			f=1;
		}
		if(get(0x41)){
			if(chosea==2){
				chosea=1;
				f=1;
			}
		}
		if(get(0x44)){
			if(chosea==1){
				chosea=2;
				f=1;
			}
		}
		if(f==1&&chosea==1){
			clean;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"   yes   ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"   no";
		}
		if(f==1&&chosea==2){
			clean;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"   yes   ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"   no";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
		}
		sl(10);
	} 
	return chosea;
}
void Main(){
	clean;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
	out("        3");
	sl(1000);
	clean;
	out("        2");
	sl(1000);
	clean;
	out("        1");
	sl(1000);
	clean;
	out("      ��ʼ��");
	sl(500);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	int player_x=3,player_y=1;
	mciSendString("play music/mus_ruinspiano.mp3 repeat", 0, 0, 0);   
	clean;
	bool lose=false;
	int tmp=0;
	int g1=0,g2=0,g3=0,g4=0;
	int cheat=0;
//	cheat=1;
	print(player_x,player_y);
	while(player_y!=50){
		/*
		VK_LEFT                ���ͷ��                      0x25
		VK_UP                  �ϼ�ͷ��                      0x26
		VK_RIGHT               �Ҽ�ͷ��                      0x27
		VK_DOWN                �¼�ͷ��                      0x28
		*/
		if(mp[player_x][player_y]==3&&cheat==0){
			lose=true;
			break;
		}
		if(tmp==1){
			if(mp[player_x][player_y-1]!=1&&g1>=3){
				player_y--;
				g1=0;
				print(player_x,player_y);
			}
			g1++;
		}
		if(tmp==2){
			if(mp[player_x-1][player_y]!=1&&g2>=3){
				player_x--;
				g2=0;
				print(player_x,player_y);
			}
			g2++;
		}
		if(tmp==3){
			if(mp[player_x][player_y+1]!=1&&g3>=3){
				player_y++;
				g3=0;
				print(player_x,player_y);
			}
			g3++;
		}
		if(tmp==4){
			if(mp[player_x+1][player_y]!=1&&g4>=3){
				player_x++;
				g4=0;
				print(player_x,player_y);
			}
			g4++;
		}
		if(get(0x25)){//�� 
			tmp=1;
			g1=0;
		}
		if(get(0x26)){//�� 
			tmp=2;
			g2=0;
		}
		if(get(0x27)){//��
			tmp=3;
			g3=0;
		}
		if(get(0x28)){//��
			tmp=4;
			g4=0;
		}
		Sleep(100);
	}
	mciSendString("stop music/mus_ruinspiano.mp3", 0, 0, 0);  
	if(lose){
		clean;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
		out("�㱻�����ʴ��......");
		sl(1000); 
		clean;
		out("Ҫ����һ����");
		Sleep(500);
		if(choseagain()==1){
			Main();
		}
		else{
			clean;
			ShowWindow(hwnd,0); 
			return ;
		}
	}
	else{
		clean;
		End(player_x,player_y);
		ShowWindow(hwnd,0);
	}
	return ;
}
int main(){
	srand(time(0));
	SetConsoleTitle("����ϵ��2��begining��ending��"); 
	system("color 0A");
	HideCursor();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	goin();
	shiyong();
	sl(500); 
	mainchose();
	Main();
	return 0;
}


