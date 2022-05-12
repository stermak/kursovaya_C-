#ifndef __BASE_H
#define __BASE_H
#include <iostream>
#include <vector>
using namespace std;

class Base 
{

private:
string name;
  
Base * parent;
  
vector < Base * >childs;

public:
Base (Base * parent = nullptr, string = "root");
  
void ChangeParent (Base * parent);
  
void SetName (string name);
  
void ShowTree ();
  
string GetName ();
  
Base * GetParent ();

};


#endif
