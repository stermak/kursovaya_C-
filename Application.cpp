#include "Application.h"
#include "ComponentFirst.h"
Application::Application (Base * parent):Base (parent)
{
}


void
Application::BuildTree () 
{
  
string parentname, childname, rootname;
  
cin >> rootname;
  
cin >> parentname >> childname;
  
this->SetName (rootname);
  
Base * parent = this;
  
Base * old = nullptr;
  
while (parentname != childname)
    
    {
      
if (rootname != parentname)
	
	{
	  
parent = old;
	  
rootname = parentname;
	
}
      
ComponentFirst * next = new ComponentFirst (parent);
      
next->SetName (childname);
    
}

}


 
int
Application::ExecuteApp () 
{
  
cout << this->GetName () << endl;
  
ShowTree ();
  
return 0;

}
