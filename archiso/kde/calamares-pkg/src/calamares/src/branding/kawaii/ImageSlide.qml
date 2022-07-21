import QtQuick 2.5

Item {
    id: imageslide

    visible: false
    anchors.fill: parent

    property bool isSlide: true;
    property string notes;

    property string src;

    Image {
        id: image
        source: src
        width: 800
        height: 500
        anchors.centerIn: parent
    }
}
