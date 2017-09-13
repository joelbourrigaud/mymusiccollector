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

#endif /* _PISTE_H_ */
