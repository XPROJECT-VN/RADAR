#include "rightframe.h"

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE

RightFrame::RightFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::RightFrame)
{
    ui->setupUi(this);

    /* Tạo form cho các Tab */
    dieukhien_chiendau_form = new DieuKhien_ChienDau_Form(this->ui->frame_3);
    formTab.append(dieukhien_chiendau_form);

    dieukhien_huanluyen_form = new DieuKhien_HuanLuyen_Form(this->ui->frame_3);
    formTab.append(dieukhien_huanluyen_form);

    dieukhien_nangcao_form = new DieuKhien_NangCao_Form(this->ui->frame_3);
    formTab.append(dieukhien_nangcao_form);

    giamsat_trm = new GiamSat_Trm(this->ui->frame_3);
    formTab.append(giamsat_trm);

    giamsat_trx = new GiamSat_Trx(this->ui->frame_3);
    formTab.append(giamsat_trx);

    giamsat_dsp = new GiamSat_Dsp(this->ui->frame_3);
    formTab.append(giamsat_dsp);

    giamsat_xltt = new GiamSat_Xltt(this->ui->frame_3);
    formTab.append(giamsat_xltt);

    giamsat_pwr = new GiamSat_Pwr(this->ui->frame_3);
    formTab.append(giamsat_pwr);

    giamsat_canhbao = new GiamSat_CanhBao(this->ui->frame_3);
    formTab.append(giamsat_canhbao);

    quydao_danhsach = new QuyDao_DanhSach(this->ui->frame_3);
    formTab.append(quydao_danhsach);

    quydao_docao = new QuyDao_DoCao(this->ui->frame_3);
    formTab.append(quydao_docao);

    lienhop_dkmayhoi_form = new LienHop_DKMayHoi_Form(this->ui->frame_3);
    formTab.append(lienhop_dkmayhoi_form);

    lienhop_gsmayhoi_form = new LienHop_GSMayHoi_Form(this->ui->frame_3);
    formTab.append(lienhop_gsmayhoi_form);

    lienhop_dkqdt_form = new LienHop_DKqdt_Form(this->ui->frame_3);
    formTab.append(lienhop_dkqdt_form);

    lienhop_gsqdt_form = new LienHop_GSqdt_Form(this->ui->frame_3);
    formTab.append(lienhop_gsqdt_form);

    lienhop_videoqdt_form = new LienHop_VideoQdt_Form(this->ui->frame_3);
    formTab.append(lienhop_videoqdt_form);

    caidat_hienthi_form = new CaiDat_HienThi_Form(this->ui->frame_3);
    formTab.append(caidat_hienthi_form);

    caidat_hieuchinh_form = new CaiDat_HieuChinh_Form(this->ui->frame_3);
    formTab.append(caidat_hieuchinh_form);

    caidat_ketnoi_form = new CaiDat_KetNoi_Form(this->ui->frame_3);
    formTab.append(caidat_ketnoi_form);

    caidat_nangcao_form = new CaiDat_NangCao_Form(this->ui->frame_3);
    formTab.append(caidat_nangcao_form);

    for(int indexWidget = 0; indexWidget < formTab.count(); indexWidget++) {
        formTab.at(indexWidget)->setVisible(true);
        if(indexWidget == 0) {
            formTab.at(indexWidget)->setHidden(false);
        }
        else {
            formTab.at(indexWidget)->setHidden(true);
        }
        formTab.at(indexWidget)->setAutoFillBackground(true);
    }
    /* --------- Cấu hình tự động resize header  ---------*/
    this->ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    /* --------- Tạo bảng Chart --------- */
    //![1]
    QBarSet *set0 = new QBarSet("Jane");

    *set0 << 50 << 50 << 50 << 50 << 50 << 50 << 50 << 50 << 50 << 50 << 50 << 50;
    //![1]

    //![2]
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    //![2]

    //![3]
    QChart *chart = new QChart();
    chart->addSeries(series);
//    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::NoAnimation);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    chart->setSizePolicy(QSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum));
    //![3]
    //![4]
    QStringList categories;
    for(int indexItem = 0; indexItem < this->ui->tableWidget->columnCount(); indexItem++) {
        categories << this->ui->tableWidget->horizontalHeaderItem(indexItem)->text();
    }

    QFont fontChart = QFont("Arial", 15);
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setLabelsColor(QColor::fromRgb(255, 255, 255));
    axisX->setTitleFont(fontChart);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 65.0);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    axisY->setLabelsColor(QColor::fromRgb(255, 255, 255));
    axisY->setTitleFont(fontChart);
    //![4]

    //![5]
    chart->legend()->setVisible(false);
    //![5]

    //![6]
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setBackgroundBrush(QColor::fromRgb(120, 120, 120));
    chartView->setBackgroundBrush(QColor::fromRgb(120, 120, 120));
    chartView->setStyleSheet("background-color: rgb(120, 120, 120);"
                             "color: white;"
                             "font-size: 25px;"
                             "font-weight: bold;");
    chartView->setSizePolicy(sizePolicy);
    //![6]
    this->ui->horizontalLayout_5->addWidget(chartView);
}

RightFrame::~RightFrame()
{
    delete ui;
}


