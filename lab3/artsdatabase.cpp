#include <iostream>

using namespace std;

struct Music
{
    string title;
    string artist;
    string genre;
    int year;
};
struct Movies 
{
    string title;
    string director;
    int year;
    string genre;
};
void getMusicInfo(Music& music)
{
    cout << "Enter music title: ";
    getline(cin, music.title);
    cout << "Enter artist: ";
    getline(cin, music.artist);
    cout << "Enter genre: ";
    getline(cin, music.genre);
    cout << "Enter year: ";
    cin >> music.year;
    cin.ignore(); 
};
void getMovieInfo(Movies& movie)
{
    cout << "Enter movie title: ";
    getline(cin, movie.title);
    cout << "Enter director: ";
    getline(cin, movie.director);
    cout << "Enter genre: ";
    getline(cin, movie.genre);
    cout << "Enter year: ";
    cin >> movie.year;
    cin.ignore(); 
};
void printMusicInfo(const Music& music)
{
    cout << "Music information:" << endl;
    cout << "Music Title: " << music.title << endl;
    cout << "Artist: " << music.artist << endl;
    cout << "Genre: " << music.genre << endl;
    cout << "Year: " << music.year << endl;
};
void printMovieInfo(const Movies& movie)
{
    cout << "Movie information:" << endl;
    cout << "Movie Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Genre: " << movie.genre << endl;
    cout << "Year: " << movie.year << endl;
};
int main()
{
    Movies movie1;
    Music music1;
    getMovieInfo(movie1);
    printMovieInfo(movie1);
    getMusicInfo(music1);
    printMusicInfo(music1);

}