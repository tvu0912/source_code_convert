// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601  // Windows 7
#endif
#ifndef WINVER
#define WINVER 0x0601
#endif
#ifndef _WIN64
#define _USE_32BIT_TIME_T
#endif

#pragma once

#include <windows.h>
#include "Type.h"
#include "DB_Struct.h"
#include "Config.h"
#include "FileDef.h"
#include "Ini.h"
#include "Log.h"
#include "Thread.h"
#include "File.h"
#include "TimeManager.h"
#include "GameStruct_Finger.h"
#include "Packet.h"
#include "ODBCInterface.h"

#include "DBManager.h"
#include "SMUManager.h"
#include "ShareMemAO.h"
#include "ShareMemAPI.h"
#include "ShareDBManager.h"
#include "SMULogicManager.h"

#include "DBItemSerial.h"
#include "DBMailInfo.h"
#include "DBGuildInfo.h"
#include "PlayerShopDefine.h"
#include "BBS.h"
#include "DBCharFullData.h"
#include <fileapi.h>
