/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlkhohang;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author phanq
 */
public abstract class KHOHANG implements IKHOHANG {

    protected String tenKhoHang;
    protected double khaNangChua;
    protected double tonKho;
    protected Date ngayThue;
    protected Date ngayTra;

    public KHOHANG() {
    }

    public KHOHANG(String tenKhoHang, double khaNangChua, double tonKho, Date ngayThue, Date ngayTra) {
        this.tenKhoHang = tenKhoHang;
        this.khaNangChua = khaNangChua;
        this.tonKho = tonKho;
        this.ngayThue = ngayThue;
        this.ngayTra = ngayTra;
    }

    public String getTenKhoHang() {
        return tenKhoHang;
    }

    public void setTenKhoHang(String tenKhoHang) {
        this.tenKhoHang = tenKhoHang;
    }

    public double getKhaNangChua() {
        return khaNangChua;
    }

    public void setKhaNangChua(double khaNangChua) {
        this.khaNangChua = khaNangChua;
    }

    public double getTonKho() {
        return tonKho;
    }

    public void setTonKho(double tonKho) {
        this.tonKho = tonKho;
    }

    public Date getNgayThue() {
        return ngayThue;
    }

    public void setNgayThue(Date ngayThue) {
        this.ngayThue = ngayThue;
    }

    public Date getNgayTra() {
        return ngayTra;
    }

    public void setNgayTra(Date ngayTra) {
        this.ngayTra = ngayTra;
    }

    public void Nhap() {
        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("Nhap ten kho hang");
            tenKhoHang = sc.nextLine();
            System.out.println("Nhap kha nang chua");
            khaNangChua = Double.parseDouble(sc.nextLine());
            System.out.println("Nhap ton kho");
            tonKho = Double.parseDouble(sc.nextLine());
            System.out.println("Nhap ngay thue");
            SimpleDateFormat df = new SimpleDateFormat("dd/mm/yyyy");
            ngayThue = df.parse(sc.nextLine());
            System.out.println("Nhap ngay tra");
            ngayTra = df.parse(sc.nextLine());
        } catch (ParseException ex) {
            Logger.getLogger(KHOHANG.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    public void Xuat() {
        System.out.println("Ten kho hang " + this.tenKhoHang);
        System.out.println("Kha nang chua " + this.khaNangChua);
        System.out.println("Ton kho " + this.tonKho);
        System.out.println("Ngay thue " + convertDateToString(ngayThue));
        System.out.println("Ngay tra " + convertDateToString(ngayTra));
    }

    public double TinhSoNgayThue() {
        return (double) ((ngayTra.getTime()) - this.ngayThue.getTime()) / (24 * 60 * 60 * 1000) + 1;
    }

    public String convertDateToString(Date d) {
        SimpleDateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        return df.format(d);
    }

    public abstract double phanTramGiamGia();

    @Override
    public abstract double TinhGiaGiam();

    @Override
    public abstract double TinhTienThue();
}
