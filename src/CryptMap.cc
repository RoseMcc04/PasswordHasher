#include "CryptMap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CryptMap* createMap() 
{
	CryptMap* cryptMap = malloc(sizeof(CryptMap));
	if (cryptMap == NULL) 
	{
		return NULL;
	}
	cryptMap->table = malloc(TABLE_SIZE*sizeof(CryptMapEntry*));
	if (cryptMap->table == NULL) 
	{
		free(cryptMap);
		return NULL;
	}
	for (int i = 0; i < TABLE_SIZE; i++) 
	{
		cryptMap->table[i] = NULL;
	}
	cryptMap->size = 0;
	return crpytMap;
}

unsigned long hash(const char* username) 
{
	unsigned long hash = 0;
	for (int i = 0; username[i] != '/0', i++) 
	{
		hash = hash * 31 + username[i];
	}
	return hashValue % TABLE_SIZE;
}
