#include "Card.h"


Card::Card()
{
    card_number = 0;
}

Card::~Card()
{
}

long int Card::get_card_number(){
    return card_number;
}

bool Card::make_payment(){
    if(total_amount < 0.01){
        return true;
    }
    cout << "\n-----------------------"<< endl;
    cout << "If you wish to cancel the payment please enter -1" << endl;
    cout << "You have to pay: " << total_amount << endl;
    cout << "Card number: ";
    cin >> card_number;
    cin_check_number();
    if(card_number == -1){
        return false;
    }

    if(is_valid(card_number)){
        cout << "\n" << card_number << " is valid";
        Payment::make_payment();
        return true;
    }
    cout << "\n" << card_number << " is invalid";
    //cout << "\n====================="<< endl;
    return false;
}

bool Card::with_card(){
    return true;
}


int Card::getDigit(int number)
{
  if (number < 9)
    return number;
  return number / 10 + number % 10;
}
 
// Return the number of digits in d
int Card::getSize(long d)
{
  string num = to_string(d);
  return num.length();
}
 
// Return the first k number of digits from
// number. If the number of digits in number
// is less than k, return number.
long Card::getPrefix(long number, int k)
{
  if (getSize(number) > k)
  {
    string num = to_string(number);
    return stol(num.substr(0, k));
  }
  return number;
}
 
// Return true if the digit d is a prefix for number
bool Card::prefixMatched(long number, int d)
{
  return getPrefix(number, getSize(d)) == d;
}
 
// Get the result from Step 2
int Card::sumOfDoubleEvenPlace(long int number)
{
  int sum = 0;
  string num = to_string(number) ;
  for (int i = getSize(number) - 2; i >= 0; i -= 2)
    sum += getDigit(int(num[i] - '0') * 2);
 
  return sum;
}
 
// Return sum of odd-place digits in number
int Card::sumOfOddPlace(long number)
{
  int sum = 0;
  string num = to_string(number) ;
  for (int i = getSize(number) - 1; i >= 0; i -= 2)
    sum += num[i] - '0';
  return sum;
}
 
// Return true if the card number is valid
bool Card::is_valid(long int number)
{
  return (getSize(number) >= 13 &&
          getSize(number) <= 16) &&
    (prefixMatched(number, 4) ||
     prefixMatched(number, 5) ||
     prefixMatched(number, 37) ||
     prefixMatched(number, 6)) &&
    ((sumOfDoubleEvenPlace(number) +
      sumOfOddPlace(number)) % 10 == 0);
}
/*
long long int get_card_number(){
    return card_number;
}

void set_card_number(long long int number){
    card_number = number;
}
*/