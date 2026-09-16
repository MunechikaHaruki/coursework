#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#define N 450
#define LARGE 2

typedef struct {
   double x;
   double y;
} Location;

int load_location( char *fname, Location loc[] );
void load_path( char *fname, int *p, int n);
void save_location( char *fname, Location loc[], int p[], int n);
void save_path( char *fname, int p[], int n);
void calc_distance( Location loc[], double d[N][N], int n );
double path_length(int *path, double d[N][N], int n);

#endif
