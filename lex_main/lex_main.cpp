#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "../lex/interface/lex_factory.h"
#include "../lex/data/data_repository.h"
#include "../lex/execution/executor.h"
#include "../lex/tree.h"
#include "../lex/type.h"
using namespace lex;

int main()
{
    LexInterface *lex = LexFactory::CreateLexInterface();
    lex->Compiler("in.txt");
    Program p = DataRepository::LoadProgram();
    Executor executor(p);
    executor.Execute();
    return 0;
}
