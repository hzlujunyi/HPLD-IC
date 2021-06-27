import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

MenuItem {
    property string iconSource
    property string iconText
    height: visible*60
    width: 550
    ToolButton{
        activeFocusOnTab: true
        anchors.fill: parent
        width: parent.width
        spacing: 2
        anchors.leftMargin: 5
        anchors.rightMargin: 5
        // FIXME: We're using an Image here rather than icon.source because
        // icons don't work on Qt 5.9 LTS.
        RowLayout {
            anchors.fill: parent
//            Layout.alignment: Qt.AlignLeft
            Image {
                id: image
                source: iconSource
                horizontalAlignment: Qt.AlignLeft
                verticalAlignment: Qt.AlignVCenter
                sourceSize {
                    width: (parent.parent.height - parent.parent.anchors.bottomMargin - parent.parent.anchors.topMargin) * 0.66
                    height: width
                }
            }

            Label {
                id: iconLabel
                text: iconText
                font.pointSize: 10
                Layout.fillWidth: true
                horizontalAlignment: Qt.AlignLeft
                verticalAlignment: Qt.AlignVCenter
            }
        }

        // This determines the size of the Material highlight. We increase it
        // from the default because we use larger than normal icons for TV readability.
//        background.width: (parent.height - parent.anchors.bottomMargin - parent.anchors.topMargin) * 0.60
//        background.height: (parent.height - parent.anchors.bottomMargin - parent.anchors.topMargin) * 0.60

        Keys.onReturnPressed: {
            clicked()
        }

        Keys.onEnterPressed: {
            clicked()
        }

        Keys.onRightPressed: {
            nextItemInFocusChain(true).forceActiveFocus(Qt.TabFocus)
        }

        Keys.onLeftPressed: {
            nextItemInFocusChain(false).forceActiveFocus(Qt.TabFocus)
        }

        onClicked: parent.clicked()
    }
}
