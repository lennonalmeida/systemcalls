#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>



int main(){
int File1, File2, OutFile;
char file1[10], file2[10], *fileout = "saida.txt";
char a;
int i = 0;
	system("touch saida.txt");
	scanf("%s", file1);
	scanf("%s", file2);

	File1 = open(file1, O_RDONLY);
	File2 = open(file2, O_RDONLY);
	OutFile = open(fileout, O_WRONLY);
	while ((i = read(File1, &a, 1)) > 0)
	        write(OutFile, &a, 1);


	while ((i = read(File2, &a, 1)) > 0)
		write(OutFile, &a, 1);
		


	system("cat saida.txt");
	close(File1);
	close(File2);
	close(OutFile);
return 0;
}
