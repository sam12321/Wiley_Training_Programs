ostream& operator<<(ostream& out, int (*ptr)[5][5])
{
  int *temp = (int *) ptr[0];
  for(int i=0, j=1; i < 5; i++)
  {
    for(int j=0; j < 5; j++)
     cout << *(temp + (i * sizeof(int) + j)) << "\t";
    cout << endl;
  }
  return out;
}

