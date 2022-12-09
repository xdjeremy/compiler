#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

bool error()
{
	std::cout << "Error";
	return false;
}

int main()
{
	std::vector<std::string> tokens;
	std::string temp;
	std::ifstream inFile;

	//iterator
	std::vector<std::string>::iterator i;

	//error
	bool flag = true;

    inFile.open("outlex.txt");
    if(!inFile.is_open())
    {
        std::cout << "File could not be opened!\n";
        return 0;
    }

    while(std::getline(inFile, temp, ','))
    {
		tokens.push_back(temp);
    }


    for (i = tokens.begin(); i != tokens.end(); ++i)
	{
		if(*i == "int")
		{
			++i;
			if(*i != "id")
			{
				flag = error();
			}
			++i;
			if(*i != "=")
			{
				flag = error();
			}
			++i;
			if(*i != "num")
			{
				flag = error();
			}
			++i;
			if(*i != ";" && *i != "+" && *i != "-")
			{
				flag = error();
			}
			if(*i == ";")
			{
			}
		}
		else if(*i == "double")
		{
			++i;
			if(*i != "id")
			{
				flag = error();
			}
			++i;
			if(*i != "=")
			{
				flag = error();
			}
			++i;
			if(*i != "num" && *i != "real")
			{
				flag = error();
			}
			++i;
			if(*i != ";" && *i != "+" && *i != "-")
			{
				flag = error();
			}
			++i;
			if(*i != "num" && *i != "real")
			{
				flag = error();
			}
			++i;
			if(*i == ";")
			{
			}
			else
			{
				flag = error();
			}
		}
		else if(*i == "cout")
		{
			++i;
			if(*i != "<")
			{
				flag = error();
			}
			++i;
			if(*i != "<")
			{
				flag = error();
			}
			++i;
			if(*i != "literal" && *i != "id")
			{
				flag = error();
			}
			++i;
			if(*i != ";" && *i != "<")
			{
				flag = error();
			}
			if(*i == ";")
			{
			}
		}
		else if(*i == "if")
		{
			++i;
			if(*i != "(")
			{
				flag = error();
			}
			++i;
			if(*i != "id")
			{
				flag = error();
			}
			++i;
			if(*i != "<")
			{
				flag = error();
			}
			++i;
			if(*i != "num")
			{
				flag = error();
			}
			++i;
			if(*i != ")")
			{
				flag = error();
			}
			++i;
			if(*i != "{")
			{
				flag = error();
			}
			++i;
			if(*i != "cout")
			{
				flag = error();
			}
			++i;
			if(*i != "<")
			{
				flag = error();
			}
			++i;
			if(*i != "<")
			{
				flag = error();
			}
			++i;
			if(*i != "literal" && *i != "id")
			{
				flag = error();
			}
			++i;
			if(*i != ";")
			{
				flag = error();
			}
			++i;
			if(*i != "}")
			{
				flag = error();
			}
		}
	}

	if(flag)
	{
		std::cout << "No Errors";
	}

    return 0;
}
