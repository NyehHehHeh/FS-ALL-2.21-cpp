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
//��ʽ1���ϴ�����÷� ��ߵ÷� 
//��ʽ2�� �ϴ�����(�����գ� �ϴ������ۼ�ʱ�䣨���ӣ� {�Ժ�} 
//��ͼ :7*100    0:��   1����������   
//������ 
//����Σ�շ��� 
using namespace std;
int kais,zg,chose;
HWND hwnd=GetForegroundWindow();
int zgt;
int x,y,er=-5,jl,erc,jlc; 
int df;
int getcc=0; 
int dt[7][106]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
{0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,1,1,1,1},
{1,1,1,0,1,1,1,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,0,1,1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,1,0,0,1,1,1,0,0,0,0,1,1,1,1,0,0,1,1,0,0,0,1,1,0,0,1,0,1,1,1,1,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1}
};
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
		Sleep(25);
	}
	cout<<"\n";	
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
	out("һ���������㾹����\n�������˶�ά���磡\n\n��Z����\n��C����");
	getz();
	if(getcc==1)return ;
	out("����׼���úÿ�����ά����ʱ��\n��ά�ռ��Ȼ̮�����ά�ռ�̮���ˣ�\n����......\n�㿪ʼ������......\n\n��Z����\n");
	getz();
}
int change(string s){
	int f=1,idx=0;
	for(int i=s.size()-1;i>=0;i--){
		idx+=(s[i]-'0')*f;
		f*=10;
	}
	return idx;
}           
void getkz(){//ժ��luckyone906�Ĳ��� 
	ifstream fin("txt/data.txt");
	fin>>y>>x>>er>>zg;
	fin.close();
	if(y==0&&x==0&&er==0&&zg==0){
		er=-5;
		x=4;
		y=0;
	}
}
void prin(){
	cls();
	cout<<"      �÷�"<<left << setw(6) << zgt<<"\n";
	for(int i=0;i<=6;i++){
		for(int j=y-5;j<=-1;j++){
			if(j<=er){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"��";	
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"��";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
		}
		for(int j=max(0,y-5);j<=min(105,y+5);j++){
			if(j<=er){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"��";	
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
			else if(x==i&&y==j){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
				cout<<"��";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
			else if(dt[i][j]==0)cout<<"��";
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"��";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
		}
		cout<<"\n";
	}
}
void shiyong(){
	if(getcc==1){
		mciSendString("stop music/mus_date_tense.mp3", 0, 0, 0);  
		return ;
	}
	out("������֪��\n��A/D����ѡ�񣬰�Zȷ��ѡ��\n��X������Ϸ��\n�����ͷ��/�Ҽ�ͷ�������ƶ������ϼ�ͷ����Ծ��");
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
	mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	zg=max(zg,zgt);
	chose=1;
	int tf=1;
	while(1){
		if(get(0x5A))break;
		bool f=0;
		if(tf==1){
			tf=0;
			f=1;
		}
		if(get(0x41)){
			if(chose==2){
				chose=1;
				f=1;
			}
		}
		if(get(0x44)){
			if(chose==1){
				chose=2;
				f=1;
			}
		}
		if(f==1&&chose==1){
			clean;
			cout<<"---------------------------------\n"
				<<"|         ��߷֣�"<< left << setw(6) << zg<<"        |\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"------------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"---------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"|  �����ϴ���Ϸ  |";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"    �� �� Ϸ  |\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"------------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"---------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			cout<<"               ����"; 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"���װ�\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
			cout<<"            ����ï�� ������";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
		}
		if(f==1&&chose==2){
			clean;
			cout<<"---------------------------------\n"
				<<"|         ��߷֣�"<< left << setw(6) << zg<<"        |\n";
			cout<<"-----------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"----------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"|  �����ϴ���Ϸ  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"|    �� �� Ϸ  |\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"-----------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"----------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			cout<<"               ����"; 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"���װ�\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
			cout<<"            ����ï�� ������";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
		}
		sl(10);
	} 
	mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
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
void goout(int x){
	if(x==1){//ժ�� ǳǳ�� ��΢�� 
		ofstream fout("txt/data.txt");
		fout<<0<<" "<<4<<" "<<-5<<" "<<max(zg,zgt);
		fout.close();
	}
	else{
		freopen("txt/data.txt","w",stdout);
		cout<<y<<" "<<x<<" "<<er<<" "<<max(zg,zgt);
		fclose(stdout);
	}
}
void Main1(){
	getkz();
	sl(1000);
	erc=0;
	jlc=0;
	mainchose();
	if(chose==2){
		er=-5;
		x=4;
		y=0;
	}
	clean;
	zgt=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
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
	mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
	mciSendString("play music/mus_ruins.mp3 repeat", 0, 0, 0);  
	int yf;
	int tget=0; 
	prin();
	while(1){
		if(tget==3)tget=0;
		zgt=max(zgt,y);
		df=y;
		if(get('X')){
			yf=2;
			break;
		}
		if(y<=er){
			yf=0;
			break;
		}
		erc++;
		if(dt[x+1][y]==0)jlc++;
		if(erc==10){
			er++;
			erc=1;
			prin();
		}
		if(y==100&&x==4){
			prin();
			yf=1;
			break;
		}
		if(x==6){
			x++;
			sl(100);
			prin();
			sl(100);
			clean;
			yf=-1;
			break;
		}
		if(dt[x+1][y]==0&&jlc==6){
			x++;
			jlc=0;
			prin();
		}
		if(get(0x25)&&dt[x][y-1]==0&&tget==2){
			y--;
			prin();
		}
		if(dt[x+1][y]==1&&get(0x26)&&tget==2){
			int jian;
			for(jian=1;jian<=6-x;jian++){
				if(dt[x-jian][y]==1){
					jian--;
					break;
				}
			}
			x-=jian;
			x=max(x,0);
			prin();
		}
		if(get(0x27)&&dt[x][y+1]==0&&tget==2){
			y++;
			prin();
		}
		sl(40);
		tget++;
		/*VK_LEFT                ���ͷ��                      0x25
		VK_UP                  �ϼ�ͷ��                      0x26
		VK_RIGHT               �Ҽ�ͷ��                      0x27
		VK_DOWN                �¼�ͷ��                      0x28*/
	}
	mciSendString("stop music/mus_ruins.mp3", 0, 0, 0);  
	if(yf==-1){
		out("����������......");
		sl(1000); 
		goout(1);
		clean;
		out("Ҫ����һ����");
		if(choseagain()==1){
			Main1();
		}
		else{
			clean;
			ShowWindow(hwnd,0); 
			return ;
		}
	}
	else if(yf==0){
		clean;
		out("�㱻��ά����......") ;
		goout(1);
		sl(1000); 
		clean;
		out("Ҫ����һ����");
		if(choseagain()==1){
			Main1();
		}
		else{
			clean;
			ShowWindow(hwnd,0); 
			return ;
		}
	}
	else if(yf==1){
		sl(1000);
		clean;
		out("��֪��ô�ˣ��������������ı�Ե\n��Ȼ���㿴����һ���ѷ�......\n\n   (�������ϵ��2)");
		goout(1);
		sl(2000);
		ShowWindow(hwnd,0); 
	}
	else{
		goout(2);
		ShowWindow(hwnd,0);
	}
}
int main(){
	SetConsoleTitle("����ϵ��1���µ�ϣ��"); 
	system("color 0A");
	HideCursor();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	goin();
	shiyong();
	sl(500); 
	Main1();
	return 0;
}


