#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;


int main(int argc, char const *argv[])
{
	//File stream in(read)
	fstream fin;

	vector<string> REG_CODE,TOWN_CODE,TOWN_ID,TOWN_NAME,f2020,m2020,t2020, csv_row;
	string line, word;

	//Read file into filestream
	fin.open("proj2020.csv", ios::in);

	//Read csv row in line and process it
	while(getline(fin, line)){

		//CLear COntents of row vector
		csv_row.clear();
		
		//Break down line into words
		stringstream ss(line);
		
		//Extract words in line and push them into row vector
		while(getline(ss, word,',')){
			csv_row.push_back(word);
			
		}


		for (size_t i = 0; i < csv_row.size(); i++)
		{
			switch(i)
			{
				case 0:
					REG_CODE.push_back(csv_row[0]);
					break;
				case 1:
					TOWN_CODE.push_back(csv_row[1]);
					break;
				case 2:
					TOWN_ID.push_back(csv_row[2]);
					break;
				case 3:
					TOWN_NAME.push_back(csv_row[3]);
					break;
				case 4:
					f2020.push_back(csv_row[4]);
					break;
				case 5:
					m2020.push_back(csv_row[5]);
					break;
				case 6:
					t2020.push_back(csv_row[6]);
					break;
				default:
					continue;
			}

		}


	}
	for (size_t i = 0; i < REG_CODE.size();i++){
		cout << REG_CODE[i] << " | " ;
		cout << TOWN_CODE[i] << " | " ;
		cout << TOWN_ID[i] << " | " ;
		cout << TOWN_NAME[i] << " | ";
		cout  << f2020[i] << " | " ;
		cout << m2020[i] << " | ";
		cout  <<t2020[i] << endl;
	}

	return 0;
}