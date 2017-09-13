#ifndef _ALBUM_H_
#define _ALBUM_H_

#include "artiste.h"
#include "piste.h"

struct album {
	char *pName;
	struct artiste *pArtiste;
	struct piste *pTracks[];
};

#endif /* _ALBUM_H_ */
