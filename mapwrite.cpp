
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include <time.h>
#include "fileInfo.h"
using std::cout;
using std::endl;
#if 1
void writemap(){
FILE *fpFile = NULL;
int Error = fopen_s(&fpFile, "map.txt", "w+");
if (Error != 0) {
	printf("³ö´í");
}
for (int i = 0; i < 35; i++) {
	for (int j = 0; j < 150; i++) {
		fprintf(fpFile, "%c\t", &nSpace_draw[i][j]);
	}
	fscanf_s(fpFile, "\n");
}

fclose(fpFile);
}

void readmap() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "map.txt", "r+");
	/*if (Error != 0) {
		g_gameLog = (GAMEINFO *)calloc(35*150* sizeof(GAMEINFO), 1);
	}*/
	//else {

		for (int i = 0; i < 35; i++) {
			for (int j = 0; j < 150; i++) {
				fscanf_s(fpFile, "%c\t", &nSpace_draw[i][j]);
			}
			fscanf_s(fpFile, "\n");
	
		fclose(fpFile);
	}

#endif

