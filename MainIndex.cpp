#include <iostream>
// Next Header files declaration
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include "withdraw.h"
#include "deposit.h"
#include "full.h"
#include "streport.h"
#include "cadd.h"
#include "show.h"
#include "stadd.h"

using namespace std;
int main()
{
    //statements
	menu();
  sreport();
  payroll();
  withdrawal();
  deposit();
  Create_Account();
  showCustomer();
  
  return 0;
}

