fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3988289244;
    st `.resetInheritedMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3988289244(fenv, mtable) {
  (reg fenv:*, reg mtable:*) -+> V { var fenv:*, var mtable:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg mtable1:*, reg mtable2:V, reg names:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg fenv1:*, reg fenv2:V, reg c:L, reg fenv4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg c1:V, reg r7:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg allTable:*, reg allTable1:V, reg names1:cls, reg r10:V, reg remove:cls, reg setdiff:cls, reg allObjects:*, reg allObjects1:V, reg p:p(V +), reg direct:*, reg direct1:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg allTable2:*, reg allTable3:V, reg p3:p(V +), reg r16:V, reg new_env:cls, reg fenv5:*, reg fenv6:V, reg p4:p(V +), reg r19:V, reg assign:cls, reg allTable4:*, reg allTable5:V, reg p5:p(V +), reg fenv7:*, reg fenv8:V, reg p6:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg direct2:*, reg direct3:V, reg allObjects2:*, reg allObjects3:V, reg match:cls, reg r27:V, reg anyNA:cls, reg r28:V, reg c3:L, reg list2env:cls, reg as_list:cls, reg mtable3:*, reg mtable4:V, reg p7:p(V +), reg r30:V, reg p8:p(V +), reg allTable6:*, reg allTable7:V, reg p9:p(V +), reg r33:V, reg direct4:*, reg direct5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg allTable8:*, reg allTable9:V, reg c5:L, reg i6:I, reg allTable11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg d:*, reg d1:V, reg __:cls, reg r35:V, reg is:cls, reg m:*, reg m1:V, reg p10:p(V +), reg r37:V, reg c6:L, reg as:cls, reg m2:*, reg m3:V, reg p11:p(V +), reg r39:V, reg l1:*, reg c7:L, reg i12:I, reg r41:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i14:I, reg r43:V, reg dx5:V, reg d2:*, reg d3:V, reg ____:cls, reg r44:V, reg i15:I |
    mkenv;
    st fenv = fenv;
    st mtable = mtable;
    character = ldf character;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    r = dyn character();
    check L16() else D1();
  D1():
    deopt 2 [r];
  L16():
    st allObjects = r;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r2):
    st direct = r2;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    mtable1 = ld mtable;
    check L19() else D2();
  L18():
    r1 = dyn base(<sym mtable>);
    goto L0(r1);
  D2():
    deopt 6 [mtable1];
  L1(r5):
    r7 = `!`(r5);
    c2 = `as.logical`(r7);
    if c2 then L28() else L2();
  L19():
    mtable2 = force? mtable1;
    checkMissing(mtable2);
    names = ldf names in base;
    r3 = dyn names(mtable2);
    check L20() else D3();
  L21():
    fenv1 = ld fenv;
    check L23() else D4();
  L22():
    r4 = dyn base1(<lang `<-`(allTable, `$`(fenv, .AllMTable))>);
    goto L1(r4);
  D3():
    deopt 9 [r3];
  D4():
    deopt 12 [fenv1];
  L2():
    new_env = ldf `new.env`;
    check L36() else D9();
  L4():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L20():
    goto L0(r3);
  L23():
    fenv2 = force? fenv1;
    checkMissing(fenv2);
    c = `is.object`(fenv2);
    if c then L25() else L26(fenv2);
  L28():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  D9():
    deopt 33 [];
  L3(r9):
    st allObjects = r9;
    remove = ldf remove;
    check L33() else D7();
  L5(r24):
    c3 = `as.logical`(r24);
    if c3 then L48() else L7();
  L24(dx1):
    st allTable = dx1;
    c1 = `==`(dx1, NULL);
    goto L1(c1);
  L25():
    dr = tryDispatchBuiltin.1("$", fenv2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(fenv4):
    r6 = `$`(fenv4, <sym .AllMTable>);
    goto L24(r6);
  L29():
    allTable = ld allTable;
    check L31() else D5();
  L30():
    r8 = dyn base2(<sym allTable>);
    goto L3(r8);
  L36():
    p4 = prom<V +>{
      fenv5 = ld fenv;
      fenv6 = force? fenv5;
      checkMissing(fenv6);
      return fenv6;
    };
    r19 = dyn new_env(TRUE, p4);
    check L37() else D10();
  L40():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L41():
    r23 = dyn base3(<lang match(direct, allObjects)>);
    goto L5(r23);
  D5():
    deopt 20 [allTable];
  D7():
    deopt 26 [];
  D10():
    deopt 36 [r19];
  L6(r26):
    anyNA = ldf anyNA in base;
    r28 = dyn anyNA(r26);
    check L47() else D16();
  L7():
    goto L8();
  L8():
    direct4 = ld direct;
    check L52() else D19();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L31():
    allTable1 = force? allTable;
    checkMissing(allTable1);
    names1 = ldf names in base;
    r10 = dyn names1(allTable1);
    check L32() else D6();
  L33():
    p2 = prom<V +>{
      setdiff = ldf setdiff;
      p = prom<V +>{
        allObjects = ld allObjects;
        allObjects1 = force? allObjects;
        checkMissing(allObjects1);
        return allObjects1;
      };
      p1 = prom<V +>{
        direct = ld direct;
        direct1 = force? direct;
        checkMissing(direct1);
        return direct1;
      };
      r13 = dyn setdiff(p, p1);
      return r13;
    };
    p3 = prom<V +>{
      allTable2 = ld allTable;
      allTable3 = force? allTable2;
      checkMissing(allTable3);
      return allTable3;
    };
    r16 = dyn remove[list, envir](p2, p3);
    check L34() else D8();
  L37():
    st allTable = r19;
    assign = ldf assign;
    check L38() else D11();
  L42():
    direct2 = ld direct;
    check L44() else D13();
  L43():
    r25 = dyn base4(<sym direct>, <sym allObjects>);
    goto L6(r25);
  L48():
    list2env = ldf list2env;
    check L49() else D17();
  D6():
    deopt 23 [r10];
  D8():
    deopt 31 [r16];
  D11():
    deopt 39 [];
  D13():
    deopt 49 [direct2];
  D16():
    deopt 58 [r28];
  D17():
    deopt 60 [];
  D19():
    deopt 66 [direct4];
  L32():
    goto L3(r10);
  L34():
    goto L4();
  L38():
    p5 = prom<V +>{
      allTable4 = ld allTable;
      allTable5 = force? allTable4;
      checkMissing(allTable5);
      return allTable5;
    };
    p6 = prom<V +>{
      fenv7 = ld fenv;
      fenv8 = force? fenv7;
      checkMissing(fenv8);
      return fenv8;
    };
    r22 = dyn assign[, , envir](".AllMTable", p5, p6);
    check L39() else D12();
  L44():
    direct3 = force? direct2;
    checkMissing(direct3);
    allObjects2 = ld allObjects;
    check L45() else D14();
  L47():
    goto L5(r28);
  L49():
    p8 = prom<V +>{
      as_list = ldf `as.list`;
      p7 = prom<V +>{
        mtable3 = ld mtable;
        mtable4 = force? mtable3;
        checkMissing(mtable4);
        return mtable4;
      };
      r30 = dyn as_list[, `all.names`](p7, TRUE);
      return r30;
    };
    p9 = prom<V +>{
      allTable6 = ld allTable;
      allTable7 = force? allTable6;
      checkMissing(allTable7);
      return allTable7;
    };
    r33 = dyn list2env(p8, p9);
    check L50() else D18();
  L52():
    direct5 = force? direct4;
    checkMissing(direct5);
    s = toForSeq(direct5);
    l = length(s);
    i = 0;
    goto L9(i);
  D12():
    deopt 44 [r22];
  D14():
    deopt 51 [allObjects2];
  D18():
    deopt 63 [r33];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L53() else L14();
  L39():
    goto L4();
  L45():
    allObjects3 = force? allObjects2;
    checkMissing(allObjects3);
    match = ldf match in base;
    r27 = dyn match(direct3, allObjects3, NA_INT, NULL);
    check L46() else D15();
  L50():
    goto L8();
  D15():
    deopt 56 [r27];
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st d = x;
    allTable8 = ld allTable;
    check L54() else D20();
  L46():
    goto L6(r27);
  L53():
    popenv;
    return NULL;
  D20():
    deopt 68 [i2, allTable8];
  L54():
    allTable9 = force? allTable8;
    checkMissing(allTable9);
    c5 = `is.object`(allTable9);
    if c5 then L55() else L56(i2, allTable9);
  L10(i8, dx3):
    st m = dx3;
    is = ldf is;
    check L59() else D22();
  L55():
    dr2 = tryDispatchBuiltin.1("[[", allTable9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(i2, dr2);
  L56(i6, allTable11):
    d = ld d;
    check L58() else D21();
  D21():
    deopt 70 [i6, allTable11, d];
  D22():
    deopt 75 [i8];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(i2, dx2);
  L58():
    d1 = force? d;
    __ = ldf `[[` in base;
    r35 = dyn __(allTable11, d1);
    goto L10(i6, r35);
  L59():
    p10 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r37 = dyn is(p10, "MethodWithNext");
    check L60() else D23();
  D23():
    deopt 78 [i8, r37];
  L60():
    c6 = `as.logical`(r37);
    if c6 then L61() else L11();
  L11():
    goto L13(i8);
  L13(i15):
    goto L9(i15);
  L61():
    as = ldf as;
    check L62() else D24();
  D24():
    deopt 80 [i8];
  L62():
    p11 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r39 = dyn as(p11, "MethodDefinition");
    check L63() else D25();
  D25():
    deopt 83 [i8, r39];
  L63():
    l1 = ld allTable;
    c7 = `is.object`(l1);
    if c7 then L64() else L65(i8, r39, l1);
  L12(i14, r43, dx5):
    st allTable = dx5;
    goto L13(i14);
  L64():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r39);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(i8, r39, dr4);
  L65(i12, r41, l3):
    d2 = ld d;
    check L67() else D26();
  D26():
    deopt 85 [i12, r41, l3, r39, d2];
  L66():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(i8, r39, dx4);
  L67():
    d3 = force? d2;
    ____ = ldf `[[<-` in base;
    r44 = dyn ____(l3, r39, d3);
    goto L12(i12, r41, r44);
  }
}