#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <fstream>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

int linearSearch(auto data,auto key)//auto linearSearch...
{  //string k = "no";
  for(int i=0; i < data.size(); i++)
  {
	if (data[i]==key)
	   return i;
  }
  //cout << "no";
  return -1;
} 

int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl;
   cout<<"\nTo end input type Ctrl + D"<<endl<<endl;

    /*while(cin>>input)//read an unknown number of inputs
    {
       inputs.push_back(input);
    }*/
	ifstream infile{"top1Mweb"};
    if(!infile)
    {
		cout<<"Error reading from file"<<endl;
		
	}
	else
	while (infile >> input)
	//for (int m = 0;m < count; m++)
	{
		//infile >> input;
		inputs.push_back(input);
	}
   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
   exit(1);//nothing to do but quit program

 cout<<"\nTo quit the program type Ctrl + D"<<endl<<endl;
  cout<<"Enter a value to search for: ";

     cin.clear();//not needed when switching to reading from file

    while(cin>>search_key)//perform searches until Ctrl + D entered
    {
        result = linearSearch(inputs,search_key);

        cout<<"  "<<search_key<<" was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at position "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";

    }


    return 0;
}


