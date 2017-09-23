#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "piste.h"




int main(int argc , char **argv)
{
  printf("Bienvenue dans mon programme MYMUSICCOLLECTOR\n");
  
	Track *pTrack;
  printf("[DEBUG] main : pointer avant malloc =%p\n", pTrack);

	pTrack = (Track*)malloc(1 * sizeof(Track));
  printf("[DEBUG] main : pointer apres malloc =%p\n", pTrack);
	int ret = create_track(pTrack,
									"toto",
									120, 
									2012, 
									NULL,
									NULL);
  printf("[DEBUG] main : ret(1) =%d\n", ret);
  if (ret == 0)
  {
  	display_track(pTrack);
  
  }
  printf("[DEBUG] main : pointer apres create =%p\n", pTrack);
  
	free(pTrack);
	pTrack= NULL; /* toujours faire ca en langage C */
	ret = display_track(pTrack);
  printf("[DEBUG] main : ret(2) =%d\n", ret);
  printf("[DEBUG] main : pointer apres free =%p\n", pTrack);

	struct piste *pTrack2;
  printf("[DEBUG] main : pointer avant create2 =%p\n", pTrack2);
	/*
	=> genere segmentation fault car le pointeur n'est pas initilisé correctement et est différent de NULL */
	ret = create_track(pTrack2,
									"toto",
									120, 
									2012, 
									NULL,
									NULL);
  if (ret == 0)
  {
  	display_track(pTrack2);
  
  }/**/

	ret = create_track_v2(&pTrack2,
									"toto",
									120, 
									2012, 
									NULL,
									NULL);
  if (ret == 0)
  {
  	display_track(pTrack2);
  
  }
  printf("[DEBUG] main : ret(3) =%d\n", ret);
  printf("[DEBUG] main : pointer apres create2 =%p\n", pTrack2);
  
  return 0;
}
