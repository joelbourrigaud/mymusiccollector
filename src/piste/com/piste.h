#ifndef _PISTE_H_
#define _PISTE_H_

#include "artiste.h"
#include "album.h"

struct piste {
	char *pName;
	unsigned short duration;
	unsigned short year;
	struct artiste *pArtiste;
	struct album *pAlbum;
};

/*
	TIPS Permet de raccourcir les declarations de variable type struct piste <variable>
	en Track <variable>
*/
typedef struct piste Track;


/*
	Creation d'une piste avec un pointeur qui DOIT etre initialise.
 */
int create_track(struct piste *pxTrack,
									char *pxName,
									unsigned short xDuration, 
									unsigned short xYear, 
									struct artiste *pxArtiste,
									struct album *pxAlbum);

/*
	Creation d'une piste.
	L'initialisation du pointeur se fait dans la fonction.
 */
int create_track_v2(struct piste **ppxTrack,
									char *pxName,
									unsigned short xDuration, 
									unsigned short xYear, 
									struct artiste *pxArtiste,
									struct album *pxAlbum);
									

int display_track(struct piste *pxTrack);

#endif /* _PISTE_H_ */
