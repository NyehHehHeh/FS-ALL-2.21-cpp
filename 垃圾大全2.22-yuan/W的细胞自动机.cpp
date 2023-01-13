/*
由于文件较大，编译和运行时间可能较长，请耐心等待！ 
■
□
其中color后面的0是背景色代号，A是前景色代号。各颜色代码如下： 
0=黑色 
1=蓝色 
2=绿色 
3=湖蓝色 
4=红色 
5=紫色 
6=黄色 
7=白色 
8=灰色 
9=淡蓝色 
A=淡绿色 
B=淡浅绿色 
C=淡红色 
D=淡紫色 
E=淡黄色 
F=亮白色 
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
0=黑色，1=蓝色，2=绿色，3=湖蓝色，4=红色，5=紫色；
 
6=黄色，7=白色，8=灰色，9=淡蓝色，A=淡绿色，B=浅绿色；
 
C=淡红色，D=淡紫色，E=淡黄色，F=亮白色。
VK_LBUTTON             鼠标左键                      0x01
VK_RBUTTON             鼠标右键                      0x02
VK_CANCEL              Ctrl + Break                  0x03
VK_MBUTTON             鼠标中键                      0x04
 
VK_BACK                Backspace 键       0x08
VK_TAB                 Tab 键                        0x09
 
VK_RETURN              回车键                        0x0D
 
 
VK_SHIFT               Shift 键                      0x10
VK_CONTROL             Ctrl 键                       0x11
VK_MENU                Alt 键                 0x12
VK_PAUSE               Pause 键                      0x13
VK_CAPITAL             Caps Lock 键                  0x14
 
VK_ESCAPE              Esc 键                        0x1B
 
VK_SPACE               空格键         0x20
VK_PRIOR               Page Up 键                    0x21
VK_NEXT                Page Down 键                  0x22
VK_END                 End 键                        0x23
VK_HOME                Home 键                       0x24
VK_LEFT                左箭头键                      0x25
VK_UP                  上箭头键                      0x26
VK_RIGHT               右箭头键                      0x27
VK_DOWN                下箭头键                      0x28
VK_SNAPSHOT            Print Screen 键               0x2C
VK_Insert              Insert 键                     0x2D
VK_Delete              Delete 键                     0x2E
 
'0' – '9'             数字 0 - 9                    0x30 - 0x39
'A' – 'Z'             字母 A - Z                    0x41 - 0x5A
 
VK_LWIN                左WinKey(104键盘才有)         0x5B
VK_RWIN                右WinKey(104键盘才有)         0x5C
VK_APPS                AppsKey(104键盘才有)          0x5D
 
VK_NUMPAD0            小键盘 0 键                    0x60
VK_NUMPAD1            小键盘 1 键                    0x61
VK_NUMPAD2            小键盘 2 键                    0x62
VK_NUMPAD3            小键盘 3 键                    0x63
VK_NUMPAD4            小键盘 4 键                    0x64
VK_NUMPAD5            小键盘 5 键                    0x65
VK_NUMPAD6            小键盘 6 键                    0x66
VK_NUMPAD7            小键盘 7 键                    0x67
VK_NUMPAD8            小键盘 8 键                    0x68
VK_NUMPAD9            小键盘 9 键                    0x69
 
VK_F1 - VK_F24        功能键F1 – F24               0x70 - 0x87
 
VK_NUMLOCK            Num Lock 键                   0x90
VK_SCROLL             Scroll Lock 键                0x91
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	cout << "原色testCOLOR（没有设置字体颜色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN | FOREGROUND_BLUE);//设置三色相加
	cout << "白色testCOLOR（红色绿色蓝色相加）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	//设置红色
	cout << "红色testCOLOR（设置的颜色为红色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN)
		;//设置绿色
	cout << "绿色testCOLOR（设置的颜色为绿色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	//设置蓝色
	cout << "蓝色testCOLOR（设置的颜色为蓝色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN);//设置红色和绿色相加
	cout << "黄色testCOLOR（红色和绿色相加色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_BLUE);//设置红色和蓝色相加
	cout << "粉色testCOLOR（红色和蓝色相加色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
		FOREGROUND_BLUE);//设置绿色和蓝色相加
	cout << "青色testCOLOR（绿色和蓝色相加色）" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	//设置颜色，没有添加颜色，故为原色
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
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
			}
			else if(a[i][j]==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//青色 
			}
			else if(a[i][j]==3){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);//粉色 
			}
			else if(a[i][j]==4){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//黄色 
			}
			else if(a[i][j]==5){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//蓝色
			}
			else if(a[i][j]==6){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//绿色
			}
			else if(a[i][j]==7){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//红色
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//白色 
			}
			printf("■");
		}
		printf("\n");
	}
}
int main(){
	system("mode con cols=100 lines=43");    
	SetConsoleTitle("W的细胞自动机"); 
	//HideCursor();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	srand(time(0));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//白色 
	mciSendString("play music/mus_snowy.mp3 repeat", 0, 0, 0);  
	cout<<"输入三个数，生成一个属于你自己的美丽图画！\n";
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
	Sleep(2000);
	return 0;
}

 
