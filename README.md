# zipcodeProject

Objective:
    Process sequentially a CVS file using a buffer class.

Requirements:
1. Create a CSV (comma separated) file from a XLSX file.
2. Generate a blocked sequence set file from csv
- Your blocked sequence set generation program's command line options should include:
-- the name of the blocked sequence set data file
-- all other information necessary for the header file
3. Process sequentially a blocked sequence set file using a buffer class. {functionality from Group Project 1.0}
4. Modify your buffer class to read and unpack a Zip Code Record from a sequence set block.
5. Modify your data file header record buffer class to read and write the blocked sequence set data file header record
6. Repeat Group Project 1.0 with this new blocked sequence set file.
7. Create and use a dump method that visibly aggregates Zip Codes into blocks including the RBN pointers.
8. Generate (in RAM), write (as a file), and read (back into RAM), a simple primary key index [Folk Section 10.3] that can be used to display the Zip Code data for all Zip Codes listed on the command line.
- Your blocked sequence set search program's command line options should include the name of the blocked sequence set data file
- Use a command line flag (e.g. -Z56301) to indicate each Zip Code record to search for.
- If the Zip Code record is not in the file, display a message to that effect.
- Test Run Demonstration: for the blocked sequence set Zip Code data and simple index file pair
-- Create and run a search test program - include searches (on the command line) for several valid Zip Codes and at least one invalid Zip Code.
---the program will load the simple primary key index file into an object in RAM
---the program will never load the blocked sequence set Zip Code data file into RAM
9. All program variables and values that can vary should be initialized either by command line parameters (or their defaults) or meta-data in the the data file or index (e.g. header record info.)
10. Document (extensively) your C++ source code with comments and Doxygen tags.
11. Create a Doxygen PDF of your class and application program code.
12. Create a user guide showing how to use your program (including how to use the command line options, and how the output should appear)
