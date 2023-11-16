#include<bits/stdc++.h>
using namespace std;
#define n 8
char board[n][n];
void printBoard(){
    for(auto &i:board){
        for(auto &j:i){
            cout<<j<<"|";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool isvalid(int r,int c){
    // vertical
    for(int row=0;row<n;++row){
        if(board[row][c]=='Q') return false;
    }
    // horizontal
    for(int col=c;col<n;++col){
        if(board[r][col]=='Q') return false;
    }
    // upper right
    for(int col=c,row=r;col<n && row>=0;++col,--row){
        if(board[row][col]=='Q') return false;
    }
    // upper left
    for(int row=r,col=c;row>=0 && col>=0;--row,--col){
        if(board[row][col]=='Q') return false;
    }
    // down left
    for(int row=r,col=c;col>=0 && row<n;++row,--col){
        if(board[row][col]=='Q') return false;
    }
    // down right
    for(int row=r,col=c;row<n && col<n;++row,++col){
        if(board[row][col]=='Q') return false;
    }
    return true;
}
bool place(int r){
    if(r>=n){
        printBoard();
        return true;
    }
    for(int c=0;c<n;++c){
        if(isvalid(r,c)){
            board[r][c]='Q';
            place(r+1);
        }
        board[r][c]=' ';
    }
}

int main(){
    // for(auto &i:board){
    //     for(auto &j:i){
    //         j='a';
    //     }
    // }
    memset(board,' ',sizeof(board));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    place(0);
    
    return 0;
}