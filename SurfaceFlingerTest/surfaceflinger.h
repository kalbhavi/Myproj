#ifndef _SURFACEFLINGER_H_
#define _SURFACEFLINGER_H_
/* This is new check-in from master */
/* A new commit from development branch */
/* A second commit from master branch */
/* One more commit from development branch */
#ifdef __cplusplus
extern "C" {
#endif
/* Another one more commit from development branch */
int surfaceflinger_init(int x, int y, int w, int h, int *stride);
void surfaceflinger_fini(void);

char *surfaceflinger_lock(void);
void surfaceflinger_unlock(void);

#ifdef __cplusplus
}
#endif

#endif /* _SURFACEFLINGER_H_ */
