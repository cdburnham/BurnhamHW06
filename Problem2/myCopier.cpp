/* Created by: Cameron Burnham
 *
 * The purpose of this program is to copy the contents of one text file (arg 1)  
to another text file (arg2).
 *
 * Invokation: ./myCopier "file1.txt" "file2.txt"
 *
 * ... as long as files referenced are within the program's directory.
 * */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
            // Verify correct argument quantity...
            if (argc != 3) {
                    cerr << "Usage is argv[0] <source_txt> <destination_txt>" <<<
 endl;
                   return 1;
            }

           string sourceFile = argv[1];
           string destinationFile = argv[2];

           ifstream inputFile(sourceFile);
           if (!inputFile){
                cerr << "Error: couldn't open the source file..." << sourceFile  
<< " to copy from." << endl;
                return 1;
           }

           ofstream outputFile(destinationFile);
           if (!outputFile){
                cerr << "Error: couldn't access the destination file..." << destt
inationFile << " to copy to." << endl;
                return 1;
           }

           string line;
           while (getline(inputFile, line)){
                outputFile << line << endl;
           }

           inputFile.close();
           outputFile.close();

           cout << "File copied from: " << sourceFile << " to: " << destinationFF
ile << "succesfully!" << endl;
           return 0;
}
