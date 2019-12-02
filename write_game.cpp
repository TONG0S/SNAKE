#include "fileInfo.h"
#include "log_in.h"
#include <iostream>
#include <string.h>
#include "windows.h"
#include "data.h"
void write_game() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "game_info.txt", "wb+");
	if (Error != 0) {
		printf("³ö´í");
	}
	fwrite(&score, 4, 1, fpFile);
	for (int i = 0; i < g_num; i++) {
		fprintf(fpFile, "%s\n", g_Log[i].chName);
		fprintf(fpFile, "%s\n", g_Log[i].chPassword);
	}
	fclose(fpFile);
}