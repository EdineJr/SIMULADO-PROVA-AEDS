# include  < iostream >
# include  < locale >
// EDINEJR

usando  espa�o para nome  std ;

long  int  fatorial ( long  int n)
{
    setlocale (LC_ALL, " portugu�s " );
    long  int fat = 0 ;
    gordura = n;
    for ( long  int i = 1 ; i <n; i ++)
    {
        gordura * = i;
    }
    cout << " O Fatorial de " << n << " �: " << gordura;
}
int  main ()
{
    long  int n = 0 ;
    cout << " Digite um n�mero para calcular seu fatorial " << endl;
    cin >> n;
    fatorial (n);
    retornar  0 ;
}