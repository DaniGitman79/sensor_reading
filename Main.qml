import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 420
    height: 260
    visible: true
    title: "Mini UI Build Demo"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Zähler: " + counter.value
            font.pixelSize: 32
        }

        Button {
            text: "Hochzählen"
            onClicked: counter.increase()
        }

        Button {
            text: "Zurücksetzen"
            onClicked: counter.reset()
        }
    }
}