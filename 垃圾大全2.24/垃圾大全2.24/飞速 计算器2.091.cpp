/*
�����ļ��ϴ󣬱��������ʱ����ܽϳ��������ĵȴ��� 
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
#include<iostream>
#include<cstring>
#include<windows.h>
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
#define clean (system("cls"))
#define get(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std; 
string a,tb;
double c[1005];
int l;
bool wron;
bool check(string b){
	for(int i=0;i<b.size();i++){
		if(b[i]=='+'||b[i]=='-'||b[i]=='*'||b[i]=='/'||b[i]=='^'){
			return 1;
		}
	}
	return 0;
}
int findc(string b){
	for(int i=0;i<b.size();i++){
		if(b[i]=='^'){
			return i;
		}
    }
    return -1;
}
int find_(string b){
	for(int i=0;i<b.size();i++){
		if(b[i]=='+'||b[i]=='-'){
			return i;
		}
    }
    return 0;
}
int findx(string b){
	for(int i=0;i<b.size();i++){
		if(b[i]=='*'||b[i]=='/'){
			return i;
		}
	}
	return -1;
}
double change(string s){
	int l=0;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='.'){
			l=s.size()-1-i;
		}
	}
	int f=1,idx=0;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!='.'){
			idx+=(s[i]-'0')*f;
			f*=10;
		}
	}
	if(l==0)return idx;
	int t=10;
	for(int i=1;i<l;i++)t*=10;
	return idx*1.0/t;
} 
string change2(int tx){
	int b[105],l=0,x=tx;
	while(x!=0){
		l++;
		b[l]=x%10;
		x/=10;
	}
	string out="";
	for(int i=l;i>=1;i--)out=out+char(b[i]+'0');
	return out;
}
bool check2(string t){
	for(int i=0;i<t.size();i++){
		if(!((t[i]>='0'&&t[i]<='9')||t[i]=='+'||t[i]=='-'||t[i]=='*'||t[i]=='/'||t[i]=='.'||t[i]=='^'||t[i]=='('||t[i]==')'||t[i]=='['||t[i]==']'||t[i]=='{'||t[i]=='}')){
			return 1;
		}
	}
	return 0;
}
void wrong(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//��ɫ
    cout<<"Input error\n�������";
    Sleep(1500);
}
void goin(){          
	cout<<"                                     |---|\n";
	cout<<"                                     |   |\n";
	cout<<"                                     |---|\n";
	cout<<"                                       |\n";
	cout<<"                                       |  |\n";
	cout<<"                                     --|--|\n";
	cout<<"                                    /  |\n";
	cout<<"                                       /----\n";
	cout<<"                                      /    |\n";
	cout<<"                                     /   -------\n"; 
	cout<<"                                    /    |     |\n"; 
	cout<<"                              ---------------------\n"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//��ɫ 
	cout<<"                                ����С���򿪷���\n"; 
	Sleep(1500);
	clean;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
	cout<<"\n\n\n\n\n\n                                   �λ㹤����" ;
	Sleep(1500);
	clean;
	/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ
    cout<<"A person is a team, this program is written by only one person!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    cout<<"һ���˾���һ���Ŷӣ��˳������һ�˱�д��";
    Sleep(2000);
    clean;*/
	for(int i=1;i<=3;i++){ 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//��ɫ 
		cout<<"                                    QUICK Contribution List���ٹ��װ�\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ 
		cout<<"                                    Bao Hanyu������  Wang Ziyao����ҫ\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
		cout<<"                                             loading.";
		Sleep(200);
		clean;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//��ɫ 
		cout<<"                                    QUICK Contribution List���ٹ��װ�\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ
		cout<<"                                    Bao Hanyu������  Wang Ziyao����ҫ\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
		cout<<"                                             loading..";
		Sleep(200);
		clean;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//��ɫ 
		cout<<"                                    QUICK Contribution List���ٹ��װ�\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ
		cout<<"                                    Bao Hanyu������  Wang Ziyao����ҫ\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
		cout<<"                                             loading...";
		Sleep(200);
		clean;
	} 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ
    cout<<"Welcome to the quick calculator!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    cout<<"��ӭʹ�÷��ټ�������";
    Sleep(1500);
    clean;
} 
void rule(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    cout<<"!";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//��ɫ
    cout<<"You can only enter four operations, powers and parentheses";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    cout<<"!\n!";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//��ɫ
    cout<<"ֻ�������������㣬�˷�������";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    cout<<"!\n";
    Sleep(3000);
}
double goo(string b){
	bool con=0;
	while(check(b)){
		int u;
		u=findc(b);
		if(u==-1)u=findx(b);
		if(u==-1)u=find_(b);
		int j1,j2;
		for(j1=u-1;j1>=0;j1--){
			if(b[j1]=='+'||b[j1]=='-'||b[j1]=='*'||b[j1]=='/'||b[j1]=='^'){
				j1++;
				break;
			}
		}
		if(j1==-1)j1=0;
		for(j2=u+1;j2<b.size();j2++){
			if(b[j2]=='+'||b[j2]=='-'||b[j2]=='*'||b[j2]=='/'||b[j2]=='^'){
				j2--;
				break;
			}
		}
		if(j2==b.size())j2--;
		string ta=b.substr(j1,u-j1),tb=b.substr(u+1,j2-u);
		if(ta==""||tb==""){
			wron=1;
			return 0x3f3f3f3f;
		}
		double t;
		double t1=c[int(change(ta))],t2=c[int(change(tb))];
		if(b[u]=='^'){
			double tmp=t1;
			int cs=t2;
			if(cs!=t2){
				con=1;
				break;
			}
			for(int i=1;i<cs;i++){
				tmp*=t1;
			}
			t=tmp;
		}
		if(b[u]=='+')t=t1+t2;
		if(b[u]=='-')t=t1-t2;
		if(b[u]=='*')t=t1*t2;
		if(b[u]=='/')t=t1/t2;
		b.erase(j1,j2-j1+1);
		l++;
		c[l]=t;
		b.insert(j1,change2(l));
	}
	if(con){
		wron=1;
		return 0x3f3f3f3f;
	}
	return c[int(change(b))];
}
void HideCursor(){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);
}
int main(){
	system("color 0A");
	HideCursor(); 
	SetConsoleTitle("���ټ����� 2.091"); 
	system("mode con cols=110 lines=20");  
	//goin();
	rule();
	mciSendString("play music/mus_reunited.mp3 repeat", 0, 0, 0);  
    while(1){
    	wron=0;
        clean;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ
    	cout<<"Please enter\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    	cout<<"������\n";
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ 
    	cin>>a;
    	if(a=="z")return 0;
    	if(check2(a)){
    		wrong();
    		continue;
		}
    	tb="";
    	int go=-1;
    	l=0;
    	for(int i=0;i<a.size();i++){
    		if(a[i]>='0'&&a[i]<='9'){
    			if(i>go){
    				l++;
    				int j;
    				for(j=i+1;j<a.size();j++){
    					if(a[j]=='+'||a[j]=='-'||a[j]=='*'||a[j]=='/'||a[j]=='^'||a[j]==')'||a[j]==']'||a[j]=='}'){
    						j--;
    						break;
						}
					}
					if(j==a.size())j--;
					go=j;
					string t=a.substr(i,j-i+1);
					c[l]=change(t);
					tb=tb+change2(l);
				}
			}
			else if(a[i]!='.'){
				tb=tb+a[i];
			}
		}
		//*************do parentheses*************
		string tc="";
		for(int i=0;i<tb.size();i++){
			if(wron)break; 
			if(tb[i]=='('){
				int j;
				for(j=i+1;j<=tb.size();j++){
					if(tb[j]=='('||tb[j]==']'||tb[j]=='['||tb[j]=='{'||tb[j]=='}'){
						wron=1;
						break;
					}
					if(tb[j]==')'){
						j--;
						break;
					}
				}
				if(wron)break;
				if(j>=tb.size()){
					wron=1;
					break;
				}
				string t=tb.substr(i+1,j-(i+1)+1);
				l++;
				c[l]=goo(t);
				tc=tc+change2(l);
				i=j+1;
				if(wron){
					break;
				}
			}
			else if(tb[i]!=')'){
				tc=tc+tb[i];
			}
		}
		if(wron){
			wrong();
			continue;
		}
		tb="";
		for(int i=0;i<tc.size();i++){
			if(wron)break; 
			if(tc[i]=='['){
				int j;
				for(j=i+1;j<=tc.size();j++){
					if(tc[j]=='['||tc[j]=='{'||tc[j]=='}'){
						wron=1;
						break;
					}
					if(tc[j]==']'){
						j--;
						break;
					}
				}
				if(wron)break;
				if(j>=tc.size()){
					wron=1;
					break;
				}
				string t=tc.substr(i+1,j-(i+1)+1);
				l++;
				c[l]=goo(t);
				tb=tb+change2(l);
				i=j+1;
				if(wron){
					break;
				}
			}
			else if(tc[i]!=']'){
				tb=tb+tc[i];
			}
		}
		if(wron){
			wrong();
			continue;
		}
		tc="";
		for(int i=0;i<tb.size();i++){
			if(wron)break; 
			if(tb[i]=='{'){
				int j;
				for(j=i+1;j<=tb.size();j++){
					if(tb[j]=='{'){
						wron=1;
						break;
					}
					if(tb[j]=='}'){
						j--;
						break;
					}
				}
				if(wron)break;
				if(j>=tb.size()){
					wron=1;
					break;
				}
				string t=tb.substr(i+1,j-(i+1)+1);
				l++;
				c[l]=goo(t);
				tc=tc+change2(l);
				i=j+1;
				if(wron){
					break;
				}
			}
			else if(tb[i]!='}'){
				tc=tc+tb[i];
			}
		}
		if(wron){
			wrong();
			continue;
		}
		double ans=goo(tc);
		if(wron){
			wrong();
			continue;
		}
		else cout<<"="<<ans<<"\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);//��ɫ
    	cout<<"Press Enter to retype\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);//��ɫ 
    	cout<<"���س�������¼��\n";
        getchar();
        getchar();
    }
    return 0;
}
