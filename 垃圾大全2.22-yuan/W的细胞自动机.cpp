/*
�����ļ��ϴ󣬱��������ʱ����ܽϳ��������ĵȴ��� 
��
��
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
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	cout << "ԭɫtestCOLOR��û������������ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN | FOREGROUND_BLUE);//������ɫ���
	cout << "��ɫtestCOLOR����ɫ��ɫ��ɫ��ӣ�" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	//���ú�ɫ
	cout << "��ɫtestCOLOR�����õ���ɫΪ��ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN)
		;//������ɫ
	cout << "��ɫtestCOLOR�����õ���ɫΪ��ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	//������ɫ
	cout << "��ɫtestCOLOR�����õ���ɫΪ��ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN);//���ú�ɫ����ɫ���
	cout << "��ɫtestCOLOR����ɫ����ɫ���ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_BLUE);//���ú�ɫ����ɫ���
	cout << "��ɫtestCOLOR����ɫ����ɫ���ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
		FOREGROUND_BLUE);//������ɫ����ɫ���
	cout << "��ɫtestCOLOR����ɫ����ɫ���ɫ��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	//������ɫ��û�������ɫ����Ϊԭɫ
	cout << endl;
	system("pause");
	return 0;
}
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
using namespace std;
int a[105][105];
int d[8][2]={{-1,-1},{-1,0},{-1,1},{-1,0},{0,1},{-1,1},{1,1}};
int b[9];
int mx,m;
int t1,t2,t3;
int r,s;
HWND hwnd=GetForegroundWindow();
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
void print(){
	cls();
	for(int i=1;i<=40;i++){
		for(int j=1;j<=40;j++){
			if(a[i][j]==0){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
			}
			else if(a[i][j]==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ 
			}
			else if(a[i][j]==3){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);//��ɫ 
			}
			else if(a[i][j]==4){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
			}
			else if(a[i][j]==5){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//��ɫ
			}
			else if(a[i][j]==6){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//��ɫ
			}
			else if(a[i][j]==7){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//��ɫ
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
			}
			printf("��");
		}
		printf("\n");
	}
}
int main(){
	system("mode con cols=100 lines=43");    
	SetConsoleTitle("W��ϸ���Զ���"); 
	//HideCursor();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	srand(time(0));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
	mciSendString("play music/mus_snowy.mp3 repeat", 0, 0, 0);  
	cout<<"����������������һ���������Լ�������ͼ����\n";
	cin>>t1>>t2>>t3;
	clean;
	for(int i=1;i<=40;i++){
		for(int j=1;j<=40;j++){
			a[i][j]=rand()%8+1;
		}
	}
//	print();
	for(int kk=1;kk<=t3%100+10;kk++){
		for(int i=1;i<=40;i++){
			for(int j=1;j<=40;j++){
				s=0;
				for(int k=0;k<=7;k++){
					int tx=i+d[k][0],ty=j+d[k][1];
					if(a[tx][ty]==a[i][j]){
						s++;
					}
				}
				if(s==t1%9||s==t2%9){
					while(1){
						r=rand()%8;
						if(a[i+d[r][0]][j+d[r][1]]>=(t1+t2+t3+r)%8){
							a[i+d[r][0]][j+d[r][1]]=a[i][j];
							break;
						}
					}
				}
				else{
					int lm=m;
					mx=0;
					for(int k=0;k<=7;k++){
						int tx=i+d[k][0],ty=j+d[k][1];
					  	if(a[tx][ty]!=0)b[a[tx][ty]]++;
						if(b[a[tx][ty]]>mx&&a[tx][ty]!=lm){
							mx=b[a[tx][ty]];
							m=a[tx][ty];
						}
					}
					a[i][j]=m;
				}
			}
		}
		for(int i=40;i>=1;i--){
			for(int j=40;j>=1;j--){
				s=0;
				for(int k=0;k<=7;k++){
					int tx=i+d[k][0],ty=j+d[k][1];
					if(a[tx][ty]==a[i][j]){
						s++;
					}
				}
				if(s==t1%9||s==t2%9){
					while(1){
						r=rand()%8;
						if(a[i+d[r][0]][j+d[r][1]]>=(t1+t2+t3+r)%8){
							a[i+d[r][0]][j+d[r][1]]=a[i][j];
							break;
						}
					}
				}
				else{
					int lm=m;
					mx=0;
					for(int k=0;k<=7;k++){
						int tx=i+d[k][0],ty=j+d[k][1];
					  	if(a[tx][ty]!=0)b[a[tx][ty]]++;
						if(b[a[tx][ty]]>mx&&a[tx][ty]!=lm){
							mx=b[a[tx][ty]];
							m=a[tx][ty];
						}
					}
					a[i][j]=m;
				}
			}
		}
		//r=rand()%8+1;
	}
	print();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//ԭɫ 
	Sleep(2000);
	return 0;
}

 
