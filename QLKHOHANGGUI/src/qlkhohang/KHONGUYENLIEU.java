/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlkhohang;

import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author phanq
 */
public class KHONGUYENLIEU extends KHOHANG {

    private String tenNguyenLieu;

    public KHONGUYENLIEU() {
    }

    public KHONGUYENLIEU(String tenNguyenLieu, String tenKhoHang, double khaNangChua, double tonKho, Date ngayThue, Date ngayTra) {
        super(tenKhoHang, khaNangChua, tonKho, ngayThue, ngayTra);
        this.tenNguyenLieu = this.tenNguyenLieu;
    }

    public String getTenNguyenLieu() {
        return tenNguyenLieu;
    }

    public void setTenNguyenLieu(String tenNguyenLieu) {
        this.tenNguyenLieu = tenNguyenLieu;
    }

    public void Nhap() {
        super.Nhap();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ten nguyen lieu");
        tenNguyenLieu = sc.nextLine();
    }

    public void Xuat() {
        super.Xuat();
        System.out.println("Ten nguyen lieu " + this.tenNguyenLieu);
        System.out.println("Gia giam " + TinhGiaGiam());
        System.out.println("Tien thue " + TinhTienThue());
    }

    @Override
    public double phanTramGiamGia() {
        return 0;
    }

    @Override
    public double TinhGiaGiam() {
        double giaGiam = 0;
        if (TinhSoNgayThue() < 32) {
            giaGiam = 0;
        } else {
            if (TinhSoNgayThue() > 60) {
                double giamGia1 = 0.05 * 30 * GIATHUETHEONGAY;
                double giamGia2 = 0.1 * (TinhSoNgayThue() - 60) * GIATHUETHEONGAY;
                giaGiam = (giamGia1 + giamGia2);
            } else {
                giaGiam = 0.05 * (TinhSoNgayThue() - 30) * GIATHUETHEONGAY;
            }
        }
        return giaGiam;
    }

    @Override
    public double TinhTienThue() {
        double tienThue = TinhSoNgayThue() * GIATHUETHEONGAY - TinhGiaGiam();
        return tienThue;
    }
}
