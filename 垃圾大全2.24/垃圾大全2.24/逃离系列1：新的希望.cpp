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
//格式1：上次游玩得分 最高得分 
//格式2： 上次日期(年月日） 上次游玩累计时间（分钟） {以后建} 
//地图 :7*100    0:空   1，正常方块   
//△：你 
//×：危险方块 
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
void rechange(){//正在编写中。。。 
	time_t timep;
    time(&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d",localtime(&timep) );
    
}
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
	out("一觉醒来，你竟发现\n你来到了二维世界！\n\n按Z继续\n按C跳过");
	getz();
	if(getcc==1)return ;
	out("你正准备好好看看二维世界时，\n三维空间忽然坍塌向二维空间坍塌了！\n于是......\n你开始了逃亡......\n\n按Z继续\n");
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
void getkz(){//摘自luckyone906的博客 
	ifstream fin("txt/1.txt");
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
	cout<<"      得分"<<left << setw(6) << zgt<<"\n";
	for(int i=0;i<=6;i++){
		for(int j=y-5;j<=-1;j++){
			if(j<=er){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"×";	
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"■";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
		}
		for(int j=max(0,y-5);j<=min(105,y+5);j++){
			if(j<=er){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"×";	
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
			else if(x==i&&y==j){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
				cout<<"△";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			}
			else if(dt[i][j]==0)cout<<"□";
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"■";
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
	out("操作须知：\n按A/D左右选择，按Z确认选择。\n按X结束游戏。\n按左箭头键/右箭头键左右移动，按上箭头键跳跃。");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
	cout<<"△";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	out("：你   ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout<<"×";	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	out("：危险方块  ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout<<"■";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	out("普通方块\n按Z继续");
	/* 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout<<"■";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
	cout<<"△";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout<<"×";	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	*/
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
				<<"|         最高分："<< left << setw(6) << zg<<"        |\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"------------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"---------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"|  继续上次游戏  |";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"    新 游 戏  |\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"------------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"---------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			cout<<"               逃离"; 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"贡献榜：\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
			cout<<"            吴庞茂旭 吕若朴";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
		}
		if(f==1&&chose==2){
			clean;
			cout<<"---------------------------------\n"
				<<"|         最高分："<< left << setw(6) << zg<<"        |\n";
			cout<<"-----------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"----------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"|  继续上次游戏  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"|    新 游 戏  |\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"-----------------";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			cout<<"----------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			cout<<"               逃离"; 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
			cout<<"贡献榜：\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
			cout<<"            吴庞茂旭 吕若朴";
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
	if(x==1){//摘自 浅浅的 的微博 
		ofstream fout("txt/1.txt");
		fout<<0<<" "<<4<<" "<<-5<<" "<<max(zg,zgt);
		/*fout << flush;*/ 
		fout.close();
	}
	else{
		freopen("txt/1.txt","w",stdout);
		cout<<y<<" "<<x<<" "<<er<<" "<<max(zg,zgt);
		fclose(stdout);
	}
}
void Main1(){
	/*cout<<"---------------------------------\n"
		<<"|         最高分："<< left << setw(6) << zg<<"        |\n"
		<<"---------------------------------\n"
	    <<"|  继续上次游戏  |    新 游 戏  |\n"
	    <<"---------------------------------\n";*/
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
	out("      开始！");
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
		/*VK_LEFT                左箭头键                      0x25
		VK_UP                  上箭头键                      0x26
		VK_RIGHT               右箭头键                      0x27
		VK_DOWN                下箭头键                      0x28*/
	}
	mciSendString("stop music/mus_ruins.mp3", 0, 0, 0);  
	if(yf==-1){
		out("你掉入了虚空......");
		sl(1000); 
		goout(1);
		clean;
		out("要再来一次吗？");
		if(choseagain()==1){
			sl(500); 
			Main1();
		}
		else{
			clean;
			//cout<<"再会!"; 
			//sl(500);
			ShowWindow(hwnd,0); 
			return ;
		}
	}
	else if(yf==0){
		clean;
		out("你被三维化了......") ;
		goout(1);
		sl(1000); 
		clean;
		out("要再来一次吗？");
		if(choseagain()==1){
			sl(500); 
			Main1();
		}
		else{
			clean;
		//	cout<<"再会!"; 
		//	sl(500);
			ShowWindow(hwnd,0); 
			return ;
		}
	}
	else if(yf==1){
		sl(1000);
		clean;
		out("不知怎么了，你就来到了宇宙的边缘\n忽然，你看到了一条裂缝......\n\n   (未完待续)");
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
	SetConsoleTitle("逃离系列1：新的希望"); 
	system("color 0A");
	HideCursor();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	goin();
	shiyong();
	sl(500); 
	Main1();
	return 0;
}


