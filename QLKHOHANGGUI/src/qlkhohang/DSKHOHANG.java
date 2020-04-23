/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlkhohang;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author phanq
 */
public class DSKHOHANG {

    ArrayList<KHOHANG> list;

    public ArrayList<KHOHANG> getList() {
        return list;
    }

    public void setDs(ArrayList<KHOHANG> ds) {
        this.list = list;
    }

    public DSKHOHANG() {
        list = new ArrayList<>();
    }

    public void themKhoHang(KHOHANG kh) {
        list.add(kh);
    }

    public void xoa(String maNV) {
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).tenKhoHang.equalsIgnoreCase(maNV)) {
                list.remove(i);
                break;
            }
        }
    }

    public void sua(KHOHANG kh) {
        for (int i = 0; i < list.size(); i++) {
            if (kh.getTenKhoHang().trim().equalsIgnoreCase(list.get(i).tenKhoHang)) {
                list.set(i, kh);
            }
        }
    }

    public KHOHANG tim(String tenKhoHang) {
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).tenKhoHang.equalsIgnoreCase(tenKhoHang)) {
                return list.get(i);
            }
        }
        return null;
    }

    public double tongTienKhoNL() {
        double sumNL = 0;
        for (KHOHANG kh : list) {
            if (kh instanceof KHONGUYENLIEU) {
                KHONGUYENLIEU nl = (KHONGUYENLIEU) kh;
                sumNL += nl.TinhTienThue();
            }
        }
        return sumNL;
    }

    public double tongTienKhoSP() {
        double sumSP = 0;
        for (KHOHANG kh : list) {
            if (kh instanceof KHOSANPHAM) {
                KHOSANPHAM nl = (KHOSANPHAM) kh;
                sumSP += nl.TinhTienThue();
            }
        }
        return sumSP;
    }

    public KHOHANG KhoHangMax() {
        double max = list.get(0).TinhTienThue();
        int n = 0;
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).TinhTienThue() > max) {
                max = list.get(i).TinhTienThue();
                n = i;
            }
        }
        return list.get(n);
    }
}
