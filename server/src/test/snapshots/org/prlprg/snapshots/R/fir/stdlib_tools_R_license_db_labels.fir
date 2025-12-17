fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner992443750;
    st R_license_db_labels = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner992443750(ldb) {
  (reg ldb:*) -+> V { var ldb:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ldb1:*, reg ldb2:V, reg c:V, reg c1:L, reg ldb3:*, reg ldb4:V, reg c2:L, reg ldb6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg which:cls, reg lab:*, reg lab1:V, reg r5:V, reg p:p(V +), reg r7:V, reg ldb7:*, reg ldb8:V, reg c3:L, reg ldb10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg pos:*, reg pos1:V, reg __:cls, reg r9:V, reg ldb11:*, reg ldb12:V, reg c5:L, reg ldb14:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r10:V, reg c6:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg pos2:*, reg pos3:V, reg __1:cls, reg r11:V, reg ifelse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg abbrevs:*, reg abbrevs1:V, reg nzchar:cls, reg r14:V, reg p1:p(V +), reg abbrevs2:*, reg abbrevs3:V, reg p2:p(V +), reg ldb15:*, reg ldb16:V, reg c7:L, reg ldb18:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r17:V, reg c8:L, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg pos4:*, reg pos5:V, reg __2:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg l:*, reg c9:L, reg r22:V, reg l2:*, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg pos6:*, reg pos7:V, reg ___:cls, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg versions:*, reg versions1:V, reg nzchar1:cls, reg r28:V, reg pos8:*, reg pos9:V, reg c10:L, reg pos11:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg ind:*, reg ind1:V, reg __3:cls, reg r29:V, reg sprintf:cls, reg lab2:*, reg lab3:V, reg c11:L, reg lab5:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg pos12:*, reg pos13:V, reg __4:cls, reg r30:V, reg p4:p(V +), reg versions2:*, reg versions3:V, reg c12:L, reg versions5:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg ind2:*, reg ind3:V, reg __5:cls, reg r32:V, reg p5:p(V +), reg r34:V, reg l3:*, reg c13:L, reg r36:V, reg l5:*, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg pos14:*, reg pos15:V, reg ___1:cls, reg r39:V, reg lab6:*, reg lab7:V |
    mkenv;
    st ldb = ldb;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L12() else L1();
  L9():
    ldb1 = ld ldb;
    check L11() else D0();
  L10():
    r = dyn base(<sym ldb>);
    goto L0(r);
  D0():
    deopt 1 [ldb1];
  L1():
    ldb3 = ld ldb;
    check L15() else D1();
  L11():
    ldb2 = force? ldb1;
    checkMissing(ldb2);
    c = `==`(ldb2, NULL);
    goto L0(c);
  L12():
    popenv;
    return NULL;
  D1():
    deopt 9 [ldb3];
  L15():
    ldb4 = force? ldb3;
    checkMissing(ldb4);
    c2 = `is.object`(ldb4);
    if c2 then L17() else L18(ldb4);
  L16(dx1):
    st lab = dx1;
    which = ldf which;
    check L20() else D2();
  L17():
    dr = tryDispatchBuiltin.1("$", ldb4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(ldb6):
    r4 = `$`(ldb6, <sym SSS>);
    goto L16(r4);
  D2():
    deopt 14 [];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L20():
    p = prom<V +>{
      lab = ld lab;
      lab1 = force? lab;
      checkMissing(lab1);
      r5 = `==`(lab1, "");
      return r5;
    };
    r7 = dyn which(p);
    check L21() else D3();
  D3():
    deopt 16 [r7];
  L21():
    st pos = r7;
    ldb7 = ld ldb;
    check L22() else D4();
  D4():
    deopt 18 [ldb7];
  L22():
    ldb8 = force? ldb7;
    checkMissing(ldb8);
    c3 = `is.object`(ldb8);
    if c3 then L24() else L25(ldb8);
  L23(dx3):
    c4 = `is.object`(dx3);
    if c4 then L27() else L28(dx3);
  L24():
    dr2 = tryDispatchBuiltin.1("$", ldb8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(ldb10):
    r8 = `$`(ldb10, <sym Abbrev>);
    goto L23(r8);
  L3(dx7):
    st abbrevs = dx7;
    ldb11 = ld ldb;
    check L31() else D6();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dr4);
  L28(dx5):
    pos = ld pos;
    check L30() else D5();
  D5():
    deopt 21 [dx5, pos];
  D6():
    deopt 25 [ldb11];
  L29():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx6);
  L30():
    pos1 = force? pos;
    __ = ldf `[` in base;
    r9 = dyn __(dx5, pos1);
    goto L3(r9);
  L31():
    ldb12 = force? ldb11;
    checkMissing(ldb12);
    c5 = `is.object`(ldb12);
    if c5 then L33() else L34(ldb12);
  L32(dx9):
    c6 = `is.object`(dx9);
    if c6 then L36() else L37(dx9);
  L33():
    dr6 = tryDispatchBuiltin.1("$", ldb12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(dr6);
  L34(ldb14):
    r10 = `$`(ldb14, <sym Version>);
    goto L32(r10);
  L4(dx13):
    st versions = dx13;
    ifelse = ldf ifelse;
    check L40() else D8();
  L35():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L32(dx8);
  L36():
    dr8 = tryDispatchBuiltin.1("[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L38() else L37(dr8);
  L37(dx11):
    pos2 = ld pos;
    check L39() else D7();
  D7():
    deopt 28 [dx11, pos2];
  D8():
    deopt 33 [];
  L38():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx12);
  L39():
    pos3 = force? pos2;
    __1 = ldf `[` in base;
    r11 = dyn __1(dx11, pos3);
    goto L4(r11);
  L40():
    p1 = prom<V +>{
      sym1 = ldf nzchar;
      base1 = ldf nzchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      abbrevs = ld abbrevs;
      abbrevs1 = force? abbrevs;
      checkMissing(abbrevs1);
      nzchar = ldf nzchar in base;
      r14 = dyn nzchar(abbrevs1);
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym abbrevs>);
      goto L0(r12);
    };
    p2 = prom<V +>{
      abbrevs2 = ld abbrevs;
      abbrevs3 = force? abbrevs2;
      checkMissing(abbrevs3);
      return abbrevs3;
    };
    p3 = prom<V +>{
      ldb15 = ld ldb;
      ldb16 = force? ldb15;
      checkMissing(ldb16);
      c7 = `is.object`(ldb16);
      if c7 then L2() else L3(ldb16);
    L1(dx15):
      c8 = `is.object`(dx15);
      if c8 then L5() else L6(dx15);
    L2():
      dr10 = tryDispatchBuiltin.1("$", ldb16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(ldb18):
      r17 = `$`(ldb18, <sym Name>);
      goto L1(r17);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx14);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx17):
      pos4 = ld pos;
      pos5 = force? pos4;
      __2 = ldf `[` in base;
      r18 = dyn __2(dx17, pos5);
      goto L0(r18);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    r20 = dyn ifelse(p1, p2, p3);
    check L41() else D9();
  D9():
    deopt 37 [r20];
  L41():
    l = ld lab;
    c9 = `is.object`(l);
    if c9 then L42() else L43(r20, l);
  L5(dx21):
    st lab = dx21;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L42():
    dr14 = tryDispatchBuiltin.0("[<-", l, r20);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L44() else L43(r20, dr14);
  L43(r22, l2):
    pos6 = ld pos;
    check L45() else D10();
  D10():
    deopt 39 [r22, l2, r20, pos6];
  L6(r27):
    st ind = r27;
    pos8 = ld pos;
    check L50() else D13();
  L44():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L5(dx20);
  L45():
    pos7 = force? pos6;
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, r20, pos7);
    goto L5(r25);
  L46():
    versions = ld versions;
    check L48() else D11();
  L47():
    r26 = dyn base2(<sym versions>);
    goto L6(r26);
  D11():
    deopt 45 [versions];
  D13():
    deopt 50 [pos8];
  L48():
    versions1 = force? versions;
    checkMissing(versions1);
    nzchar1 = ldf nzchar in base;
    r28 = dyn nzchar1(versions1);
    check L49() else D12();
  L50():
    pos9 = force? pos8;
    checkMissing(pos9);
    c10 = `is.object`(pos9);
    if c10 then L51() else L52(pos9);
  D12():
    deopt 48 [r28];
  L7(dx23):
    st pos = dx23;
    sprintf = ldf sprintf;
    check L55() else D15();
  L49():
    goto L6(r28);
  L51():
    dr16 = tryDispatchBuiltin.1("[", pos9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L53() else L52(dr16);
  L52(pos11):
    ind = ld ind;
    check L54() else D14();
  D14():
    deopt 52 [pos11, ind];
  D15():
    deopt 57 [];
  L53():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L7(dx22);
  L54():
    ind1 = force? ind;
    __3 = ldf `[` in base;
    r29 = dyn __3(pos11, ind1);
    goto L7(r29);
  L55():
    p4 = prom<V +>{
      lab2 = ld lab;
      lab3 = force? lab2;
      checkMissing(lab3);
      c11 = `is.object`(lab3);
      if c11 then L1() else L2(lab3);
    L0(dx25):
      return dx25;
    L1():
      dr18 = tryDispatchBuiltin.1("[", lab3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(lab5):
      pos12 = ld pos;
      pos13 = force? pos12;
      __4 = ldf `[` in base;
      r30 = dyn __4(lab5, pos13);
      goto L0(r30);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    p5 = prom<V +>{
      versions2 = ld versions;
      versions3 = force? versions2;
      checkMissing(versions3);
      c12 = `is.object`(versions3);
      if c12 then L1() else L2(versions3);
    L0(dx27):
      return dx27;
    L1():
      dr20 = tryDispatchBuiltin.1("[", versions3);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(versions5):
      ind2 = ld ind;
      ind3 = force? ind2;
      __5 = ldf `[` in base;
      r32 = dyn __5(versions5, ind3);
      goto L0(r32);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx26);
    };
    r34 = dyn sprintf("%s version %s", p4, p5);
    check L56() else D16();
  D16():
    deopt 61 [r34];
  L56():
    l3 = ld lab;
    c13 = `is.object`(l3);
    if c13 then L57() else L58(r34, l3);
  L8(dx29):
    st lab = dx29;
    lab6 = ld lab;
    check L61() else D18();
  L57():
    dr22 = tryDispatchBuiltin.0("[<-", l3, r34);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L59() else L58(r34, dr22);
  L58(r36, l5):
    pos14 = ld pos;
    check L60() else D17();
  D17():
    deopt 63 [r36, l5, r34, pos14];
  D18():
    deopt 67 [lab6];
  L59():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L8(dx28);
  L60():
    pos15 = force? pos14;
    ___1 = ldf `[<-` in base;
    r39 = dyn ___1(l5, r34, pos15);
    goto L8(r39);
  L61():
    lab7 = force? lab6;
    checkMissing(lab7);
    popenv;
    return lab7;
  }
}