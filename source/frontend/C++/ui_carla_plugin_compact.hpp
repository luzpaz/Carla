/********************************************************************************
** Form generated from reading UI file 'carla_plugin_compact.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARLA_PLUGIN_COMPACT_H
#define UI_CARLA_PLUGIN_COMPACT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "widgets/digitalpeakmeter.h"
#include "widgets/ledbutton.h"
#include "widgets/pixmapbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PluginWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *w_buttons;
    QHBoxLayout *horizontalLayout;
    PixmapButton *b_enable;
    PixmapButton *b_gui;
    PixmapButton *b_edit;
    QSpacerItem *spacer_namesep1;
    QFrame *line_name_sep;
    QSpacerItem *spacer_namesep2;
    QLabel *label_name;
    QSpacerItem *spacer_namesep3;
    QHBoxLayout *layout_peaks;
    DigitalPeakMeter *peak_in;
    DigitalPeakMeter *peak_out;
    QHBoxLayout *layout_leds;
    LEDButton *led_control;
    LEDButton *led_midi;
    LEDButton *led_audio_in;
    LEDButton *led_audio_out;

    void setupUi(QFrame *PluginWidget)
    {
        if (PluginWidget->objectName().isEmpty())
            PluginWidget->setObjectName(QString::fromUtf8("PluginWidget"));
        PluginWidget->resize(446, 30);
        PluginWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        PluginWidget->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(PluginWidget);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 3, 6, 3);
        w_buttons = new QWidget(PluginWidget);
        w_buttons->setObjectName(QString::fromUtf8("w_buttons"));
        w_buttons->setMinimumSize(QSize(72, 24));
        w_buttons->setMaximumSize(QSize(72, 24));
        horizontalLayout = new QHBoxLayout(w_buttons);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        b_enable = new PixmapButton(w_buttons);
        b_enable->setObjectName(QString::fromUtf8("b_enable"));
        b_enable->setMinimumSize(QSize(24, 24));
        b_enable->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/bitmaps/button_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_enable->setIcon(icon);
        b_enable->setIconSize(QSize(24, 24));
        b_enable->setCheckable(true);
        b_enable->setFlat(true);

        horizontalLayout->addWidget(b_enable);

        b_gui = new PixmapButton(w_buttons);
        b_gui->setObjectName(QString::fromUtf8("b_gui"));
        b_gui->setMinimumSize(QSize(24, 24));
        b_gui->setMaximumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/bitmaps/button_gui.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_gui->setIcon(icon1);
        b_gui->setIconSize(QSize(24, 24));
        b_gui->setCheckable(true);
        b_gui->setFlat(true);

        horizontalLayout->addWidget(b_gui);

        b_edit = new PixmapButton(w_buttons);
        b_edit->setObjectName(QString::fromUtf8("b_edit"));
        b_edit->setMinimumSize(QSize(24, 24));
        b_edit->setMaximumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/bitmaps/button_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_edit->setIcon(icon2);
        b_edit->setIconSize(QSize(24, 24));
        b_edit->setCheckable(true);
        b_edit->setFlat(true);

        horizontalLayout->addWidget(b_edit);


        horizontalLayout_2->addWidget(w_buttons);

        spacer_namesep1 = new QSpacerItem(6, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_namesep1);

        line_name_sep = new QFrame(PluginWidget);
        line_name_sep->setObjectName(QString::fromUtf8("line_name_sep"));
        line_name_sep->setMinimumSize(QSize(0, 20));
        line_name_sep->setMaximumSize(QSize(16777215, 20));
        line_name_sep->setLineWidth(0);
        line_name_sep->setMidLineWidth(1);
        line_name_sep->setFrameShape(QFrame::VLine);
        line_name_sep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_name_sep);

        spacer_namesep2 = new QSpacerItem(8, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_namesep2);

        label_name = new QLabel(PluginWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_name);

        spacer_namesep3 = new QSpacerItem(19, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_namesep3);

        layout_peaks = new QHBoxLayout();
        layout_peaks->setSpacing(4);
        layout_peaks->setObjectName(QString::fromUtf8("layout_peaks"));
        layout_peaks->setContentsMargins(4, 2, 4, 2);
        peak_in = new DigitalPeakMeter(PluginWidget);
        peak_in->setObjectName(QString::fromUtf8("peak_in"));
        peak_in->setMinimumSize(QSize(100, 0));
        peak_in->setMaximumSize(QSize(100, 16777215));

        layout_peaks->addWidget(peak_in);

        peak_out = new DigitalPeakMeter(PluginWidget);
        peak_out->setObjectName(QString::fromUtf8("peak_out"));
        peak_out->setMinimumSize(QSize(100, 0));
        peak_out->setMaximumSize(QSize(100, 16777215));

        layout_peaks->addWidget(peak_out);


        horizontalLayout_2->addLayout(layout_peaks);

        layout_leds = new QHBoxLayout();
        layout_leds->setSpacing(1);
        layout_leds->setObjectName(QString::fromUtf8("layout_leds"));
        led_control = new LEDButton(PluginWidget);
        led_control->setObjectName(QString::fromUtf8("led_control"));
        led_control->setMinimumSize(QSize(14, 14));
        led_control->setMaximumSize(QSize(14, 14));
        led_control->setCheckable(true);

        layout_leds->addWidget(led_control);

        led_midi = new LEDButton(PluginWidget);
        led_midi->setObjectName(QString::fromUtf8("led_midi"));
        led_midi->setMinimumSize(QSize(14, 14));
        led_midi->setMaximumSize(QSize(14, 14));
        led_midi->setCheckable(true);

        layout_leds->addWidget(led_midi);

        led_audio_in = new LEDButton(PluginWidget);
        led_audio_in->setObjectName(QString::fromUtf8("led_audio_in"));
        led_audio_in->setMinimumSize(QSize(14, 14));
        led_audio_in->setMaximumSize(QSize(14, 14));
        led_audio_in->setCheckable(true);

        layout_leds->addWidget(led_audio_in);

        led_audio_out = new LEDButton(PluginWidget);
        led_audio_out->setObjectName(QString::fromUtf8("led_audio_out"));
        led_audio_out->setMinimumSize(QSize(14, 14));
        led_audio_out->setMaximumSize(QSize(14, 14));
        led_audio_out->setCheckable(true);

        layout_leds->addWidget(led_audio_out);


        horizontalLayout_2->addLayout(layout_leds);


        retranslateUi(PluginWidget);

        QMetaObject::connectSlotsByName(PluginWidget);
    } // setupUi

    void retranslateUi(QFrame *PluginWidget)
    {
        PluginWidget->setWindowTitle(QCoreApplication::translate("PluginWidget", "Frame", nullptr));
        b_enable->setText(QString());
        b_gui->setText(QString());
        b_edit->setText(QString());
        label_name->setText(QCoreApplication::translate("PluginWidget", "PluginName", nullptr));
        led_control->setText(QString());
        led_midi->setText(QString());
        led_audio_in->setText(QString());
        led_audio_out->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PluginWidget: public Ui_PluginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARLA_PLUGIN_COMPACT_H
