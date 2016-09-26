#include "SortedListLinked.h"
#include "ListArray.h" 
using CSC2110::ListArray;
#include "ListArrayIterator.h"
using CSC2110::ListArrayIterator;
#include "CD.h"
using CSC2110::CD;


void addCDs(ListArray<CD>* list, SortedListLinked<CD>* sll)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS
   //iterate over and add the cds to the list box (use lb->addItem)
   
   while(iter->hasNext()){
	sll->add(iter->next());
   }


   delete iter;
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS  
   //iterate over and delete the cds
	while(iter->hasNext()){
		delete iter->next();
		
	}



   delete iter;
}

//DO THIS
int main()
{
	ListArray<CD>* cds = CD::readCDs("cds.txt");

	//DO THIS
	//create the sorted linked list
	SortedListLinked<CD>* sll = new SortedListLinked<CD>(&CD::compare_items);
	addCDs(cds, sll);
   
	for(int i = 1; i <= 7; i++){
		CD* cd = sll->get(i);
		cd->displayCD();
	}
	sll->remove(sll->get(1));
	cout<<"Break"<<endl<<endl;
	for(int i = 1; i <= 7; i++){
		CD* cd = sll->get(i);
		cd->displayCD();
	}
	
	deleteCDs(cds);
	system("pause");
	
   return 0;
}
