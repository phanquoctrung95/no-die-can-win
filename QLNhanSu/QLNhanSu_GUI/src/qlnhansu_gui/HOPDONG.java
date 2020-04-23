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
public class HOPDONG extends NHANVIEN {

    private int soNgayCong;

    public int getSoNgayCong() {
        return soNgayCong;
    }

    public void setSoNgayCong(int soNgayCong) {
        this.soNgayCong = soNgayCong;
    }

    public HOPDONG() {
    }

    public HOPDONG(int soNgayCong, String maNV, String tenNV, Date ngayVao) {
        super(maNV, tenNV, ngayVao);
        this.soNgayCong = soNgayCong;
    }

    @Override
    public double PhuCap() {
        if (super.ThamNien() <= 1) {
            return 100000;
        } else {
            return 200000;
        }
    }

    @Override
    public double ThucLinh() {
        return (luongCB * soNgayCong) / 27 + PhuCap();
    }

}
