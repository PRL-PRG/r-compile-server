fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st getRfuns = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sprintf:cls, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg file_path:cls, reg R_home:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg dir:cls, reg R_home1:cls, reg r8:V, reg p2:p(V +), reg pat:*, reg pat1:V, reg p3:p(V +), reg r11:V, reg dir1:cls, reg R_home2:cls, reg r12:V, reg p4:p(V +), reg pat2:*, reg pat3:V, reg p5:p(V +), reg r15:V, reg c1:cls, reg r16:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p6:p(V +), reg lapply:cls, reg ofiles:*, reg ofiles1:V, reg p7:p(V +), reg readFileSyms:*, reg readFileSyms1:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg data:*, reg data1:V, reg c2:L, reg data3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg data4:*, reg data5:V, reg c3:L, reg data8:V, reg data9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg cleanRfuns:cls, reg fdata:*, reg fdata1:V, reg c4:L, reg fdata3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r26:V, reg p10:p(V +), reg r28:V |
    mkenv;
    sprintf = ldf sprintf;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym dynlib.ext>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn sprintf("(\\.dylib|%s)$", p);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    st pat = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r4):
    st ofiles = r4;
    do_call = ldf `do.call`;
    check L13() else D9();
  L4():
    file_path = ldf `file.path`;
    check L6() else D2();
  L5():
    r3 = dyn base(<lang file.path(R.home("bin"), "exec", "R")>, <lang dir(R.home("lib"), pattern=pat, full.names=TRUE)>, <lang dir(R.home("modules"), pattern=pat, full.names=TRUE)>);
    goto L0(r3);
  D2():
    deopt 9 [];
  D9():
    deopt 34 [];
  L6():
    p1 = prom<V +>{
      R_home = ldf `R.home`;
      r5 = dyn R_home("bin");
      return r5;
    };
    r7 = dyn file_path(p1, "exec", "R");
    check L7() else D3();
  L13():
    p6 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p9 = prom<V +>{
      lapply = ldf lapply;
      p7 = prom<V +>{
        ofiles = ld ofiles;
        ofiles1 = force? ofiles;
        checkMissing(ofiles1);
        return ofiles1;
      };
      p8 = prom<V +>{
        readFileSyms = ld readFileSyms;
        readFileSyms1 = force? readFileSyms;
        checkMissing(readFileSyms1);
        return readFileSyms1;
      };
      r20 = dyn lapply(p7, p8);
      return r20;
    };
    r22 = dyn do_call(p6, p9);
    check L14() else D10();
  D3():
    deopt 13 [r7];
  D10():
    deopt 37 [r22];
  L7():
    dir = ldf dir;
    check L8() else D4();
  L14():
    st data = r22;
    data = ld data;
    check L15() else D11();
  D4():
    deopt 15 [];
  D11():
    deopt 39 [data];
  L8():
    p2 = prom<V +>{
      R_home1 = ldf `R.home`;
      r8 = dyn R_home1("lib");
      return r8;
    };
    p3 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    r11 = dyn dir[, pattern, `full.names`](p2, p3, TRUE);
    check L9() else D5();
  L15():
    data1 = force? data;
    checkMissing(data1);
    c2 = `is.object`(data1);
    if c2 then L16() else L17(data1);
  D5():
    deopt 21 [r11];
  L1(dx3):
    st fdata = dx3;
    cleanRfuns = ldf cleanRfuns;
    check L24() else D13();
  L9():
    dir1 = ldf dir;
    check L10() else D6();
  L16():
    dr2 = tryDispatchBuiltin.1("[", data1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(data3):
    data4 = ld data;
    check L19() else D12();
  D6():
    deopt 23 [];
  D12():
    deopt 41 [data3, data4];
  D13():
    deopt 51 [];
  L10():
    p4 = prom<V +>{
      R_home2 = ldf `R.home`;
      r12 = dyn R_home2("modules");
      return r12;
    };
    p5 = prom<V +>{
      pat2 = ld pat;
      pat3 = force? pat2;
      checkMissing(pat3);
      return pat3;
    };
    r15 = dyn dir1[, pattern, `full.names`](p4, p5, TRUE);
    check L11() else D7();
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L19():
    data5 = force? data4;
    checkMissing(data5);
    c3 = `is.object`(data5);
    if c3 then L21() else L22(data3, data5);
  L24():
    p10 = prom<V +>{
      fdata = ld fdata;
      fdata1 = force? fdata;
      checkMissing(fdata1);
      c4 = `is.object`(fdata1);
      if c4 then L1() else L2(fdata1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", fdata1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(fdata3):
      r26 = `$`(fdata3, <sym name>);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r28 = dyn cleanRfuns(p10);
    check L25() else D14();
  D7():
    deopt 29 [r15];
  D14():
    deopt 53 [r28];
  L11():
    c1 = ldf c in base;
    r16 = dyn c1(r7, r11, r15);
    check L12() else D8();
  L20(dx5):
    r24 = `==`(dx5, "T");
    __ = ldf `[` in base;
    r25 = dyn __(data1, r24, <missing>);
    goto L1(r25);
  L21():
    dr4 = tryDispatchBuiltin.1("$", data5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L23() else L22(data3, dr4);
  L22(data8, data9):
    r23 = `$`(data9, <sym type>);
    goto L20(r23);
  L25():
    popenv;
    return r28;
  D8():
    deopt 31 [r16];
  L12():
    goto L0(r16);
  L23():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx4);
  }
}