//#include <windows.h>
//#include <cstring>
//#include <cstdlib>
//#include <cstdio>   
//#include <tchar.h>
//#include <wchar.h>
//#include "resource.h"
//#include"targetver.h"
//#include "framework.h"
//#include "targetver.h"
//#include <conio.h>
//#include <shlobj.h>
//#include <ks.h>
//#include <string>
//#include<mciapi.h>
//#include<Mmsystem.h>
//#include "Names.h"
//#include "bass.h"
//#include <iostream>
//#define STRANNI 90
//
//#pragma comment(lib, "winmm.lib")
//#pragma comment(lib, "bass")
//#pragma comment(linker,"/manifestdependency:\"type='win32' \
//                        name='Microsoft.Windows.Common-Controls' \
//                        version='6.0.0.0' processorArchitecture='*'\
// publicKeyToken='6595b64144ccf1df' language='*'\"")
//
//using namespace std;
//char str1[1024];
//
//HSTREAM TITLED;
//HSTREAM HAHA;
//HSTREAM ROBOCOP;
//HBRUSH hBrush = CreateSolidBrush(RGB(72, 161, 139));
//HDC hdc;
//PAINTSTRUCT ps;
//HWND hTrack;
//int skins;
//TCHAR *StrT = str1;
////HANDLE bmpwall;
////HANDLE bmpwall1;
////HWND hwall;
////HWND eMp3;
//HINSTANCE hInst;
//HICON progicon;
//const TCHAR progname[] = _T("������ ���������� �� MixOS");
//
//static DWORD rgbCurrent = RGB(72, 161, 139);
//DWORD rgbTextColor = RGB(255, 255, 255);
//
//NOTIFYICONDATA NotifyIconData;
//
//HBITMAP hWallpaperBitmap;
//HDC hCompatibleDC;
//BITMAP bm;
//bool bIsWallpaperSet;
//RECT rcClient;
//
////int g_i = 0;
////
////void CALLBACK BtnTimer(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime) {
////    KillTimer(hwnd, idEvent);
////    if (g_i < 340) {
////        SetWindowPos(GetDlgItem(hwnd, VIDEO), NULL, g_i, 640 + 40, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
////        SetWindowPos(GetDlgItem(hwnd, PHOTOVIEWER), NULL, g_i, 640 + 40 - 40, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
////        g_i += 10;
////        SetTimer(hwnd, idEvent, 10 /* time milliseconds */, &BtnTimer);
////    }
////
////}
////
////void AnimateButton(HWND hDialogWnd) {
////    g_i = 0;
////   /* SendMessage(GetDlgItem(hDialogWnd, VIDEO), WM_ENABLE, FALSE, 0);
////    SendMessage(GetDlgItem(hDialogWnd, PHOTOVIEWER), WM_ENABLE, FALSE, 0);*/
////    SetTimer(hDialogWnd, 0 /* idEvent */, 10 /* time milliseconds */, &BtnTimer);
////}
//
//static LRESULT CALLBACK wnd_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    switch (uMsg) {
//
//    case WM_CREATE: {
//
//        SetLayeredWindowAttributes(hWnd, NULL, 255, LWA_ALPHA);
//
//
//        
//        ZeroMemory(&NotifyIconData, sizeof(NOTIFYICONDATA));
//
//
//        NotifyIconData.cbSize = sizeof(NotifyIconData);
//        NotifyIconData.hWnd = hWnd;
//        NotifyIconData.uID = 1;          // ����� ��������� ����� �������������, �� ����� ������ ������ ����
//        NotifyIconData.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP;
//        NotifyIconData.uCallbackMessage = WM_USER_SHELLICON;
//        NotifyIconData.hIcon = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Emulate.ico", IMAGE_ICON, 48, 48, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//        NotifyIconData.uVersion = NOTIFYICON_VERSION;
//
//        /*     strcpy(data.szInfoTitle, "��������� ����� � Youtube");*/
//        strcpy(NotifyIconData.szTip, "������ ���������� �� MixOS");
//
//
//        Shell_NotifyIcon(NIM_ADD, &NotifyIconData);
//
//
//
//        SetBkMode(hdc, TRANSPARENT);
//        HINSTANCE hInst = (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE);
//        HICON hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\MixOS.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        HMENU hMenubar = CreateMenu();
//        HMENU hAbout = CreateMenu();
//        HMENU h8bit = CreateMenu();
//        HMENU h16bit = CreateMenu();
//        HMENU hPS = CreateMenu();
//        HMENU hWindows = CreateMenu();
//        HMENU hPortable = CreateMenu();
//        HMENU hColor = CreateMenu();
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hAbout, "�������");
//        AppendMenu(hAbout, MF_STRING, ABOUTEMUL, "� ���������");
//        AppendMenu(hAbout, MF_STRING, HELP, "������");
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)h8bit, "8 BIT");
//        AppendMenu(h8bit, MF_STRING, DENDY, "Dendy");
//        AppendMenu(h8bit, MF_STRING, ATARI7800, "Atari7800");
//        AppendMenu(h8bit, MF_STRING, EMULATOR3000, "OLDPC");
//        
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)h16bit, "16 BIT");
//        AppendMenu(h16bit, MF_STRING, MEGADRIVE, "SEGA MEGA DRIVE");
//        AppendMenu(h16bit, MF_STRING, SATURN, "SEGA SATURN");
//        AppendMenu(h16bit, MF_STRING, SNES, "SNES");
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hPS, "32BIT");
//        AppendMenu(hPS, MF_STRING, PS1, "PlayStation 1");
//        AppendMenu(hPS, MF_STRING, PS2, "PlayStation 2");
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hWindows, "Windows");
//        AppendMenu(hWindows, MF_STRING, W311, "Windows 3.11/DOS");
//        AppendMenu(hWindows, MF_STRING, WIN86, "Windows NT 3.51");
//        AppendMenu(hWindows, MF_STRING, W95, "Windows 95");
//        AppendMenu(hWindows, MF_STRING, WINXP, "Windows XP");
//        AppendMenu(hWindows, MF_STRING, WIN8, "Windows 8");
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hPortable, "����������");
//        AppendMenu(hPortable, MF_STRING, PSP, "PSP");
//        AppendMenu(hPortable, MF_STRING, GBA, "GBA");
//        AppendMenu(hPortable, MF_STRING, treeDS, "3DS");
//
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hColor, "������� ���� � ���������");
//        AppendMenu(hColor, MF_STRING, REDA, "�������");
//        AppendMenu(hColor, MF_STRING, ORANGEA, "���������");
//        AppendMenu(hColor, MF_STRING, YELLOWA, "Ƹ����");
//        AppendMenu(hColor, MF_STRING, GREENA, "������");
//        AppendMenu(hColor, MF_STRING, AZUREA, "�������");
//        AppendMenu(hColor, MF_STRING, BLUEA, "�����");
//        AppendMenu(hColor, MF_STRING, VIOLETA, "����������");
//        AppendMenu(hColor, MF_STRING, STANDARTA, "�����������");
//        AppendMenu(hColor, MF_STRING, STRACOLOR, "Strannik");
//        AppendMenu(hColor, MF_SEPARATOR, NULL, NULL);
//        AppendMenu(hColor, MF_STRING, COLOREMU, "��� ����");
//        AppendMenu(hColor, MF_STRING, TEXT_COLOR, "������� ���� ������");
//        //AppendMenu(hColor, MF_STRING, BLACK_TEXT_COLOR, "������� ���� ������ �� ������");
//        AppendMenu(hColor, MF_SEPARATOR, NULL, NULL);
//        AppendMenu(hColor, MF_STRING, SKINEMU, "������� ��� �� ��������");
//        AppendMenu(hColor, MF_STRING, CLEARSKIN, "������� ��������");
//        AppendMenu(hColor, MF_SEPARATOR, NULL, NULL);
//        AppendMenu(hColor, MF_STRING, polupon, "�������� ����������������");
//        AppendMenu(hColor, MF_STRING, polupoff, "��������� ����������������");
//        AppendMenu(hColor, MF_SEPARATOR, NULL, NULL);
//        AppendMenu(hColor, MF_STRING, MAKE_TOP_MOST_WINDOW, "������ ��������� ����");
//        AppendMenu(hColor, MF_STRING, MAKE_TOP_WINDOW, "�� ������� ��������� ����");
//
//
//        SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//        CreateWindow(TEXT("STATIC"), TEXT("������ ���������� ������ 2.1 SP1"), WS_VISIBLE | WS_CHILD, 500 + 5, 18, /*210-5*/ 240, 18, hWnd, (HMENU)text1, NULL, NULL);
//        SetMenu(hWnd, hMenubar);
//        BASS_Init(-1, 44100, 0, 0, NULL);
//
//        CreateWindow(TEXT("STATIC"), TEXT("��������� �� ����������� v.1.2"), WS_VISIBLE | WS_CHILD, 500-10, 600, 228, 18, hWnd, (HMENU)text1, NULL, NULL);
//
//        CreateWindow(TEXT("STATIC"), TEXT("��� ������� ���� �������"), WS_VISIBLE | WS_CHILD, 500 - 10+500-40+20, 600, 228, 18, hWnd, (HMENU)text1, NULL, NULL);
//
//        CreateWindow(TEXT("STATIC"), TEXT("��������� 8 BIT"), WS_VISIBLE | WS_CHILD, 220, 70, 110, 18, hWnd, (HMENU)text1, NULL, NULL);
//
//
//
//
//        CreateWindow(TEXT("STATIC"), TEXT("��������� 8/16 BIT/(SEGA)"), WS_VISIBLE | WS_CHILD, 445, 70, 190, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("� ������������� �� ���������"), WS_VISIBLE | WS_CHILD, 428, 175, 215, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("������ ����� �� 1982 �� 2000 ����"), WS_VISIBLE | WS_CHILD, 830, 70, 250, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("��������� (32BIT)"), WS_VISIBLE | WS_CHILD, 700, 70, 120, 18, hWnd, (HMENU)text1, NULL, NULL);
//
//
//
//
//        CreateWindow(TEXT("STATIC"), TEXT("Windows � DOS"), WS_VISIBLE | WS_CHILD, 220, 175, 110, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("����������� ������� ���������"), WS_VISIBLE | WS_CHILD, 760, 175, 220, 18, hWnd, (HMENU)text1, NULL, NULL);
//
//        //CreateWindow(TEXT("STATIC"), TEXT("                                               "), WS_VISIBLE | WS_CHILD, 95, 380, 630, 5, hWnd, (HMENU)NULL, NULL, NULL);
//
//
//        CreateWindow(TEXT("STATIC"), TEXT("��� ���� ��� SEGA MEGA DRIVE ��������� � MusicPlayer\\Emulators\\16BIT\\SMDSG\\GAMES"), WS_VISIBLE | WS_CHILD, 105, 400, 620, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("��� ���� ��� PlayStation 1 ��������� � MusicPlayer\\Emulators\\32BIT\\PlayStation1\\GAMES"), WS_VISIBLE | WS_CHILD, 105, 419, 620, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("��� ���� ��� PlayStation 2 ��������� � MusicPlayer\\Emulators\\32BIT\\PlayStation2\\GAMES"), WS_VISIBLE | WS_CHILD, 105, 438, 620, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("��� ���� ��� Atari7800 ��������� � MusicPlayer\\Emulators\\8BIT\\Atari7800\\GAMES"), WS_VISIBLE | WS_CHILD, 105, 438, 620, 18, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("�������� ������ ������ ��� �������� 3000. � ��� ��� ���� ��������� ����� �� 1981 �� 2000 ���� �������."), WS_VISIBLE | WS_CHILD, 105, 457, 620, 36, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("�������� Sega Saturn �������� ������ ���� ���� �� BIOS � �� ��� ������� �� �������. ��� ��� ���� SonicJAM"), WS_VISIBLE | WS_CHILD, 105, 494, 620, 36, hWnd, (HMENU)text1, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("��� �������� ����� ��� 3 ��� PS2 ���� ��������, ��� ��� ������� ���� ��� ������ ����"), WS_VISIBLE | WS_CHILD, 105, 531, 620, 36, hWnd, (HMENU)text1, NULL, NULL);
//        //CreateWindow(TEXT("BUTTON"), TEXT("SEGA MASTER SYSTEM"), WS_VISIBLE | WS_CHILD, 180, 155, 200, 20, hWnd, (HMENU)SMS, NULL, NULL);
//        //CreateWindow(TEXT("BUTTON"), TEXT("SEGA SG 1000"), WS_VISIBLE | WS_CHILD, 180, 200, 200, 20, hWnd, (HMENU)SG1000, NULL, NULL);
//        CreateWindow(TEXT("BUTTON"), TEXT("ATARI 7800"), WS_VISIBLE | WS_CHILD, 180, 135, 200, 20, hWnd, (HMENU)ATARI7800, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Atari.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, ATARI7800), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("WINDOWS 3.1 � DOS"), WS_VISIBLE | WS_CHILD, 180, 210, 200, 20, hWnd, (HMENU)W311, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\WIN95.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, W311), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("WINDOWS 95"), WS_VISIBLE | WS_CHILD, 180, 235, 200, 20, hWnd, (HMENU)W95, NULL, NULL);
//        //CreateWindow(TEXT("BUTTON"), TEXT("NINTENDO GAMEBOY"), WS_VISIBLE | WS_CHILD, 180, 245, 200, 20, hWnd, (HMENU)GAMEBOYORIG, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\WIN95.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, W95), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("Dendy/NES"), WS_VISIBLE | WS_CHILD, 180, 110, 200, 20, hWnd, (HMENU)DENDY, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Dendy.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, DENDY), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("��� ��������� SEGA �� SG1000 �� CD32X"), WS_VISIBLE | WS_CHILD, 390, 110, 300, 20, hWnd, (HMENU)MEGADRIVE, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Sega.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, MEGADRIVE), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("SEGA SATURN"), WS_VISIBLE | WS_CHILD, 390, 135, 300, 20, hWnd, (HMENU)SATURN, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Saturn.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, SATURN), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("SUPER NINTENDO!!!"), WS_VISIBLE | WS_CHILD, 390, 210, 300, 45, hWnd, (HMENU)SNES, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\mario.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, SNES), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("�������� ������"), WS_VISIBLE | WS_CHILD, 15, 15, 160, 30, hWnd, (HMENU)TITLE, NULL, NULL);
//
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\play.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, TITLE), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("��������� ������"), WS_VISIBLE | WS_CHILD, 15, 15, 160, 30, hWnd, (HMENU)TITLESTOP, NULL, NULL);
//
//
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\pause.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, TITLESTOP), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//        TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title.mp3", 0, 0, 0);
//
//        BASS_ChannelPlay(TITLED, false);
//        CreateWindow(TEXT("BUTTON"), TEXT("PlayStation 1"), WS_VISIBLE | WS_CHILD, 700, 110, 120, 20, hWnd, (HMENU)PS1, NULL, NULL);
//
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\PS1.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, PS1), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("PlayStation 2"), WS_VISIBLE | WS_CHILD, 700, 135, 120, 20, hWnd, (HMENU)PS2, NULL, NULL);
//
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\PS2.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, PS2), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("PSP"), WS_VISIBLE | WS_CHILD, 700, 210, 120, 45, hWnd, (HMENU)PSP, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\PSP.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, PSP), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("GBA"), WS_VISIBLE | WS_CHILD, 830, 210, 120, 45, hWnd, (HMENU)GBA, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\gameboy.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, GBA), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("3DS"), WS_VISIBLE | WS_CHILD, 960, 210, 120, 45, hWnd, (HMENU)treeDS, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\3ds.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, treeDS), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("������� ���� ��� 3DS"), WS_VISIBLE | WS_CHILD, 1090-5, 15, 160+10, 20, hWnd, (HMENU)Download, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\download.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, Download), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("������� ���� ��� PS2"), WS_VISIBLE | WS_CHILD, 1090-5, 40, 160+10, 20, hWnd, (HMENU)Download1, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\download.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, Download1), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("������ ����� 1981-2000"), WS_VISIBLE | WS_CHILD, 830, 110, 250, 45, hWnd, (HMENU)EMULATOR3000, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\oldpc.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, EMULATOR3000), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("�������� ���� � ��������"), WS_VISIBLE | WS_CHILD, 735, 400, 420, 145, hWnd, (HMENU)HAHAHA, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\question.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, HAHAHA), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("WINDOWS XP BROWSER EDITION WTF IS GOING ON?!!!"), WS_VISIBLE | WS_CHILD, 180, 270, 900, 35, hWnd, (HMENU)WINXP, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\WINXP.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, WINXP), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("86box+Windows NT 3.51"), WS_VISIBLE | WS_CHILD, 180, 310, 900, 35, hWnd, (HMENU)WIN86, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\WIN95.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, WIN86), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("Windows 8 [IGORPC]"), WS_VISIBLE | WS_CHILD, 180 + 360 - 20, 640 + 40, 150 + 20, 35, hWnd, (HMENU)WIN8, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Win8.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, WIN8), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//        CreateWindow(TEXT("BUTTON"), TEXT("Self-ratingUP"), WS_VISIBLE | WS_CHILD, 180 + 360 - 20, 640, 150 + 20, 35, hWnd, (HMENU)SELFUP, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\love.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, SELFUP), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//        // 180+360-20, 640, 150+20, 35
//
//        CreateWindow(TEXT("BUTTON"), TEXT("GENERATOR [ERTOR]"), WS_VISIBLE | WS_CHILD, 180+360-20+175, 640, 150+20, 35, hWnd, (HMENU)ERTOR, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Ertor.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, ERTOR), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("URBAN ASSAULT"), WS_VISIBLE | WS_CHILD, 180 + 360 - 20 + 175+350-100, 640, 150 + 20+60, 60+10+10-5, hWnd, (HMENU)UAMENU, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\GHOR.ico", IMAGE_ICON, 32, 32, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, UAMENU), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("VideoPlayer[Z_Kraf1er_Z]"), WS_VISIBLE | WS_CHILD, 180 + 360 - 20-190, 640 + 40, 150 + 20+10+5, 35, /*180 + 360 - 20 - 190, 640 + 40 - 40, 150 + 20 + 10 + 5, 35,*/ hWnd, (HMENU)VIDEO, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\VideoPlayer.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, VIDEO), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("PhotoViewer[CreeperLife]"), WS_VISIBLE | WS_CHILD, 180 + 360 - 20 - 190, 640 + 40-40, 150 + 20 + 10 + 5, 35, hWnd, (HMENU)PHOTOVIEWER, NULL, NULL);
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\Photo.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, PHOTOVIEWER), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//
//         
//        CreateWindow(TEXT("BUTTON"), TEXT("RU4EN [NBR]"), WS_VISIBLE | WS_CHILD, 180 + 360 - 20+175, 640 + 40, 150 + 20, 35, hWnd, (HMENU)TRANSLATE, NULL, NULL);
//
//        hIconAll = (HICON)LoadImage(hInst, "MusicPlayer\\BMP\\ico\\NBR.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//
//        SendMessage(GetDlgItem(hWnd, TRANSLATE), BM_SETIMAGE, IMAGE_ICON, (LPARAM)hIconAll);
//
//
//       
//        //hTrack = CreateWindow(TRACKBAR_CLASS, "SOUND", WS_CHILD | TBS_AUTOTICKS | TBSTYLE_TOOLTIPS | LVS_EX_TRANSPARENTBKGND|WS_VISIBLE, 20, 350, 320, 30, hWnd, (HMENU)LENMUSIC, NULL, NULL);
//        hTrack = CreateWindow(TRACKBAR_CLASS, "SOUND", WS_CHILD | TBS_AUTOTICKS  | TBS_VERT|TBSTYLE_TOOLTIPS | LVS_EX_TRANSPARENTBKGND | WS_VISIBLE, 1100, 100, 25, 90, hWnd, (HMENU)LENMUSIC, NULL, NULL);
//        CreateWindow(TEXT("STATIC"), TEXT("���������"), WS_VISIBLE | WS_CHILD, 1140, 130, 70, 18, hWnd, (HMENU)MAKEMAKE, NULL, NULL);    //��� �� �������, � �����      //MAX VOLUME ������-�� �����.
//
//        // ��...
//        // ������ ����� ������� ���, ����� ���� �� ������ ������ ����������?
//        // ������   ���� ����������   ��� ������ ���� � ��� ��������� �� ��������
//
//        /*eMp3 = CreateWindow(TEXT("Edit"), NULL, WS_EX_CLIENTEDGE | WS_BORDER | WS_CHILD | WS_VISIBLE, 120, 50, 1000 + 30, 20, hWnd, (HMENU)SKINSSTRO, NULL, 0);
//        ShowWindow(GetDlgItem(hWnd, SKINSSTRO), SW_HIDE);*/
//        ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//        ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_SHOW);
//
//        //CreateWindow(TEXT("BUTTON"), TEXT("Test animation"), WS_VISIBLE | WS_CHILD, 20, 640 + 40, 150 + 20 + 10 + 5, 35, hWnd, (HMENU)TEST_ANIMATION, NULL, NULL);
//
//        GetClientRect(hWnd, &rcClient);
//
//        break;
//    }
//    case WM_COMMAND: 
//    {
//
//        if (LOWORD(wParam) == SELFUP)
//        {
//            MessageBoxA(hWnd, "���, ���, ���� ��� ��� ���������� �� ������ =).\n�� ������ � ��������� ������, �����������, ���, �������� =)", "� ���������", MB_ICONERROR);
//           /* system("start MusicPlayer\\love\\helpup.exe");*/
//        }
//
//
//        if (LOWORD(wParam) == polupon)
//        {
//            SetWindowLongPtr(hWnd, GWL_EXSTYLE, WS_EX_LAYERED);
//            SetLayeredWindowAttributes(hWnd, NULL, 220, LWA_ALPHA);
//        }
//        if (LOWORD(wParam) == polupoff)
//        {
//            SetLayeredWindowAttributes(hWnd, NULL, 255, LWA_ALPHA);
//            SetWindowLongPtr(hWnd, GWL_EXSTYLE, 0);
//        }
//
//
//        BASS_Init(-1, 44100, 0, 0, NULL);
//        if (LOWORD(wParam) == ABOUTEMUL)
//        {
//            ShellAbout(hWnd, progname, "�����������: Captain Strannik, ��������: Z_Kraf1er_Z", progicon);
//
//            MessageBoxA(hWnd, "��� ������� ���������� � ���. ��� ������ �������� =)", "� ���������", MB_OK);
//        }
//        if (LOWORD(wParam) == HELP)
//        {
//            MessageBoxA(hWnd, "                                                           �������:\n1) ��� ������� �� numpad �� 1 �� 8, ����� ������ ����� ����.\n2) ��� ������� �� ���������� ������� (1), (2), (3). ����� ���-�� �������������.", "������", MB_OK);
//        }
//        if (LOWORD(wParam) == DENDY)
//        {
//            system("start MusicPlayer\\Emulators\\8BIT\\NES-FAMICOM\\fceux64.exe MusicPlayer\\Emulators\\8BIT\\NES-FAMICOM\\Coolgirl.nes");
//        }
//        if (LOWORD(wParam) == ERTOR)
//        {
//            system("start MusicPlayer\\SUBS\\ERTOR\\gen.exe");
//        }
//        if (LOWORD(wParam) == WIN8)
//        {
//            system("start MusicPlayer\\SUBS\\IGOR2677\\Win8\\F\\GoogleChromePortable.exe file://C://WIN//WIN8//index.html");
//        }
//        if (LOWORD(wParam) == ATARI7800)
//        {
//            system("start MusicPlayer\\Emulators\\8BIT\\ATARI7800\\ProSystem.exe MusicPlayer\\Emulators\\8BIT\\ATARI7800\\GAMES\\32.bin");
//        }
//
//        if (LOWORD(wParam) == MEGADRIVE)
//        {
//            system("start MusicPlayer\\Emulators\\16BIT\\SMDSG\\Fusion.exe MusicPlayer\\Emulators\\16BIT\\SMDSG\\GAMES\\Sonic.gen");
//        }
//        if (LOWORD(wParam) == PS1)
//        {
//            system("start MusicPlayer\\Emulators\\32BIT\\PlayStation1\\PSXeven_v0.19.exe");
//
//        }
//
//
//        if (LOWORD(wParam) == PHOTOVIEWER)
//        {
//            system("start MusicPlayer\\PhotoViewer\\CreeperPhotoViewer.exe");
//        }
//
//
//        if (LOWORD(wParam) == PS2)
//        {
//            system("start MusicPlayer\\Emulators\\32BIT\\PlayStation2\\pcsx2.exe");
//
//        }
//        if (LOWORD(wParam) == EMULATOR3000)
//        {
//            system("del MusicPlayer\\Emulators\\OLDPC\\Emulator3000\\Emulator3000.autosave");
//            system("del MusicPlayer\\Emulators\\OLDPC\\Emulator3000\\Emulator3000.BAK");
//            system("del MusicPlayer\\Emulators\\OLDPC\\Emulator3000\\Emulator3000.config");
//            system("MusicPlayer\\Emulators\\OLDPC\\Emulator3000\\Emulator3000.exe");
//        }
//        if (LOWORD(wParam) == SATURN)
//        {
//            system("start MusicPlayer\\Emulators\\16BIT\\SEGASATURN\\yabause.exe");
//        }
//        if (LOWORD(wParam) == GBA)
//        {
//            system("start MusicPlayer\\Emulators\\PORTABLE\\GBA\\mGBA.exe MusicPlayer\\Emulators\\PORTABLE\\GBA\\GAMES\\Sonic.gba");
//        }
//        if (LOWORD(wParam) == PSP)
//        {
//            system("start MusicPlayer\\Emulators\\PORTABLE\\PSP\\PPSSPPWindows64.exe");
//        }
//        if (LOWORD(wParam) == treeDS)
//        {
//            system("start MusicPlayer\\Emulators\\PORTABLE\\3DS\\citra-qt.exe MusicPlayer\\Emulators\\Portable\\3DS\\GAMES\\Mario.cia");
//        }
//        if (LOWORD(wParam) == SNES)
//        {
//            system("start MusicPlayer\\Emulators\\16BIT\\SNES\\bsnes_hd.exe MusicPlayer\\Emulators\\16BIT\\SNES\\GAMES\\MARIO.sfc");
//        }
//
//        if (LOWORD(wParam) == TITLE)
//        {
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_StreamFree(HAHA);
//            BASS_ChannelStop(HAHA);
//            BASS_SampleFree(HAHA);
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title.mp3", 0, 0, 0);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_ChannelPlay(TITLED, false);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_SHOW);
//        }
//        if (LOWORD(wParam) == TITLESTOP)
//        {
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_StreamFree(HAHA);
//            BASS_ChannelStop(HAHA);
//            BASS_SampleFree(HAHA);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_SHOW);
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//        }
//        if (LOWORD(wParam) == W311)
//        {
//            system("start MusicPlayer\\W311\\dosbox.exe -conf MusicPlayer\\W311\\dosbox.conf -noconsole");
//        }
//
//        if (LOWORD(wParam) == VIDEO)
//        {
//            system("start MusicPlayer\\VideoPlayer\\VideoPlayer.exe");
//        }
//
//
//        if (LOWORD(wParam) == W95)
//        {
//            system("start MusicPlayer\\Emulators\\OLDPC\\WIN95\\windows95.exe");
//        }
//        if (LOWORD(wParam) == Download)
//        {
//            system("start https://archive.org/download/3dsdecrypted");
//        }
//        if (LOWORD(wParam) == Download1)
//        {
//            system("start https://wowroms.com/ru/isos/list/playstation%2B2?sort=download");
//        }
//        if (LOWORD(wParam) == WINXP)
//        {
//            system("start https://winxp.vercel.app/");
//        }
//        if (LOWORD(wParam) == HAHAHA)
//        {
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_StreamFree(HAHA);
//            BASS_ChannelStop(HAHA);
//            BASS_SampleFree(HAHA);
//            system("start https://www.youtube.com/watch?v=vNbDeuOzXdA");
//            HAHA = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\i.mp3", 0, 0, 0);
//            BASS_ChannelPlay(HAHA, false);
//        }
//        if (LOWORD(wParam) == WIN86)
//        {
//            system("start MusicPlayer\\Emulators\\OLDPC\\WINNT\\Win351\\86box.exe MusicPlayer\\Emulators\\OLDPC\\WINNT\\Win351\\86Box.cfg");
//        }
//
//
//        if (LOWORD(wParam) == TRANSLATE)
//        {
//            system("start MusicPlayer\\SUBS\\NBR\\ru4en.hta");
//        }
//
//        if (LOWORD(wParam) == CLEARSKIN) {
//            if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }
//            if (bIsWallpaperSet == true)
//                bIsWallpaperSet = false;
//            RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//        }
//
//        if (LOWORD(wParam) == REDA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//        BASS_Stop();
//        BASS_Start();
//        BASS_StreamFree(TITLED);
//        BASS_ChannelStop(TITLED);
//        BASS_SampleFree(TITLED);
//        BASS_Start();
//
//        /*DestroyWindow(hwall);
//
//        bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//        bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//        if (bmpwall != NULL);
//        {
//
//            hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//            SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//            SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//        }*/
//
//        /*if (hWallpaperBitmap != NULL) {
//            DeleteObject(hWallpaperBitmap);
//            hWallpaperBitmap = NULL;
//        }*/
//
//        TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title7.mp3", 0, 0, 0);
//        BASS_ChannelPlay(TITLED, false);
//        rgbCurrent = RGB(204, 0, 0);
//        hBrush = CreateSolidBrush(RGB(204, 0, 0));
//        InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == ORANGEA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//           //DestroyWindow(hwall);
//           //
//           //bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//           //bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//           //
//           //if (bmpwall != NULL);
//           //{
//           //
//           //    hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//           //    SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//           //    SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//           //
//           //}
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title1.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(255, 128, 0);
//            hBrush = CreateSolidBrush(RGB(255, 128, 0));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == YELLOWA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//            //DestroyWindow(hwall);
//            //
//            //bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            //bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            //
//            //if (bmpwall != NULL);
//            //{
//            //
//            //    hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//            //    SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//            //    SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//            //
//            //}
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title6.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(205, 205, 0);
//            hBrush = CreateSolidBrush(RGB(205, 205, 0));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == GREENA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//            /*DestroyWindow(hwall);
//
//            bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//            if (bmpwall != NULL);
//            {
//
//                hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//            }*/
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title2.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(0, 153, 0);
//            hBrush = CreateSolidBrush(RGB(0, 153, 0));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == AZUREA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//            /*DestroyWindow(hwall);
//
//            bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//            if (bmpwall != NULL);
//            {
//
//                hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//            }*/
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title3.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(0, 205, 205);
//            hBrush = CreateSolidBrush(RGB(0, 205, 205));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == BLUEA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();   
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);   
//            BASS_Start();
//            /*DestroyWindow(hwall);
//
//            bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//            if (bmpwall != NULL);
//            {
//
//                hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//            }*/
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title5.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(0, 0, 200);
//            hBrush = CreateSolidBrush(RGB(0, 0, 200));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == VIOLETA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);       
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//            /*DestroyWindow(hwall);
//
//            bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//            if (bmpwall != NULL);
//            {
//
//                hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//            }*/
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title4.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(51, 0, 102);
//            hBrush = CreateSolidBrush(RGB(51, 0, 102));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == STANDARTA)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_SHOW);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//            /*DestroyWindow(hwall);
//
//            bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//            if (bmpwall != NULL);
//            {
//
//                hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//            }*/
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\title.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(72, 161, 139);
//            hBrush = CreateSolidBrush(RGB(72, 161, 139));
//            InvalidateRect(hWnd, NULL, FALSE);
//        }
//        if (LOWORD(wParam) == STRACOLOR)
//        {
//            ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//            BASS_Stop();
//            BASS_Start();
//            BASS_StreamFree(TITLED);
//            BASS_ChannelStop(TITLED);
//            BASS_SampleFree(TITLED);
//            BASS_Start();
//            /*DestroyWindow(hwall);
//
//            bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//            bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//            if (bmpwall != NULL);
//            {
//
//                hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//            }*/
//            /*if (hWallpaperBitmap != NULL) {
//                DeleteObject(hWallpaperBitmap);
//                hWallpaperBitmap = NULL;
//            }*/
//            TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\HTM.mp3", 0, 0, 0);
//            BASS_ChannelPlay(TITLED, false);
//            rgbCurrent = RGB(142, 97, 38);
//            hBrush = CreateSolidBrush(RGB(142, 97, 38));
//            InvalidateRect(hWnd, NULL, FALSE);
//
//        }
//        if (LOWORD(wParam) == COLOREMU)
//        {
//            
//            CHOOSECOLOR cc;
//            static COLORREF acrCustClr[16]; // ������ ���. ������
//
//            ZeroMemory(&cc, sizeof(CHOOSECOLOR));
//            cc.lStructSize = sizeof(CHOOSECOLOR);
//            cc.hwndOwner = hWnd;
//            cc.lpCustColors = (LPDWORD)acrCustClr;
//            cc.rgbResult = rgbCurrent;
//            cc.Flags = CC_FULLOPEN | CC_RGBINIT;
//
//            if (ChooseColor(&cc) == TRUE)
//            {
//                hBrush = CreateSolidBrush(cc.rgbResult);
//                rgbCurrent = cc.rgbResult;
//
//                InvalidateRect(hWnd, NULL, FALSE);   // �� �������� ������ ������. ������ ���� ����� �� �������� � ��������... � � �������... � ��� ����� ����...
//
//                ShowWindow(GetDlgItem(hWnd, TITLESTOP), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, TITLE), SW_HIDE);
//                //DestroyWindow(hwall);
//                /*if (hWallpaperBitmap != NULL) {
//                    DeleteObject(hWallpaperBitmap);
//                    hWallpaperBitmap = NULL;
//                }*/
//                BASS_Stop();
//                BASS_Start();
//                BASS_StreamFree(TITLED);
//                BASS_ChannelStop(TITLED);
//                BASS_SampleFree(TITLED);
//                BASS_Start();
//                TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\Youtube.mp3", 0, 0, 0);
//                BASS_ChannelPlay(TITLED, false);
//            }
//        }
//
//
//        if (LOWORD(wParam) == UAMENU)
//        {
//            system("start MusicPlayer\\UA\\UAMENU.exe");
//        }
//
//
//
//        /*if (LOWORD(wParam) == TEST_ANIMATION) {
//            ShowWindow(GetDlgItem(hWnd, TEST_ANIMATION), SW_HIDE);
//            AnimateButton(hWnd);
//            ShowWindow(GetDlgItem(hWnd, TEST_ANIMATION), SW_SHOW);
//        }*/
//
//
//
//                if (LOWORD(wParam) == SKINEMU)
//        {
//            
//          
//            ShowWindow(GetDlgItem(hWnd, SKINSSTRO), SW_HIDE);
//            OPENFILENAME ofnn;
//
//            ZeroMemory(&ofnn, sizeof(OPENFILENAME));
//            ofnn.lStructSize = sizeof(OPENFILENAME);
//            ofnn.hwndOwner = hWnd;
//            ofnn.lpstrFile = str1;
//            ofnn.nMaxFile = sizeof(str1);
//            
//            ofnn.nFilterIndex = 1;
//            ofnn.lpstrFileTitle = NULL;
//            ofnn.nMaxFileTitle = 0;
//            //ofn.lpstrInitialDir = ".";
//            ofnn.lpstrInitialDir = "MusicPlayer\\BMP\\MIXEMULATE";
//            ofnn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_DONTADDTORECENT | OFN_NOCHANGEDIR;   //���� ������ ���!  � � ���� ������.
//
//            if (GetOpenFileName(&ofnn) == TRUE)
//            {
//                /*SetWindowText(eMp3, str1);
//
//                DestroyWindow(hwall);
//
//
//                skins = GetWindowText(eMp3, StrT, MAX_PATH);
//                bmpwall = LoadImage(NULL, StrT, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//                if (bmpwall != NULL);
//                {
//
//                    hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                    SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                    SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//                }*/
//                if (hWallpaperBitmap != NULL) {
//                    DeleteObject(hWallpaperBitmap);
//                    //hWallpaperBitmap = NULL;
//                }
//                hWallpaperBitmap = (HBITMAP)LoadImage(NULL, StrT, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                if (hWallpaperBitmap != NULL) {
//                    GetObject(hWallpaperBitmap, sizeof(bm), &bm);
//                    if (bIsWallpaperSet == false) bIsWallpaperSet = true;
//                    RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//                }
//                /*CreateWindow(TEXT("BUTTON"), TEXT("����������"), WS_VISIBLE | WS_CHILD, 460, 500, 300, 70, hWnd, (HMENU)INSTBKG, NULL, NULL);*/
//            }
//
//
//             
//                   
//                    /*CreateWindow(TEXT("BUTTON"), TEXT("����������"), WS_VISIBLE | WS_CHILD, 460, 500, 300, 70, hWnd, (HMENU)INSTBKG, NULL, NULL);*/
//                
//
//
//
//
//        // if (LOWORD(wParam) == CLEARSKIN)
//
//        //{
//        //    DestroyWindow(hwall);
//
//
//        //}
//
//
//
//            
//
//
//
//
//
//
//
//
//
//
//
//        }
//
//
//
//
//                if (LOWORD(wParam) == TEXT_COLOR) {
//                    CHOOSECOLOR cc;
//                    static COLORREF acrCustClr[16]; // ������ ���. ������
//
//                    ZeroMemory(&cc, sizeof(CHOOSECOLOR));
//                    cc.lStructSize = sizeof(CHOOSECOLOR);
//                    cc.hwndOwner = hWnd;
//                    cc.lpCustColors = (LPDWORD)acrCustClr;
//                    cc.rgbResult = rgbTextColor;
//                    cc.Flags = CC_FULLOPEN | CC_RGBINIT;
//
//                    if (ChooseColor(&cc) == TRUE) {
//                        //hBrush = CreateSolidBrush(cc.rgbResult);
//                        rgbTextColor = cc.rgbResult;
//                        //InvalidateRect(hWnd, NULL, FALSE);
//                        RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//                    }
//                }
//
//                if (LOWORD(wParam) == MAKE_TOP_MOST_WINDOW)
//                    SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOREDRAW | SWP_NOSENDCHANGING);
//
//                if (LOWORD(wParam) == MAKE_TOP_WINDOW)
//                    SetWindowPos(hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOREDRAW | SWP_NOSENDCHANGING);
//
//                /*if (LOWORD(wParam) ==  BLACK_TEXT_COLOR) {
//                    rgbTextColor = RGB(0, 0, 0);
//                    RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//                };*/
//
//
//        break;
//
//        /*case WM_TIMER:
//            
//            break;*/
//
//            case WM_KEYDOWN:
//            {
//                switch (LOWORD(wParam))
//                {
//                case VK_ESCAPE:
//                    DestroyWindow(hWnd);
//                    break;
//                case VK_SPACE:
//                    SendMessage(hWnd, WM_COMMAND, SEARCH, 0);
//                    break;
//                case VK_NUMPAD1:
//                    SendMessage(hWnd, WM_COMMAND, REDA, 0);
//                    break;
//                case VK_NUMPAD2:
//                    SendMessage(hWnd, WM_COMMAND, ORANGEA, 0);
//                    break;
//                case VK_NUMPAD3:
//                    SendMessage(hWnd, WM_COMMAND, YELLOWA, 0);
//                    break;
//                case VK_NUMPAD4:
//                    SendMessage(hWnd, WM_COMMAND, GREENA, 0);
//                    break;
//                case VK_NUMPAD5:
//                    SendMessage(hWnd, WM_COMMAND, AZUREA, 0);
//                    break;
//                case VK_NUMPAD6:
//                    SendMessage(hWnd, WM_COMMAND, BLUEA, 0);
//                    break;
//                case VK_NUMPAD7:
//                    SendMessage(hWnd, WM_COMMAND, VIOLETA, 0);
//                    break;
//                case VK_NUMPAD8:
//                    SendMessage(hWnd, WM_COMMAND, STANDARTA, 0);
//                    break;
//                case VK_MBUTTON:
//                    SendMessage(hWnd, WM_COMMAND, MYCOLOR, 0);
//                    break;
//                case '1':
//                    //DestroyWindow(hwall);
//                    if (hWallpaperBitmap != NULL) {
//                        DeleteObject(hWallpaperBitmap);
//                        //hWallpaperBitmap = NULL;
//                    }
//                    BASS_Stop();
//                    BASS_Start();
//                    BASS_StreamFree(TITLED);
//                    BASS_ChannelStop(TITLED);
//                    BASS_SampleFree(TITLED);
//                    BASS_Start();
//                    TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\Kaer Morhen.mp3", 0, 0, 0);
//                    BASS_ChannelPlay(TITLED, false);
//
//                    
//                    /*bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXEMULATE\\Nature.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                    bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);*/
//                    hWallpaperBitmap = (HBITMAP)LoadImage(NULL, "MusicPlayer\\BMP\\MIXEMULATE\\Nature.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                    if (hWallpaperBitmap != NULL) {
//                        GetObject(hWallpaperBitmap, sizeof(bm), &bm);
//                        if (bIsWallpaperSet == false) bIsWallpaperSet = true;
//                        RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//                    }
//
//                    /*if (bmpwall != NULL);
//                    {
//
//                        hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                        SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                        SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//                    }*/
//
//
//
//
//
//                    break;
//
//
//
//                case '2':
//
//                    //DestroyWindow(hwall);
//                    if (hWallpaperBitmap != NULL) {
//                        DeleteObject(hWallpaperBitmap);
//                        //hWallpaperBitmap = NULL;
//                    }
//                    BASS_Stop();
//                    BASS_Start();
//                    BASS_StreamFree(TITLED);
//                    BASS_ChannelStop(TITLED);
//                    BASS_SampleFree(TITLED);
//                    BASS_Start();
//                    TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\Skellige.mp3", 0, 0, 0);
//                    BASS_ChannelPlay(TITLED, false);
//
//
//                   /* bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXEMULATE\\Nature1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                    bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//                    if (bmpwall != NULL);
//                    {
//
//                        hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                        SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                        SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//                    }*/
//
//                    hWallpaperBitmap = (HBITMAP)LoadImage(NULL, "MusicPlayer\\BMP\\MIXEMULATE\\Nature1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                    if (hWallpaperBitmap != NULL) {
//                        GetObject(hWallpaperBitmap, sizeof(bm), &bm);
//                        if (bIsWallpaperSet == false) bIsWallpaperSet = true;
//                        RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//                    }
//
//
//
//                    break;
//
//                case '3':
//
//                    //DestroyWindow(hwall);
//                    if (hWallpaperBitmap != NULL) {
//                        DeleteObject(hWallpaperBitmap);
//                        //hWallpaperBitmap = NULL;
//                    }
//                    BASS_Stop();
//                    BASS_Start();
//                    BASS_StreamFree(TITLED);
//                    BASS_ChannelStop(TITLED);
//                    BASS_SampleFree(TITLED);
//                    BASS_Start();
//                    TITLED = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\white.mp3", 0, 0, 0);
//                    BASS_ChannelPlay(TITLED, false);
//
//
//                    /*bmpwall = LoadImage(NULL, "MusicPlayer\\BMP\\MIXEMULATE\\Nature2.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                    bmpwall1 = LoadImage(NULL, "MusicPlayer\\BMP\\MIXSKIN\\clear.png", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//
//                    if (bmpwall != NULL);
//                    {
//
//                        hwall = CreateWindow("STATIC", NULL, WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER, 0, 0, 0, 0, hWnd, NULL, NULL, NULL);
//                        SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall1);
//                        SendMessage(hwall, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bmpwall);
//
//                    }*/
//                    hWallpaperBitmap = (HBITMAP)LoadImage(NULL, "MusicPlayer\\BMP\\MIXEMULATE\\Nature2.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_LOADTRANSPARENT | LR_DEFAULTSIZE);
//                    if (hWallpaperBitmap != NULL) {
//                        GetObject(hWallpaperBitmap, sizeof(bm), &bm);
//                        if (bIsWallpaperSet == false) bIsWallpaperSet = true;
//                        RedrawWindow(hWnd, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
//                    }
//
//
//
//
//                    break;
//
//
//                case VK_ADD:
//                    SendMessage(GetDlgItem(hWnd, CHB1), BM_SETCHECK, BST_CHECKED, 0);
//                    break;
//                }
//            }
//
//        case WM_VSCROLL: {    //������, ������� ��������, �� ���� ��������� ��, ��� �����... ���� ��������, ���-��...
//            if (hTrack == (HWND)lParam)
//            {
//                //������ ��� ������� ����� ������, ������� ��������� ���-���� ����������� ��� ������, ��� ����������... � ���� �� ��������, �� ��� ������� 15 ��� ������. � � �� ���� ����� ������ ����...
//
//                BASS_ChannelSetAttribute(TITLED, BASS_ATTRIB_VOL, SendMessage(hTrack, TBM_GETPOS,80,40)); //���������?
//                /*BASS_ChannelSetAttribute(ROBOCOP, BASS_ATTRIB_VOL, SendMessage(hTrack, TBM_GETPOS, 80, 100));*/
//                //���� ��� � ����� �� �����������, ��������, ��� �� ����� ������������ ����� ����� �� ����������.. �� ���.. ��� ���� �� ������ ����������. � ������ �� ��������, ������ ���������� ���� ���������
//
//            }
//        
//    } break;
//
//        case WM_PAINT: {
//    hdc = BeginPaint(hWnd, &ps);
//    if (bIsWallpaperSet == true) {
//        hCompatibleDC = CreateCompatibleDC(hdc);
//    
//        SelectObject(hCompatibleDC, hWallpaperBitmap);
//        SetStretchBltMode(hdc, HALFTONE);
//        SetBrushOrgEx(hdc, 0, 0, NULL);
//        StretchBlt(hdc, 0, 0, rcClient.right, rcClient.bottom, hCompatibleDC, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
//    
//        DeleteDC(hCompatibleDC);
//    } else {
//        FillRect(hdc, &ps.rcPaint, hBrush);
//    }
//    EndPaint(hWnd, &ps);
//
//}
//             break;
//    case WM_DESTROY: {
//        //free_samples_all();
//        BASS_Free();
//        /*SetLayeredWindowAttributes(hWnd, NULL, 255, LWA_ALPHA);
//        SetWindowLongPtr(hWnd, GWL_EXSTYLE, 0);*/
//        Shell_NotifyIcon(NIM_DELETE, &NotifyIconData);
//        if (bIsWallpaperSet == true) DeleteObject(hWallpaperBitmap);
//        DeleteObject(hBrush);
//        PostQuitMessage(0);
//
//        break;
//
//    }
//
//    case WM_CTLCOLORSTATIC:
//    {
//        if (GetDlgCtrlID((HWND)lParam) == text1)
//        {
//            HDC hdcStatic = (HDC)wParam;
//            // or obtain the static handle in some other way
//            SetTextColor(hdcStatic, rgbTextColor); // text color
//            SetBkColor(hdcStatic, rgbCurrent);
//            return (LRESULT)GetStockObject(NULL_BRUSH);
//
//        }
//        if (GetDlgCtrlID((HWND)lParam) == MAKEMAKE)
//        {
//            HDC hdcStatic = (HDC)wParam;
//            // or obtain the static handle in some other way
//            SetTextColor(hdcStatic, rgbTextColor); // text color
//
//            SetBkColor(hdcStatic, rgbCurrent);
//
//            return (LRESULT)GetStockObject(NULL_BRUSH);
//
//        }
//
//    }
//    break;
//
//
//    default:
//        return DefWindowProc(hWnd, uMsg, wParam, lParam);         
//    }
//                   return 0;
//    }
//} 
//
//int WINAPI main() 
//{
//    //SetThreadLocale(MAKELCID(MAKELANGID(LANG_RUSSIAN, SUBLANG_RUSSIAN_RUSSIA), SORT_DEFAULT));
//    SetThreadUILanguage(MAKELANGID(LANG_RUSSIAN, SUBLANG_RUSSIAN_RUSSIA));
//    WNDCLASS op;
//    ZeroMemory(&op, sizeof(WNDCLASS)); 
//    op.lpfnWndProc = wnd_proc;
//    op.hInstance = GetModuleHandle(NULL);
//    op.lpszClassName = "test32cls";
//    op.hCursor = LoadCursor(NULL, IDC_ARROW);
//    op.hbrBackground = /*(HBRUSH)(COLOR_BTNFACE + 1)*/ NULL;
//    progicon = (HICON)LoadImage(op.hInstance, "MusicPlayer\\BMP\\ico\\Emulate.ico", IMAGE_ICON, 48, 48, LR_LOADFROMFILE | LR_LOADTRANSPARENT);
//    op.hIcon = progicon;
//
//    //op.hbrBackground = CreateSolidBrush(RGB(72,161 , 139));     //72 61 139      204 0 0             255 128 0        51 255 255      0 153 0
//    RegisterClass(&op);
//
//
//    //��� ��� ������, �� �������� ��������, � ���� �������� � �� ���������. � ��� ���� ���� �� �����������. ��-������, ���- �� � Youtube.cpp �� ������ BassSTOP
//
//    CreateWindowEx(/*WS_EX_LAYERED*/ 0,op.lpszClassName, "���������", WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_VISIBLE | WS_CLIPSIBLINGS, 100, 100, 1280, 800 /*625*/, NULL, NULL, op.hInstance, NULL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//
//    }
//
//}