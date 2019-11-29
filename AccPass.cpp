
#include "data.h"
#include "log_in.h"
#include <iostream>
#include <string.h>
#include "windows.h"
int num = 0;
nAccount *g_Log = nullptr;
//×¢²áÒ³Ãæ
void read_Account() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "accout_pass", "rb+");
	if (Error != 0) {
		nAccount *g_Log = new nAccount[4];
	}
	else {
		nAccount *g_Log = new nAccount[num];
		fread(&num, 4, 1, fpFile);
		for (int i = 0; i < num; i++) {
			fscanf_s(fpFile, "\n");
			fscanf_s(fpFile, "%s", g_Log[i].chName);
			fscanf_s(fpFile, "%s", g_Log[i].chName);
		}
	}
}
void write_Account() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "accout_pass", "wb+");
		fwrite(&num, 4, 1, fpFile);
		for (int i = 0; i < num; i++) {
			fprintf(fpFile, "\n");
			fprintf(fpFile, "%s", g_Log[i].chName);
			fprintf(fpFile, "%s", g_Log[i].chName);
		}
	}
}