fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3261767810;
    st ofile_syms = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3261767810(fname, keep) {
  (reg fname:*, reg keep:*) -+> V { var fname:*, var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg stopifnot:cls, reg isFALSE:cls, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg read_symbols_from_object_file:cls, reg fname1:*, reg fname2:V, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg v:*, reg v1:V, reg c2:L, reg c3:L, reg c5:V, reg nrow:cls, reg v2:*, reg v3:V, reg p4:p(V +), reg r15:V, reg r16:V, reg c6:L, reg c7:V, reg c9:L, reg ofile_syms_od:cls, reg fname3:*, reg fname4:V, reg p5:p(V +), reg keep1:*, reg keep2:V, reg p6:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg v4:*, reg v5:V, reg c10:V, reg c11:L, reg data_frame:cls, reg character:cls, reg r22:V, reg p7:p(V +), reg character1:cls, reg r24:V, reg p8:p(V +), reg r26:V, reg r27:cls, reg as_data_frame:cls, reg v6:*, reg v7:V, reg p9:p(V +), reg r29:V, reg c12:L, reg r31:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg r36:V, reg c13:cls, reg r37:V, reg __:cls, reg r38:V, reg val:*, reg val1:V, reg c14:L, reg val3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _in_:cls, reg val4:*, reg val5:V, reg c15:L, reg val7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r39:V, reg p10:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg c16:cls, reg r43:V, reg p11:p(V +), reg r45:V, reg __1:cls, reg r46:V, reg match_type:cls, reg val8:*, reg val9:V, reg c17:L, reg val11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r47:V, reg p12:p(V +), reg r49:V, reg l:*, reg c18:L, reg r51:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r54:V, reg val12:*, reg val13:V, reg c19:L, reg val15:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg _in_1:cls, reg val16:*, reg val17:V, reg c20:L, reg val19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r55:V, reg p13:p(V +), reg keep3:*, reg keep4:V, reg p14:p(V +), reg r58:V, reg __2:cls, reg r59:V, reg val20:*, reg val21:V |
    mkenv;
    st fname = fname;
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
    stopifnot = ldf stopifnot;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p2 = prom<V +>{
      isFALSE = ldf isFALSE;
      p1 = prom<V +>{
        _Platform = ld `.Platform`;
        _Platform1 = force? _Platform;
        checkMissing(_Platform1);
        c1 = `is.object`(_Platform1);
        if c1 then L1() else L2(_Platform1);
      L0(dx1):
        r5 = `==`(dx1, "windows");
        return r5;
      L1():
        dr = tryDispatchBuiltin.1("$", _Platform1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(_Platform3):
        r4 = `$`(_Platform3, <sym OS.type>);
        goto L0(r4);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r7 = dyn isFALSE(p1);
      return r7;
    };
    r9 = dyn stopifnot(p2);
    check L12() else D1();
  D1():
    deopt 3 [r9];
  L12():
    read_symbols_from_object_file = ldf read_symbols_from_object_file;
    check L13() else D2();
  D2():
    deopt 5 [];
  L13():
    p3 = prom<V +>{
      fname1 = ld fname;
      fname2 = force? fname1;
      checkMissing(fname2);
      return fname2;
    };
    r11 = dyn read_symbols_from_object_file(p3);
    check L14() else D3();
  D3():
    deopt 7 [r11];
  L14():
    st v = r11;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L2(r13):
    c3 = `as.logical`(r13);
    if c3 then L18() else L3(c3);
  L15():
    v = ld v;
    check L17() else D4();
  L16():
    r12 = dyn base1(<sym v>);
    goto L2(r12);
  D4():
    deopt 10 [v];
  L3(c5):
    c9 = `as.logical`(c5);
    if c9 then L22() else L4();
  L17():
    v1 = force? v;
    checkMissing(v1);
    c2 = `is.character`(v1);
    goto L2(c2);
  L18():
    nrow = ldf nrow;
    check L19() else D5();
  D5():
    deopt 14 [c3];
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L19():
    p4 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    r15 = dyn nrow(p4);
    check L20() else D6();
  L22():
    ofile_syms_od = ldf ofile_syms_od;
    check L23() else D7();
  D6():
    deopt 16 [c3, r15];
  D7():
    deopt 21 [];
  L5(r21):
    c11 = `as.logical`(r21);
    if c11 then L29() else L6();
  L20():
    r16 = `==`(r15, 0.0);
    c6 = `as.logical`(r16);
    c7 = `&&`(c3, c6);
    goto L3(c7);
  L23():
    p5 = prom<V +>{
      fname3 = ld fname;
      fname4 = force? fname3;
      checkMissing(fname4);
      return fname4;
    };
    p6 = prom<V +>{
      keep1 = ld keep;
      keep2 = force? keep1;
      checkMissing(keep2);
      return keep2;
    };
    r19 = dyn ofile_syms_od(p5, p6);
    check L24() else D8();
  L26():
    v4 = ld v;
    check L28() else D9();
  L27():
    r20 = dyn base2(<sym v>);
    goto L5(r20);
  D8():
    deopt 24 [r19];
  D9():
    deopt 26 [v4];
  L6():
    r27 = clos inner657253850;
    st match_type = r27;
    as_data_frame = ldf `as.data.frame`;
    check L33() else D12();
  L24():
    popenv;
    return r19;
  L28():
    v5 = force? v4;
    checkMissing(v5);
    c10 = `==`(v5, NULL);
    goto L5(c10);
  L29():
    data_frame = ldf `data.frame`;
    check L30() else D10();
  D10():
    deopt 30 [];
  D12():
    deopt 40 [];
  L30():
    p7 = prom<V +>{
      character = ldf character;
      r22 = dyn character(0.0);
      return r22;
    };
    p8 = prom<V +>{
      character1 = ldf character;
      r24 = dyn character1(0.0);
      return r24;
    };
    r26 = dyn data_frame[name, type](p7, p8);
    check L31() else D11();
  L33():
    p9 = prom<V +>{
      v6 = ld v;
      v7 = force? v6;
      checkMissing(v7);
      return v7;
    };
    r29 = dyn as_data_frame(p9);
    check L34() else D13();
  D11():
    deopt 35 [r26];
  D13():
    deopt 42 [r29];
  L31():
    popenv;
    return r26;
  L34():
    c12 = `is.object`(r29);
    if c12 then L35() else L36(r29);
  L7(dx3):
    st val = dx3;
    val = ld val;
    check L41() else D15();
  L35():
    dr2 = tryDispatchBuiltin.1("[", r29);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(r31):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D15():
    deopt 51 [val];
  L8(r35, r36):
    __ = ldf `[` in base;
    r38 = dyn __(r35, r36);
    goto L7(r38);
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L38():
    c13 = ldf c in base;
    r37 = dyn c13("name", "type");
    check L40() else D14();
  L39():
    r34 = dyn base3("name", "type");
    goto L8(r31, r34);
  L41():
    val1 = force? val;
    checkMissing(val1);
    c14 = `is.object`(val1);
    if c14 then L42() else L43(val1);
  D14():
    deopt 48 [r31, r37];
  L9(dx5):
    st val = dx5;
    match_type = ldf match_type;
    check L47() else D18();
  L40():
    goto L8(r31, r37);
  L42():
    dr4 = tryDispatchBuiltin.1("[", val1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(val3):
    _in_ = ldf `%in%`;
    check L45() else D16();
  D16():
    deopt 54 [val3];
  D18():
    deopt 63 [];
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L45():
    p10 = prom<V +>{
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      c15 = `is.object`(val5);
      if c15 then L1() else L2(val5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", val5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(val7):
      r39 = `$`(val7, <sym type>);
      goto L0(r39);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p11 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c16 = ldf c in base;
      r43 = dyn c16("U", "B", "D", "T");
      goto L0(r43);
    L2():
      r41 = dyn base4("U", "B", "D", "T");
      goto L0(r41);
    };
    r45 = dyn _in_(p10, p11);
    check L46() else D17();
  L47():
    p12 = prom<V +>{
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      c17 = `is.object`(val9);
      if c17 then L1() else L2(val9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", val9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(val11):
      r47 = `$`(val11, <sym type>);
      goto L0(r47);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r49 = dyn match_type(p12);
    check L48() else D19();
  D17():
    deopt 57 [val3, r45];
  D19():
    deopt 65 [r49];
  L46():
    __1 = ldf `[` in base;
    r46 = dyn __1(val1, r45, <missing>);
    goto L9(r46);
  L48():
    l = ld val;
    c18 = `is.object`(l);
    if c18 then L50() else L51(r49, l);
  L49(dx11):
    st val = dx11;
    val12 = ld val;
    check L53() else D20();
  L50():
    dr10 = tryDispatchBuiltin.0("$<-", l, r49);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L52() else L51(r49, dr10);
  L51(r51, l2):
    r54 = `$<-`(l2, <sym type>, r49);
    goto L49(r54);
  D20():
    deopt 69 [val12];
  L52():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L49(dx10);
  L53():
    val13 = force? val12;
    checkMissing(val13);
    c19 = `is.object`(val13);
    if c19 then L54() else L55(val13);
  L10(dx13):
    st val = dx13;
    val20 = ld val;
    check L59() else D23();
  L54():
    dr12 = tryDispatchBuiltin.1("[", val13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L56() else L55(dr12);
  L55(val15):
    _in_1 = ldf `%in%`;
    check L57() else D21();
  D21():
    deopt 72 [val15];
  D23():
    deopt 80 [val20];
  L56():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx12);
  L57():
    p13 = prom<V +>{
      val16 = ld val;
      val17 = force? val16;
      checkMissing(val17);
      c20 = `is.object`(val17);
      if c20 then L1() else L2(val17);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", val17);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(val19):
      r55 = `$`(val19, <sym type>);
      goto L0(r55);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p14 = prom<V +>{
      keep3 = ld keep;
      keep4 = force? keep3;
      checkMissing(keep4);
      return keep4;
    };
    r58 = dyn _in_1(p13, p14);
    check L58() else D22();
  L59():
    val21 = force? val20;
    checkMissing(val21);
    popenv;
    return val21;
  D22():
    deopt 75 [val15, r58];
  L58():
    __2 = ldf `[` in base;
    r59 = dyn __2(val13, r58, <missing>);
    goto L10(r59);
  }
}
fun inner657253850(type) {
  (reg type:*) -+> V { var type:*, reg ifelse:cls, reg type1:*, reg type2:V, reg r:V, reg p:p(V +), reg ifelse1:cls, reg type3:*, reg type4:V, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st type = type;
    ifelse = ldf ifelse;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      r = `==`(type2, "T");
      return r;
    };
    p2 = prom<V +>{
      ifelse1 = ldf ifelse;
      p1 = prom<V +>{
        type3 = ld type;
        type4 = force? type3;
        checkMissing(type4);
        r2 = `==`(type4, "U");
        return r2;
      };
      r4 = dyn ifelse1(p1, "U", "V");
      return r4;
    };
    r6 = dyn ifelse(p, "F", p2);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}