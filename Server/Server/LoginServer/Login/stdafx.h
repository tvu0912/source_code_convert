// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#ifdef __WINDOWS__
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601  // Windows 7
#endif
#ifndef WINVER
#define WINVER 0x0601
#endif
#ifndef _WIN64
#define _USE_32BIT_TIME_T
#endif
#endif

#pragma once

#ifdef __WINDOWS__
#include <windows.h>
#include <tchar.h>
#endif

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include <map>
#include "stdarg.h"


#include "Type.h"
#include "DB_Struct.h"
#include "Config.h"
#include "FileDef.h"
#include "Ini.h"
#include "Log.h"
#include "File.h"
#include "TimeManager.h"
#include "GameStruct_Finger.h"
#include "Packet.h"
#include "fileapi.h"
// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
