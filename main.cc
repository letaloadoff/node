#include "clsBpInterpreter.cc"
#include <stdio.h>

int main ()
{

  // get file
  FILE * pFile = fopen ("99bottles","r");
  char strProg [20000];
  if (pFile == NULL) perror ("Error opening file");
  else {
     if ( fgets (strProg , 20000 , pFile) != NULL )
       puts (strProg);
     fclose (pFile);
   }
   
  clsBrainPlusInterpreter bpi=new clsBrainPlusInterpreter(strProg);
  bpi.evaluate();

  return 0;
};

main();
