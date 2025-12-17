fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1041695309;
    st checkLibAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1041695309(lpath) {
  (reg lpath:*) -+> V { var lpath:*, reg readFileSyms:cls, reg lpath1:*, reg lpath2:V, reg p:p(V +), reg r1:V, reg ldata:*, reg ldata1:V, reg c:L, reg ldata3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ldata4:*, reg ldata5:V, reg c1:L, reg ldata8:V, reg ldata9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r5:V, reg inRfuns:cls, reg lsyms:*, reg lsyms1:V, reg p1:p(V +), reg r7:V, reg data_frame:cls, reg lsyms2:*, reg lsyms3:V, reg p2:p(V +), reg unmap:cls, reg lsyms4:*, reg lsyms5:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg funAPI:cls, reg r13:V, reg unmap1:cls, reg api:*, reg api1:V, reg c3:L, reg api3:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r14:V, reg p5:p(V +), reg r16:V, reg l:*, reg c4:L, reg r18:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r21:V, reg l3:*, reg c5:L, reg r23:dots, reg l5:*, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r26:V, reg l6:*, reg c6:L, reg r28:dots, reg l8:*, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r31:V, reg merge:cls, reg lsyms6:*, reg lsyms7:V, reg p6:p(V +), reg api4:*, reg api5:V, reg p7:p(V +), reg r34:V, reg val:*, reg val1:V, reg c7:L, reg val3:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg order:cls, reg val4:*, reg val5:V, reg c8:L, reg val7:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r35:V, reg p8:p(V +), reg r37:V, reg __1:cls, reg r38:V, reg l9:*, reg c9:L, reg r40:dots, reg l11:*, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r43:V, reg l12:*, reg rownames__:cls, reg r44:V, reg val8:*, reg val9:V |
    mkenv;
    st lpath = lpath;
    readFileSyms = ldf readFileSyms;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      lpath1 = ld lpath;
      lpath2 = force? lpath1;
      checkMissing(lpath2);
      return lpath2;
    };
    r1 = dyn readFileSyms(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st ldata = r1;
    ldata = ld ldata;
    check L4() else D2();
  D2():
    deopt 5 [ldata];
  L4():
    ldata1 = force? ldata;
    checkMissing(ldata1);
    c = `is.object`(ldata1);
    if c then L5() else L6(ldata1);
  L0(dx1):
    c2 = `is.object`(dx1);
    if c2 then L14() else L15(dx1);
  L5():
    dr = tryDispatchBuiltin.1("[", ldata1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(ldata3):
    ldata4 = ld ldata;
    check L8() else D3();
  D3():
    deopt 7 [ldata3, ldata4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    ldata5 = force? ldata4;
    checkMissing(ldata5);
    c1 = `is.object`(ldata5);
    if c1 then L10() else L11(ldata3, ldata5);
  L13(dx7):
    st lsyms = dx7;
    inRfuns = ldf inRfuns;
    check L17() else D4();
  L14():
    dr4 = tryDispatchBuiltin.1("$", dx1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L16() else L15(dr4);
  L15(dx5):
    r5 = `$`(dx5, <sym name>);
    goto L13(r5);
  D4():
    deopt 18 [];
  L9(dx3):
    r3 = `==`(dx3, "U");
    __ = ldf `[` in base;
    r4 = dyn __(ldata1, r3, <missing>);
    goto L0(r4);
  L10():
    dr2 = tryDispatchBuiltin.1("$", ldata5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(ldata3, dr2);
  L11(ldata8, ldata9):
    r2 = `$`(ldata9, <sym type>);
    goto L9(r2);
  L16():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx6);
  L17():
    p1 = prom<V +>{
      lsyms = ld lsyms;
      lsyms1 = force? lsyms;
      checkMissing(lsyms1);
      return lsyms1;
    };
    r7 = dyn inRfuns(p1);
    check L18() else D5();
  D5():
    deopt 20 [r7];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L18():
    st lsyms = r7;
    data_frame = ldf `data.frame`;
    check L19() else D6();
  D6():
    deopt 23 [];
  L19():
    p2 = prom<V +>{
      lsyms2 = ld lsyms;
      lsyms3 = force? lsyms2;
      checkMissing(lsyms3);
      return lsyms3;
    };
    p4 = prom<V +>{
      unmap = ldf unmap;
      p3 = prom<V +>{
        lsyms4 = ld lsyms;
        lsyms5 = force? lsyms4;
        checkMissing(lsyms5);
        return lsyms5;
      };
      r10 = dyn unmap(p3);
      return r10;
    };
    r12 = dyn data_frame[name, unmapped](p2, p4);
    check L20() else D7();
  D7():
    deopt 28 [r12];
  L20():
    st lsyms = r12;
    funAPI = ldf funAPI;
    check L21() else D8();
  D8():
    deopt 31 [];
  L21():
    r13 = dyn funAPI();
    check L22() else D9();
  D9():
    deopt 32 [r13];
  L22():
    st api = r13;
    unmap1 = ldf unmap;
    check L23() else D10();
  D10():
    deopt 35 [];
  L23():
    p5 = prom<V +>{
      api = ld api;
      api1 = force? api;
      checkMissing(api1);
      c3 = `is.object`(api1);
      if c3 then L1() else L2(api1);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", api1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(api3):
      r14 = `$`(api3, <sym name>);
      goto L0(r14);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r16 = dyn unmap1(p5);
    check L24() else D11();
  D11():
    deopt 37 [r16];
  L24():
    l = ld api;
    c4 = `is.object`(l);
    if c4 then L26() else L27(r16, l);
  L25(dx11):
    st api = dx11;
    l3 = ld api;
    c5 = `is.object`(l3);
    if c5 then L30() else L31(NULL, l3);
  L26():
    dr8 = tryDispatchBuiltin.0("$<-", l, r16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L28() else L27(r16, dr8);
  L27(r18, l2):
    r21 = `$<-`(l2, <sym unmapped>, r16);
    goto L25(r21);
  L28():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L25(dx10);
  L29(dx13):
    st api = dx13;
    l6 = ld api;
    c6 = `is.object`(l6);
    if c6 then L34() else L35(NULL, l6);
  L30():
    dr10 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L32() else L31(NULL, dr10);
  L31(r23, l5):
    r26 = `$<-`(l5, <sym name>, NULL);
    goto L29(r26);
  L32():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L29(dx12);
  L33(dx15):
    st api = dx15;
    merge = ldf merge;
    check L37() else D12();
  L34():
    dr12 = tryDispatchBuiltin.0("$<-", l6, NULL);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L36() else L35(NULL, dr12);
  L35(r28, l8):
    r31 = `$<-`(l8, <sym loc>, NULL);
    goto L33(r31);
  D12():
    deopt 52 [];
  L36():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L33(dx14);
  L37():
    p6 = prom<V +>{
      lsyms6 = ld lsyms;
      lsyms7 = force? lsyms6;
      checkMissing(lsyms7);
      return lsyms7;
    };
    p7 = prom<V +>{
      api4 = ld api;
      api5 = force? api4;
      checkMissing(api5);
      return api5;
    };
    r34 = dyn merge[, , `all.x`](p6, p7, TRUE);
    check L38() else D13();
  D13():
    deopt 57 [r34];
  L38():
    st val = r34;
    val = ld val;
    check L39() else D14();
  D14():
    deopt 59 [val];
  L39():
    val1 = force? val;
    checkMissing(val1);
    c7 = `is.object`(val1);
    if c7 then L40() else L41(val1);
  L1(dx17):
    st val = dx17;
    l9 = ld val;
    c9 = `is.object`(l9);
    if c9 then L46() else L47(NULL, l9);
  L40():
    dr14 = tryDispatchBuiltin.1("[", val1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L42() else L41(dr14);
  L41(val3):
    order = ldf order;
    check L43() else D15();
  D15():
    deopt 62 [val3];
  L42():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L1(dx16);
  L43():
    p8 = prom<V +>{
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      c8 = `is.object`(val5);
      if c8 then L1() else L2(val5);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("$", val5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(val7):
      r35 = `$`(val7, <sym apitype>);
      goto L0(r35);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    r37 = dyn order(p8);
    check L44() else D16();
  L45(dx21):
    st val = dx21;
    l12 = ld val;
    rownames__ = ldf `rownames<-`;
    check L49() else D17();
  L46():
    dr18 = tryDispatchBuiltin.0("$<-", l9, NULL);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L48() else L47(NULL, dr18);
  L47(r40, l11):
    r43 = `$<-`(l11, <sym unmapped>, NULL);
    goto L45(r43);
  D16():
    deopt 64 [val3, r37];
  D17():
    deopt 77 [NULL, l12, NULL];
  L44():
    __1 = ldf `[` in base;
    r38 = dyn __1(val1, r37, <missing>);
    goto L1(r38);
  L48():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L45(dx20);
  L49():
    r44 = dyn rownames__(l12, NULL, NULL);
    check L50() else D18();
  D18():
    deopt 79 [NULL, r44];
  L50():
    st val = r44;
    val8 = ld val;
    check L51() else D19();
  D19():
    deopt 81 [val8];
  L51():
    val9 = force? val8;
    checkMissing(val9);
    popenv;
    return val9;
  }
}