void RightFrame::on_tabWidget_currentChanged(int index)
{
    const int numTab[] = {3, 6, 2, 5, 4};
    int posTab = 0;
    for(int indexTab = 0; indexTab < ui->tabWidget_2->currentIndex(); indexTab++) {
        posTab += numTab[indexTab];
    }
    posTab += index;
    for(int indexTabWidget = 0; indexTabWidget < formTab.count(); indexTabWidget++) {
        if(indexTabWidget == posTab) {
            formTab.at(indexTabWidget)->setHidden(false);
        }
        else {
            formTab.at(indexTabWidget)->setHidden(true);
        }
    }
}

void RightFrame::on_tabWidget_2_currentChanged(int index)
{
    switch(index) {
        case 0: {
            /* Xóa tất cả các Tab hiện tại */
            this->ui->tabWidget->clear();
            /* Thêm Tab mới */
//            ui->tab->setObjectName(QString::fromUtf8("tab_3"));
            ui->tabWidget->addTab(&widgetTab[0], QString());
            ui->tabWidget->addTab(&widgetTab[1], QString());
            ui->tabWidget->addTab(&widgetTab[2], QString());
            /* Cài đặt tên cho các Tab */
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[0]), QCoreApplication::translate("MainWindow", "CHIẾN ĐẤU", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[1]), QCoreApplication::translate("MainWindow", "HUẤN LUYỆN", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[2]), QCoreApplication::translate("MainWindow", "NÂNG CAO", nullptr));
            break;
        }
        case 1: {
            /* Xóa tất cả các Tab hiện tại */
            this->ui->tabWidget->clear();
            /* Thêm Tab mới */
//            ui->tab->setObjectName(QString::fromUtf8("tab_3"));
            ui->tabWidget->addTab(&widgetTab[0], QString());
            ui->tabWidget->addTab(&widgetTab[1], QString());
            ui->tabWidget->addTab(&widgetTab[2], QString());
            ui->tabWidget->addTab(&widgetTab[3], QString());
            ui->tabWidget->addTab(&widgetTab[4], QString());
            ui->tabWidget->addTab(&widgetTab[5], QString());
            /* Cài đặt tên cho các Tab */
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[0]), QCoreApplication::translate("MainWindow", "TRM", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[1]), QCoreApplication::translate("MainWindow", "TRX", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[2]), QCoreApplication::translate("MainWindow", "DSP", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[3]), QCoreApplication::translate("MainWindow", "XLTT", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[4]), QCoreApplication::translate("MainWindow", "PWR", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[5]), QCoreApplication::translate("MainWindow", "CẢNH BÁO", nullptr));
            break;
        }
        case 2: {
            /* Xóa tất cả các Tab hiện tại */
            this->ui->tabWidget->clear();
            /* Thêm Tab mới */
//            ui->tab->setObjectName(QString::fromUtf8("tab_3"));
            ui->tabWidget->addTab(&widgetTab[0], QString());
            ui->tabWidget->addTab(&widgetTab[1], QString());

            /* Cài đặt tên cho các Tab */
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[0]), QCoreApplication::translate("MainWindow", "DANH SÁCH", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[1]), QCoreApplication::translate("MainWindow", "ĐỘ CAO", nullptr));

            break;
        }
        case 3: {
            /* Xóa tất cả các Tab hiện tại */
            this->ui->tabWidget->clear();
            /* Thêm Tab mới */
//            ui->tab->setObjectName(QString::fromUtf8("tab_3"));
            ui->tabWidget->addTab(&widgetTab[0], QString());
            ui->tabWidget->addTab(&widgetTab[1], QString());
            ui->tabWidget->addTab(&widgetTab[2], QString());
            ui->tabWidget->addTab(&widgetTab[3], QString());
            ui->tabWidget->addTab(&widgetTab[4], QString());
            /* Cài đặt tên cho các Tab */
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[0]), QCoreApplication::translate("MainWindow", "ĐK M.HỎI", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[1]), QCoreApplication::translate("MainWindow", "GS M.HỎI", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[2]), QCoreApplication::translate("MainWindow", "ĐK QĐT", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[3]), QCoreApplication::translate("MainWindow", "GS QĐT", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[4]), QCoreApplication::translate("MainWindow", "Video QĐT", nullptr));
            break;
        }
        case 4: {
            /* Xóa tất cả các Tab hiện tại */
            this->ui->tabWidget->clear();
            /* Thêm Tab mới */
    //        ui->tab->setObjectName(QString::fromUtf8("tab_3"));
            ui->tabWidget->addTab(&widgetTab[0], QString());
            ui->tabWidget->addTab(&widgetTab[1], QString());
            ui->tabWidget->addTab(&widgetTab[2], QString());
            ui->tabWidget->addTab(&widgetTab[3], QString());

            /* Cài đặt tên cho các Tab */
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[0]), QCoreApplication::translate("MainWindow", "HIỂN THỊ", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[1]), QCoreApplication::translate("MainWindow", "HIỆU CHỈNH", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[2]), QCoreApplication::translate("MainWindow", "KẾT NỐI", nullptr));
            ui->tabWidget->setTabText(ui->tabWidget->indexOf(&widgetTab[3]), QCoreApplication::translate("MainWindow", "NÂNG CAO", nullptr));

            break;
        }
    }
}

void RightFrame::on_pushButton_10_clicked()
{
    emit this->closeApp();
}
