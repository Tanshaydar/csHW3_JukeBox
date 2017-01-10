#include "JukeBox.h"

int main() {
    JukeBox *jukeBox = new JukeBox();
    jukeBox->showAllTracks();
    jukeBox->addTrack("November Sky", 2000);
    jukeBox->addTrack("Monochrome", 1998);
    jukeBox->addTrack("I Shall Rise", 2015);
    jukeBox->addTrack("The Best is Yet to Come", 1998);
    jukeBox->addTrack("I Want Love", 2003);
    jukeBox->addTrack("Way to Fall", 2001);
//    jukeBox->addTrack("",);
//    jukeBox->addTrack("",);
//    jukeBox->addTrack("",);

    jukeBox->showAllTracks();
    return 0;
}