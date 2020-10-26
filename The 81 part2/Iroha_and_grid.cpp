include<cstdio>
int maze[42][42];
bool flag[42][42];
int main()
{
    int h,w,a,b;
    scanf("%d %d %d %d",&h,&w,&a,&b);
    if(h==a) // If you can not go and end points coincide, it outputs 0
    {
        printf("0\n");
        return 0;
    }
    flag[1][1]=1;// End Marker, that they can not go
    for(int i=h-a+1;i<=h;i++)
    {
        for(int j=1;j<=b;j++) // will not go area assigned to 1
        {
            flag[i][j]=1;
        }
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(flag[i][j]==1)  // If this point can not go, this point will be assigned to the program number 0
                maze[i][j]=0;
            else if(i==1||j==1) // consider boundary
                maze[i][j]=1;
            else
                maze[i][j]=(maze[i-1][j]+maze[i][j-1])%1000000007;
                // recursive walked the walk each point, then modulo
        }
    }
    printf("%d\n",maze[h][w]%1000000007);
    return 0;
}
