#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  srand(time(NULL));
  FILE *file;
	file = fopen("c_brach.txt","w");
  double init = (double)rand()/RAND_MAX;
  for(float r=1.0; r<4.0; r+=0.001){
    for(int j=0; j<200; j++){
      init = r*(1-init)*init;
      if (150<=j){
        fprintf(file, "%f",r);
        fprintf(file,",");
        fprintf(file, "%f",init);
        fprintf(file,"\n");
      }
    }
  }
  fclose(file);
  printf("終了しました");
	return 0;
}
