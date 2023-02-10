#define WIN32_LEAN_MEAN
#include<windows.h>
#include<shellapi.h>
#include<tchar.h>
#include<iostream>
int main(){
	/*char buf[1000];
	strcpy(buf,"滑稽传说.html");
//	buf='滑稽传说.html';
	GetCurrentDirectory(1000,buf);
	std::string root=buf;
	std::string path=root+"/web/index.html";
	ShellExecute(NULL,TEXT("open"),TEXT(path.c_str()),NULL,NULL,SW_SHOWNORMAL);*/
	/*ShellExecute(NULL,"open","滑稽传说.html",NULL,NULL,SW_SHOWMAXIMIZED);
	*/
	SetConsoleTitle("滑稽传说(phase1)-open"); 
	system("mode con cols=50 lines=10"); 
	SHELLEXECUTEINFO  ShExecInfo  =  {0};  
		ShExecInfo.cbSize  =  sizeof(SHELLEXECUTEINFO);  
		ShExecInfo.fMask  =  SEE_MASK_NOCLOSEPROCESS;  
		ShExecInfo.hwnd  =  NULL;  
		ShExecInfo.lpVerb  =  NULL;  
		ShExecInfo.lpFile  =  "滑稽传说.html";                          
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
//小问题:使用shellexecute用浏览器打开html文件，应如何设置waitforsingleobject中的参数，使得主程序在关闭了浏览器页面后再继续运行(而不是打开后就继续运行))

