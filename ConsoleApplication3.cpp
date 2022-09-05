

#include <iostream>
using namespace std;

int Limit = 12;
void TableHeader()
{
  
    cout << "\n\t\t\t\t\t\tMultipliction Table\n\n";
    cout << "\t";
    for (int i = 1;i <= 10;i++)
            cout << i << "\t";     
    cout << "\n____________________________________________________________________________________\n";
}
string ColomSepertor(int i)
{
    if (i < 10)
        return "    |";
    else
        return "   |";
}
void PrintMultiplictionTable()
{
    cout << "Enter the Limit Of Multipliction Table?" << endl;
    cin >> Limit;
    TableHeader();
    for (int i = 1;i <= Limit;i++)
    {
        cout << i << ColomSepertor(i)<<"\t";
        for (int j = 1;j <= 10;j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    cout << "____________________________________________________________________________________\n";
    
}
int main()
{
   
    system("color 1F");
     PrintMultiplictionTable();
}