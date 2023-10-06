#include <bits/stdc++.h>
using namespace std;
bool vic(vector<int> &vis, vector<vector<char>> &v, char comp)
{

    if (vis[0] == 0 && vis[1] == 0 && vis[2] == -1)
    {
        vis[2] = 0;
        v[0][2] = comp;

        return true;
    }
    if (vis[0] == 0 && vis[2] == 0 && vis[1] == -1)
    {
        vis[1] = 0;
        v[0][1] = comp;

        return true;
    }
    if (vis[1] == 0 && vis[2] == 0 && vis[0] == -1)
    {
        vis[0] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[3] == 0 && vis[4] == 0 && vis[5] == -1)
    {
        vis[5] = 0;
        v[1][2] = comp;

        return true;
    }
    if (vis[3] == 0 && vis[5] == 0 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[4] == 0 && vis[5] == 0 && vis[3] == -1)
    {
        vis[3] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[6] == 0 && vis[7] == 0 && vis[8] == -1)
    {
        vis[8] = 0;
        v[2][2] = comp;

        return true;
    }
    if (vis[6] == 0 && vis[8] == 0 && vis[7] == -1)
    {
        vis[7] = 0;
        v[2][1] = comp;

        return true;
    }
    if (vis[7] == 0 && vis[8] == 0 && vis[6] == -1)
    {
        vis[6] = 0;
        v[2][0] = comp;

        return true;
    }

    if (vis[0] == 0 && vis[3] == 0 && vis[6] == -1)
    {
        vis[6] = 0;
        v[2][0] = comp;

        return true;
    }
    if (vis[0] == 0 && vis[6] == 0 && vis[3] == -1)
    {
        vis[3] = 0;
        v[1][0] = comp;

        return true;
    }
    if (vis[3] == 0 && vis[6] == 0 && vis[0] == -1)
    {
        vis[0] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[4] == 0 && vis[1] == 0 && vis[7] == -1)
    {
        vis[7] = 0;
        v[2][1] = comp;

        return true;
    }
    if (vis[1] == 0 && vis[7] == 0 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[4] == 0 && vis[7] == 0 && vis[1] == -1)
    {
        vis[1] = 0;
        v[0][1] = comp;

        return true;
    }

    if (vis[2] == 0 && vis[5] == 0 && vis[8] == -1)
    {
        vis[8] = 0;
        v[2][2] = comp;

        return true;
    }
    if (vis[2] == 0 && vis[8] == 0 && vis[5] == -1)
    {
        cout<<"t"<<endl;
        vis[5] = 0;
        v[1][2] = comp;

        return true;
    }
    if (vis[5] == 0 && vis[8] == 0 && vis[2] == -1)
    {
        vis[2] = 0;
        v[0][2] = comp;

        return true;
    }

    if (vis[0] == 0 && vis[4] == 0 && vis[8] == -1)
    {
        vis[8] = 0;
        v[2][2] = comp;

        return true;
    }
    if (vis[0] == 0 && vis[8] == 0 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[4] == 0 && vis[8] == 0 && vis[0] == -1)
    {
        vis[0] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[2] == 0 && vis[4] == 0 && vis[6] == -1)
    {
        vis[6] = 0;
        v[2][0] = comp;

        return true;
    }
    if (vis[2] == 0 && vis[6] == 0 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[6] == 0 && vis[8] == 0 && vis[2] == -1)
    {
        vis[2] = 0;
        v[0][2] = comp;

        return true;
    }
}

