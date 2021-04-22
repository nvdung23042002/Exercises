#include <iostream>
#include<cstdlib>
#include <time.h>
#include <string>

using namespace std;

const string WORD_LIST[] = {"a", "about", "all", "also", "and", "as", "at", "be", "because", "but", "by", "can", "come", "could", "day", "do", "even", "find", "first", "for", "from", "get", "give", "go", "have", "he", "her", "here", "him", "his", "how", "I", "if", "in", "into", "it", "its", "just", "know", "like", "look", "make", "man", "many", "me", "more", "my", "new", "no", "not", "now", "of", "on", "one", "only", "or", "other", "our", "out", "people", "say", "see", "she", "so", "some", "take", "tell", "than", "that", "the", "their", "them", "then", "there", "these", "they", "thing", "think", "this", "those", "time", "to", "two", "up", "use", "very", "want", "way", "we", "well", "what", "when", "which", "who", "will", "with", "would", "year", "you", "your"};
const int maxbadGuessWord =7; // so lan doan sai toi da
const string rack[]={
"   ------------    \n"
"   ||             \n"
"   ||             \n"
"   ||           \n"
"   ||          \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||            \n"
"   ||           \n"
"   ||           \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||          0   \n"
"   ||           \n"
"   ||           \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||          0   \n"
"   ||         /  \n"
"   ||           \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||          0   \n"
"   ||         /|  \n"
"   ||           \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||          0   \n"
"   ||         /|\\  \n"
"   ||            \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||          0   \n"
"   ||         /|\\  \n"
"   ||         /   \n"
"   ||              \n"
" ------             \n",
"   ------------    \n"
"   ||          |   \n"
"   ||          0   \n"
"   ||         /|\\  \n"
"   ||         / \\  \n"
"   ||              \n"
" ------             \n"
};

string chooseWord();
char readGuess();
void render_game(string convert_Word, int Badguess_count);
string convertWord(string Word);
bool check_guess_word(string word, char guess);
void after_guess(string & convert_word,string & word, char &guess );

int main()
{
    string word = chooseWord(); // guess word
    string convert_word = convertWord(word); // tu sau khi chuyen doi thanh xau "-"
    int badGuessCount=0; // so lan doan sai
    do
    {
        render_game(convert_word, badGuessCount);
        char guess = readGuess();
        if(check_guess_word(word, guess)== true)
        {
            after_guess(convert_word, word, guess);
        }
        else
        {
            badGuessCount++;
        }
    }while(badGuessCount < maxbadGuessWord and convert_word != word);

     render_game(convert_word, badGuessCount);
     cout << endl;
    if(badGuessCount == maxbadGuessWord)
            cout <<"YOU LOST, THE CORRECT WORD IS: "<< word;
    else
        cout <<"YOU WIN, CONGRATULATION.";
    return 0;
}

// random the word
string chooseWord()
{
    // get the length of array word
    int choose = sizeof(WORD_LIST)/sizeof(string);
    srand(time(0));
    int n = rand() % choose;
    return WORD_LIST[n];
}
void render_game(string convert_Word, int Badguess_count)
{
    cout << convert_Word << endl;
    cout << rack[Badguess_count]<<endl;
    cout <<"The number of wrong guess is: "<< Badguess_count << endl;
}
// input your guess word
char readGuess()
{
    char guess;
    cin >> guess;
    return guess;
}

// convert word you will guess to char '-'
string convertWord(string Word)
{
    // quick function of convert
    string convert = string (Word.size(),'-');
    return convert;
}

// check the guess word
bool check_guess_word(string word, char guess)
{
        if(word.find(guess) == string::npos)
            return false;
        else
            return true;
}

void after_guess(string & convert_word,string & word, char &guess )
{
    for(int i=0; i < word.length(); i++)
    {
        if(word[i]== guess)
            convert_word[i]= guess;
    }
}

