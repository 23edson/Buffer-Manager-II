#include "func.h"

int main(){

    //main demonstrativa, para mais detalhes, consulte arquivo LEIAME.txt e func.c
    struct page *buffer = inicializaBuffer();

	struct CAMPOS *campos = leMetadados("meta.dat"); // Traz pra memória o esquema dos dados

    carregaDados(buffer, "data.dat", "meta.dat", campos);

    //showBuffer(buffer, campos, "meta.dat");

    showTupleBuffer(buffer, campos, "meta.dat", 1, 2);


    return 0;
}
