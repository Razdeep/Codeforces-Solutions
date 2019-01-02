// https://codeforces.com/problemset/problem/1080/A

// LESSON LEARNED
/*  Moral of the story: float conversions are evil

    int reqd_red_books=ceil((float)reqd_red_sheet/book_sheets);
    int reqd_green_book=ceil((float)reqd_green_sheet/book_sheets);
    int reqd_blue_book=ceil((float)reqd_blue_sheet/book_sheets);
    
    This produces wrong output
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int myDivCeil(int a,int b)
{
    return (a%b)?(a/b+1):(a/b);
}
int main()
{
    int number_of_friends,book_sheets;
    scanf("%d%d",&number_of_friends,&book_sheets);
    int reqd_red_sheet=number_of_friends*2;
    int reqd_green_sheet=number_of_friends*5;
    int reqd_blue_sheet=number_of_friends*8;
    
    int reqd_red_books=myDivCeil(reqd_red_sheet,book_sheets);
    int reqd_green_book=myDivCeil(reqd_green_sheet,book_sheets);
    int reqd_blue_book=myDivCeil(reqd_blue_sheet,book_sheets);

    int totalBooks=(reqd_red_books+reqd_blue_book+reqd_green_book);
    printf("%d\n",totalBooks);
    return 0;
}