#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;



void sortdata(auto& data)
{
    std::sort(data.begin(), data.end());
}

void Bubblesort(auto& data)
{
	for (int i=0; i < data.size();i++)
	{
		for (int j=0; j < data.size()-1;j++)
		{
			if (data[j]>data[j+1])
			swap (data[j],data[j+1]);
		}
	}
}
int main()
{
  vector<string> inputs;
  string input;
  

   
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
  //sortdata(inputs);
  Bubblesort(inputs);

    return 0;
}

