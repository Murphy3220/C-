#include <stdio.h>
#include <stdlib.h>
#include "Ballance.h"
// #include "Ballance.h" // multiple inclusion

char *GetAFile_Orphan(char *PathToFile);

int main()
{
	// specify a file
	char *ThePath = "C:\\Users\\dana_swift\\" 
		"Documents\\Visual Studio 2010\\Projects\\"
		"Session 1\\C_Review\\C_Review\\main.cpp";
	char *FileContents = GetAFile_Orphan(ThePath);

	// do the work
	Ballance(FileContents, "{", "}");
	Ballance(FileContents, "(", ")");
	Ballance(FileContents, "[", "]");
	Ballance(FileContents, "/*", "*/");
	//Ballance(FileContents, "<html>", "</html>");


	// release the file
	free(FileContents);// give the memory back

	return 0;
}

char *GetAFile_Orphan(char *PathToFile)
{
	FILE *pMyFile;
	int FileLength;
	char *FileContents;

	// get the file
	pMyFile = fopen(PathToFile, "rb");
	if(!pMyFile)
		printf("The file %s wouldnt open.\n", PathToFile);

	// how big is the file?
	fseek(pMyFile, 0, SEEK_END);
	FileLength = ftell(pMyFile);
	fseek(pMyFile, 0, SEEK_SET);

	// read the file into an array
	FileContents = (char *)malloc(FileLength+1);// make room for the null!

	fread(FileContents, 1, FileLength, pMyFile);
	FileContents[FileLength] = '\0'; // terminate the string
	fclose(pMyFile);

	return FileContents;
}
