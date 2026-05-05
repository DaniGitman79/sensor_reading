import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

ApplicationWindow {
    id: root
    width: 640
    height: 480
    visible: true
    title: "Sensor Reading"

    ColumnLayout {
        anchors.centerIn: parent
        spacing: 20

        Text {
            Layout.alignment: Qt.AlignHCenter
            text: "Count: " + counter.count
            font.pixelSize: 32
        }

        RowLayout {
            Layout.alignment: Qt.AlignHCenter
            spacing: 10

            Button {
                text: "Decrement"
                onClicked: counter.decrement()
            }

            Button {
                text: "Reset"
                onClicked: counter.reset()
            }

            Button {
                text: "Increment"
                onClicked: counter.increment()
            }
        }
    }
}
