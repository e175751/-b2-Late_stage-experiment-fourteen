#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void) {
  double sum_sigma=0;
  int lim = 10000;
  srand(time(NULL));
  FILE *file;
	file = fopen("c_lyapunov.txt","w");
  double init = (double)rand()/RAND_MAX;
  for(float r=1.0; r<4.0; r+=0.001){
    for(int j=0; j<lim; j++){
      init = r*(1-init)*init;
      double diff = r*(1 - 2*init);
      sum_sigma += log(fabs(diff));
    }
    sum_sigma = sum_sigma / lim;
    fprintf(file, "%f",r);
    fprintf(file,",");
    fprintf(file, "%f",sum_sigma);
    fprintf(file,"\n");
  }
  fclose(file);
  printf("終了しました");
  return 0;
}
