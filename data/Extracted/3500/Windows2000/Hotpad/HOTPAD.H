
/* ---------------------- Version Control Header -------------------------------

$Archive: $

$Author: $

$Date: $

$Revision: $

$History: $
----------------------------------------------------------------------------- */

#ifndef __HOTPAD_H_
#define __HOTPAD_H_

// ---------------------------------------------------------------------------
// Constant definitions
// ---------------------------------------------------------------------------
#define INVALID_HWND         -1
#define INVALID_TIMER        -2
#define INVALID_CODEPTR      -3
#define STACKSIZE            4096      // 4K free stack for callbacks
#define ID_HOTPADTIMER       999
#define HOTPADTIMEOUT        250        // 250 ms timer for hotpad polling 
#define SLOWTIMERVALUE       60000      // 1 minute slow timeout value
// ---------------------------------------------------------------------------

struct HotpadNotifyStruct ;
typedef struct HotpadNotifyStruct FAR *LPHOTPADNOTIFYSTRUCT ;

struct HotpadNotifyStruct
	{
	HWND m_hWndToNotify ;                   
	UINT m_nMsgId ;
	FARPROC m_lpfnNotifyCallback ;
	HGLOBAL m_hMem ;
	LPHOTPADNOTIFYSTRUCT m_lpNextElement ;
	int m_nNotifyId ;
	BOOL m_bInactive ;
	} ;

// ---------------------------------------------------------------------------
// Function Prototypes
// ---------------------------------------------------------------------------
int WINAPI SetHotpadNotification ( HWND, UINT, FARPROC ) ;
BOOL WINAPI KillHotpadNotification ( int ) ;
LPHOTPADNOTIFYSTRUCT AllocateNotifyStruct ( ) ;
void FreeAllocatedMemory ( ) ;
int CreatePrivateStack ( ) ;
void StopHotpadTimer ( ) ;
int StartHotpadTimer ( ) ;
void SlowHotpadTimer ( ) ;
void RestoreHotpadTimer ( ) ;
void CALLBACK HotpadTimerProc ( HWND, UINT, UINT, DWORD ) ;
// ---------------------------------------------------------------------------




#endif



