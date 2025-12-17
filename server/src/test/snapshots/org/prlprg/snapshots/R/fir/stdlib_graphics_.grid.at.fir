fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner303233784;
    st `.grid.at` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner303233784(side, n, log, equilogs, axp, usr2, nintLog) {
  (reg side:*, reg n:*, reg log:*, reg equilogs:*, reg axp:*, reg usr2:*, reg nintLog:*) -+> V { var side:*, var n:*, var log:*, var equilogs:*, var axp:*, var usr2:*, var nintLog:*, reg nintLog_isMissing:L, reg nintLog_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg c:V, reg c1:L, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg axp1:*, reg axp2:V, reg is_numeric:cls, reg r4:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg ax:*, reg ax1:V, reg length:cls, reg r8:V, reg r9:V, reg p1:p(V +), reg r11:V, reg log1:*, reg log2:V, reg c2:L, reg c4:V, reg equilogs1:*, reg equilogs2:V, reg c5:L, reg c6:V, reg c8:L, reg c10:V, reg ax2:*, reg ax3:V, reg c11:L, reg c13:L, reg ax5:V, reg dr:V, reg dc:L, reg dx:V, reg c15:L, reg dx1:V, reg __:cls, reg r12:V, reg r13:V, reg c16:L, reg c17:V, reg c19:L, reg l:*, reg c20:L, reg r15:R, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:R, reg dx3:V, reg ___:cls, reg r18:V, reg axTicks:cls, reg side1:*, reg side2:V, reg p2:p(V +), reg ax6:*, reg ax7:V, reg p3:p(V +), reg usr3:*, reg usr4:V, reg p4:p(V +), reg log3:*, reg log4:V, reg p5:p(V +), reg nintLog1:*, reg nintLog2:V, reg p6:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg n3:*, reg n4:V, reg is_na:cls, reg r28:V, reg r29:V, reg c21:L, reg c23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg c26:L, reg r31:V, reg n5:*, reg n6:V, reg as_integer:cls, reg r32:V, reg r33:V, reg c27:L, reg c28:V, reg c30:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg usr5:*, reg usr6:V, reg c31:L, reg usr8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r36:V, reg usr9:*, reg usr10:V, reg c32:L, reg usr12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r37:V, reg n7:*, reg n8:V, reg r38:V, reg seq_int:cls, reg r39:V, reg log5:*, reg log6:V, reg c33:L, reg at:*, reg at1:V, reg r40:V, reg r41:V, reg at2:*, reg at3:V, reg c34:L, reg r43:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg r48:V, reg n9:*, reg n10:V, reg r49:V, reg c35:cls, reg r50:V, reg r51:V, reg __3:cls, reg r52:V |
    mkenv;
    st side = side;
    st n = n;
    st log = log;
    st equilogs = equilogs;
    st axp = axp;
    st usr2 = usr2;
    nintLog_isMissing = missing.0(nintLog);
    if nintLog_isMissing then L0(NULL) else L0(nintLog);
  L0(nintLog_orDefault):
    st nintLog = nintLog_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L23() else L2();
  L20():
    n1 = ld n;
    check L22() else D0();
  L21():
    r = dyn base(<sym n>);
    goto L1(r);
  D0():
    deopt 1 [n1];
  L2():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L22():
    n2 = force? n1;
    checkMissing(n2);
    c = `==`(n2, NULL);
    goto L1(c);
  L23():
    stopifnot = ldf stopifnot;
    check L24() else D1();
  D1():
    deopt 5 [];
  L9(r27):
    r29 = `!`(r27);
    c21 = `as.logical`(r29);
    if c21 then L48() else L10(c21);
  L24():
    p = prom<V +>{
      sym1 = ldf `is.numeric`;
      base1 = ldf `is.numeric` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      axp1 = ld axp;
      axp2 = force? axp1;
      checkMissing(axp2);
      st ax = axp2;
      is_numeric = ldf `is.numeric` in base;
      r4 = dyn is_numeric(axp2);
      goto L0(r4);
    L2():
      r2 = dyn base1(<lang `<-`(ax, axp)>);
      goto L0(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      r9 = `==`(r7, 3);
      return r9;
    L1():
      ax = ld ax;
      ax1 = force? ax;
      checkMissing(ax1);
      length = ldf length in base;
      r8 = dyn length(ax1);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym ax>);
      goto L0(r6);
    };
    r11 = dyn stopifnot(p, p1);
    check L25() else D2();
  L44():
    n3 = ld n;
    check L46() else D8();
  L45():
    r26 = dyn base3(<sym n>);
    goto L9(r26);
  D2():
    deopt 8 [r11];
  D8():
    deopt 45 [n3];
  L10(c23):
    c30 = `as.logical`(c23);
    if c30 then L54() else L12();
  L25():
    log1 = ld log;
    check L26() else D3();
  L46():
    n4 = force? n3;
    checkMissing(n4);
    is_na = ldf `is.na` in base;
    r28 = dyn is_na(n4);
    check L47() else D9();
  L48():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  D3():
    deopt 9 [log1];
  D9():
    deopt 48 [r28];
  L11(c26, r31):
    st n = r31;
    r33 = `>=`(r31, 1);
    c27 = `as.logical`(r33);
    c28 = `&&`(c26, c27);
    goto L10(c28);
  L12():
    invisible.0();
    popenv;
    return NULL;
  L26():
    log2 = force? log1;
    checkMissing(log2);
    c2 = `as.logical`(log2);
    if c2 then L27() else L3(c2);
  L47():
    goto L9(r28);
  L49():
    n5 = ld n;
    check L51() else D10();
  L50():
    r30 = dyn base4(<sym n>);
    goto L11(c21, r30);
  L54():
    sym5 = ldf `seq.int`;
    base5 = ldf `seq.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  D10():
    deopt 52 [c21, n5];
  L3(c4):
    c8 = `as.logical`(c4);
    if c8 then L30() else L4(c8);
  L13(r35):
    st at = r35;
    log5 = ld log;
    check L67() else D16();
  L27():
    equilogs1 = ld equilogs;
    check L28() else D4();
  L51():
    n6 = force? n5;
    checkMissing(n6);
    as_integer = ldf `as.integer` in base;
    r32 = dyn as_integer(n6);
    check L52() else D11();
  L55():
    usr5 = ld usr2;
    check L57() else D12();
  L56():
    r34 = dyn base5[, , `length.out`](<lang `[`(usr2, 1)>, <lang `[`(usr2, 2)>, <lang `+`(n, 1)>);
    goto L13(r34);
  D4():
    deopt 11 [c2, equilogs1];
  D11():
    deopt 55 [c21, r32];
  D12():
    deopt 62 [usr5];
  D16():
    deopt 80 [log5];
  L4(c10):
    c19 = `as.logical`(c10);
    if c19 then L36() else L6();
  L28():
    equilogs2 = force? equilogs1;
    checkMissing(equilogs2);
    c5 = `as.logical`(equilogs2);
    c6 = `&&`(c2, c5);
    goto L3(c6);
  L30():
    ax2 = ld ax;
    check L31() else D5();
  L52():
    goto L11(c21, r32);
  L57():
    usr6 = force? usr5;
    checkMissing(usr6);
    c31 = `is.object`(usr6);
    if c31 then L58() else L59(usr6);
  L67():
    log6 = force? log5;
    checkMissing(log6);
    c33 = `as.logical`(log6);
    if c33 then L68() else L16();
  D5():
    deopt 14 [c8, ax2];
  L6():
    goto L8();
  L8():
    axTicks = ldf axTicks;
    check L41() else D6();
  L14(dx5):
    usr9 = ld usr2;
    check L61() else D13();
  L16():
    at2 = ld at;
    check L71() else D18();
  L17(r41):
    c34 = `is.object`(r41);
    if c34 then L72() else L73(r41);
  L31():
    ax3 = force? ax2;
    checkMissing(ax3);
    c11 = `is.object`(ax3);
    if c11 then L32() else L33(c8, ax3);
  L36():
    l = ld ax;
    c20 = `is.object`(l);
    if c20 then L37() else L38(1.0, l);
  L58():
    dr4 = tryDispatchBuiltin.1("[", usr6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(dr4);
  L59(usr8):
    __1 = ldf `[` in base;
    r36 = dyn __1(usr8, 1);
    goto L14(r36);
  L68():
    at = ld at;
    check L69() else D17();
  D6():
    deopt 32 [];
  D13():
    deopt 67 [usr9];
  D17():
    deopt 83 [10.0, at];
  D18():
    deopt 86 [at2];
  L5(c15, dx1):
    r13 = `>`(dx1, 0.0);
    c16 = `as.logical`(r13);
    c17 = `&&`(c15, c16);
    goto L4(c17);
  L7(r17, dx3):
    st ax = dx3;
    goto L8();
  L18(dx9):
    popenv;
    return dx9;
  L32():
    dr = tryDispatchBuiltin.1("[", ax3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(c8, dr);
  L33(c13, ax5):
    __ = ldf `[` in base;
    r12 = dyn __(ax5, 3);
    goto L5(c13, r12);
  L37():
    dr2 = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(1.0, dr2);
  L38(r15, l2):
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l2, 1.0, 3);
    goto L7(r15, r18);
  L41():
    p2 = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p3 = prom<V +>{
      ax6 = ld ax;
      ax7 = force? ax6;
      checkMissing(ax7);
      return ax7;
    };
    p4 = prom<V +>{
      usr3 = ld usr2;
      usr4 = force? usr3;
      checkMissing(usr4);
      return usr4;
    };
    p5 = prom<V +>{
      log3 = ld log;
      log4 = force? log3;
      checkMissing(log4);
      return log4;
    };
    p6 = prom<V +>{
      nintLog1 = ld nintLog;
      nintLog2 = force? nintLog1;
      checkMissing(nintLog2);
      return nintLog2;
    };
    r25 = dyn axTicks[, axp, usr, log, nintLog](p2, p3, p4, p5, p6);
    check L42() else D7();
  L60():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L61():
    usr10 = force? usr9;
    checkMissing(usr10);
    c32 = `is.object`(usr10);
    if c32 then L62() else L63(usr10);
  L69():
    at1 = force? at;
    checkMissing(at1);
    r40 = `^`(10.0, at1);
    goto L17(r40);
  L71():
    at3 = force? at2;
    checkMissing(at3);
    goto L17(at3);
  L72():
    dr8 = tryDispatchBuiltin.1("[", r41);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L74() else L73(dr8);
  L73(r43):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L75() else L76();
  D7():
    deopt 42 [r25];
  L15(dx7):
    n7 = ld n;
    check L65() else D14();
  L19(r47, r48):
    r51 = `-`(<missing>, r48);
    __3 = ldf `[` in base;
    r52 = dyn __3(r47, r51);
    goto L18(r52);
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(c8, dx);
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(1.0, dx2);
  L42():
    popenv;
    return r25;
  L62():
    dr6 = tryDispatchBuiltin.1("[", usr10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(dr6);
  L63(usr12):
    __2 = ldf `[` in base;
    r37 = dyn __2(usr12, 2);
    goto L15(r37);
  L74():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx8);
  L75():
    n9 = ld n;
    check L77() else D19();
  L76():
    r46 = dyn base6(1, <lang `+`(n, 1)>);
    goto L19(r43, r46);
  D14():
    deopt 72 [n7];
  D19():
    deopt 91 [r43, n9];
  L64():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L65():
    n8 = force? n7;
    checkMissing(n8);
    r38 = `+`(n8, 1);
    seq_int = ldf `seq.int` in base;
    r39 = dyn seq_int(dx5, dx7, r38);
    check L66() else D15();
  L77():
    n10 = force? n9;
    checkMissing(n10);
    r49 = `+`(n10, 1);
    c35 = ldf c in base;
    r50 = dyn c35(1, r49);
    check L78() else D20();
  D15():
    deopt 78 [r39];
  D20():
    deopt 96 [r43, r50];
  L66():
    goto L13(r39);
  L78():
    goto L19(r43, r50);
  }
}