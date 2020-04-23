/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlnhansu_gui;

import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;

/**
 *
 * @author phanq
 */
public abstract class NHANVIEN implements ILUONG {

    protected String maNV;
    protected String tenNV;
    protected Date ngayVao;

    public String getMaNV() {
        return maNV;
    }

    public void setMaNV(String maNV) {
        this.maNV = maNV;
    }

    public String getTenNV() {
        return tenNV;
    }

    public void setTenNV(String tenNV) {
        this.tenNV = tenNV;
    }

    public Date getNgayVao() {
        return ngayVao;
    }

    public void setNgayVao(Date ngayVao) {
        this.ngayVao = ngayVao;
    }

    public NHANVIEN() {
    }

    public NHANVIEN(String maNV, String tenNV, Date ngayVao) {
        this.maNV = maNV;
        this.tenNV = tenNV;
        this.ngayVao = ngayVao;
    }

    public int ThamNien() {
        Calendar c1 = new GregorianCalendar();
        Calendar c2 = new GregorianCalendar();
        c1.setTime(ngayVao);
        Date ngayHT = Calendar.getInstance().getTime();
        c2.setTime(ngayHT);
        int thamNien = c2.get(Calendar.YEAR) - c2.get(Calendar.YEAR);
        return thamNien;
    }
}
