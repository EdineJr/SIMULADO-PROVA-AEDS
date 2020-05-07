# include  < iostream >
# include  < math.h >
# include  < locale >
// EDINEJR
// PELL

usando  espaço para nome  std ;
int  Pell ( int n)
{
    se (n == 0 )
    {
        retornar  0 ;
    }
     caso contrário, se (n == 1 )
    {
        retornar  1 ;
    }
    outro
    {
        retornar  2 * Pell (n- 1 ) + Pell (n- 2 );
    }
}
int  main ()
{
    setlocale (LC_ALL, " português " );
    int n;
    cout << " Digite qual termo da sequência de Pell você deseja visualizar " << endl;
    cout << " Obs: A sequência começa do 0 " << endl;
    cin >> n;
    cout << " O " << n << " º termo da sequência de Pell é: " << Pell (n) << endl;
    retornar 0;
}