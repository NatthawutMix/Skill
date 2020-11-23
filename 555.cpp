#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
  
main()
{
	int C = 4;
    int SpawnWarp[] = {0,0,0,0};
    int IndexSpawn;
    // Start is called before the first frame update
    int a = 0;
    int yet = 0;
        for (int i=0; i<4; i++)
        {
            SpawnWarp[i] = -1;
        }  
        
        while (a < C)
        {
            IndexSpawn = (rand() );
            printf (" %d" ,IndexSpawn);
            a++;
        }
        for (int i = 0; i < 4; i++)
        {
            //printf(" %d",SpawnWarp[i]);
        }
}
