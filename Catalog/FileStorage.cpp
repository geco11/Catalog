#include "FileStorage.h"
#include<exception>
void FileStorage::openFile()
{
	file.open(filePath);
	if (!file)
		throw std::runtime_error("incorrect file name");
}

void FileStorage::closeFile()
{
	if(file)
	   file.close();
}
