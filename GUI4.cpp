#include<windows.h>
using namespace std;
//how to save any file example like when we click on a save button it saves the file 
//Code IN C++
case WM_COMMAND:{
   switch(wParam){
     case 1:
PSTR pMem;
cTextLen=GetWindowTextLength(hTextBox);
pMem=(PSTR)VirtualAlloc((LPVOID)NULL,(DWORD)(cTextLen +1),MEM_COMMIT,PAGE_READWRITE);

 GetWindowText(hTextBox,pMem,cTextLen +1);
      ofstream(File);
        File<<pMem;
        if(!File)  {
         File.open("File.cpp",fstream::app);																										   
         File<<pMem;							
         File.close();
          }
          MessageBox(hWnd,"FileSaved Successfully","EDITOR",MB_OK);
VirtualFree(pMem,0,MEM_RELEASE);
 
break;
 }
}
//This Is How To Just Put It In An Command Case 
