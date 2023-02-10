/*
由于文件较大，编译和运行时间可能较长，请耐心等待！ 
SW_HIDE //程序启动后隐藏主窗口
SW_MAXIMIZE //最大化运行
SW_MINIMIZE //最小化运行
SW_RESTORE //将最大化或最小化的窗口恢复正常
SW_SHOW //以当前位置和大小显示主窗口
SW_SHOWMAXIMIZED //激活窗口并以最大化运行
SW_SHOWMINIMIZED //激活窗口并以最小化运行
SW_SHOWMINNOACTIVE //最小化运行，但不激活
SW_SHOWNOACTIVATE //以上一次的窗口大小运行，但不激活
SW_SHOWNORMAL //普通方式，一般运行时采用这个 
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
#include<Windows.h>
#include<ShellAPI.h>
#include<time.h>
#include<windows.h>
#include<MMSystem.h>     
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
#define qdo 262 
#define qre 294
#define qmi 330 
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
#define get(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
string cut;
int c=53,d=5,mm=0;
HWND hwnd=GetForegroundWindow();
string getTime(){
    time_t timep;
    time(&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M",localtime(&timep) );
    return tmp;
}
void speak(string s){
	int tmp=0;
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		tmp++;
	//	if(s[i]!=' '&&s[i]!=','&&s[i]!='.'&&s[i]!='，'&&s[i]!='。'&&s[i]!='!'&&s[i]!='?'&&s[i]!='！'&&s[i]!='？'&&s[i]!='('&&s[i]!=')'&&s[i]!='（'&&s[i]!='）'&&s[i]!='-')
		if(tmp==2){
			Beep(qdo,150); 
			tmp=0;
		}
		else Sleep(60);
	}
	cout<<"\n";	
}
void out(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(40);
	}
	cout<<"\n";	
}
void quicklyout(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(7);
	}
	cout<<"\n";
} 
void HideCursor(){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);
}
void caid(){
	SetConsoleTitle("ssadcas"); 
	system("mode con cols=40 lines=10"); 
	Sleep(20);
	SetConsoleTitle("dsf"); 
	system("mode con cols=400 lines=50"); 
	Sleep(20);
	SetConsoleTitle("asdcsadsfgtre"); 
	system("mode con cols=60 lines=70"); 
	Sleep(20);
	SetConsoleTitle("sabjsad"); 
	system("mode con cols=30 lines=20"); 
	Sleep(20);
	SetConsoleTitle("mljk"); 
	system("mode con cols=300 lines=90"); 
	Sleep(20);
	SetConsoleTitle("asdfrgtrhfdfgrytrfd"); 
	system("mode con cols=200 lines=70"); 
	Sleep(20);
	SetConsoleTitle("sdfgt"); 
	system("mode con cols=20 lines=5"); 
	Sleep(20);
	SetConsoleTitle("dfsrtytregtrefd"); 
	system("mode con cols=200 lines=60"); 
	Sleep(20);
	SetConsoleTitle("gred"); 
	system("mode con cols=350 lines=20"); 
	Sleep(300);
	int caidan=rand()%2;
	if(caidan==1){
		SetConsoleTitle("temshop"); 
		system("mode con cols=50 lines=10");  
		mciSendString("play music/mus_temshop.mp3 repeat", 0, 0, 0);  
		out("嗨呦嗨，窝式提米~");
		Sleep(300);
		out("提米幺集钱上大鞋！！！");
		Sleep(1500);
		system("cls");
		out("？？？你说大鞋载哪里？？？");
		Sleep(400);
		out("大鞋就是我的小颠！！！");
		Sleep(500);
		out("哈哈哈，提米嫩上大鞋囖~~~");
		Sleep(1500);
		system("cls");
		out("*提米去上大鞋了");
		Sleep(300);
		out("*你也该离开提米的小店了......");
		Sleep(700); 
		mciSendString("stop music/mus_temshop.mp3 ", 0, 0, 0);  
	}
	else{
		SetConsoleTitle("temvillage"); 
		system("mode con cols=50 lines=10");  
		mciSendString("play music/mus_temvillage.mp3 repeat", 0, 0, 0);  
		out("*奇奇怪怪的小镇，\n墙面上写着temvillage");
		Sleep(1500);
		system("cls");
		out("*小镇的门还没有打开\n隔着栅栏，你看到一个笑脸在敲代码");
		Sleep(1500);
		system("cls");
		out("*它似乎很忙\n它似乎不希望被打扰");
		Sleep(1500);
		system("cls");
		out("*也许等到哪天它写好了代码\n你就可以进去看看了");
		Sleep(1500);
		system("cls");
		out("*你离开了temvillage");
		Sleep(700);
		system("cls");
		mciSendString("stop music/mus_temvillage.mp3 ", 0, 0, 0);  
	}
}
int main(){
time(0);
int caidan=rand()%50;
if(caidan==1){
	caid();
}
SetConsoleTitle("垃圾大全2.24"); 
system("mode con cols=400 lines=110");    
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);   
cout<<"加载中";
cout<<".";
Sleep(300);
cout<<".";
Sleep(300);
cout<<".";
Sleep(300);
system("cls");
system("color 8e");
quicklyout("欢迎来到垃圾大全(2.24)~~~\n作者:WJR");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
system("pause");
system("cls");
quicklyout("2.1版本：\n1.加入声音\n2.新增细胞自动机\n3.新增FENSONWIN（用法见垃圾大全主文件夹）\n4.完善对话内容\n\n2.12版本：\n修复W的细胞自动机中的BUG\n\n2.13版本：\n更改对话部分代码\n\n2.2版本：\n1.加入背景音乐\n2.更改对话部分代码\n\n2.21版本：\n1.修改部分BUG\n2.优化画面\n\n2.22版本：\n1.修改部分BUG\n2.优化代码\n\n2.23版本：\n1.升级游戏 逃离系列1：新的希望\n2.完善对话部分\n\n2.24版本：\n1.加入游戏：滑稽传说（phase1）\n2.更改部分语速\n3.压缩大小\n4.还有......彩蛋？？？");
cout<<"\n\n\n\n\n\n";
system("pause");
mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
while(1){
	system("mode con cols=400 lines=110");   
	system("color 9a");
	system("cls");
	system("color 8e");
	quicklyout("欢迎来到垃圾大全(2.24)~~~");
	quicklyout("1.玩计算小游戏  2.计算器  3.看时间  4.关机  5.休眠  6.重启  7.FENSONWIM  8.和作者对话  9.逃离系列游戏  10.音乐  11.闹铃  12.W的细胞自动机  13.滑稽传说(phase1)  0.退出");
	long long a;
	cin>>a;
	if(a==0){
		ShowWindow(hwnd,0); 
		return 0;
	}
	else if(a==1){
		system("cls");
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		mciSendString("play music/mus_core.mp3 repeat", 0, 0, 0);  
		long long i,n,t,a,b,p,m,l,pp,xx,xxx,mii,maa;
  		char a_;
 		p=0;
  		cout<<"算术题 "<<'\n'<<"要玩几局？？？"<<"\n";
  		cin>>xx;
		for(int j=1;j<=xx;j++)
 		{
 		cout<<"第"<<j<<"局:"<<"\n"; 
		for(i=1;i<=10;i++){
     		a=rand()%99+1;
     		b=rand()%99+1;
     		m=rand()%40+1;
     		mii=rand()%6+1;
     		maa=rand()%2+1;
      		if(m==1) 
      		{
        		cout<<a<<"+"<<b<<"=";
        		cin>>n;
        		if(n==a+b){
            		cout<<"good\n";
              		p=p+10;
           		} 
        		else
              		cout<<"Oh no\n";
      		}
      		if(m==2){
        		if(a<b){
              		t=a;
              		a=b;
              		b=t;
       			}
        		cout<<a<<"-"<<b<<"=";
          		cin>>n;
          		if(n==a-b){
              		cout<<"good\n";    
              		p=p+10;
          		}
          		else
              		cout<<"Oh no\n";    
      		}
    		else if(m==3||m>=5){
          		if((a%b==0&&a!=b&&a!=1&&b!=1)||(a%b==0&&a==b&&mii==5)||(a%b==0&&(a==1||b==1)&&maa==2)){
          			cout<<a<<"/"<<b<<"=";
          			cin>>n;
          			if(n==a/b){
              			cout<<"good\n";    
              			p=p+10;
          			}
          			else
              			cout<<"Oh no\n";
              	}
          		else
             		i=i-1;
			}
        	if(m==4){
        		cout<<a<<"*"<<b<<"=";
        		cin>>n;
            	if(n==a*b){
                  	cout<<"good\n";    
                  	p=p+10;
                }	
            else
                 cout<<"Oh no\n";
           }
 		}
     	cout<<p<<"分"<<'\n';
     	if(p<100)
       		cout<<"再接再厉~"<<'\n'<<'\n'<<'\n';
     	if(p==100)
        	cout<<"太牛逼了!!!"<<'\n'<<'\n'<<'\n';
		}
		cout<<"结束了"<<"\n"<<"要再玩一局吗???"<<"\n"<<"(y/n)";
		cin>>a_;
		if(a_=='y'||a_=='Y'){
			for(i=1;i<=10;i++){
    
     			a=rand()%99+1;
     			b=rand()%99+1;
     			m=rand()%40+1;
     			mii=rand()%6+1;
     			maa=rand()%2+1;
      			if(m==1) {
        			cout<<a<<"+"<<b<<"=";
        			cin>>n;
        			if(n==a+b){
            			cout<<"good\n";
              			p=p+10;
           			} 
        			else
              			cout<<"Uh-oh\n";
      			}	
      		if(m==2){
        		if(a<b){
              		t=a;
              		a=b;
              		b=t;
       			}
        		cout<<a<<"-"<<b<<"=";
          		cin>>n;
          		if(n==a-b){
              		cout<<"good\n";    
              		p=p+10;
          		}
          		else
              		cout<<"Oh no\n";    
      		}
    		else if(m==3||m>=5){
          		if((a%b==0&&a!=b&&a!=1&&b!=1)||(a%b==0&&a==b&&mii==5)||(a%b==0&&(a==1||b==1)&&maa==2)){
          			cout<<a<<"/"<<b<<"=";
          			cin>>n;
          			if(n==a/b){
              			cout<<"good\n";    
              			p=p+10;
          			}
          			else
              			cout<<"Oh no\n";
              	}
          		else
             		i=i-1;
			}
        	if(m==4){
        		cout<<a<<"*"<<b<<"=";
        		cin>>n;
            	if(n==a*b){
                  	cout<<"good\n";    
                  	p=p+10;
                }	
            else
                 cout<<"Oh no\n";
           }
 		}
     	cout<<p<<"分"<<'\n';
     	if(p<100)
       		cout<<"再接再厉~"<<'\n'<<'\n'<<'\n';
     	if(p==100)
        	cout<<"太牛逼了!!!金币+10"<<'\n'<<'\n'<<'\n';
		}
		else
			cout<<"好吧，欢迎下次再来玩！！！";
		mciSendString("stop music/mus_core.mp3", 0, 0, 0);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
		Sleep(1000);
	}
	else if(a==2){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("输入z退出计算器哦~");
		Sleep(1000);
	//	WinExec("飞速 计算器2.091.exe",SW_HIDE);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "飞速 计算器2.091.exe";                          
		ShExecInfo.lpParameters  =  "";              
		ShExecInfo.lpDirectory  =  NULL;  
		ShExecInfo.nShow  =  SW_SHOW;  
		ShExecInfo.hInstApp  =  NULL;              
		ShellExecuteEx(&ShExecInfo);  
		WaitForSingleObject(ShExecInfo.hProcess,INFINITE);   
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==3){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
     	out("现在是"+getTime());
     	Sleep(2000);
     	mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==4){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("shutdown -s -t 20");
		cut="要取消关机吗?";
		out(cut);
		cut="按A取消关机 (其他键无效)";
		out(cut);
		char aa;
		cin>>aa; 
		if(aa=='A'||aa=='a'){ 
			system("shutdown -a");
			Sleep(1000) ;
			mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
		}
	}
	else if(a==5){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
       	HANDLE hToken;
		TOKEN_PRIVILEGES tkp;    
		if(!OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken))return 0; 
		LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid);
		tkp.PrivilegeCount=1;
		tkp.Privileges[0].Attributes=SE_PRIVILEGE_ENABLED;
		AdjustTokenPrivileges(hToken,FALSE,&tkp,0,NULL,0);
		SetSystemPowerState(false,false); 		
	}
	else if(a==6){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("shutdown -r 20"); 
	}	
	/*else if(a==114514){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		mciSendString("play music/mus_dogsong.mp3 repeat", 0, 0, 0);  
		int yyy; 
		out("太臭了！！！所以。。。请选择：1.快点弄炸！！！ 2.慢点吧...  3.不要弄炸了  （友情提示）请不要按别的建，不然会被程序员（我）植入病毒！！！") ;
		cin>>yyy;
		if(yyy==1){
			out("好的！");
    		while(true){
        		HANDLE hToken;
 				TOKEN_PRIVILEGES tkp;    
 				if(!OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken))return 0; 
 				LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid);
				tkp.PrivilegeCount=1;
 				tkp.Privileges[0].Attributes=SE_PRIVILEGE_ENABLED;
 				AdjustTokenPrivileges(hToken,FALSE,&tkp,0,NULL,0);
 				SetSystemPowerState(false,false);
  			}
		}
		else if(yyy==2){
			out("越想慢，越会快！！！");
			while(true){
        		HANDLE hToken;
 				TOKEN_PRIVILEGES tkp;    
 				if(!OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken))return 0; 
 				LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid);
				tkp.PrivilegeCount=1;
 				tkp.Privileges[0].Attributes=SE_PRIVILEGE_ENABLED;
 				AdjustTokenPrivileges(hToken,FALSE,&tkp,0,NULL,0);
 				SetSystemPowerState(false,false);
  			}
		}
		else if(yyy==3){
			out("决定了的事就不能改了！！！");
			while(true){
        		HANDLE hToken;
 				TOKEN_PRIVILEGES tkp;    
 				if(!OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken))return 0; 
 				LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid);
				tkp.PrivilegeCount=1;
 				tkp.Privileges[0].Attributes=SE_PRIVILEGE_ENABLED;
 				AdjustTokenPrivileges(hToken,FALSE,&tkp,0,NULL,0);
 				SetSystemPowerState(false,false);
  			}
		} 
		else{
			out("好家伙，你逃过了一劫\n");
			Sleep(1000); 
		} 
		mciSendString("stop music/mus_dogsong.mp3", 0, 0, 0);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==7){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("叉掉退出FENSONWIN哦~");
		Sleep(1000);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "fsw.exe";                          
		ShExecInfo.lpParameters  =  "";              
		ShExecInfo.lpDirectory  =  NULL;  
		ShExecInfo.nShow  =  SW_SHOW;  
		ShExecInfo.hInstApp  =  NULL;              
		ShellExecuteEx(&ShExecInfo);  
		WaitForSingleObject(ShExecInfo.hProcess,INFINITE);   
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}*/
	else if(a==8){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0); 
		mciSendString("play music/mus_date_fight.mp3 repeat", 0, 0, 0); 
		system("cls");
		quicklyout("----------------\n你想说什么?\n1.垃圾大全太垃圾了\n2.作者是谁\n3.介绍垃圾大全\n4.离开\n");
		int ll;
		cin>>ll;
		system("cls");
		quicklyout("----------------\n");
		mciSendString("stop music/mus_date_fight.mp3", 0, 0, 0); 
		if(ll==1){
			speak("我会改进的\n");
		} 
		else if(ll==2){
			speak("作者就是我啊（滑稽）\n");
		}
		else if(ll==3){
			speak("垃圾大全我从2019开始编，进行过好几次大改，才变成现在这个样子。源码加一起3000吧大概，想要可以去https://github.com/NyehHehHeh/FS-ALL-2.23-cpp下载~\n");
		}
		else if(ll==4){
			speak("再见！");
		}
		else{
			speak("？？？\n");
		}
		Sleep(1000);
		
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0); 
	}
	else if(a==9){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("按x退出游戏哦~");
		Sleep(1000);
		//WinExec("逃离系列1：新的希望.exe",SW_SHOWNORMAL);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "逃离系列1：新的希望.exe";                          
		ShExecInfo.lpParameters  =  "";              
		ShExecInfo.lpDirectory  =  NULL;  
		ShExecInfo.nShow  =  SW_SHOW;  
		ShExecInfo.hInstApp  =  NULL;              
		ShellExecuteEx(&ShExecInfo);  
		WaitForSingleObject(ShExecInfo.hProcess,INFINITE);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	} 
	else if(a==10){
		int ban=500,pai=200,dw=128,bs;
		cout<<"1.吵人音乐 2.天空之城\n"; 
		int aaa;
		cin>>aaa; 
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		if(aaa==1){
			cout<<"请静心欣赏";
			Sleep(500);
			for(int i=300;i<=1000;i+=25)
				Beep(i,ban);
			for(int i=0;i<10;i++){
				Beep(1000,500);
				Beep(1010,500);
				Beep(1020,500);
				Beep(1500,500);
				Beep(1020,500);
				Beep(1010,500);
				Beep(3000,1000);
			}
			for(int i=1000;i>=300;i-=25)
				Beep(i,ban);
			out("完毕~");
		}
		else if(aaa==2){
			cout<<"请静心欣赏";
			Sleep(500);
			int pai=400,ban=200;
			int ting=128;
			Sleep(1000); 
			Beep(la,ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai+ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting); 
			Beep(si,3*pai);
			Sleep(ting);
			Beep(mi,ban);
			Beep(mi,ban); 
			Beep(la,ban+pai);
			Beep(so,ban);
			Sleep(ting);
			Beep(la,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(so,2*pai);
			Sleep(ting);
			Sleep(pai);
			Beep(mi,ban);
			Sleep(ting/2);
			Beep(mi,ban);
			Sleep(ting/2);
			Beep(fa,pai+ban);
			Beep(mi,ban);
			Sleep(ting);
			Beep(fa,ban);
			Beep(do1,ban+pai);
			Sleep(ting);
			Beep(mi,2*pai);
			Sleep(ting);
			Sleep(ban);
			Beep(do1,ban);
			Sleep(ting/2);
			Beep(do1,ban);
			Sleep(ting/2);
			Beep(do1,ban);
			Sleep(ting/2);
			Beep(si,ban+pai);
			Beep(sfa,ban);
			Sleep(ting);
			Beep(sfa,pai);
			Beep(si,pai);
			Sleep(ting);
			Beep(si,2*pai);
			Sleep(ting);
			Sleep(pai);
			Beep(la,ban);
			Beep(si,ban);
			Sleep(ting); 
			Beep(do1,pai+ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(si,2*pai);
			Sleep(ting);
			Sleep(pai);
			Beep(mi,ban);
			Sleep(20);
			Beep(mi,ban);
			Sleep(ting);
			Beep(la,pai+ban);
			Beep(so,ban);
			Sleep(ting);
			Beep(la,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(so,3*pai);
			Sleep(ting+ban);
			Beep(mi,ban);
			Sleep(ting/2);
			Beep(fa,pai);
			Sleep(ting);
			Beep(do1,ban);
			Beep(si,ban);
			Sleep(20);
			Beep(si,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(re1,ban);
			Sleep(20);
			Beep(re1,ban);
			Sleep(20);
			Beep(mi1,ban);
			Sleep(ting/2);
			Beep(do1,pai);
			Sleep(ting+pai);
			Beep(do1,pai);
			Beep(si,ban);
			Sleep(ting);
			Beep(la,ban);
			Sleep(20);
			Beep(la,ban);
			Sleep(ting);
			Beep(si,pai);
			Sleep(ting);
			Beep(sso,pai);
			Sleep(ting);
			Beep(sso,2*pai);
			Sleep(ting+pai);
			Beep(do1,ban);
			Beep(re1,ban);
			Sleep(ting);
			Beep(mi1,pai+ban);
			Beep(re1,ban);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(fa1,pai);
			Sleep(ting);
			Beep(re1,2*pai);
			Sleep(pai+ting);
			Beep(so,ban);
			Sleep(20);
			Beep(so,ban);
			Sleep(ting);
			Beep(do1,ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(mi1,2*pai);
			Sleep(ting+2*pai);
			Beep(la,ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(si,pai);
			Sleep(ting);
			Beep(re1,ban);
			Sleep(20);
			Beep(re1,ban);
			Sleep(ting);
			Beep(do1,pai+ban);
			Beep(so,ban);
			Sleep(20);
			Beep(so,pai);
			Sleep(pai+ting);
			Beep(fa1,pai);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(re1,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(mi1,4*pai);
			Beep(mi1,pai*2);
			Sleep(pai+ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(la1,2*pai);
			Sleep(ting);
			Beep(so1,pai);
			Sleep(ting);
			Beep(so1,pai);
			Sleep(ting);
			Beep(mi1,ban);
			Sleep(ting/2);
			Beep(re1,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting+ban);
			Beep(do1,ban);
			Sleep(ting);
			Beep(re1,pai);
			Sleep(ting);
			Beep(do1,ban);
			Beep(re1,ban);
			Sleep(20);
			Beep(re1,ban);
			Sleep(ting);
			Beep(so1,pai);
			Sleep(ting); 
			Beep(mi1,2*pai);
			Sleep(ting+pai);
			Beep(mi,pai);
			Sleep(ting);
			Beep(la1,2*pai);
			Sleep(ting);
			Beep(so1,2*pai);
			Sleep(ting);
			Beep(mi1,ban);
			Beep(re1,ban);
			Sleep(ting);
			Beep(do1,2*pai);
			Sleep(ting+ban);
			Beep(do1,ban);
			Sleep(ting);
			Beep(re1,pai);
			Sleep(ting);
			Beep(do1,ban);
			Beep(re1,ban);
			Sleep(20);
			Beep(re1,ban);
			Sleep(ting);
			Beep(si,pai);
			Sleep(ting);
			Beep(la,2*pai);
			Sleep(ting);
			Beep(la,ban);
			Beep(si,ban);
			Beep(do1,pai+ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(si,3*pai);
			Sleep(ting);
			Beep(mi,ban);
			Beep(mi,ban);
			Beep(la,ban+pai);
			Beep(so,ban);
			Sleep(ting);
			Beep(la,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(so,2*pai);
			Sleep(ting);
			Sleep(pai);
			Beep(mi,ban);
			Sleep(ting/2);
			Beep(mi,ban);
			Sleep(ting/2);
			Beep(fa,pai+ban);
			Beep(mi,ban);
			Sleep(ting);
			Beep(fa,ban);
			Beep(do1,ban+pai);
			Sleep(ting);
			Beep(mi,2*pai);
			Sleep(ting);
			Sleep(ban);
			Beep(do1,ban);
			Sleep(ting/2);
			Beep(do1,ban);
			Sleep(ting/2);
			Beep(do1,ban);
			Sleep(ting/2);
			Beep(si,ban+pai);
			Beep(sfa,ban);
			Sleep(ting);
			Beep(sfa,pai);
			Beep(si,pai);
			Sleep(ting);
			Beep(si,2*pai);
			Sleep(ting);
			Sleep(pai);
			Beep(la,ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai+ban);
			Beep(si,ban);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);
			Beep(mi1,pai);
			Sleep(ting);
			Beep(si,2*pai);
			Sleep(ting);
			Sleep(pai);
			Beep(mi,ban);
			Sleep(20);
			Beep(mi,ban);
			Sleep(ting);
			Beep(la,pai+ban);
			Beep(so,ban);
			Sleep(ting);
			Beep(la,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting); 
			Beep(so,3*pai);
			Sleep(ting+ban);
			Beep(mi,ban);
			Sleep(ting/2); 
			Beep(fa,pai);
			Sleep(ting);
			Beep(do1,ban);
			Beep(si,ban);
			Sleep(20);
			Beep(si,pai);
			Sleep(ting);
			Beep(do1,pai);
			Sleep(ting);	 
			Beep(re1,ban);
			Sleep(20);
			Beep(re1,ban);
			Sleep(20);
			Beep(mi1,ban);
			Sleep(ting/2);
			Beep(do1,pai);
			Sleep(1000);
			out("完毕~");
		}
		else{
			out("？？？啥？？？");
			//Sleep(1000); 
		}
		Sleep(1000);
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==11){
		out("多少分钟后提醒您???");
		float time;
		cin>>time;
		out("以什么方式提醒你???\n1.闹铃    2.关机    0.取消");
		short fs;
		cin>>fs;
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		if(fs==1){
			Sleep(time*1000*60+2000);
			for(int i=0;i<2;i++){
				Beep(1000,500);
				Beep(1010,500);
				Beep(1020,500);
				Beep(1500,500);
				Beep(1020,500);
				Beep(1010,500);
				Beep(3000,1000);
			}
			MessageBox(NULL,"时间到","~~~~~~~~~~~~~~~~~~",MB_ICONEXCLAMATION|MB_OK);
		}
		else if(fs==2){
			Sleep(time*1000*60);
			system("shutdown -s -t 0");
		}
		else if(fs==0);
		else cout<<"输入错误!!!\a"; 
		Sleep(500);
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==12){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("叉掉退出W的细胞自动机哦~");
		Sleep(1000);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "W的细胞自动机.exe";                          
		ShExecInfo.lpParameters  =  "";              
		ShExecInfo.lpDirectory  =  NULL;  
		ShExecInfo.nShow  =  SW_SHOW;  
		ShExecInfo.hInstApp  =  NULL;              
		ShellExecuteEx(&ShExecInfo);  
		WaitForSingleObject(ShExecInfo.hProcess,INFINITE);   
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	} 
	else if(a==13){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("叉掉退出滑稽传说哦~");
		Sleep(1000);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "滑稽传说-open.exe";                          
		ShExecInfo.lpParameters  =  "";              
		ShExecInfo.lpDirectory  =  NULL;  
		ShExecInfo.nShow  =  SW_SHOW;  
		ShExecInfo.hInstApp  =  NULL;              
		ShellExecuteEx(&ShExecInfo);  
		WaitForSingleObject(ShExecInfo.hProcess,INFINITE);   
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0); 
	} 
	else{
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		mciSendString("play music/mus_f_alarm.mp3 repeat", 0, 0, 0);  
		cout<<"输入错误!!!"; 
		Sleep(2000); 
		mciSendString("stop music/mus_f_alarm.mp3", 0, 0, 0);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	system("cls");
}
ShowWindow(hwnd,0); 
return 0;
}





