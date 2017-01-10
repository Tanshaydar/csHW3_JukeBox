#include <iostream>

using namespace std;

class JukeBox {
public:
    class Track {
    public:
        class Musician {
        public:
            Musician(string musicianFirstName, string musicianLastName, string musicianRole);
            ~Musician();

            string musicianFirstName;
            string musicianLastName;
            string musicianRole;        //singer,	composer,	or	lyricist
            Musician *next;
        };

        Track(string trackTitle, int releaseYear);
        ~Track();

        void addMusician(string musicianFirstName, string musicianLastName, string musicianRole);
        void removeMusician(string trackTitle, string musicianFirstName, string musicianLastName);
        void show();

        Track *next;
        string trackTitle;
        int releaseYear;
    private:
        Musician *headMusician;
        int musicianSize;
    };

    JukeBox();

    ~JukeBox();

    void addTrack(string trackTitle, int releaseYear);

    void removeTrack(string trackTitle);

    void addMusician(string trackTitle, string musicianFirstName,
                     string musicianLastName, string musicianRole);

    void removeMusician(string trackTitle, string musicianFirstName,
                        string musicianLastName);

    void showAllTracks();

    void showTrack(string trackTitle);

    void showMusicianRoles(string musicianFirstName,
                           string musicianLastName);

    Track *findTrackByTitle(string trackTitle);

private:
    Track *headTrack;
    int size;
};