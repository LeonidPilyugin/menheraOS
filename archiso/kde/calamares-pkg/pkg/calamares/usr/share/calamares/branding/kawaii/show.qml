/* === This file is part of Calamares - <https://calamares.io> ===
 *
 *   SPDX-FileCopyrightText: 2015 Teo Mrnjavac <teo@kde.org>
 *   SPDX-FileCopyrightText: 2018 Adriaan de Groot <groot@kde.org>
 *   SPDX-License-Identifier: GPL-3.0-or-later
 *
 *   Calamares is Free Software: see the License-Identifier above.
 *
 */

import QtQuick 2.0;
import calamares.slideshow 1.0;
import io.calamares.ui 1.0

Presentation
{
    id: presentation

    function nextSlide() {
        console.log("QML Component (default slideshow) Next slide");
        presentation.goToNextSlide();
    }

    Timer {
        id: advanceTimer
        interval: 5000
        running: presentation.activatedInCalamares
        repeat: true
        onTriggered: nextSlide()
    }

    Rectangle {
        id: background
        anchors.fill: parent
        color: "#F5DFF0"
        z: -1
    }

    ImageSlide {
        src: "neco1.jpg"
    }

    ImageSlide {
        src: "neco2.jpg"
    }

    ImageSlide {
        src: "neco3.jpg"
    }

    ImageSlide {
        src: "neco4.jpg"
    }

    ImageSlide {
        src: "neco5.jpg"
    }

    ImageSlide {
        src: "neco6.jpg"
    }

    ImageSlide {
        src: "neco7.jpg"
    }

    ImageSlide {
        src: "neco8.jpg"
    }

    ImageSlide {
        src: "neco9.jpg"
    }

    ImageSlide {
        src: "neco10.jpg"
    }

    ImageSlide {
        src: "neco11.png"
    }

    ImageSlide {
        src: "neco12.jpg"
    }

    ImageSlide {
        src: "neco13.jpg"
    }

    ImageSlide {
        src: "neco14.jpg"
    }

    ImageSlide {
        src: "neco15.png"
    }

    ImageSlide {
        src: "neco16.jpg"
    }

    ImageSlide {
        src: "neco17.jpg"
    }

    ImageSlide {
        src: "neco18.jpg"
    }

    ImageSlide {
        src: "neco19.jpg"
    }

    ImageSlide {
        src: "neco20.jpg"
    }

    // When this slideshow is loaded as a V1 slideshow, only
    // activatedInCalamares is set, which starts the timer (see above).
    //
    // In V2, also the onActivate() and onLeave() methods are called.
    // These example functions log a message (and re-start the slides
    // from the first).
    function onActivate() {
        console.log("QML Component (default slideshow) activated");
        //presentation.currentSlide = 0;
    }

    function onLeave() {
        console.log("QML Component (default slideshow) deactivated");
    }

}
