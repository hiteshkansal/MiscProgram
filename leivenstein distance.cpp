#include<iostream>
#include<string.h>

using namespace std;
int LevenshteinDistance(char s[], char t[], int m, int n)
{
  // for all i and j, d[i,j] will hold the Levenshtein distance between
  // the first i characters of s and the first j characters of t;
  // note that d has (m+1)*(n+1) values
  int d[m+1][n+1];

//  clear all elements in d // set each element to zero

  // source prefixes can be transformed into empty string by
  // dropping all characters
  for(int i=0;i<=m;i++)
    {
      d[i][0] = i;
    }

  // target prefixes can be reached from empty source prefix
  // by inserting every characters
  for(int i=0;i<=n;i++)
    {
      d[0][i] = i;
    }

  for(int j=0;j<=n;j++)
    {
      for(int i=0;i<=m;i++)
        {
          if(s[i] == t[j])
            d[i][j] = d[i-1][j-1];       // no operation required
          else
            d[i][j] = min(d[i-1][j] + 1, min(d[i][j-1] + 1,  d[i-1][j-1] + 1));
        }
    }

  return d[m][n];
}

int main()
{
    char *a = "Picture Quality";
    char *b = "Picture";
    int m = strlen(a);
    int n = strlen(b);
    cout<<LevenshteinDistance(a,b,m,n);
    return 0;
}
