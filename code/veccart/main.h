#ifndef MAIN_H
#define MAIN_H

void uart_output_func(unsigned char c);
void loadRom(char *fn);
void loadStreamData(int addr, int len);
void doUpDir(void);
void doChangeDir(char* dirname);
void doChangeRom(char* basedir, int i);
void doHandleEvent(int data);
void doDbgHook(int adr, int data);
void updateAll(void);
void updateOne(void);
void updateMulti(void);

#endif
