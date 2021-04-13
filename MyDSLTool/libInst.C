/*
 * The instrumentation library template for Cinnamon tool. Provides placeholder
 * functions for initialization, termination and instrumentation, and outputting 
 * the results.
 */

#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>

#include "libInst.h"
//#include "DSLutil.h"

using namespace std;
void print(int x){
   printf("%d\n", x);
}
void print(uint64_t x){
   printf("%ld\n", x);
}
void print(const char* x){
   printf("%s\n", x);
}
/*--- Instrumentation Functions Start ---*/

/*--- Instrumentation Functions End ---*/

//void exit_func() {


void exit_func(int var0) {
    /*--- Exit Function Start ---*/
    /*--- Exit Function End ---*/
}
void init_func() {
    /*--- Init Function Start ---*/
    /*--- Init Function End ---*/
}

