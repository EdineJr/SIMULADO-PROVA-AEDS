# include  < iostream >
# include  < locale >
# include  < math.h >
// EDINEJR

usando  espa�o para nome  std ;

float  PesoIdeal ( float h, char sexo)
{
    setlocale (LC_ALL, " portugu�s " );
    PI flutuante ;

    if (sexo == ' F ' || sexo == ' f ' )
    {
        PI = ( 62,1 * h) - 44,7 ;
        cout << " \ n " ;
        cout << " O seu peso ideal �: " << PI << endl;
    }
    sen�o  se (sexo == ' M ' || sexo == ' m ' )
    {
        PI = ( 72,7 * h) - 58 ;
        cout << " \ n " ;
        cout << " O seu peso ideal �: " << PI << endl;
    }

    outro
    {
        cout << " \ n " ;
        cout << " N�o foi poss�vel calcular seu peso ideal (Sexo inv�lido " << endl;
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