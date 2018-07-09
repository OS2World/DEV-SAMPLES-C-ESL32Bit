/**********************************************************************
 *                                                                    *
 * Name: ESLLIB.H                                                     *
 *                                                                    *
 * Declarations for dynamic-link library support routines.            *
 *                                                                    *
 * (C) Copyright Interactive Images, Inc. 1989, 1990                  *
 * All Rights Reserved                                                *
 *                                                                    *
 **********************************************************************/

typedef LHANDLE HSTRING;
typedef LHANDLE *PHSTRING;

HSTRING _Far16 _Pascal EslCreateString(USHORT, PCHAR);
PSZ     _Far16 _Pascal EslQueryStringAddr(HSTRING);
USHORT  _Far16 _Pascal EslQueryStringChars(HSTRING, PCHAR, USHORT);
HSTRING _Far16 _Pascal EslSetStringValue(PHSTRING,PCHAR,USHORT);
BOOL    _Far16 _Pascal EslSetStringHandle(PHSTRING,HSTRING);
LONG    _Far16 _Pascal EslQueryProgramID(VOID);

