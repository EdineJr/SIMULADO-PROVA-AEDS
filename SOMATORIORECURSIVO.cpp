# include  < iostream >
# include  < locale >
// EDINEJR
// SomatorioReecursivo
usando  espaço para nome  std ;
int  soma ( int n)
{
    int resultado;

    se (n == 1 )
    {
        retornar  1 ;
    }
    outro
    {
        resultado = n + soma (n- 1 );
    }
    return resultado;
}


int  main ()
{
    int n;
    cout << " Digite o valor de n " << endl;
    cin >> n;
    cout << " Resultado: " << soma (n) << endl;
    retornar  0 ;
}