bool danger(vector<int> &vis, vector<vector<char>> &v, char comp)
{

    if (vis[0] == 1 && vis[1] == 1 && vis[2] == -1)
    {
        vis[2] = 0;
        v[0][2] = comp;

        return true;
    }
    if (vis[0] == 1 && vis[2] == 1 && vis[1] == -1)
    {
        // cout<<"case"<<endl;
        vis[1] = 0;
        v[0][1] = comp;

        return true;
    }
    if (vis[1] == 1 && vis[2] == 1 && vis[0] == -1)
    {
        vis[0] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[3] == 1 && vis[4] == 1 && vis[5] == -1)
    {
        vis[5] = 0;
        v[1][2] = comp;

        return true;
    }
    if (vis[3] == 1 && vis[5] == 1 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[4] == 1 && vis[5] == 1 && vis[3] == -1)
    {
        vis[3] = 0;
        v[1][0] = comp;

        return true;
    }

    if (vis[6] == 1 && vis[7] == 1 && vis[8] == -1)
    {
        vis[8] = 0;
        v[2][2] = comp;

        return true;
    }
    if (vis[6] == 1 && vis[8] == 1 && vis[7] == -1)
    {
        vis[7] = 0;
        v[2][1] = comp;

        return true;
    }
    if (vis[7] == 1 && vis[8] == 1 && vis[6] == -1)
    {
        vis[6] = 0;
        v[2][0] = comp;

        return true;
    }

    if (vis[0] == 1 && vis[3] == 1 && vis[6] == -1)
    {
        vis[6] = 0;
        v[2][0] = comp;

        return true;
    }
    if (vis[0] == 1 && vis[6] == 1 && vis[3] == -1)
    {
        vis[3] = 0;
        v[1][0] = comp;

        return true;
    }
    if (vis[3] == 1 && vis[6] == 1 && vis[0] == -1)
    {
        vis[0] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[4] == 1 && vis[1] == 1 && vis[7] == -1)
    {
        vis[7] = 0;
        v[2][1] = comp;

        return true;
    }
    if (vis[1] == 1 && vis[7] == 1 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[4] == 1 && vis[7] == 1 && vis[1] == -1)
    {
        vis[1] = 0;
        v[0][1] = comp;

        return true;
    }

    if (vis[2] == 1 && vis[5] == 1 && vis[8] == -1)
    {  
        vis[8] = 0;
        v[2][2] = comp;

        return true;
    }
    if (vis[2] == 1 && vis[8] == 1 && vis[5] == -1)
    {
        vis[5] = 0;
        v[1][2] = comp;

        return true;
    }
    if (vis[5] == 1 && vis[8] == 1 && vis[2] == -1)
    {
        vis[2] = 0;
        v[0][2] = comp;

        return true;
    }

    if (vis[0] == 1 && vis[4] == 1 && vis[8] == -1)
    {
      
        vis[8] = 0;
        v[2][2] = comp;

        return true;
    }
    if (vis[0] == 1 && vis[8] == 1 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[4] == 1 && vis[8] == 1 && vis[0] == -1)
    {
        vis[0] = 0;
        v[0][0] = comp;

        return true;
    }

    if (vis[2] == 1 && vis[4] == 1 && vis[6] == -1)
    {
        vis[6] = 0;
        v[2][0] = comp;

        return true;
    }
    if (vis[2] == 1 && vis[6] == 1 && vis[4] == -1)
    {
        vis[4] = 0;
        v[1][1] = comp;

        return true;
    }
    if (vis[6] == 1 && vis[4] == 1 && vis[2] == -1)
    {
        vis[2] = 0;
        v[0][2] = comp;

        return true;
    }
}

void jtech(vector<vector<char>> &v, vector<int> &vis, char comp)
{
    int l = 0;
    for (int i = 0; i < 9; i++)
    {
        if (vis[i ] != -1)
            l++;
    }
    // cout<<l<<endl;

    if (l == 0)
    {
        vis[0] = 0;
        v[0][0] = comp;
    }
    if (l == 1)
    {
        if (vis[4] != -1)
        {
            vis[0] = 0;
            v[0][0] = comp;
        }
        else
        {
            v[1][1] = comp;
            vis[4] = 0;
        }
    }
    if (l == 2)
    {
        if (vis[4] != -1)
        {
            vis[8] = 0;
            v[2][2] = comp;
        }
        else
        {
            if (vis[1] == -1 && vis[2] == -1)
            {
                vis[2] = 0;
                v[0][2] = comp;
            }
            else
            {
                vis[6] = 0;
                v[2][0] = comp;
            }
        }
    }
    if (l == 3)
    {
        bool t = danger(vis,v, comp);
        if(t==true)
         cout<<"yes"<<endl;
        if (t == false)
        {
           
            if(vis[4]==1){
                vis[6]=0;
                v[2][0]=comp;


            }
               else if ((vis[0] == -1 || vis[0] == 0) && (vis[2] == -1 || vis[2] == 0) && (vis[6] == -1 || vis[6] == 0) && (vis[8] == -1 || vis[8] == 0))
                {
                    cout<<"z"<<endl;
                    vis[0] = 0;
                    v[0][0] = comp;
                }
                else
                {
                    if (vis[1] == -1 && vis[7] == -1)
                    {
                        cout<<"t"<<endl;
                        vis[1] = 0;
                        v[0][1] = comp;
                    }
                    else
                    {
                        vis[3] = 0;
                        v[1][0] = comp;
                    }
                
            }
        }
    }
    if (l == 4)
    {
        bool z = vic(vis, v, comp);
        if (z == true)
            return;
              bool t = danger(vis,v, comp);
              if(t==true)
              return ;
//remaining

    if(vis[0]==0&&vis[6]==0)
    {
        vis[8]=0;
        v[2][2]=comp;
    }
    else{
        if(vis[5]==1||vis[8]==1){
            vis[6]=0;
            v[2][0]=comp;

        }
        else{
            vis[8]=0;
            v[2][2]=comp;

        }
    
}
    }
    if (l == 5)
    {
        // cout<<"x"<<endl;
        bool z = vic(vis, v, comp);
        

        if (z == true){
            // cout<<"z"<<endl;
            return;}
        bool t = danger(vis, v, comp);
        if (t == true)
            return;

        for (int i = 0; i < 9; i++)
        {
            if (vis[i] == -1)
            {
                vis[i] = 0;
                v[i / 3][i % 3] = comp;

                break;
            }
        }
    }
    if (l == 6)
            
    {
            cout<<"z"<<endl;

         bool z = vic(vis, v, comp);
        if (z == true){
            cout<<z<<endl;
            return;}
        bool t = danger(vis, v, comp);
        if (t == true){
            cout<<z<<endl;

            return;
            }

        for (int i = 0; i < 9; i++)
        {
            if (vis[i] == -1)
            {
                vis[i] = 0;
                v[i / 3][i % 3] = comp;

                break;
            }
        }
    }
    if (l == 7)
    {
         bool z = vic(vis, v, comp);
        if (z == true)
            return;
        bool t = danger(vis, v, comp);
        if (t == true)
            return;

        for (int i = 0; i < 9; i++)
        {
            if (vis[i] == -1)
            {
                vis[i] = 0;
                v[i / 3][i % 3] = comp;

                break;
            }
        }
    }
    if (l == 8)
    {
         bool z = vic(vis, v, comp);
        if (z == true)
            return;
        bool t = danger(vis, v, comp);
        if (t == true)
            return;

        for (int i = 0; i < 9; i++)
        {
            if (vis[i] == -1)
            {
                vis[i] = 0;
                v[i / 3][i % 3] = comp;

                break;
            }
        }
    }
    return;
}

