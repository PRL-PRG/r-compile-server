fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner827684648;
    st ofile_syms_od = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner827684648(fpath, keep) {
  (reg fpath:*, reg keep:*) -+> V { var fpath:*, var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg Sys_which:cls, reg r4:V, reg r5:V, reg c1:L, reg stop:cls, reg r6:V, reg system:cls, reg sprintf:cls, reg fpath1:*, reg fpath2:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg grep:cls, reg v:*, reg v1:V, reg p3:p(V +), reg r13:V, reg sub:cls, reg v2:*, reg v3:V, reg p4:p(V +), reg r15:V, reg sub1:cls, reg v4:*, reg v5:V, reg p5:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c2:cls, reg r20:V, reg data_frame:cls, reg name:*, reg name1:V, reg p6:p(V +), reg ttbl:*, reg ttbl1:V, reg c3:L, reg ttbl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg ttbl6:V, reg r23:V, reg type:*, reg type1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg ttbl9:V, reg r25:V, reg ttbl10:*, reg ttbl11:V, reg names:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg ttbl14:V, reg r28:V, reg ttbl15:*, reg ttbl16:V, reg length:cls, reg r29:V, reg match:cls, reg r30:V, reg __:cls, reg r31:V, reg p7:p(V +), reg r33:V, reg val:*, reg val1:V, reg c4:L, reg val3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg _in_:cls, reg val4:*, reg val5:V, reg c5:L, reg val7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r34:V, reg p8:p(V +), reg keep1:*, reg keep2:V, reg p9:p(V +), reg r37:V, reg __1:cls, reg r38:V, reg clear_rownames:cls, reg val8:*, reg val9:V, reg c6:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg order:cls, reg val12:*, reg val13:V, reg c7:L, reg val15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r39:V, reg p10:p(V +), reg r41:V, reg __2:cls, reg r42:V, reg p11:p(V +), reg r44:V |
    mkenv;
    st fpath = fpath;
    keep_isMissing = missing.0(keep);
    if keep_isMissing then L0() else L1(keep);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("F", "V", "U");
      goto L0(r2);
    L2():
      r = dyn base("F", "V", "U");
      goto L0(r);
    };
    goto L1(p);
  L1(keep_orDefault):
    st keep = keep_orDefault;
    Sys_which = ldf `Sys.which`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r4 = dyn Sys_which("objdump");
    check L7() else D1();
  D1():
    deopt 3 [r4];
  L7():
    r5 = `==`(r4, "");
    c1 = `as.logical`(r5);
    if c1 then L8() else L2();
  L2():
    goto L3();
  L3():
    system = ldf system;
    check L12() else D4();
  L8():
    stop = ldf stop;
    check L9() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L9():
    r6 = dyn stop("'objdump' is not on the path");
    check L10() else D3();
  L12():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        fpath1 = ld fpath;
        fpath2 = force? fpath1;
        checkMissing(fpath2);
        return fpath2;
      };
      r9 = dyn sprintf("objdump -T %s", p1);
      return r9;
    };
    r11 = dyn system[, intern](p2, TRUE);
    check L13() else D5();
  D3():
    deopt 9 [r6];
  D5():
    deopt 17 [r11];
  L10():
    goto L3();
  L13():
    st v = r11;
    grep = ldf grep;
    check L14() else D6();
  D6():
    deopt 20 [];
  L14():
    p3 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    r13 = dyn grep[, , value]("\t", p3, TRUE);
    check L15() else D7();
  D7():
    deopt 25 [r13];
  L15():
    st v = r13;
    sub = ldf sub;
    check L16() else D8();
  D8():
    deopt 28 [];
  L16():
    p4 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    r15 = dyn sub(".*\t.* (.*$)", "\\1", p4);
    check L17() else D9();
  D9():
    deopt 32 [r15];
  L17():
    st name = r15;
    sub1 = ldf sub;
    check L18() else D10();
  D10():
    deopt 35 [];
  L18():
    p5 = prom<V +>{
      v4 = ld v;
      v5 = force? v4;
      checkMissing(v5);
      return v5;
    };
    r17 = dyn sub1(".* (.*)\t.*", "\\1", p5);
    check L19() else D11();
  D11():
    deopt 39 [r17];
  L19():
    st type = r17;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L4(r19):
    st ttbl = r19;
    data_frame = ldf `data.frame`;
    check L23() else D13();
  L20():
    c2 = ldf c in base;
    r20 = dyn c2("U", "F", "V", "V", "w");
    check L22() else D12();
  L21():
    r18 = dyn base1[`*UND*`, `.text`, `.bss`, `.data`, w]("U", "F", "V", "V", "w");
    goto L4(r18);
  D12():
    deopt 54 [r20];
  D13():
    deopt 57 [];
  L22():
    goto L4(r20);
  L23():
    p6 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    p7 = prom<V +>{
      ttbl = ld ttbl;
      ttbl1 = force? ttbl;
      checkMissing(ttbl1);
      c3 = `is.object`(ttbl1);
      if c3 then L4() else L5(ttbl1);
    L0(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", ttbl1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(ttbl3):
      sym2 = ldf match;
      base2 = ldf match in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L1(ttbl6, r23):
      __ = ldf `[` in base;
      r31 = dyn __(ttbl6, r23);
      goto L0(r31);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L7():
      type = ld type;
      type1 = force? type;
      checkMissing(type1);
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L9() else L10();
    L8():
      r22 = dyn base2(<sym type>, <lang names(ttbl)>, <lang length(ttbl)>);
      goto L1(ttbl3, r22);
    L2(ttbl9, r25):
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L11() else L12();
    L9():
      ttbl10 = ld ttbl;
      ttbl11 = force? ttbl10;
      checkMissing(ttbl11);
      names = ldf names in base;
      r26 = dyn names(ttbl11);
      goto L2(ttbl3, r26);
    L10():
      r24 = dyn base3(<sym ttbl>);
      goto L2(ttbl3, r24);
    L3(ttbl14, r28):
      match = ldf match in base;
      r30 = dyn match(type1, r25, r28, NULL);
      goto L1(ttbl14, r30);
    L11():
      ttbl15 = ld ttbl;
      ttbl16 = force? ttbl15;
      checkMissing(ttbl16);
      length = ldf length in base;
      r29 = dyn length(ttbl16);
      goto L3(ttbl9, r29);
    L12():
      r27 = dyn base4(<sym ttbl>);
      goto L3(ttbl9, r27);
    };
    r33 = dyn data_frame[, type](p6, p7);
    check L24() else D14();
  D14():
    deopt 61 [r33];
  L24():
    st val = r33;
    val = ld val;
    check L25() else D15();
  D15():
    deopt 63 [val];
  L25():
    val1 = force? val;
    checkMissing(val1);
    c4 = `is.object`(val1);
    if c4 then L26() else L27(val1);
  L5(dx3):
    st val = dx3;
    clear_rownames = ldf clear_rownames;
    check L31() else D18();
  L26():
    dr2 = tryDispatchBuiltin.1("[", val1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(val3):
    _in_ = ldf `%in%`;
    check L29() else D16();
  D16():
    deopt 66 [val3];
  D18():
    deopt 75 [];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L29():
    p8 = prom<V +>{
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      c5 = `is.object`(val5);
      if c5 then L1() else L2(val5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", val5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(val7):
      r34 = `$`(val7, <sym type>);
      goto L0(r34);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p9 = prom<V +>{
      keep1 = ld keep;
      keep2 = force? keep1;
      checkMissing(keep2);
      return keep2;
    };
    r37 = dyn _in_(p8, p9);
    check L30() else D17();
  L31():
    p11 = prom<V +>{
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      c6 = `is.object`(val9);
      if c6 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", val9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      order = ldf order;
      p10 = prom<V +>{
        val12 = ld val;
        val13 = force? val12;
        checkMissing(val13);
        c7 = `is.object`(val13);
        if c7 then L1() else L2(val13);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", val13);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(val15):
        r39 = `$`(val15, <sym name>);
        goto L0(r39);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r41 = dyn order(p10);
      __2 = ldf `[` in base;
      r42 = dyn __2(val9, r41, <missing>);
      goto L0(r42);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r44 = dyn clear_rownames(p11);
    check L32() else D19();
  D17():
    deopt 69 [val3, r37];
  D19():
    deopt 77 [r44];
  L30():
    __1 = ldf `[` in base;
    r38 = dyn __1(val1, r37, <missing>);
    goto L5(r38);
  L32():
    popenv;
    return r44;
  }
}