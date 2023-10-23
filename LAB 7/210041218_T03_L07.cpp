#include<iostream>

using namespace std;

class CurrencyUSD
{
private:
    int usDollars;
    int cents;

public:
    CurrencyUSD (int USD = 0, int _cents = 0)
    {
        usDollars = USD;
        cents = _cents;
    }

    int getDollars()
    {
        return usDollars;
    }

    int getCents()
    {
        return cents;
    }

    friend class CurrencyBDT;
};

class CurrencyEuro
{
private:
    int euros;
    int Cents;

public:
    CurrencyEuro (int _euro = 0, int _Cents = 0)
    {
        euros = _euro;
        Cents = _Cents;
    }

    int getEuros()
    {
        return euros;
    }

    int getCents()
    {
        return Cents;
    }

    friend class CurrencyBDT;
};

class CurrencyBDT
{
private:
    int taka;
    int poisha;

public:
    CurrencyBDT (int tk = 0, int coin = 0)
    {
        taka = tk;
        poisha = coin;
    }

    operator CurrencyUSD()
    {
        float usdAmount = (taka + poisha * 0.01)*0.0091;
        int usDollars = static_cast<int>(usdAmount);
        int cents = static_cast<int>((usdAmount - usDollars) * 100);
        return CurrencyUSD(usDollars, cents);
    }

    operator CurrencyEuro()
    {
        double euroAmount = (taka + poisha * 0.01)*0.0085;
        int euros = static_cast<int>(euroAmount);
        int cents = static_cast<int>((euroAmount - euros) * 100);
        return CurrencyEuro(euros, cents);
    }

    int getTaka()
    {
        return taka;
    }

    int getPoisha()
    {
        return poisha;
    }
};

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    CurrencyBDT bdtAmount(x, y);

    CurrencyUSD usdAmount = bdtAmount;
    CurrencyEuro euroAmount = bdtAmount;

    cout << "Taka: " << bdtAmount.getTaka() << " poisha: " << bdtAmount.getPoisha() <<endl;

    cout << "Dollars: " << usdAmount.getDollars() << " cents: " << usdAmount.getCents() <<endl;
    cout << "Euros: " << euroAmount.getEuros() << " cents: " << euroAmount.getCents() << endl;
}