bool victory(vector<int>&vis)
{  
  if(vis[0]==vis[1]&&vis[1]==vis[2]&&(vis[0]!=-1)){
    return true;
  }
  if(vis[4]==vis[3]&&vis[4]==vis[5]&&(vis[4]!=-1)){
    return true;
  }
  if(vis[6]==vis[7]&&vis[7]==vis[8]&&(vis[6]!=-1)){
    return true;
  }
  if(vis[0]==vis[3]&&vis[3]==vis[6]&&(vis[0]!=-1)){
    return true;
  }
  if(vis[1]==vis[4]&&vis[1]==vis[7]&&(vis[1]!=-1)){
    return true;
  }
  if(vis[2]==vis[5]&&vis[2]==vis[8]&&(vis[2]!=-1)){
    return true;
  }
  if(vis[0]==vis[4]&&vis[4]==vis[8]&&(vis[0]!=-1)){
    return true;
  }
  if(vis[2]==vis[4]&&vis[4]==vis[6]&&(vis[2]!=-1)){
    return true;
  }

    return false;
}
void show(vector<vector<char>> &v)
{
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {

            if (j != 2)
            {
                if (v[i][j] == 'X' || v[i][j] == 'O')
                    cout << v[i][j] << " | ";
                else
                    cout << " "
                         << " | ";
            }
            else
            {
                if (v[i][j] == 'X' || v[i][j] == 'O')
                    cout << v[i][j];
                else
                    cout << " ";
            }
        }
        cout << endl;
        if (i != 2)
        {
            for (int k = 0; k < 5; k++)
            {
                if (k != 4)
                    cout << "--";
                else
                    cout << "---";
            }
        }
        cout << endl;
    }

    return;
}
main()
{
    vector<vector<char>> v(3, vector<char>(3));
    vector<int> vis(9, -1);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x = 3 * i + (j );
            string z = to_string(x);
            v[i][j] = z[0];
        }
    }
    cout << "Choose 0 for UR turn and 1 for SJHA" << endl;

    int n;
    cin >> n;
    int l;
    cout << "Choose 0 for 'O' and 1 for 'X'" << endl;
    cin >> l;
    char player = 'X';
    char comp = 'O';
    if (l == 0)
    {
        player = 'O';
        comp = 'X';
    }

    int z = 0;
    while (z < 9)
    {

        if (n == 0)
        {
            
            
            cout << "choose the no from (0 to 8 that are not picked up) to place ur mark" << endl;
            int m;
            cin >> m;
            int x = (m ) / 3;
            int y = (m ) % 3;
            vis[m ] = 1;

            v[x][y] = player;
            if (victory(vis))
            {
                cout << "U WON THE GAME" << endl;
                return 0;
            }

            n = 1;
            show(v);
        }
        else
        {
            jtech(v, vis, comp);
            cout<<endl<<endl<<"srjha has marked now ur turn"<<endl<<endl;

            show(v);

            if (victory(vis))
            {
                cout << "SJHA WON THE GAME" << endl;
                return 0;
            }

            n = 0;
        }
        z++;
    }
    cout << "DRAW" << endl;
    return 0;
}
