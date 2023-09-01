#pragma once
#include "pch.h"

class Checksum {
	DWORD crc_table[256];
public:
	Checksum();
	DWORD CRC32(unsigned char* buf, size_t len);
};