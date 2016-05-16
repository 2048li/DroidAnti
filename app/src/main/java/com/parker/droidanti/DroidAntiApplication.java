package com.parker.droidanti;

import android.app.Application;

/**
 * Created by pengk on 2016/5/10.
 */
public class DroidAntiApplication extends Application {
    static {
        System.loadLibrary("DroidAnti");

    }

    @Override
    public void onCreate() {
        super.onCreate();
    }
}
