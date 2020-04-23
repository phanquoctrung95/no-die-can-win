/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package qlkhohang;

import java.util.ArrayList;
import java.util.Date;
import javax.swing.table.AbstractTableModel;

/**
 *
 * @author phanq
 */
public class MODELDATA extends AbstractTableModel{
    ArrayList <KHOHANG> data;
    public ArrayList<KHOHANG>getData(){
        return data;
    }
    public MODELDATA(){
        data=new ArrayList<KHOHANG>();
    }
    public void setData(ArrayList<KHOHANG>data){
        this.data=data;
    }
    String colNames[]={"Tên kho hàng","Khả năng chứa","Tồn kho","Ngày thuê","Ngày trả"};
    Class<?> colClasses[] = {String.class, Double.class, Double.class,Date.class,Date.class};
    MODELDATA(ArrayList<KHOHANG> kh) {
        data = kh;
    }
    
    @Override
    public int getRowCount() {
       return data.size();
    }

    @Override
    public int getColumnCount() {
       return colNames.length;
    }

    @Override
    public Object getValueAt(int rowIndex, int columnIndex) {
        if (columnIndex == 0) {
            return data.get(rowIndex).getTenKhoHang();
        }
        if (columnIndex == 1) {
            return data.get(rowIndex).getKhaNangChua();
        }
        if (columnIndex == 2) {
            return data.get(rowIndex).getTonKho();
        }
        if (columnIndex ==3){
            return data.get(rowIndex).getNgayThue();
        }
        if (columnIndex ==4){
            return data.get(rowIndex).getNgayTra();
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
            case 3:
                name = colNames[3];
                break;
            case 4:
                name = colNames[4];
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
