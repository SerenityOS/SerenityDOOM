#ifndef DOOM_GENERIC
#define DOOM_GENERIC

#include <stdint.h>

#define DOOMGENERIC_RESX 320
#define DOOMGENERIC_RESY 200

#ifdef __cplusplus
extern "C" {

#include "i_video.h"
#endif

extern uint32_t* DG_ScreenBuffer;


void DG_Init();
void DG_DrawFrame();
void DG_SleepMs(uint32_t ms);
uint32_t DG_GetTicksMs();
int DG_GetKey(int* pressed, unsigned char* key);
void DG_SetWindowTitle(const char * title);
void DG_SetPalette(const struct color*);

#ifdef __cplusplus
}
#endif

#endif //DOOM_GENERIC
