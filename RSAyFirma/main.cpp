#include "rsa.h"
int main()
{
    rsa objeto(8);
    //cout<<objeto.gete()<<endl<<objeto.getd()<<endl<<objeto.getn()<<endl<<objeto.getp()<<endl<<objeto.getq()<<endl;
    //rsa objeto(conv<ZZ>("151"),conv<ZZ>("41693"),conv<ZZ>("26791"),conv<ZZ>("41693"));
    //cout<<objeto.cifrado("LOSDIOSESSONREALESSICREESENELLOS");
    cout<<objeto.descifrado("04431365761414421700039851249402250149373280307427263141845908725120893850619020326333782921765092862367819224033863965301213406631569311467");
}
