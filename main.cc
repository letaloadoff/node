#include "clsBpInterpreter.cc"
#include <fstream>
#include <sstream>

int main()
{
  // get file
  std::ifstream inFile;
  inFile.open("99bottles",std::ifstream::in);//open the input file
  
  std::stringstream strStream;
  strStream << inFile.rdbuf();//read the file
  std::string strProg = strStream.str();//str holds the content of the file
  
  const char* prog=strProg.c_str();

  // create bp interpreter and run;
  clsBrainPlusInterpreter* bpi=new clsBrainPlusInterpreter(prog);
  bpi->evaluate();
  delete bpi;
  
  return 0;
}