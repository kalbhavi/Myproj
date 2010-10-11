#ifndef _SURFACEFLINGER_H_
#define _SURFACEFLINGER_H_

#ifdef __cplusplus
extern "C" {
#endif

int surfaceflinger_init(int x, int y, int w, int h, int *stride);
void surfaceflinger_fini(void);

char *surfaceflinger_lock(void);
void surfaceflinger_unlock(void);

#ifdef __cplusplus
}
#endif

#endif /* _SURFACEFLINGER_H_ */
