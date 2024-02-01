#ifndef RIGHTFRAME_H
#define RIGHTFRAME_H

#include <QFrame>
#include "ui_rightframe.h"

#include "dieukhien_chiendau_form.h"
#include "dieukhien_huanluyen_form.h"
#include "dieukhien_nangcao_form.h"
#include "caidat_hienthi_form.h"
#include "caidat_hieuchinh_form.h"
#include "caidat_ketnoi_form.h"
#include "caidat_nangcao_form.h"
#include "giamsat_canhbao.h"
#include "gaimsat_dsp.h"
#include "giamsat_pwr.h"
#include "giamsat_trm.h"
#include "giamsat_trx.h"
#include "giamsat_xltt.h"
#include "lienhop_dkmayhoi_form.h"
#include "lienhop_dkqdt_form.h"
#include "lienhop_gsmayhoi_form.h"
#include "lienhop_gsqdt_form.h"
#include "lienhop_videoqdt_form.h"
#include "quydao_danhsach.h"
#include "quydao_docao.h"

namespace Ui {
    class RightFrame;
}

class RightFrame : public QFrame
{
    Q_OBJECT

public:
    explicit RightFrame(QWidget *parent = nullptr);
    ~RightFrame();
    Ui::RightFrame *ui;

    QWidget widgetTab[10];

    QList<QWidget *> formTab;
    DieuKhien_ChienDau_Form *dieukhien_chiendau_form;
    DieuKhien_HuanLuyen_Form *dieukhien_huanluyen_form;
    DieuKhien_NangCao_Form *dieukhien_nangcao_form;
    CaiDat_HienThi_Form *caidat_hienthi_form;
    CaiDat_HieuChinh_Form *caidat_hieuchinh_form;
    CaiDat_KetNoi_Form *caidat_ketnoi_form;
    CaiDat_NangCao_Form *caidat_nangcao_form;
    GiamSat_CanhBao *giamsat_canhbao;
    GiamSat_Dsp *giamsat_dsp;
    GiamSat_Pwr *giamsat_pwr;
    GiamSat_Trm *giamsat_trm;
    GiamSat_Trx *giamsat_trx;
    GiamSat_Xltt *giamsat_xltt;
    LienHop_DKMayHoi_Form *lienhop_dkmayhoi_form;
    LienHop_DKqdt_Form *lienhop_dkqdt_form;
    LienHop_GSMayHoi_Form *lienhop_gsmayhoi_form;
    LienHop_GSqdt_Form *lienhop_gsqdt_form;
    LienHop_VideoQdt_Form *lienhop_videoqdt_form;
    QuyDao_DanhSach *quydao_danhsach;
    QuyDao_DoCao *quydao_docao;

private slots:
    void on_tabWidget_currentChanged(int index);
    void on_tabWidget_2_currentChanged(int index);
    void on_pushButton_10_clicked();
signals:
    void closeApp();
};

#endif // RIGHTFRAME_H
