#include "JukeBox.h"

JukeBox::JukeBox() {
    headTrack = NULL;
    size = 0;
}

JukeBox::~JukeBox() {

}

void JukeBox::addTrack(string trackTitle, int releaseYear) {
    Track *track = new Track(trackTitle, releaseYear);
    if (headTrack == NULL) {
        headTrack = track;
    } else {
        Track *current = headTrack;
        while (current) {
            if (current->next == NULL) {
                current->next = track;
                size++;
                cout << "Track is successfully added" << endl;
                return;
            }
            current = current->next;
        }
    }
    size++;
    cout << "Track is successfully added" << endl;
}

void JukeBox::removeTrack(string trackTitle) {

}

void JukeBox::addMusician(string trackTitle, string musicianFirstName, string musicianLastName, string musicianRole) {

}

void JukeBox::removeMusician(string trackTitle, string musicianFirstName, string musicianLastName) {

}

void JukeBox::showAllTracks() {
    Track *current = headTrack;

    if(current == NULL) {
        cout << "There are not tracks in the list" << endl;
    }

    while (current) {
        if (current->next == NULL) {
            current->show();
            return;
        }
        current = current->next;
    }
}

void JukeBox::showTrack(string trackTitle) {

}

void JukeBox::showMusicianRoles(string musicianFirstName, string musicianLastName) {

}

JukeBox::Track *JukeBox::findTrackByTitle(string trackTitle) {
    Track *current = headTrack;

    while (current) {
        if (current->trackTitle == trackTitle) {
            return current;
        }
        current = current->next;
    }

    return NULL;
}

JukeBox::Track::Track(string trackTitle, int releaseYear) {
    this->trackTitle = trackTitle;
    this->releaseYear = releaseYear;
    this->musicianSize = 0;
    this->next = NULL;
    this->headMusician = NULL;
}

JukeBox::Track::~Track() {

}

void JukeBox::Track::addMusician(string musicianFirstName, string musicianLastName, string musicianRole) {
    Musician *musician = new Musician(musicianFirstName, musicianLastName, musicianRole);
    if (headMusician == NULL) {
        headMusician = musician;
    } else {
        Musician *current = headMusician;
        while (current) {
            if (current->next == NULL) {
                current->next = musician;
                return;
            }
            current = current->next;
        }
    }
    musicianSize++;
    cout << "Musician is successfully added!" << endl;
}

void JukeBox::Track::removeMusician(string trackTitle, string musicianFirstName, string musicianLastName) {

}

void JukeBox::Track::show() {
    cout << trackTitle << " " << releaseYear << endl;
    Musician *current = headMusician;
    if (current == NULL) {
        return;
    }
    while (current) {
        cout << "\t" << "First Name" << "\t" << "Last Name" << "\t"
             << "Role" << endl;
        if (current->next == NULL) {
            cout << "\t" << current->musicianFirstName << "\t" << current->musicianLastName << "\t"
                 << current->musicianRole << endl;
            return;
        }
        current = current->next;
    }
}

JukeBox::Track::Musician::Musician(string musicianFirstName, string musicianLastName, string musicianRole) {
    this->musicianFirstName = musicianFirstName;
    this->musicianLastName = musicianLastName;
    this->musicianRole = musicianRole;
    this->next = NULL;
}

JukeBox::Track::Musician::~Musician() {

}
