# CSV File Processing

This C++ code reads a CSV file and processes its contents by extracting specific columns into separate vectors. It can be used as a starting point for CSV file manipulation and analysis.

## Prerequisites

- C++ compiler
- Input CSV file (e.g., proj2020.csv)

## Usage

1. Clone the repository:

   ```shell
   git clone https://github.com/M0NST312/Read-CSV-CPP.git
   ```

2. Compile the code:
	
	 ```shell
	g++ main.cpp -o csv_processing
	```
3. Run the executable:
 	```shell
 	./csv_processing
 	```
 	The code will read the proj2020.csv file (make sure it's present in the same directory) and process its contents.

4. View the results:

	The code will print the extracted columns from the CSV file to the console, separated by a pipe symbol (|).

	Example output:
	
		```
		REG_CODE | TOWN_CODE | TOWN_ID | TOWN_NAME | f2020 | m2020 | t2020
		Value1   | Value2    | Value3  | Value4    | Value5| Value6| Value7
		...
		```
### Customization
Input File: If you want to process a different CSV file, modify the file name in the code:

	```
	fin.open("proj2020.csv", ios::in);
	```
### License
This project is licensed under the MIT License.

