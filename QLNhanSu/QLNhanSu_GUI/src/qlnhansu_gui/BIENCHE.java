/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlnhansu_gui;

import java.util.Date;

/**
 *
 * @author phanq
 */
public class BIENCHE extends NHANVIEN {

    private double HSL;

    public double getHSL() {
        return HSL;
    }

    public void setHSL(double HSL) {
        this.HSL = HSL;
    }

    public BIENCHE() {
    }

    public BIENCHE(double HSL, String maNV, String tenNV, Date ngayVao) {
        super(maNV, tenNV, ngayVao);
        this.HSL = HSL;
    }

    @Override
    public double PhuCap() {
        if (super.ThamNien() < 3) {
            return 300000;
        } else {
            return 500000;
        }
    }

    @Override
    public double ThucLinh() {
        return HSL * luongCB + PhuCap();
    }

}
