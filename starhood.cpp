#include "starhood.h"

branche::branche()
{
    head=NULL;
    tail=NULL;
}

starhood ::starhood(){
head=NULL;
tail=NULL;
Count=0;
cnt=0;
 found=false;
}

void starhood::inb()
{
    string nm;string mr;int id;
    branche * qq=new branche;
	cout<<"Please enter the branche ID  ";
    cin>>id;
    qq->id=id;
	cout<<"please enter the branche name  ";
    cin>>nm;
    qq->name=nm;
	cout<<"please enter the manger name  ";
    cin>>mr;
    qq->manger=mr;
	cout<<"\n\n\n";
    qq->next=NULL;
    if (head==NULL||tail==NULL)
        head=tail=qq;
    else
        {
        tail->next=qq;
        tail=qq;
        }
	Count++;
}


void starhood:: inh()
{
    string nm;string ad;int id;int bl;
    int x;
    do{
    cout<<"Enter the bank id u wanna add the holders to \n";
     cin>>x;
     branche *q=head;
     holder * qq=new holder;
     for(int i =0;i<Count;i++)
     {

         if (x==q->id)
         {   found=true;
		     cout<<"Please enter the Holder ID   ";
              cin>>id;
              qq->id=id;
			  cout<<"please enter the Holder name  "; 
              cin>>nm;
              qq->name=nm;
			  cout<<" please enter the holder balance  ";
              cin>>bl;
			 
              qq->blance=bl;
			 cout<<" please enter the holder address  ";
              cin>>ad;
              qq->address=ad;

              qq->brancheid=x;
			  cout<<"\n\n\n";
              qq->next=NULL;
            if (temp.head==NULL||temp.tail==NULL)
                  temp.head=temp.tail=qq;

            else
                {
                   temp.tail->next=qq;
                   temp. tail=qq;
                }
                 break;


         }
         else
            q=q->next;

     }
    }while (!found);


	cnt++;
}

void starhood::search_by_name()
{
	string x;
	cout<<"Enter the name of the holder  ";
	cin>>x;
	cout<<"Holder ID       Name\t Blance\t Address \n";
	holder *temp1=temp.head;
	while(temp1!=NULL)
	{
		if (temp1->name==x)
			cout<<temp1->id<<"    "<<temp1->name<<"    "<<temp1->blance<<"    "<<temp1->address<<"    "<<"In bank id Number "<<temp1->brancheid<<"\n";
		temp1=temp1->next;
	}


}

void starhood::update_holder_info()
{
    int x,y;
    bool done=false;
     cout<<"In which Branch id the Holder is   ";
     cin>>y;
    cout<<"Enter the Holder id you wanna update  ";
    cin>>x;
    holder *temp1=temp.head;
    while (temp1!=NULL&&!done)
    {
        if (temp1->id==x&&temp1->brancheid==y)
        {
            cout<<"Enter the Holder new data \n Name\t Blance\t address\n";
            cin>>temp1->name>>temp1->blance>>temp1->address;
            done=true;
        }
        temp1=temp1->next;


    }

}

void starhood::sort_by_blanced()
{
    int tmp;
    string tmb;
    holder *temp1=temp.head;
    for (int i=0;i<cnt ;i++)
    {
        while (temp1->next)
		//for (int j =0;j<cnt;j++)
        {
			if (temp1->blance<temp1->next->blance)
            {
                //sort id
                tmp=temp1->id;
                temp1->id=temp1->next->id;
                temp1->next->id=tmp;
                //sort name
                tmb=temp1->name;
                temp1->name=temp1->next->name;
                temp1->next->name=tmb;
                //sort blance

                tmp=temp1->blance;
                temp1->blance=temp1->next->blance;
                temp1->next->blance=tmp;

                // sort address

                tmb=temp1->address;
                temp1->address=temp1->next->address;
                temp1->next->address=tmb;

				//sort branche id 
				tmp=temp1->brancheid;
                temp1->brancheid=temp1->next->brancheid;
                temp1->next->brancheid=tmp;

                temp1=temp1->next;
            }
            else temp1=temp1->next;
        }
        temp1=temp.head;
    }
	displayhsorted ();

}

void starhood::sort_by_blancea()
{
    int tmp;
    string tmb;
    holder *temp1=temp.head;
    for (int i=0;i>cnt ;i++)
    {
        while (temp1->next)
        {
            if (temp1->blance<temp1->next->blance)
            {
                //sort id
                tmp=temp1->id;
                temp1->id=temp1->next->id;
                temp1->next->id=tmp;
                //sort name
                tmb=temp1->name;
                temp1->name=temp1->next->name;
                temp1->next->name=tmb;
                //sort blance

                tmp=temp1->blance;
                temp1->blance=temp1->next->blance;
                temp1->next->blance=tmp;

                // sort address

                tmb=temp1->address;
                temp1->address=temp1->next->address;
                temp1->next->address=tmb;

                temp1=temp1->next;
            }
            else temp1=temp1->next;
        }
        temp1=temp.head;
    }
	displayhsorted ();

}

void starhood::displayb ()
{
    branche *temp=head;
	cout<<"Branche ID    Name\t Manger \n";
    //while(temp!=NULL||)
	for(int i =0;i<Count;i++)
    {
        cout <<temp->id<<"      "<<temp->name<<"\t "<<temp->manger<<"   \n";
        temp=temp->next;
    }


}

