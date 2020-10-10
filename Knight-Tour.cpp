#include<iostream>
#include<array>
#include<iomanip>
using namespace std;
void moves(int,int);
const size_t column=8;
const size_t row=8;
array<array<int,column>,row> chessboard={};
int main()
{
	cout<<"This is a chess board\n";
	for(unsigned int i=0;i<chessboard.size();i++)
	{
		for(unsigned int j=0;j<chessboard[i].size();j++)
		{	
			cout<<setw(5)<<chessboard[i][j];
		}
	cout<<endl<<endl;
	}
	cout<<"Enter initial position of knight:";
	int user_row=0,final_row=0;
	int user_col=0,final_col=0;
	cin>>user_row>>user_col;
	int init_row=user_row-1;
	int init_col=user_col-1;
	chessboard[init_row][init_col]='K';
	cout<<"This is pattern of moving of a knight(Let 0 is initial position of knight)\n";
	moves(init_row,init_col);
	int position=1;
	for(unsigned int l=0;l<64;l++)
	{
		for(unsigned int i=0;i<chessboard.size();i++)
		{
			for(unsigned int j=0;j<chessboard.size();j++)
			{
				if(chessboard[i][j]==position)
				{
					init_row=i;
					init_col=j;
					position++;
					moves(init_row,init_col);
				}
			}
		}
	}
	chessboard[user_row-1][user_col-1]=0;
	for(unsigned int i=0;i<chessboard.size();i++)
	{
		for(unsigned int j=0;j<chessboard[i].size();j++)
		{	
			cout<<setw(5)<<chessboard[i][j];
		}
	cout<<endl<<endl;
	}
}
void moves(int init_row, int init_col)
{
	static int count=0;
	int final_row=0;
	int final_col=0;
	final_row=init_row-1;
	final_col=init_col-2;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
	final_row=init_row-2;
	final_col=init_col-1;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;	
	final_row=init_row-2;
	final_col=init_col+1;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
	final_row=init_row-1;
	final_col=init_col+2;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
	final_row=init_row+1;
	final_col=init_col+2;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
	final_row=init_row+2;
	final_col=init_col+1;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
	final_row=init_row+2;
	final_col=init_col-1;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
	final_row=init_row+1;
	final_col=init_col-2;
	if((chessboard[final_row][final_col]==0)&&(final_row>=0)&&(final_col>=0)&&(final_row<=7)&&(final_col<=7))
	chessboard[final_row][final_col]=++count;
}
