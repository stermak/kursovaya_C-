#ifndef __APPLICATION_H
#define __APPLICATION_H
#include "Base.h"
class Application:public Base 
{

public:
Application (Base * parent);
  
void BuildTree ();
   
int ExecuteApp ();
 
};

#endif
