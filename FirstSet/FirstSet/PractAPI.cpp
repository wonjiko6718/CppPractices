#include "PractAPI.h"
#include <iostream>

using namespace std;

int WINAPI WinMain(HINSTANCE hlnstance,HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow) 
{
	
	WNDCLASS wc;
	wc.cbClsExtra = NULL;
	wc.cbWndExtra = NULL;
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = hlnstance;
	wc.lpfnWndProc = WinProc;
	wc.lpszClassName = L"Practsoftware";
	wc.lpszMenuName = NULL;
	wc.style = NULL;
	RegisterClass(&wc);
	
	HWND hWnd = CreateWindow(L"Practsoftware", L"윈도우 제목", WS_OVERLAPPEDWINDOW, 100, 90, 400, 350, NULL, NULL, hlnstance, NULL);

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);

	}
	return msg.wParam;


}