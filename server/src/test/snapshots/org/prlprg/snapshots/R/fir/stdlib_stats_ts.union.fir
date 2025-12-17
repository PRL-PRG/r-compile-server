fun main() {
  () -+> V { reg r:cls, reg ts_union:cls, reg mdeaths:*, reg mdeaths1:V, reg p:p(V +), reg fdeaths:*, reg fdeaths1:V, reg p1:p(V +), reg r3:V, reg cbind:cls, reg mdeaths2:*, reg mdeaths3:V, reg p2:p(V +), reg fdeaths2:*, reg fdeaths3:V, reg p3:p(V +), reg r6:V, reg ts_intersect:cls, reg window:cls, reg mdeaths4:*, reg mdeaths5:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg window1:cls, reg fdeaths4:*, reg fdeaths5:V, reg p6:p(V +), reg r11:V, reg p7:p(V +), reg r13:V, reg ts_union1:cls, reg BJsales:*, reg BJsales1:V, reg p8:p(V +), reg BJsales_lead:*, reg BJsales_lead1:V, reg p9:p(V +), reg r16:V, reg ts_intersect1:cls, reg sales1:*, reg sales2:V, reg p10:p(V +), reg lag:cls, reg BJsales_lead2:*, reg BJsales_lead3:V, reg p11:p(V +), reg p12:p(V +), reg r20:V, reg p13:p(V +), reg r22:V |
    mkenv;
    r = clos inner3464747981;
    st `ts.union` = r;
    ts_union = ldf `ts.union`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      mdeaths = ld mdeaths;
      mdeaths1 = force? mdeaths;
      checkMissing(mdeaths1);
      return mdeaths1;
    };
    p1 = prom<V +>{
      fdeaths = ld fdeaths;
      fdeaths1 = force? fdeaths;
      checkMissing(fdeaths1);
      return fdeaths1;
    };
    r3 = dyn ts_union(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    cbind = ldf cbind;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p2 = prom<V +>{
      mdeaths2 = ld mdeaths;
      mdeaths3 = force? mdeaths2;
      checkMissing(mdeaths3);
      return mdeaths3;
    };
    p3 = prom<V +>{
      fdeaths2 = ld fdeaths;
      fdeaths3 = force? fdeaths2;
      checkMissing(fdeaths3);
      return fdeaths3;
    };
    r6 = dyn cbind(p2, p3);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    ts_intersect = ldf `ts.intersect`;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p5 = prom<V +>{
      window = ldf window;
      p4 = prom<V +>{
        mdeaths4 = ld mdeaths;
        mdeaths5 = force? mdeaths4;
        checkMissing(mdeaths5);
        return mdeaths5;
      };
      r8 = dyn window(p4, 1976.0);
      return r8;
    };
    p7 = prom<V +>{
      window1 = ldf window;
      p6 = prom<V +>{
        fdeaths4 = ld fdeaths;
        fdeaths5 = force? fdeaths4;
        checkMissing(fdeaths5);
        return fdeaths5;
      };
      r11 = dyn window1(p6, 1974.0, 1978.0);
      return r11;
    };
    r13 = dyn ts_intersect(p5, p7);
    check L5() else D5();
  D5():
    deopt 17 [r13];
  L5():
    ts_union1 = ldf `ts.union`;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p8 = prom<V +>{
      BJsales = ld BJsales;
      BJsales1 = force? BJsales;
      checkMissing(BJsales1);
      return BJsales1;
    };
    p9 = prom<V +>{
      BJsales_lead = ld `BJsales.lead`;
      BJsales_lead1 = force? BJsales_lead;
      checkMissing(BJsales_lead1);
      return BJsales_lead1;
    };
    r16 = dyn ts_union1[, lead](p8, p9);
    check L7() else D7();
  D7():
    deopt 23 [r16];
  L7():
    st sales1 = r16;
    ts_intersect1 = ldf `ts.intersect`;
    check L8() else D8();
  D8():
    deopt 26 [];
  L8():
    p10 = prom<V +>{
      sales1 = ld sales1;
      sales2 = force? sales1;
      checkMissing(sales2);
      return sales2;
    };
    p13 = prom<V +>{
      lag = ldf lag;
      p11 = prom<V +>{
        BJsales_lead2 = ld `BJsales.lead`;
        BJsales_lead3 = force? BJsales_lead2;
        checkMissing(BJsales_lead3);
        return BJsales_lead3;
      };
      p12 = prom<V +>{
        return -3.0;
      };
      r20 = dyn lag(p11, p12);
      return r20;
    };
    r22 = dyn ts_intersect1[, lead3](p10, p13);
    check L9() else D9();
  D9():
    deopt 30 [r22];
  L9():
    popenv;
    return r22;
  }
}
fun inner3464747981(`...`, dframe) {
  (reg ddd:dots, reg dframe:*) -+> V { var `...`:dots?, var dframe:*, reg dframe_isMissing:L, reg dframe_orDefault:*, reg _cbind_ts:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg _makeNamesTs:cls, reg ddd2:dots?, reg r4:V, reg p1:p(V +), reg dframe1:*, reg dframe2:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st `...` = ddd;
    dframe_isMissing = missing.0(dframe);
    if dframe_isMissing then L0(FALSE) else L0(dframe);
  L0(dframe_orDefault):
    st dframe = dframe_orDefault;
    _cbind_ts = ldf `.cbind.ts`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r2 = dyn list[`...`](ddd1);
      goto L0(r2);
    L2():
      r = dyn base(<sym ...>);
      goto L0(r);
    };
    p1 = prom<V +>{
      _makeNamesTs = ldf `.makeNamesTs`;
      ddd2 = ld `...`;
      r4 = dyn _makeNamesTs[`...`](ddd2);
      return r4;
    };
    p2 = prom<V +>{
      dframe1 = ld dframe;
      dframe2 = force? dframe1;
      checkMissing(dframe2);
      return dframe2;
    };
    r7 = dyn _cbind_ts[, , dframe, union](p, p1, p2, TRUE);
    check L2() else D1();
  D1():
    deopt 8 [r7];
  L2():
    popenv;
    return r7;
  }
}