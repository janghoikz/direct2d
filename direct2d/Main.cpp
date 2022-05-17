#include <windows.h>

const wchar_t gClassName[]{ L"MyWindowClass" };

LRESULT CALLBACK WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_  HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nShowCmd
)
{
	WNDCLASSEX wc;

	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpszClassName = gClassName;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpfnWndProc = WindowProc;
	wc.cbSize = sizeof(WNDCLASSEX);
	if (!RegisterClassEx(&wc))
	{
		MessageBox(NULL, L"Failed to Register!", L"Error", MB_OK);
		return 0;
	}
}

RECT rc{ 0,0,1024,768 };
AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);
HWND hwnd = CreateWindowEx



LRESULT WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return LRESULT();
}
