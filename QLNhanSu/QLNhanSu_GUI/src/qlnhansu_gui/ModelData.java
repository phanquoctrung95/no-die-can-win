/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlnhansu_gui;

import java.util.ArrayList;
import java.util.Date;
import javax.swing.table.AbstractTableModel;

/**
 *
 * @author phanq
 */
class ModelData extends AbstractTableModel {

    ArrayList<NHANVIEN> data;

    public ArrayList<NHANVIEN> getData() {
        return data;
    }

    public ModelData() {
        data = new ArrayList<NHANVIEN>();
    }

    public void setData(ArrayList<NHANVIEN> data) {
        this.data = data;
    }
    String colNames[] = {"MaNV", "Hoten", "NgayVao"};
    Class<?> colClasses[] = {String.class, String.class, Date.class};

    ModelData(ArrayList<NHANVIEN> nv) {
        data = nv;
    }

    public int getRowCount() {
        return data.size();
    }

    public int getColumnCount() {
        return colNames.length;
    }

    public Object getValueAt(int rowIndex, int columnIndex) {

        if (columnIndex == 0) {
            return data.get(rowIndex).getMaNV();
        }
        if (columnIndex == 1) {
            return data.get(rowIndex).getTenNV();
        }
        if (columnIndex == 2) {
            return data.get(rowIndex).getNgayVao();
        }
        return null;
    }

    public String getColumnName(int columnIndex) {
        String name = null;
        switch (columnIndex) {
            case 0:
                name = colNames[0];
                break;
            case 1:
                name = colNames[1];
                break;
            case 2:
                name = colNames[2];
                break;
        }
        return name;
    }

    public Class<?> getColumnClass(int columnIndex) {
        return colClasses[columnIndex];
    }

    public boolean isCellEditable(int rowIndex, int columnIndex) {
        return true;
    }
}
