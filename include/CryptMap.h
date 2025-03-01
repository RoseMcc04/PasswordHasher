#ifndef CRYPTMAP_H
#define CRYPTMAP_H

#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE = 1024

typedef struct MapEntry 
{
	char* username;
	char* hashedPassword;
	struct CryptMapEntry* next;
} CryptMapEntry;

typedef struct Map 
{
	CryptMapEntry** table;
	int size;
} CryptMap;

CryptMap* newCryptMap();
unsigned long hash(const char* username);
void insert(CryptMap* map, const char* username, const char* hashedPassword);
char* find(const CryptMap* map, const char* username);
void deleteCryptEntry(CryptMap* map, const char* username);
void freeCryptMap(CryptMap *map);

#endif CRYPTMAP_H
