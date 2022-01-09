#include <iostream>

using namespace std;
class queuee
{
private:
    int *fronts;
    int *rear;
    int *arr;
public:

    queuee()
    {
        fronts=rear=NULL;
        arr=new int[5];
    }
    void enque()
    {
        if(fronts==NULL && rear==NULL)
        {
            fronts=rear=arr;
            cout<<"What you want to add ?";
            cin>>*fronts;
            return;

        }
        if(fronts==arr && rear==arr+5-1)
        {
            cout<<"Array is full ";
            return;
        }
        if(rear+1==fronts)
        {
            cout<<"Array is full";
            return;
        }
        else
        {
            if(rear==arr+5-1)
            {
                rear=arr;
                if(rear!=fronts)
                {


                cout<<"What you want to add?";
              cin>>*rear;
                return;
                }
                else
                {
                    cout<<"Array is full";
                    return;
                }
            }
            else
            {
                rear++;
                cout<<"What you want to add ?";
                cin>>*rear;
            }
        }
    }
    void deques()
    {
        if(fronts==NULL)
        {
            cout<<"Array is empty ";
            return;
        }
        if(fronts==rear)
        {
            fronts=rear=NULL;
            return;
        }
        if(fronts==arr+5-1)
        {
            fronts=arr;
            return;
        }
        else
        {
            fronts++;
        }

    }
    void print()
    {
        if(fronts==NULL && rear==NULL)
        {
            cout<<"Array is empty";
            return;
        }
        int *temp;
        temp=fronts;
        while(temp!=rear)
        {
            cout<<*temp<<"   ";
            temp++;
            if(temp==arr+5-1 && temp!=rear)
            {
                temp=arr;
                while(temp!=rear)
                {
                    cout<<*temp<<"    ";
                    temp++;
                }
                cout<<*temp<<"    ";
                return;
            }

        }
        cout<<*temp<<"    ";

    }
};

int main()
{
    int i;
    queuee q;
    cout<<"Options : ";
    cin>>i;
    while(i!=4)
    {
        if(i==1)
        {
            q.enque();
        }
        if(i==2)
        {
            q.deques();
        }
        if(i==3)
        {
            q.print();
        }
        cout<<"Options : ";
    cin>>i;
    }
}
