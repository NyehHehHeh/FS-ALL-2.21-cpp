/*
�����ļ��ϴ󣬱��������ʱ����ܽϳ��������ĵȴ��� 
SW_HIDE //��������������������
SW_MAXIMIZE //�������
SW_MINIMIZE //��С������
SW_RESTORE //����󻯻���С���Ĵ��ڻָ�����
SW_SHOW //�Ե�ǰλ�úʹ�С��ʾ������
SW_SHOWMAXIMIZED //����ڲ����������
SW_SHOWMINIMIZED //����ڲ�����С������
SW_SHOWMINNOACTIVE //��С�����У���������
SW_SHOWNOACTIVATE //����һ�εĴ��ڴ�С���У���������
SW_SHOWNORMAL //��ͨ��ʽ��һ������ʱ������� 
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
	//	if(s[i]!=' '&&s[i]!=','&&s[i]!='.'&&s[i]!='��'&&s[i]!='��'&&s[i]!='!'&&s[i]!='?'&&s[i]!='��'&&s[i]!='��'&&s[i]!='('&&s[i]!=')'&&s[i]!='��'&&s[i]!='��'&&s[i]!='-')
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
		out("�����ˣ���ʽ����~");
		Sleep(300);
		out("�����ۼ�Ǯ�ϴ�Ь������");
		Sleep(1500);
		system("cls");
		out("��������˵��Ь���������");
		Sleep(400);
		out("��Ь�����ҵ�С�ߣ�����");
		Sleep(500);
		out("���������������ϴ�Ь��~~~");
		Sleep(1500);
		system("cls");
		out("*����ȥ�ϴ�Ь��");
		Sleep(300);
		out("*��Ҳ���뿪���׵�С����......");
		Sleep(700); 
		mciSendString("stop music/mus_temshop.mp3 ", 0, 0, 0);  
	}
	else{
		SetConsoleTitle("temvillage"); 
		system("mode con cols=50 lines=10");  
		mciSendString("play music/mus_temvillage.mp3 repeat", 0, 0, 0);  
		out("*����ֵֹ�С��\nǽ����д��temvillage");
		Sleep(1500);
		system("cls");
		out("*С����Ż�û�д�\n����դ�����㿴��һ��Ц�����ô���");
		Sleep(1500);
		system("cls");
		out("*���ƺ���æ\n���ƺ���ϣ��������");
		Sleep(1500);
		system("cls");
		out("*Ҳ��ȵ�������д���˴���\n��Ϳ��Խ�ȥ������");
		Sleep(1500);
		system("cls");
		out("*���뿪��temvillage");
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
SetConsoleTitle("������ȫ2.24"); 
system("mode con cols=400 lines=110");    
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);   
cout<<"������";
cout<<".";
Sleep(300);
cout<<".";
Sleep(300);
cout<<".";
Sleep(300);
system("cls");
system("color 8e");
quicklyout("��ӭ����������ȫ(2.24)~~~\n����:WJR");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
system("pause");
system("cls");
quicklyout("2.1�汾��\n1.��������\n2.����ϸ���Զ���\n3.����FENSONWIN���÷���������ȫ���ļ��У�\n4.���ƶԻ�����\n\n2.12�汾��\n�޸�W��ϸ���Զ����е�BUG\n\n2.13�汾��\n���ĶԻ����ִ���\n\n2.2�汾��\n1.���뱳������\n2.���ĶԻ����ִ���\n\n2.21�汾��\n1.�޸Ĳ���BUG\n2.�Ż�����\n\n2.22�汾��\n1.�޸Ĳ���BUG\n2.�Ż�����\n\n2.23�汾��\n1.������Ϸ ����ϵ��1���µ�ϣ��\n2.���ƶԻ�����\n\n2.24�汾��\n1.������Ϸ��������˵��phase1��\n2.���Ĳ�������\n3.ѹ����С\n4.����......�ʵ�������");
cout<<"\n\n\n\n\n\n";
system("pause");
mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
while(1){
	system("mode con cols=400 lines=110");   
	system("color 9a");
	system("cls");
	system("color 8e");
	quicklyout("��ӭ����������ȫ(2.24)~~~");
	quicklyout("1.�����С��Ϸ  2.������  3.��ʱ��  4.�ػ�  5.����  6.����  7.FENSONWIM  8.�����߶Ի�  9.����ϵ����Ϸ  10.����  11.����  12.W��ϸ���Զ���  13.������˵(phase1)  0.�˳�");
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
  		cout<<"������ "<<'\n'<<"Ҫ�漸�֣�����"<<"\n";
  		cin>>xx;
		for(int j=1;j<=xx;j++)
 		{
 		cout<<"��"<<j<<"��:"<<"\n"; 
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
     	cout<<p<<"��"<<'\n';
     	if(p<100)
       		cout<<"�ٽ�����~"<<'\n'<<'\n'<<'\n';
     	if(p==100)
        	cout<<"̫ţ����!!!"<<'\n'<<'\n'<<'\n';
		}
		cout<<"������"<<"\n"<<"Ҫ����һ����???"<<"\n"<<"(y/n)";
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
     	cout<<p<<"��"<<'\n';
     	if(p<100)
       		cout<<"�ٽ�����~"<<'\n'<<'\n'<<'\n';
     	if(p==100)
        	cout<<"̫ţ����!!!���+10"<<'\n'<<'\n'<<'\n';
		}
		else
			cout<<"�ðɣ���ӭ�´������棡����";
		mciSendString("stop music/mus_core.mp3", 0, 0, 0);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
		Sleep(1000);
	}
	else if(a==2){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("����z�˳�������Ŷ~");
		Sleep(1000);
	//	WinExec("���� ������2.091.exe",SW_HIDE);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "���� ������2.091.exe";                          
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
     	out("������"+getTime());
     	Sleep(2000);
     	mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==4){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("shutdown -s -t 20");
		cut="Ҫȡ���ػ���?";
		out(cut);
		cut="��Aȡ���ػ� (��������Ч)";
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
		out("̫���ˣ��������ԡ�������ѡ��1.���Ūը������ 2.�����...  3.��ҪŪը��  ��������ʾ���벻Ҫ����Ľ�����Ȼ�ᱻ����Ա���ң�ֲ�벡��������") ;
		cin>>yyy;
		if(yyy==1){
			out("�õģ�");
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
			out("Խ������Խ��죡����");
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
			out("�����˵��¾Ͳ��ܸ��ˣ�����");
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
			out("�üһ���ӹ���һ��\n");
			Sleep(1000); 
		} 
		mciSendString("stop music/mus_dogsong.mp3", 0, 0, 0);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==7){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("����˳�FENSONWINŶ~");
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
		quicklyout("----------------\n����˵ʲô?\n1.������ȫ̫������\n2.������˭\n3.����������ȫ\n4.�뿪\n");
		int ll;
		cin>>ll;
		system("cls");
		quicklyout("----------------\n");
		mciSendString("stop music/mus_date_fight.mp3", 0, 0, 0); 
		if(ll==1){
			speak("�һ�Ľ���\n");
		} 
		else if(ll==2){
			speak("���߾����Ұ���������\n");
		}
		else if(ll==3){
			speak("������ȫ�Ҵ�2019��ʼ�࣬���й��ü��δ�ģ��ű������������ӡ�Դ���һ��3000�ɴ�ţ���Ҫ����ȥhttps://github.com/NyehHehHeh/FS-ALL-2.23-cpp����~\n");
		}
		else if(ll==4){
			speak("�ټ���");
		}
		else{
			speak("������\n");
		}
		Sleep(1000);
		
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0); 
	}
	else if(a==9){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("��x�˳���ϷŶ~");
		Sleep(1000);
		//WinExec("����ϵ��1���µ�ϣ��.exe",SW_SHOWNORMAL);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "����ϵ��1���µ�ϣ��.exe";                          
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
		cout<<"1.�������� 2.���֮��\n"; 
		int aaa;
		cin>>aaa; 
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		if(aaa==1){
			cout<<"�뾲������";
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
			out("���~");
		}
		else if(aaa==2){
			cout<<"�뾲������";
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
			out("���~");
		}
		else{
			out("������ɶ������");
			//Sleep(1000); 
		}
		Sleep(1000);
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==11){
		out("���ٷ��Ӻ�������???");
		float time;
		cin>>time;
		out("��ʲô��ʽ������???\n1.����    2.�ػ�    0.ȡ��");
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
			MessageBox(NULL,"ʱ�䵽","~~~~~~~~~~~~~~~~~~",MB_ICONEXCLAMATION|MB_OK);
		}
		else if(fs==2){
			Sleep(time*1000*60);
			system("shutdown -s -t 0");
		}
		else if(fs==0);
		else cout<<"�������!!!\a"; 
		Sleep(500);
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	else if(a==12){
		mciSendString("stop music/mus_menu1.mp3", 0, 0, 0);  
		system("cls");
		out("����˳�W��ϸ���Զ���Ŷ~");
		Sleep(1000);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "W��ϸ���Զ���.exe";                          
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
		out("����˳�������˵Ŷ~");
		Sleep(1000);
		SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "������˵-open.exe";                          
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
		cout<<"�������!!!"; 
		Sleep(2000); 
		mciSendString("stop music/mus_f_alarm.mp3", 0, 0, 0);  
		mciSendString("play music/mus_menu1.mp3 repeat", 0, 0, 0);  
	}
	system("cls");
}
ShowWindow(hwnd,0); 
return 0;
}





