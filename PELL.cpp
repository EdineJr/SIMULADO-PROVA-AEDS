# include  < iostream >
# include  < math.h >
# include  < locale >
// EDINEJR
// PELL

usando  espa�o para nome  std ;
int  Pell ( int n)
{
    se (n == 0 )
    {
        retornar  0 ;
    }
     caso contr�rio, se (n == 1 )
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
    setlocale (LC_ALL, " portugu�s " );
    int n;
    cout << " Digite qual termo da sequ�ncia de Pell voc� deseja visualizar " << endl;
    cout << " Obs: A sequ�ncia come�a do 0 " << endl;
    cin >> n;
    cout << " O " << n << " � termo da sequ�ncia de Pell �: " << Pell (n) << endl;
    retornar 0;
}