
int rot   (double       **  W,        /*  D+1 x  D          | Linear map            */
           double       **  T,        /*  M   x  D          | Moved points          */
           double       **  P,        /*  M+1 x  N+1        | Assighment probablity */
           double       *** C,        /*  4 x max(M,N) x D  | Working memory        */
           const double **  X,        /*  N   x  D          | Point set 1 (Data)    */
           const double **  Y,        /*  M   x  D          | Point set 2 (Data)    */
           const int        size[3],  /*  M, N, D           |                       */
           const double     prms[2]   /*  nloop,omg         |                       */
);

int affine(double       **  W,        /*  D+1 x  D          | Linear map            */
           double       **  T,        /*  M   x  D          | Moved points          */
           double       **  P,        /*  M+1 x  N+1        | Assighment probablity */
           double       *** C,        /*  4 x max(M,N) x D  | Working memory        */
           const double **  X,        /*  N   x  D          | Point set 1 (Data)    */
           const double **  Y,        /*  M   x  D          | Point set 2 (Data)    */
           const int        size[3],  /*  M, N, D           |                       */
           const double     prms[2]   /*  nloop, omg        |                       */
);

int cpd   (double       **  W,        /*  M   x  D          | displacement matrix   */
           double       **  T,        /*  M   x  D          | Moved reference       */
           double       **  G,        /*  M   x  M          | Gram matrix of Y      */
           double       **  P,        /*  M+1 x  N+1        | Assighment probablity */
           double       **  C,        /*  M   x  D          | Working wemory (2D)   */
           double       *   A,        /*  M   x  M          | Working wemory (1D)   */
           double       *   B,        /*  M   x  D          | Working wemory (1D)   */
           const double **  X,        /*  N   x  D          | Point set 1 (Data)    */
           const double **  Y,        /*  N   x  D          | Point set 2 (Data)    */
           const int        size[3],  /*  M,  N, D                                  */
           const double     prms[4]   /*  nloop,omg,bet,lmd                         */
);

