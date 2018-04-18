#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>

const int DELAY_TIME=2;
const int RUNNING_TIME=30;


int main(int argc, char const *argv[])
{
	long long int start=time(NULL);
	long long int progStart=time(NULL);
	int timer=DELAY_TIME;

	while((time(NULL)-progStart)<RUNNING_TIME){

		int K, L;

		for(K=1; K<=9; K++) {
			do{
				if(timer == DELAY_TIME){
					timer=0;
					start=time(NULL);

					system("clear");
					printf("\n\n");
					for(L=1; L<=9; L++){
						if(L==K) printf("\t0");
						else printf("\t.");
					}

					printf("\n\n");
				}else{
					timer = time(NULL) - start;
				}

			}while(timer != DELAY_TIME);
		}


				for(K=7; K>=2; K--) {
			do{

				if(timer == DELAY_TIME){
					timer=0;
					start=time(NULL);

					system("clear");
					printf("\n\n");
					for(L=1; L<=9; L++){
						if(L==K) printf("\t0");
						else printf("\t.");
					}

					printf("\n\n");
				}else{
					timer = time(NULL) - start;
				}

			}while(timer != DELAY_TIME);
		}


	}


	return 0;
}