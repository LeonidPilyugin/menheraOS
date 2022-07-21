import QtQuick 2.5
import QtGraphicalEffects 1.0

Image {
    id: root
    source: "images/load.png"
    fillMode: Image.PreserveAspectCrop

    property int stage

    onStageChanged: {
        if (stage == 1) {
            introAnimation.running = true
        }
    }

    Rectangle {
        radius: 3
        anchors {
            bottom: parent.bottom
            left: parent.left
            bottomMargin: 30
            leftMargin: parent.width * 2 / 3 - 30
        }
        height: 10
        width: (parent.width / 6) * (stage - 1) / 3
        color: "#f9d0f1"
        Behavior on width {
            PropertyAnimation {
                duration: 250
                easing.type: Easing.InOutQuad
            }
        }
    }

    SequentialAnimation {
        id: introAnimation
        running: false

        ParallelAnimation {
            PropertyAnimation {
                property: "y"
                target: topRect
                to: root.height / 3
                duration: 1000
                easing.type: Easing.InOutBack
                easing.overshoot: 1.0
            }

            PropertyAnimation {
                property: "y"
                target: bottomRect
                to: 2 * (root.height / 3) - bottomRect.height
                duration: 1000
                easing.type: Easing.InOutBack
                easing.overshoot: 1.0
            }
        }
    }
}
