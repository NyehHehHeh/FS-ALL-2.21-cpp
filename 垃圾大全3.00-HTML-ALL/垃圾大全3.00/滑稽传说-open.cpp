#define WIN32_LEAN_MEAN
#include<windows.h>
#include<shellapi.h>
#include<tchar.h>
#include<iostream>
int main(){
	/*char buf[1000];
	strcpy(buf,"������˵.html");
//	buf='������˵.html';
	GetCurrentDirectory(1000,buf);
	std::string root=buf;
	std::string path=root+"/web/index.html";
	ShellExecute(NULL,TEXT("open"),TEXT(path.c_str()),NULL,NULL,SW_SHOWNORMAL);*/
	/*ShellExecute(NULL,"open","������˵.html",NULL,NULL,SW_SHOWMAXIMIZED);
	*/
	SetConsoleTitle("������˵-open"); 
	system("mode con cols=50 lines=10"); 
	SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "Happytale.html";                          
		ShExecInfo.lpParameters  =  "";              
		ShExecInfo.lpDirectory  =  NULL;  
		ShExecInfo.nShow  =  SW_SHOW;  
		ShExecInfo.hInstApp  =  NULL;              
		ShellExecuteEx(&ShExecInfo);  
		WaitForSingleObject(ShExecInfo.hProcess,INFINITE);   
	while(1){
		Sleep(1000);
	}
	return 0;
}
//С����:ʹ��shellexecute���������html�ļ���Ӧ�������waitforsingleobject�еĲ�����ʹ���������ڹر��������ҳ����ټ�������(�����Ǵ򿪺�ͼ�������))

