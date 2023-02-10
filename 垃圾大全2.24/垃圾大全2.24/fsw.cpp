#include<bits/stdc++.h>
#include<iostream>
#include <fstream>
#include <string>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<cstdio>
#define get(VK_NONAME) (GetAsyncKeyState(VK_NONAME))
#define clean (system("cls"))
#define sl(x) (Sleep(x))
using namespace std;
FILE *pFile;
string ta;
char a[1000][100];
char b[1000][100];
char c[1000][100];
int nc=1;
void inputerror(string tmp){
	cout<<tmp<<" is not an available instruction\n";
}
void error1(){//Must have extension name
	cout<<"Must have extension name\n";
}
void error2(string tmp){//The file extension could not be created
	cout<<"The file extension "<<tmp<<" could not be created\n";
}
void error3(){
	cout<<"The file could not be found\n";
}
void error4(){
	cout<<"File deletion failed\n";
}
void success1(){
	cout<<"File created successfully\n";
}
void success2(){
	cout<<"File erased successfully\n";
}
void success3(){
	cout<<"File writed successfully\n";
}
void success4(){
	cout<<"Letters in the file erased successfully\n";
}
int change(string s){
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
} 
bool Find(char t[]){
	fstream _file;
	_file.open(t, ios::in);
	if(!_file)return 1;
	return 0;
}
string getsuffix(char t[]){
	string tmp="";
	for(int i=0;i<strlen(t);i++){
		if(t[i]=='.'){
			for(int j=i;j<strlen(t);j++){//get the file extension
				tmp=tmp+t[j];
			}
		}
	}
	return tmp;
}
void createfile(char t[]){
	string tmp=getsuffix(t);
	if(tmp!=".txt"&&tmp!=".doc"&&tmp!=".docx"){
		if(tmp==""){
			error1();
		}
		else{
			//error2(tmp);
			error3();
		}
	}
	else{
		pFile=fopen(t,"w");
		fclose(pFile);
		success1();
	}
}
void openfile(char t[]){
	if(Find(t))error3();
	else{
		cout<<"These are the letters in "<<t<<" :\n";
		FILE *fp;
   		char c;
   		//Open the file and set to pointer fp
   		fp = fopen(t,"r");
   		//Read file character by character and 
   		//put to the standard ouput
   		while(1) {
    		c=fgetc(fp);
     		if(feof(fp)){
    			break ;
      		}
      		printf("%c", c);
   		}
   		//Close the file pointer
   		cout<<"\n";
   		fclose(fp);
   		cout<<"End of reading\n";
	}
}
void writefile(char t[]){
	if(Find(t))error3();
	else{
		int n=nc;
		string b[100];
		cout<<"Please enter the character you want to write. \nMultiple lines can also.\nPlease end with '#' \nPlease write:\n";
		FILE *fp;
   		fp = fopen(t,"a");//get file
		while(1){ 
			nc++;
			getline(cin,b[nc]);
			if(b[nc]=="#")break;
			for(int i=0;i<b[nc].size();i++){
				c[nc][i]=b[nc][i];
			}
		}
		for(int i=n+1;i<nc;i++){//put letters
			fputs(c[i],fp);
			fputs("\n",fp);
		}
		fclose(fp);
		success3();
	}
}
void erase(char t[]){
	if(Find(t))error3();
	else{
		if(!remove(t))success2();
		else error4();
	}
}
void eraseletter(char t[]){
	if(Find(t))error3();
	else{
		pFile=fopen(t,"w");
		fclose(pFile);
		success4();
	}
}
void shutdown(char t[]){
	char cmds[25]="shutdown -s -t ";
	int n=strlen(cmds);
	for(int i=0;i<strlen(t);i++){
		cmds[n]=t[i];
		n++;
	}
    system(cmds);
}
void Check(char t[]){
	FILE * pFile;
    long long size;
    pFile = fopen (t,"rb");
    if (pFile==NULL){
    	error3();
    	//fclose(pFile);
	}
    else{
    	//file type
    	string tmp=getsuffix(t);
    	cout<<"text file : "<<tmp<<"\n";
    	//file size
        fseek (pFile, 0, SEEK_END); 
        size=ftell (pFile);
        fclose (pFile);
        cout<<"Size : "<<(size+1023)/1024<<" KB\n";
    }
}
/*void Change(char t[]){
	cout<<"Please enter the changed file name:\n";
	string t;
	getline(cin,t);
	string path = m_strPath + '\\' + filename;
    newname = m_strPath + '\\' + t;
    if (-1 == rename(path.c_str(), newname.c_str())){
        return false;
    }
    return true;
}*/
int main(){
	SetConsoleTitle("FENSONWIN"); 
	system("mode con cols=70 lines=15");  
	mciSendString("play music/mus_fallendown2.mp3 repeat", 0, 0, 0);  
	cout<<"Welcome to the FENSONWIN instruction operating system!\n";
	int time=0;
	while(1){
		time++;
		ta="";
		cout<<"FENSONWIN>";
		getline(cin,ta);
		for(int i=0;i<ta.size();i++)a[time][i]=ta[i];
		string tmp="";
		int f=-1,tf=1;
		for(int i=0;i<strlen(a[time]);i++){
			if(i>=1&&a[time][i-1]==' '&&f==-1)f=0;
			if(a[time][i]==' ')tf=0;
			if(tf)tmp=tmp+a[time][i];
			else{
				b[time][f]=a[time][i];
				f++;
			}
		}
		if(tmp=="create")createfile(b[time]);
		else if(tmp=="open")openfile(b[time]);
		else if(tmp=="write")writefile(b[time]);
		else if(tmp=="erase")erase(b[time]);
		else if(tmp=="eraseletter")eraseletter(b[time]);
		else if(tmp=="shutdown")shutdown(b[time]);
		else if(tmp=="check")Check(b[time]);
		//else if(tmp=="changen")Change(b[time]);
		else if(tmp=="changel");
		else if(tmp=="shutdown-a")system("shutdown -a");
		else if(tmp=="")continue;
		else inputerror(tmp);
	}
	return 0;
}


