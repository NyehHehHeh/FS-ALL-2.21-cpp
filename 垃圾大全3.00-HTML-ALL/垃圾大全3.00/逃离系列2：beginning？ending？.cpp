/*
由于文件较大，编译和运行时间可能较长，请耐心等待！ 
■
□
ShowWindow(hwnd,0);
#pragma comment(lib, "winmm.lib")
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


SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//白色 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//红色
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//绿色
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//蓝色
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//黄色 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);//粉色 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//青色 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色   
	out("这...\n这是哪里...\n\n\n\n按Z继续\n按C跳过");
	getz();
	if(getcc==1)return ;
	out("拜托了...\nPLAYER...\n这,只是一场梦...\n\n\n按Z继续\n");
	getz();
}
void shiyong(){
	if(getcc==1){
		mciSendString("stop music/mus_date_tense.mp3", 0, 0, 0);  
		return ;
	}
	out("操作须知：\n按A/D左右选择，按Z确认选择。\n按X结束游戏。\n按方向键移动。");
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
	getz();
	mciSendString("stop music/mus_date_tense.mp3", 0, 0, 0);  
}
void mainchose(){
	/*
	        Beginning Or Ending？（R）
	        ----------------------------
	        |         start           |
	        ---------------------------
	               逃离贡献榜： 
	             吴庞茂旭 吕若朴
	*/
	mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout<<"         Beginning Or Ending ?\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
	cout<<"      ---------------------------\n      |         start           |\n      ---------------------------\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout<<"               逃离"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	cout<<"贡献榜：\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
	cout<<"            吴庞茂旭 吕若朴";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	getz();
	mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
}
/*
■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
■□□□□××□□□□□□□×□□□□□×□□□×□□□×□□□×□□□××××□□□□×××□□
■□□□□□□□□×□×□□×□□□□□×□×□×□×□×□×□×□×□□××□□××□××□□□
■△□□□□□□×□□□□×□□□×□□×□×□×□×□×□×□×□××□□□□×××□×□□□□
■□□□□□□□×□□□□□□□×□□□□□×□□□×□□□×□□□×××□□××××□□□×□□
■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

■1
□2
×3

1111111111111111111111111111111111111111111111111
1222233222222232222232223222322232223333222233322
1222222223232232222232323232323232322332233233222
1222222232222322232232323232323232332222333232222
1222222232222222322222322232223222333223333222322
1111111111111111111111111111111111111111111111111

×>△>□>■
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
			cout<<"■";
		}
		for(int j=max(0,y-5);j<=min(55,y+5);j++){
			if(mp[i][j]==3){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout<<"×";	
			}
			else if(i==x&&j==y){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
				cout<<"△";
			}
			else if(mp[i][j]==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
				cout<<"□";
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"■";
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
				cout<<"×";	
			}
			else if(i==x&&j==y){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
				cout<<"△";
			}
			else if(mp[i][j]==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
				cout<<"□";
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
				cout<<"■";
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
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//青色 
					cout<<"※";
				} 
				else{
					all_error=false;
					if(j>50){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
						cout<<"■";
					}
					else if(mp[i][j]==3){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
						cout<<"×";	
					}
					else if(i==x&&j==y){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
						cout<<"△";
					}
					else if(mp[i][j]==2){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
						cout<<"□";
					}
					else{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
						cout<<"■";
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
	out("*你看到了你的房间.");
	Sleep(2000);
	clean;
	print_end(x,y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
	out("*似乎你的旅途来到了终点.");
	Sleep(2000);
	clean;
	print_end(x,y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
	out("*但是......");
	Sleep(2000);
	clean;
	print_error(x,y);
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
	Bye("                  逃离系列游戏");
	Sleep(1000);
	cout<<"\n\n\n";
	Bye("                       终"); 
	getz();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//白色 
	Bye("                     创 意\n\n\n\n                      WJR");
	Sleep(1500);
	clean;
	Bye("                     程 序\n\n\n\n                      WJR");
	Sleep(1500);
	clean;
	Bye("                     美 工\n\n\n\n                      WJR");
	Sleep(1500);
	clean;
	Bye("                   特别鸣谢\n\n\n                   吴庞茂旭\n\n                    吕若朴\n\n               飞速小程序开发商\n\n              逃离系列游戏开发商");
	Sleep(3000);
	clean;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
	Bye("\n\n\n\n                     再见！");
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//黄色 
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
		VK_LEFT                左箭头键                      0x25
		VK_UP                  上箭头键                      0x26
		VK_RIGHT               右箭头键                      0x27
		VK_DOWN                下箭头键                      0x28
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
		if(get(0x25)){//左 
			tmp=1;
			g1=0;
		}
		if(get(0x26)){//上 
			tmp=2;
			g2=0;
		}
		if(get(0x27)){//右
			tmp=3;
			g3=0;
		}
		if(get(0x28)){//下
			tmp=4;
			g4=0;
		}
		Sleep(100);
	}
	mciSendString("stop music/mus_ruinspiano.mp3", 0, 0, 0);  
	if(lose){
		clean;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);//原色 
		out("你被虚空侵蚀了......");
		sl(1000); 
		clean;
		out("要再来一次吗？");
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
	SetConsoleTitle("逃离系列2：begining？ending？"); 
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


