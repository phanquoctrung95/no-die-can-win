/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlnhansu_gui;

import java.util.ArrayList;

/**
 *
 * @author phanq
 */
public class DSNV {

    ArrayList<NHANVIEN> ds;

    public ArrayList<NHANVIEN> getDs() {
        return ds;
    }

    public void setDs(ArrayList<NHANVIEN> ds) {
        this.ds = ds;
    }

    public DSNV() {
        ds = new ArrayList<NHANVIEN>();

    }

    public void Them(NHANVIEN nv) {
        ds.add(nv);
    }

    public void Sua(NHANVIEN nv) {
        for (int i = 0; i < ds.size(); i++) {
            if (nv.getMaNV().trim().equalsIgnoreCase(ds.get(i).maNV)) {
                ds.set(i, nv);
            }
        }
    }

    public NHANVIEN Tim(String maNV) {
        for (int i = 0; i < ds.size(); i++) {
            if (ds.get(i).maNV.equalsIgnoreCase(maNV)) {
                return ds.get(i);
            }
        }
        return null;
    }

    public void Xoa(String maNV) {
        for (int i = 0; i < ds.size(); i++) {
            if (ds.get(i).maNV.equalsIgnoreCase(maNV)) {
                ds.remove(i);
                break;
            }
        }
    }
}
