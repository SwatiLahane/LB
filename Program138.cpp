    //problems on prattern
    #include<iostream>
    using namespace std;

    class Pattern
    {
        private:
        int iRow;
        int iCol;

        public:
        Pattern(int X, int Y) //parameterised constructor
        {
            iRow = X;
            iCol = Y;
        }

        void Display()
        {
            //logic
        }

    };

    int main()
    {
    int iValue1 = 0, iValue2 = 0;
    cout<<"Enter Number of Rows : "<<endl;
    cin>>iValue1;
    
    cout<<"Enter Number of Colms : "<<endl;
    cin>>iValue2;
    
    Pattern pobj(iValue1,iValue2);

    pobj.Display();

        return 0;
    }
