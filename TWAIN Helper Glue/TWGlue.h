// ===========================================================================//	TWGlue.h			TWAIN 1.9				�1991-2001 TWAIN Working Group// ===========================================================================//	//#ifndef __GLUECODE__#define __GLUECODE__#pragma once#include	"TWAIN.h"/* primary glue code calls */extern pTW_IDENTITY TWGetDSIdentity(void);extern pTW_IDENTITY TWGetAppIdentity(void);extern TW_INT16	TWInitialize(pTW_IDENTITY pIdentity);extern TW_INT16	TWTerminate(void);extern TW_INT16	TWSelectDS(void);extern TW_INT16	TWEventDS(EventRecord *pEvent,pTW_INT16 pMessage);extern TW_INT16 TWRegisterCallback(DSMENTRYPROC ptr);extern TW_INT16	TWOpenDSM(void);extern TW_INT16	TWCloseDSM(void);extern TW_INT16	TWOpenDSIdentity(pTW_IDENTITY pDSIdentity);extern TW_INT16	TWOpenDS(void);extern TW_INT16	TWCloseDS(void);extern TW_INT16	TWEnableDS(pTW_USERINTERFACE pUserInterface);extern TW_INT16	TWDisableDS(pTW_USERINTERFACE pUserInterface);extern TW_INT16	TWMessageDS(TW_UINT32 DG,TW_UINT16 Dat,TW_UINT16 Msg,					TW_MEMREF pData);extern TW_INT16	TWMessageDSM(TW_UINT32 DG,TW_UINT16 Dat,TW_UINT16 Msg,					TW_MEMREF pData);										/* capabilities calls */extern TW_INT16 TWGetPixelTypes(pTW_INT16 pDoesBW,pTW_INT16 pDoesGray,					pTW_INT16 pDoesRGB, pTW_INT16 pDoesPalette);					extern TW_INT16	TWSetPixelType(TW_INT16 PixelType);extern TW_INT16 TWGetDSCapability ( TW_UINT16 capabilityID, TW_INT16 value, pTW_INT16 isCapable );extern TW_INT16 TWSetDSCapability ( TW_UINT16 capabilityID, TW_INT16 value );/* miscellaneous calls */extern TW_INT16	TWIsDSEnabled(void);extern TW_INT16	TWDSMVersion(pTW_INT16 pMajor,pTW_INT16 pMinor);#endif