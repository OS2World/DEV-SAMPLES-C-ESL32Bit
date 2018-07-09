#define INCL_WIN
#include <os2.h>
#include "esllib.h"
#include <string.h>

int PASCAL16 MessageBox(void);
long PASCAL16 Add(long, long);
long PASCAL16 Mul(long, long);
long PASCAL16 Sub(long, long);
long PASCAL16 Div(long, long);
HSTRING PASCAL16 HelloWorld(void);
long PASCAL16 ToUpper(HSTRING * _Seg16);

int PASCAL16 MessageBox(void)
{
   WinMessageBox(HWND_DESKTOP,
                 HWND_DESKTOP,
                 "This is from a C Set/2 DLL!",
                 "Message",
                 0,
                 MB_OK | MB_NOICON);
}

long PASCAL16 Add(long A, long B)
{
  return (A + B);
}

long PASCAL16 Mul(long A,  long B)
{
  return (A * B);
}

long PASCAL16 Sub(long A, long B)
{
  return (A - B);
}

long PASCAL16 Div(long A, long B)
{
  return (A / B);
}

HSTRING PASCAL16 HelloWorld(void)
{
  return EslCreateString(12, "Hello World!");
}

long PASCAL16 ToUpper(HSTRING * _Seg16 EslString)
{
  char CString[256];

  EslQueryStringChars(*EslString, CString, 255);
  strupr(CString);
  EslSetStringValue(EslString, CString, strlen(CString));

  return 0;
}

