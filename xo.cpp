#include <iostream>
using namespace std;
char barande(char ,char ,char ,char ,char ,char ,char ,char ,char );
int main()
{
    char  xy[2], xy11=' ' , xy12=' ' , xy13=' ' , xy21=' ' , xy22=' ' , xy23=' ' , xy31=' ' , xy32=' ' , xy33=' ' ;
    for(int i=1; i<=9; i++)
    {
        cin>>xy[0]>>xy[1];
        if(i%2==1)
        {
            if(xy[0]=='1'&&xy[1]=='1'&&xy11!='x'&&xy11!='o')
                xy11='o';
            else if(xy[0]=='1'&&xy[1]=='2'&&xy12!='x'&&xy12!='o')
                xy12='o';
            else if(xy[0]=='1'&&xy[1]=='3'&&xy13!='x'&&xy13!='o')
                xy13='o';
            else if(xy[0]=='2'&&xy[1]=='1'&&xy21!='x'&&xy21!='o')
                xy21='o';
            else if(xy[0]=='2'&&xy[1]=='2'&&xy22!='x'&&xy22!='o')
                xy22='o';
            else if(xy[0]=='2'&&xy[1]=='3'&&xy23!='x'&&xy23!='o')
                xy23='o';
            else if(xy[0]=='3'&&xy[1]=='1'&&xy31!='x'&&xy31!='o')
                xy31='o';
            else if(xy[0]=='3'&&xy[1]=='2'&&xy32!='x'&&xy32!='o')
                xy32='o';
            else if(xy[0]=='3'&&xy[1]=='3'&&xy33!='x'&&xy33!='o')
                xy33='o';
            else
                i--;
        }
        else
        {
            if(xy[0]=='1'&&xy[1]=='1'&&xy11!='x'&&xy11!='o')
                xy11='x';
            else if(xy[0]=='1'&&xy[1]=='2'&&xy12!='x'&&xy12!='o')
                xy12='x';
            else if(xy[0]=='1'&&xy[1]=='3'&&xy13!='x'&&xy13!='o')
                xy13='x';
            else if(xy[0]=='2'&&xy[1]=='1'&&xy21!='x'&&xy21!='o')
                xy21='x';
            else if(xy[0]=='2'&&xy[1]=='2'&&xy22!='x'&&xy22!='o')
                xy22='x';
            else if(xy[0]=='2'&&xy[1]=='3'&&xy23!='x'&&xy23!='o')
                xy23='x';
            else if(xy[0]=='3'&&xy[1]=='1'&&xy31!='x'&&xy31!='o')
                xy31='x';
            else if(xy[0]=='3'&&xy[1]=='2'&&xy32!='x'&&xy32!='o')
                xy32='x';
            else if(xy[0]=='3'&&xy[1]=='3'&&xy33!='x'&&xy33!='o')
                xy33='x';
            else
                i--;
        }
        cout<<"+---+---+---+"<<endl<<"| "<<xy11<<" | "<<xy12<<" | "<<xy13<<" | "<<endl;
        cout<<"+---+---+---+"<<endl<<"| "<<xy21<<" | "<<xy22<<" | "<<xy23<<" | "<<endl;
        cout<<"+---+---+---+"<<endl<<"| "<<xy31<<" | "<<xy32<<" | "<<xy33<<" | "<<endl;
        cout<<"+---+---+---+"<<endl;
        if(barande(xy11 ,xy12 ,xy13 ,xy21 ,xy22 ,xy23 ,xy31 ,xy32 ,xy33)=='x')
        {
            cout<<"X is winner";
            return 0;
        }
        if(barande(xy11 ,xy12 ,xy13 ,xy21 ,xy22 ,xy23 ,xy31 ,xy32 ,xy33)=='o')
        {
            cout<<"O is winner";
            return 0;
        }
        if(barande(xy11 ,xy12 ,xy13 ,xy21 ,xy22 ,xy23 ,xy31 ,xy32 ,xy33)=='n'
                &&xy11!=' '&&xy12!=' '&&xy13!=' '
                &&xy21!=' '&&xy22!=' '&&xy23!=' '
                &&xy31!=' '&&xy32!=' '&&xy33!=' '
          )
        {
            cout<<"No winner";
            return 0;
        }
    }
    return 0;
}
char barande(char xy11,char xy12,char xy13,char xy21,char xy22,char xy23,char xy31,char xy32,char xy33)
{
    //For X
    if(xy11=='x'&&xy21=='x'&&xy31=='x')
        return 'x';
    if(xy12=='x'&&xy22=='x'&&xy32=='x')
        return 'x';
    if(xy13=='x'&&xy23=='x'&&xy33=='x')
        return 'x';
    if(xy11=='x'&&xy12=='x'&&xy13=='x')
        return 'x';
    if(xy21=='x'&&xy22=='x'&&xy23=='x')
        return 'x';
    if(xy31=='x'&&xy32=='x'&&xy33=='x')
        return 'x';
    if(xy11=='x'&&xy22=='x'&&xy33=='x')
        return 'x';
    if(xy13=='x'&&xy22=='x'&&xy31=='x')
        return 'x';
    //For O
    if(xy11=='o'&&xy21=='o'&&xy31=='o')
        return 'o';
    if(xy12=='o'&&xy22=='o'&&xy32=='o')
        return 'o';
    if(xy13=='o'&&xy23=='o'&&xy33=='o')
        return 'o';
    if(xy11=='o'&&xy12=='o'&&xy13=='o')
        return 'o';
    if(xy21=='o'&&xy22=='o'&&xy23=='o')
        return 'o';
    if(xy31=='o'&&xy32=='o'&&xy33=='o')
        return 'o';
    if(xy11=='o'&&xy22=='o'&&xy33=='o')
        return 'o';
    if(xy13=='o'&&xy22=='o'&&xy31=='o')
        return 'o';
    //None of them
    return 'n';
}



