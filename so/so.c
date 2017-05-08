#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

int main() {
	system("touch in_test.txt");
	system("touch out_test.txt");
	int inFile, outFile;
	
	char *inFileName = "in_test.txt";

	char *outFileName = "out_test.txt";

	int len;

	char c;

	inFile = open(inFileName, O_RDONLY);
	outFile = open(outFileName, O_WRONLY);

	printf("Arquivos lidos\nIniciando tranferencia de texto\n");	

	while ((len = read(inFile, &c, 1)) > 0)

		write(outFile, &c, 1);

	/* Close files and quite */

	close(inFile);

	close(outFile);

}
