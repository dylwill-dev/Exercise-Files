// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;

int main() {
    static const char * filename {"items.txt"}; // Text file to read from
    const std::string labels[3] {"sku: ", "name: ", "desc: "}; // Create words to pring out inbetween reading the file
    
    // Read from the items.txt file
    std::ifstream infile(filename);
    std::string line;

    while (std::getline(infile, line)){
        std::vector<std::string> fields;
        std::stringstream ss(line);
        std::string field;

        //Split the line by tab
        while (std::getline(ss,field,'\t')){
            fields.push_back(field);
        }

        //Print each field with its label
        for(size_t i = 0; i < fields.size() && i < 3; ++i){
            if (i > 0) cout << ", ";
            else cout << labels[i] << fields[i];
        }
        cout << std::endl;
    } 
    infile.close();
    
}
