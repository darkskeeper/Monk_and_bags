#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while( T-- )
    {
        priority_queue <int> bags;
        int Nbag, Ncand, Teat, Neat = 0;
        cin >> Nbag >> Teat;
        for (int i = 0; i < Nbag; i++)
        {
            cin >> Ncand;
            bags.push(Ncand);
        }
        while ( Teat-- )
        {
            Ncand = bags.top();
            bags.pop();
            Neat += Ncand;
            bags.push(Ncand/2);
        }
        cout << Neat << endl;
    }
    system ("pause");
    return 0;
}
