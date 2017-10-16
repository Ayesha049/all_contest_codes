#include<bits/stdc++.h>
using namespace std;

int n;

class SymbolInfo
{
private:
    string name;
    string type;
public:
    SymbolInfo *next;

    void setname(string s)
    {
        name=s;
    }
    void settype(string s)
    {
        type=s;
    }
    string getname()
    {
        return name;
    }
    string gettype()
    {
        return type;
    }
};

class ScopeTable
{
public:
    int id;
    SymbolInfo **arr;
    ScopeTable *parent;
    ScopeTable()
    {
        id=1;
        arr=new SymbolInfo *[n];
        for(int i=0; i<n; i++)
        {
            arr[i]='\0';
        }
    }

    void Insert(string s,string t)
    {
        int a=s[0];
        int hs=(a*13)%n;
        if(arr[hs]=='\0')
        {
            arr[hs]=new SymbolInfo;
            arr[hs]->setname(s);
            arr[hs]->settype(t);
            arr[hs]->next='\0';
            cout<<"Inserted in ScopeTable# "<<id<<" at position "<<hs<<" 0"<<endl;
        }
        else
        {
            SymbolInfo *temp=arr[hs];
            int xx=1;
            while(temp->next!='\0')
            {
                xx++;
                temp=temp->next;
            }
            cout<<"Inserted in ScopeTable# "<<id<<" at position "<<hs<<" "<<xx<<endl;
            SymbolInfo *tt=new SymbolInfo;
            tt->setname(s);
            tt->settype(t);
            temp->next=tt;
            tt->next='\0';
        }
    }

    SymbolInfo *lookup(string s)
    {
        int a=s[0];
        int hs=(a*13)%n;
        if(arr[hs]=='\0')
        {
            //cout<<"not found"<<endl;
            return '\0';
        }
        else
        {
            int xxx=0;
            SymbolInfo *temp=arr[hs];
            while(temp!='\0')
            {
                xxx++;
                if(temp->getname()==s)
                {
                    cout<<s<<" found at pos "<<hs<<" "<<xxx-1<<endl;
                    return temp;
                }
                temp=temp->next;
            }
        }
        //cout<<"not found"<<endl;
        return '\0';
    }
    bool Delete(string s)
    {


        int a=s[0];
        int hs=(a*13)%n;
        if(arr[hs]->getname()==s)
        {
            arr[hs]='\0';
            return true;
        }
        else
        {
            SymbolInfo *temp1=arr[hs];
            SymbolInfo *temp=arr[hs]->next;
            while(temp!='\0')
            {
                if(temp->getname()==s)
                {
                    break;
                }
                temp=temp->next;
                temp1=temp1->next;
            }
            if(temp=='\0')
                return false;
            temp1->next=temp->next;
            delete temp;
        }
        return true;
    }

    void print()
    {
        cout<<"scopetable #"<<id<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<i<<" -->  < ";
            SymbolInfo *temp=arr[i];
            while(temp!='\0')
            {
                cout<<temp->getname()<<" "<<temp->gettype()<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
    ~ScopeTable()
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]!='\0')
                delete arr[i];
        }
    }

};

class SymbolTable
{
public:
    int tableno;
    ScopeTable *table;
    SymbolTable()
    {
        tableno=1;
        table=new ScopeTable;
        table->parent='\0';
        table->id=tableno;
    }

    void EnterScope()
    {
        ScopeTable *temp= new ScopeTable;
        temp->parent=table;
        table=temp;
        tableno++;
        table->id=tableno;
    }

    void ExitScope()
    {
        ScopeTable *temp= table;
        table=table->parent;
        tableno--;
        delete temp;
    }

    void Insert(string s,string t)
    {
        if(table->lookup(s)=='\0')
        {
            table->Insert(s,t);
        }
        else
            cout<<s<<" "<<t<<" already exists in current ScopeTable"<<endl;
    }

    bool Remove(string s)
    {
        if(table->lookup(s)!='\0')
        {
            table->Delete(s);
            cout<<"Deleted entry from current ScopeTable"<<endl;
            return true;
        }
        else
        {
            cout<<"not found"<<endl;
            return false;
        }
        //cout<<s<<" "<<t<<" already exists in current ScopeTable"<<endl;
    }

    SymbolInfo *lookup(string s)
    {
        ScopeTable *temp=table;
        while(temp!='\0')
        {
            SymbolInfo *tt;
            tt=temp->lookup(s);
            if(tt!='\0')
                return tt;
            temp=temp->parent;
        }
        cout<<"Not found"<<endl;
        return '\0';
    }

    void printcurr()
    {
        table->print();
    }
    void printall()
    {
        ScopeTable *temp=table;
        while(temp!='\0')
        {
            temp->print();
            cout<<endl;
            temp=temp->parent;
        }
    }
    ~SymbolTable()
    {
        if(table!='\0')
            delete table;
    }

};



int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    cin>>n;
    SymbolTable obj;
    char ss;
    while(cin>>ss)
    {
        if(ss=='I')
        {
            string s1,s2;
            cin>>s1>>s2;
            cout<<ss<<" "<<s1<<" "<<s2<<endl;
            obj.Insert(s1,s2);
            cout<<endl;

        }
        else if(ss=='L')
        {
            string s;
            cin>>s;
            cout<<ss<<" "<<s<<endl;
            obj.lookup(s);
            cout<<endl;
        }
        else if(ss=='D')
        {
            string s;
            cin>>s;
            cout<<ss<<" "<<s<<endl;
            obj.Remove(s);
            cout<<endl;
        }
        else if(ss=='P')
        {
            char ch;
            cin>>ch;
            cout<<ss<<" "<<ch<<endl;
            if(ch=='C')
                obj.printcurr();
            else if(ch=='A')
                obj.printall();
            cout<<endl;

        }
        else if(ss=='S')
        {
            cout<<ss<<endl;
            obj.EnterScope();
            cout<<endl;

        }
        else if(ss=='E')
        {
            cout<<ss<<endl;
            obj.ExitScope();
            cout<<endl;

        }
    }


}
