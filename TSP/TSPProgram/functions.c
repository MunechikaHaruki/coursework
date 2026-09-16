#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "functions.h"

/***** ノードの座標を読み込む *****/
int load_location( char *fname, Location loc[] ) {
  FILE *fp;
  int  n=0, i;
  double x, y;
  if ( (fp=fopen(fname,"r")) == NULL ) {
    printf("Unable to open file %s\n", fname);
    exit(0);
  }

  while(fscanf(fp, "%d%lf%lf", &i, &x, &y)==3) {
    loc[n].x = x;
    loc[n].y = y;
    n++;
  }
  fclose(fp);
  return n;
}
/***** パスの保存 *****/
void save_path( char *fname, int p[], int n) {
  FILE *fp;
  int t;
  if ( (fp=fopen(fname,"w")) == NULL ) {
    printf("Unable to open file %s\n", fname);
    exit(0);
  }
  for(t=0; t<n ; t++ )
    fprintf(fp, "%d ", p[t]);
  fprintf(fp, "%d\n", p[0]);
  fclose(fp);
}
/***** ノードの座標を出力する *****/
void save_location( char *fname, Location loc[], int p[], int n) {
  FILE *fp;
  int t;
  if ( (fp=fopen(fname,"w")) == NULL ) {
    printf("Unable to open file %s\n", fname);
    exit(0);
  }
  for(t=0; t<n ; t++ )
    fprintf(fp, "%f %f\n", loc[p[t]].x, loc[p[t]].y);
  fprintf(fp, "%f %f\n", loc[p[0]].x, loc[p[0]].y);
  fclose(fp);
}

/***** ノード間の距離を計算する *****/
void calc_distance( Location loc[], double d[N][N], int n ) {
  int i, j;
  double dist,max=0;
  for(i=0; i<n ; i++ ) {
    for( j=i+1; j<n; j++ ) {
      dist = sqrt( (loc[i].x-loc[j].x)*(loc[i].x-loc[j].x)
		   +(loc[i].y-loc[j].y)*(loc[i].y-loc[j].y) );
      d[i][j] = dist;
      d[j][i] = dist;
      if ( dist > max ) max = dist;
    }
  }
  for(i=0; i<n ; i++ ) d[i][i]=max+1;
  //printf("# max= %f\n", max);
}

