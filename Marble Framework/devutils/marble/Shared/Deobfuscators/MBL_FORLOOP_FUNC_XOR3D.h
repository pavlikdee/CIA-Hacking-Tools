#pragma once

static void MBL_FORLOOP_FUNC_XOR3D(char *cString, int iNumOfChars, char *cXorKey)
{
	if (cString == 0 || iNumOfChars <= 0 || cXorKey == 0)
		return;
	for (int i = 0; i < iNumOfChars; i++)
		cString[i] ^= cXorKey[i % 8];

}

static void MBL_FORLOOP_FUNC_XOR3D(wchar_t *wcString, int iNumOfChars, wchar_t *wcXorKey)
{
	if (wcString == 0 || iNumOfChars <= 0 || wcXorKey == 0)
		return;
	for (int i = 0; i < iNumOfChars; i++)
		wcString[i] ^= wcXorKey[i % 8];

}