# include  < iostream >
# include  < locale >
# include  < math.h >
// EDINEJR

usando  espaço para nome  std ;

float  PesoIdeal ( float h, char sexo)
{
    setlocale (LC_ALL, " português " );
    PI flutuante ;

    if (sexo == ' F ' || sexo == ' f ' )
    {
        PI = ( 62,1 * h) - 44,7 ;
        cout << " \ n " ;
        cout << " O seu peso ideal é: " << PI << endl;
    }
    senão  se (sexo == ' M ' || sexo == ' m ' )
    {
        PI = ( 72,7 * h) - 58 ;
        cout << " \ n " ;
        cout << " O seu peso ideal é: " << PI << endl;
    }

    outro
    {
        cout << " \ n " ;
        cout << " Não foi possível calcular seu peso ideal (Sexo inválido " << endl;
    }


}

int  main ()
{
    flutuar h;
    char sexo;

    cout << " Digite a sua altura " << endl;
    cin >> h;
    cout << " Digite o seu sexo (feminino ou masculino) " << endl;
    cin >> sexo;
    Peso Ideal (h, sexo);
    retornar  0 ;
}