/* hotel.h -- constants and declarations for hotel.c */
#define QUIT        5
#define HOTEL1      180.00
#define HOTEL2      225.00
#define HOTEL3      225.00
#define HOTEL4      355.00
#define DISCOUNT    0.95
#define STARS "***********************************"

int menu(void);                         // shows list of choices
int getnights(void);                    // returns number of nights desired
void showprice(double rate, int nights);// calculate price from rate, nights and displays result