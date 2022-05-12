#include "Base.h"
Base::Base (Base * parent, string name) 
{
  
this->parent = parent;
  
this->name = name;
  
if (parent != nullptr)
    
    {
      
parent->childs.push_back (this);
    
}

}


 
void
Base::SetName (string name) 
{
  
this->name = name;

} 
 
string Base::GetName () 
{
  
return name;

}


 
void
Base::ShowTree () 
{
  
cout << this->GetName ();
  
for (int i = 0; i < this->childs.size (); i++)
    
    {
      
cout << " " << childs[i]->GetName ();
  
} 
for (int i = 0; i < this->childs.size (); i++)
    
    {
      
if (childs[i]->childs.size () != 0)
	
	{
	  
cout << endl;
	  
childs[i]->ShowTree ();
	
}
    
}

}


 
void
Base::ChangeParent (Base * parent) 
{
  
this->parent = parent;

} 
 
Base * Base::GetParent () 
{
  
return parent;

}
