#include "glob.h"

/* I know that global variables should generally be avoided, but the
 * alternative was huge objects passed around between functions.
 * While they certainly did make some bugs harder to track down, I quite
 * appreciate having mostly functions that take few parameters.
 */

Assoc kw ;

std::string curr_name = "NULL" ;

double diverge_radius = 5 ;
int diverge_iter = 200 ;

cmd curr_scope = NIL ;
int curr_lspage = -1 ;
cmd ls_scope = NIL ;

std::vector<std::string> log_hist ;

double pic_vresol = 1000 ;
double pic_hresol = 1000 ;
double view_hdiv = 1 ;
double view_vdiv = 1 ;
double view_lt = -2.5 ;
double view_rt = .5 ;
double view_hi = 1 ;
double view_lo = -1 ;
double old_lt = view_lt ;
double old_rt = view_rt ;
double old_hi = view_hi ;
double old_lo = view_lo ;

std::vector<std::string> ls_text ;
std::vector<std::vector<rgb>> ls_colors ;
std::vector<cmd> exec ;
std::vector<slice> tokens ;
std::vector<rgb> curr_map ;

std::string command ;

int preview [view_hgt * view_wth] ;
int diverge_min = 0 ;

option allow_non_posix_filenames = OPT_INIT ;