void starhood::displayb_by_id ()
{
    cout<<"Enter the bank id u wanna show  ";
    int x;
    cin>>x;
     branche *temp=head;
    while(temp!=NULL)
    {
        if (x==temp->id)
        {
			cout<<"Branche ID    Name\t Manger \n";
        cout <<temp->id<<"      "<<temp->name<<"\t "<<temp->manger<<"   \n";
        break;
        }
        else
        temp=temp->next;
    }

}


void starhood::delh()
{
    holder *temp1=temp.head;
    cout <<"Enter the branch id u wanna delete the holder from ";
    int y;
    cin>>y;
    cout<<"Enter the id of the holder u wanna delete ";
    int x;
    cin>>x;
    while (temp1!=NULL)
    {
        if(x==temp1->id&&temp1==temp.head&&y==temp1->brancheid)
        {
            temp.head=temp.head->next;
            delete temp1;
			cnt--;
            break;
        }
        else if(temp1==temp.tail&&y==temp1->brancheid&&x==temp1->id)
        {
            int gerl=0;
            temp1=temp.head;
            while (temp1!=NULL)
            {gerl++;
			temp1=temp1->next;
			}
            temp1=temp.head;
            for (int i=0;i<gerl-1;i++)
            {
                temp1=temp1->next;
            }
            holder *temp2=temp1;
            temp1=temp.tail;
            temp.tail=temp2;
            temp.tail->next=NULL;
            delete temp1;

			cnt--;
             break;
        }
		else if(y==temp1->brancheid&&x==temp1->id)
		{
			int gerl=0;
			holder *first=temp.head;
			holder *last =temp.head;
			holder *tmp =temp.head;
			while(tmp->id!=x)
			{
				gerl++;
				tmp=tmp->next;
			}
			for (int i =0;i<gerl-1;i++)
				first=first->next;
			last=tmp->next;
			first->next=last;
			delete temp1;
			cnt--;
			break;
		}
        temp1=temp1->next;
    }


}


void starhood::del_B_h(int y)
{
    holder *temp1 =temp.head;

    while (temp1!=NULL)
    {
        if(temp1==temp.head&&y==temp1->brancheid)
        {
            temp.head=temp.head->next;
            delete temp1;
			cnt--;
            break;
        }
        else if(temp1==temp.tail&&y==temp1->brancheid)
        {
            int gerl=0;
            temp1=temp.head;
            while (temp1!=NULL)
            {gerl++;
			temp1=temp1->next;
			}
            temp1=temp.head;
            for (int i=0;i<gerl-1;i++)
            {
                temp1=temp1->next;
            }
            holder *temp2=temp1;
            temp1=temp.tail;
            temp.tail=temp2;
            temp.tail->next=NULL;
            delete temp1;

			cnt--;
             break;
        }
		else if(y==temp1->brancheid)
		{
			int gerl=0;
			holder *first=temp.head;
			holder *last =temp.head;
			holder *tmp =temp.head;
			while(tmp->id!=y)
			{
				gerl++;
				tmp=tmp->next;
			}
			for (int i =0;i<gerl-1;i++)
				first=first->next;
			last=tmp->next;
			first->next=last;
			delete temp1;
			cnt--;
			break;
		}
        temp1=temp1->next;
    }


}


void starhood::delb()
{
    branche *temp1=head;
    holder *temp2=temp.head;
    cout <<"Enter the branch id u wanna delete the holder from ";
    int y;
    cin>>y;

    while (temp1!=NULL)
    {
        if(y==temp1->id&&temp1==head)
        {
            head=head->next;

            delete temp1;

			Count--;
            break;
        }
        else if(temp1==tail&&y==temp1->id)
        {
            int gerl=0;
            temp1=head;
            while (temp1!=NULL)
            {gerl++;
			temp1=temp1->next;
			}
            temp1=head;
            for (int i=0;i<gerl-1;i++)
            {
                temp1=temp1->next;
            }
            branche *temp2=temp1;
            temp1=tail;
            tail=temp2;
            tail->next=NULL;

            delete temp1;

			Count--;
             break;
        }
		else if(y==temp1->id)
		{
			int gerl=0;
			branche *first=head;
			branche *last =head;
			branche *tmp =head;
			while(tmp->id!=y)
			{
				gerl++;
				tmp=tmp->next;
			}
			for (int i =0;i<gerl-1;i++)
				first=first->next;
			last=tmp->next;
			first->next=last;
			delete temp1;

			Count--;
			break;
		}
        temp1=temp1->next;
    }


}

void starhood::displayh ()
{
     cout<<"Enter the bank id u wanna show the holders of ";
     int x;
     cin>>x;
     branche *q=head;
     holder *qq=temp.head;
	 cout<<"Holder ID       Name\t Blance\t Address \n";
     for(int i =0;i<Count;i++)
     {
         if (x==q->id)
            {
				for(int i = 0;qq!=NULL&&i<cnt;i++)

                {
                    if (x==qq->brancheid)
                    {
						
                    cout<< qq->id<<"\t   "<<qq->name<<"\t "<<qq->blance<<"\t " <<qq->address<<endl;

                    }
                   qq=qq->next;
                }
            }
             else q=q->next;

     }



}

void starhood::displayhsorted ()
{
    
    
     holder *qq=temp.head;
	 cout<<"Holder ID       Name\t Blance\t Address \n";
     for(int i =0;i<Count;i++)
     {
         
           
				for(int i = 0;qq!=NULL&&i<cnt;i++)

                {
                    
                   
						
                    cout<< qq->id<<"\t   "<<qq->name<<"\t "<<qq->blance<<"\t " <<qq->address<<endl;

                    
                   qq=qq->next;
                }
           

     }



}
