/***************************************************************************
 * File Name: win32_handmade.cpp
 *
 * Description:
 *    Initial file for the Win32 platform layer.
 *
 * Functionality:
 *    - List and briefly describe the primary functions/classes provided by this file.
 * 
 * Dependencies:
 *   - User32.lib for MessageBox (can be solved with this command during build "cl win32_handmade.cpp /link User32.lib /out:win32_handmade.exe")
 *
 * Usage:
 *    - Provide a brief example or description of how to use the functionalities
 *      provided by this file.
 * Author:
 *    - Name: Your Name
 *    - Email: Your Email (optional)
 *
 * Date:
 *    - Created: 2024-06-17
 *    - Last Modified: 2024-06-17
 *
 * Version:
 *    - Version Number: 1.0.0
 *
 * Notes:
 *    - Any additional information or notes that might be helpful for understanding
 *      or maintaining this file.
 *    - Include any TODOs or future improvements.
 *
 ***************************************************************************/

#include <windows.h>

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nShowCmd)
{
	// Use L"" for Unicode builds,(with MessageBoxW) or "" for ANSI builds (with MessageBoxA). Or whatever below
	return MessageBox(NULL, TEXT("Hello, World"), TEXT("Window Title"), MB_YESNOCANCEL| MB_ICONINFORMATION);
}
