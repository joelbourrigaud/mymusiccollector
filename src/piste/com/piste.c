#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "piste.h"

/*
	Creation d'une piste avec un pointeur qui DOIT etre initialise.
 */
int create_track(struct piste *pxTrack,
									char *pxName,
									unsigned short xDuration, 
									unsigned short xYear, 
									struct artiste *pxArtiste,
									struct album *pxAlbum)
{
	if (pxTrack == NULL)
		return -1;

	pxTrack->pName = malloc(sizeof(pxName));
	strcpy(pxTrack->pName, pxName);
	pxTrack->duration = xDuration;
	pxTrack->year = xYear;
	pxTrack->pArtiste = pxArtiste;
	pxTrack->pAlbum = pxAlbum;
	
	return 0;
}

/*
	Creation d'une piste.
	L'initialisation du pointeur se fait dans la fonction.
 */
int create_track_v2(struct piste **ppxTrack,
									char *pxName,
									unsigned short xDuration, 
									unsigned short xYear, 
									struct artiste *pxArtiste,
									struct album *pxAlbum)
{

	*ppxTrack = (struct piste *)malloc(1 * sizeof(struct piste));

	(*ppxTrack)->pName = malloc(sizeof(pxName));
	strcpy((*ppxTrack)->pName, pxName);
	(*ppxTrack)->duration = xDuration;
	(*ppxTrack)->year = xYear;
	(*ppxTrack)->pArtiste = pxArtiste;
	(*ppxTrack)->pAlbum = pxAlbum;
	
	return 0;
}

int display_track(struct piste *pxTrack)
{
	printf("Track:\n");
	if (pxTrack == NULL)
	{
		printf("	No tracks\n");
		return -1;
	}

	printf("	Name:%s\n", pxTrack->pName);
	printf("	Duration:%d\n", pxTrack->duration);
	printf("	Year:%d\n", pxTrack->year);
	if (pxTrack->pArtiste != NULL)
  	printf("	Artiste:%s\n", pxTrack->pArtiste->pName);
  else
  	printf("	Artiste:NONE\n");
  	
	if (pxTrack->pAlbum != NULL)
  	printf("	Album:%s\n", pxTrack->pAlbum->pName);
  else
  	printf("	pAlbum:NONE\n");
	
	return 0;
}

