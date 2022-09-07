
/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string str) {
  //input = "01:30:30PM"
   int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
   string s="";
    // If time is in "AM"
    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            s += "00";
            for (int i=2; i <= 7; i++)
                s += str[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                 s += str[i];
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
             s += "12";
            for (int i=2; i <= 7; i++)
                s += str[i];
        }
        else
        {
            hh = hh + 12;
            s += to_string(hh);
            for (int i=2; i <= 7; i++)
                 s +=str[i];
        }
    } 
    return s;
}
