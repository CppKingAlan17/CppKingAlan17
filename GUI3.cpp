#include<windows.h>
using namespace std;
HWND hTextBox;
LRESULT CALLBACK WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	//This is the Window Procedure.
	//HWND is a HANDLE to a window.
	//MSG is the message recived by the window.
	//Example: when the user click a button, etc...
	//WPARAM and LPARAM are special parameters.
	switch(Msg)
	{
		//You can use if(Msg == ...)
		//The message
    case WM_CREATE://Create Command
      hTextBox=CreateWindow(TEXT(“EDIT”),TEXT(“EDIT”),WS_VISIBLE|WS_CHILD|WS_SizeBox|ES_MULTILINE|ES_AUTOHSCROLL,10,10,50,50,hWnd,NULL,NULL,NULL); //A TextBox
      //Ws_SizeBox Is For The User Can Resize Or Size It As He Likes ES_MULTILINE FOR HAVING MULTIPLE LINES ON EXAMPLE 
      //a
      //b
      //AUTOHSCROLL
      break;
		case WM_CLOSE:
			//If the message is WM_CLOSE,
			DestroyWindow(hWnd);//Close the window.
			break;
		
		case WM_DESTROY:
			PostQuitMessage(0x00);
			break;
			
		default:
			return DefWindowProc(hWnd, Msg, wParam, lParam); //Define the window procedure.
	}
	return 0;
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	//the (int main) for the WINAPI programs.
	WNDCLASSEXA wc;
	HWND hWnd;
	MSG Msg;
	
	wc.cbClsExtra = 0;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbWndExtra = 0;
	//wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1); //The background color of the window, you can modify it.
	wc.hbrBackground = CreateSolidBrush(RGB(/*RGB: Red, Green, Blue.*/ 102, 102, 102));
	wc.hCursor = LoadCursor(NULL, IDC_ARROW); //The cursor
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION); //The icon
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = hInstance;
	wc.lpfnWndProc = WndProc; //The window procedure!
	wc.lpszClassName = className;
	wc.lpszMenuName = "MENU!";
	wc.style = NULL; //The window style.
	
	if(!RegisterClassEx(&wc))
	{
		MessageBox(NULL, "No window.", "Uh oh...", MB_ICONERROR | MB_OK);
		return -1;
	}
	
	//Create the window
	hWnd = CreateWindowEx(WS_EX_CLIENTEDGE, className, "APP1" /*The title for the window*/, WS_OVERLAPPEDWINDOW /*The window style*/,
			CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
			
	if(hWnd == NULL)
	{
		MessageBox(NULL, "No window.", "Uh oh...", MB_ICONERROR | MB_OK);
		return -1; //Cancel window creation.
	}
	
	ShowWindow(hWnd, nShowCmd);
	UpdateWindow(hWnd);
	
	while(GetMessage(&Msg, hWnd, 0, 0) > 0) //Get the message.
	{
		TranslateMessage(&Msg); //Translate it
		DispatchMessage(&Msg);
	}
	
	return Msg.wParam;
	
}
