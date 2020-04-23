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
public class KHOSANPHAM extends KHOHANG {

    private String loaiSanPham;

    public KHOSANPHAM() {
    }
    public String getLoaiSanPham() {
        return loaiSanPham;
    }

    public void setLoaiSanPham(String loaiSanPham) {
        this.loaiSanPham = loaiSanPham;
    }

    public KHOSANPHAM(String loaiSanPham, String tenKhoHang, double khaNangChua, double tonKho, Date ngayThue, Date ngayTra) {
        super(tenKhoHang, khaNangChua, tonKho, ngayThue, ngayTra);
        this.loaiSanPham = loaiSanPham;
    }

    public void Nhap() {
        super.Nhap();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap loai san pham");
        loaiSanPham = sc.nextLine();
    }

    public void Xuat() {
        super.Xuat();
        System.out.println("Loai san pham " + this.loaiSanPham);
        System.out.println("Gia giam " + TinhGiaGiam());
        System.out.println("TIen thue " + TinhTienThue());

    }

    @Override
    public double phanTramGiamGia() {
        if (loaiSanPham.equalsIgnoreCase("khong chay no")) {
            return 0.1;
        } else if (loaiSanPham.equalsIgnoreCase("khong boc mui")) {
            return 0.05;
        } else {
            return 0;
        }
    }

    @Override
    public double TinhGiaGiam() {
        double giagiam = 0;
        if (TinhSoNgayThue() < 31) {
            giagiam
                    = phanTramGiamGia() * TinhSoNgayThue() * GIATHUETHEONGAY;
        } else if (TinhSoNgayThue() > 60) {
            double giamGia1 = phanTramGiamGia() * 30 * GIATHUETHEONGAY;
            double giamgia2 = (phanTramGiamGia() + 0.03) * 30 * GIATHUETHEONGAY;
            double giamgia3 = (phanTramGiamGia() + 0.07) * (TinhSoNgayThue() - 60)
                    * GIATHUETHEONGAY;
            giagiam = giamGia1 + giamgia2 + giamgia3;
        } else {
            double giamgia1 = phanTramGiamGia() * 30 * GIATHUETHEONGAY;
            double giamgia2 = (phanTramGiamGia() + 0.05) * (TinhSoNgayThue() - 30)
                    * GIATHUETHEONGAY;
            giagiam = giamgia1 + giamgia2;
        }
        return giagiam;
    }

    @Override
    public double TinhTienThue() {
        return TinhSoNgayThue() * (GIATHUETHEONGAY + 50000) - TinhGiaGiam();
    }

}
