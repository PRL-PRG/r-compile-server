fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1524654321;
    st `open.srcfilecopy` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1524654321(con, line, `...`) {
  (reg con:*, reg line:*, reg ddd:dots) -+> V { var con:*, var line:*, var `...`:dots?, reg con1:*, reg con2:V, reg srcfile:*, reg srcfile1:V, reg c:L, reg srcfile3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg oldline:*, reg oldline1:V, reg c1:V, reg r3:V, reg c2:L, reg c4:V, reg oldline2:*, reg oldline3:V, reg line1:*, reg line2:V, reg r4:V, reg c5:L, reg c6:V, reg c8:L, reg close:cls, reg srcfile4:*, reg srcfile5:V, reg p:p(V +), reg r6:V, reg srcfile6:*, reg srcfile7:V, reg c9:L, reg srcfile9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg conn:*, reg conn1:V, reg c10:V, reg c11:L, reg textConnection:cls, reg srcfile10:*, reg srcfile11:V, reg c12:L, reg srcfile13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p1:p(V +), reg r13:V, reg l:*, reg c13:L, reg r15:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r18:V, reg l3:*, reg c14:L, reg r20:I, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r23:V, reg isOpen:cls, reg conn2:*, reg conn3:V, reg p2:p(V +), reg r26:V, reg r27:V, reg c15:L, reg open:cls, reg conn4:*, reg conn5:V, reg p3:p(V +), reg r29:V, reg l6:*, reg c16:L, reg r31:I, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r34:V, reg oldline4:*, reg oldline5:V, reg line3:*, reg line4:V, reg r35:V, reg c17:L, reg readLines:cls, reg conn6:*, reg conn7:V, reg p4:p(V +), reg line5:*, reg line6:V, reg oldline6:*, reg oldline7:V, reg r37:V, reg p5:p(V +), reg r39:V, reg line7:*, reg line8:V, reg l9:*, reg c18:L, reg line10:V, reg l11:*, reg dr12:V, reg dc6:L, reg dx12:V, reg line12:V, reg dx13:V, reg r40:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg conn8:*, reg conn9:V, reg invisible:cls, reg r43:V |
    mkenv;
    st con = con;
    st line = line;
    st `...` = ddd;
    con1 = ld con;
    check L11() else D0();
  D0():
    deopt 0 [con1];
  L11():
    con2 = force? con1;
    checkMissing(con2);
    st srcfile = con2;
    srcfile = ld srcfile;
    check L12() else D1();
  D1():
    deopt 3 [srcfile];
  L12():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    c = `is.object`(srcfile1);
    if c then L14() else L15(srcfile1);
  L13(dx1):
    st oldline = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L14():
    dr = tryDispatchBuiltin.1("$", srcfile1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(srcfile3):
    r = `$`(srcfile3, <sym line>);
    goto L13(r);
  L0(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L20() else L1(c2);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L17():
    oldline = ld oldline;
    check L19() else D2();
  L18():
    r1 = dyn base(<sym oldline>);
    goto L0(r1);
  D2():
    deopt 8 [oldline];
  L1(c4):
    c8 = `as.logical`(c4);
    if c8 then L24() else L2();
  L19():
    oldline1 = force? oldline;
    checkMissing(oldline1);
    c1 = `==`(oldline1, NULL);
    goto L0(c1);
  L20():
    oldline2 = ld oldline;
    check L21() else D3();
  D3():
    deopt 12 [c2, oldline2];
  L2():
    goto L3();
  L3():
    srcfile6 = ld srcfile;
    check L28() else D7();
  L21():
    oldline3 = force? oldline2;
    checkMissing(oldline3);
    line1 = ld line;
    check L22() else D4();
  L24():
    close = ldf close;
    check L25() else D5();
  D4():
    deopt 13 [c2, oldline3, line1];
  D5():
    deopt 18 [];
  D7():
    deopt 23 [srcfile6];
  L22():
    line2 = force? line1;
    checkMissing(line2);
    r4 = `>`(oldline3, line2);
    c5 = `as.logical`(r4);
    c6 = `&&`(c2, c5);
    goto L1(c6);
  L25():
    p = prom<V +>{
      srcfile4 = ld srcfile;
      srcfile5 = force? srcfile4;
      checkMissing(srcfile5);
      return srcfile5;
    };
    r6 = dyn close(p);
    check L26() else D6();
  L28():
    srcfile7 = force? srcfile6;
    checkMissing(srcfile7);
    c9 = `is.object`(srcfile7);
    if c9 then L30() else L31(srcfile7);
  D6():
    deopt 20 [r6];
  L26():
    goto L3();
  L29(dx3):
    st conn = dx3;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L30():
    dr2 = tryDispatchBuiltin.1("$", srcfile7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(dr2);
  L31(srcfile9):
    r8 = `$`(srcfile9, <sym conn>);
    goto L29(r8);
  L4(r10):
    c11 = `as.logical`(r10);
    if c11 then L36() else L5();
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L29(dx2);
  L33():
    conn = ld conn;
    check L35() else D8();
  L34():
    r9 = dyn base1(<sym conn>);
    goto L4(r9);
  D8():
    deopt 28 [conn];
  L5():
    isOpen = ldf isOpen;
    check L48() else D11();
  L6():
    oldline4 = ld oldline;
    check L58() else D15();
  L35():
    conn1 = force? conn;
    checkMissing(conn1);
    c10 = `==`(conn1, NULL);
    goto L4(c10);
  L36():
    textConnection = ldf textConnection;
    check L37() else D9();
  D9():
    deopt 32 [];
  D11():
    deopt 50 [];
  D15():
    deopt 70 [oldline4];
  L37():
    p1 = prom<V +>{
      srcfile10 = ld srcfile;
      srcfile11 = force? srcfile10;
      checkMissing(srcfile11);
      c12 = `is.object`(srcfile11);
      if c12 then L1() else L2(srcfile11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", srcfile11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(srcfile13):
      r11 = `$`(srcfile13, <sym lines>);
      goto L0(r11);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r13 = dyn textConnection[, open](p1, "r");
    check L38() else D10();
  L48():
    p2 = prom<V +>{
      conn2 = ld conn;
      conn3 = force? conn2;
      checkMissing(conn3);
      return conn3;
    };
    r26 = dyn isOpen(p2);
    check L49() else D12();
  L58():
    oldline5 = force? oldline4;
    checkMissing(oldline5);
    line3 = ld line;
    check L59() else D16();
  D10():
    deopt 36 [r13];
  D12():
    deopt 52 [r26];
  D16():
    deopt 71 [oldline5, line3];
  L38():
    st conn = r13;
    l = ld srcfile;
    c13 = `is.object`(l);
    if c13 then L40() else L41(r13, l);
  L49():
    r27 = `!`(r26);
    c15 = `as.logical`(r27);
    if c15 then L50() else L7();
  L59():
    line4 = force? line3;
    checkMissing(line4);
    r35 = `<`(oldline5, line4);
    c17 = `as.logical`(r35);
    if c17 then L60() else L8();
  L7():
    goto L6();
  L8():
    goto L9();
  L9():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L39(dx7):
    st srcfile = dx7;
    l3 = ld srcfile;
    c14 = `is.object`(l3);
    if c14 then L44() else L45(1, l3);
  L40():
    dr6 = tryDispatchBuiltin.0("$<-", l, r13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41(r13, dr6);
  L41(r15, l2):
    r18 = `$<-`(l2, <sym conn>, r13);
    goto L39(r18);
  L50():
    open = ldf open;
    check L51() else D13();
  L60():
    readLines = ldf readLines;
    check L61() else D17();
  D13():
    deopt 55 [];
  D17():
    deopt 75 [];
  L10(r42):
    popenv;
    return r42;
  L42():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L39(dx6);
  L43(dx9):
    st srcfile = dx9;
    st oldline = 1;
    goto L6();
  L44():
    dr8 = tryDispatchBuiltin.0("$<-", l3, 1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45(1, dr8);
  L45(r20, l5):
    r23 = `$<-`(l5, <sym line>, 1);
    goto L43(r23);
  L51():
    p3 = prom<V +>{
      conn4 = ld conn;
      conn5 = force? conn4;
      checkMissing(conn5);
      return conn5;
    };
    r29 = dyn open[, open](p3, "r");
    check L52() else D14();
  L61():
    p4 = prom<V +>{
      conn6 = ld conn;
      conn7 = force? conn6;
      checkMissing(conn7);
      return conn7;
    };
    p5 = prom<V +>{
      line5 = ld line;
      line6 = force? line5;
      checkMissing(line6);
      oldline6 = ld oldline;
      oldline7 = force? oldline6;
      checkMissing(oldline7);
      r37 = `-`(line6, oldline7);
      return r37;
    };
    r39 = dyn readLines[, , warn](p4, p5, FALSE);
    check L62() else D18();
  L69():
    conn8 = ld conn;
    check L71() else D20();
  L70():
    r41 = dyn base2(<sym conn>);
    goto L10(r41);
  D14():
    deopt 59 [r29];
  D18():
    deopt 80 [r39];
  D20():
    deopt 90 [conn8];
  L46():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L43(dx8);
  L52():
    l6 = ld srcfile;
    c16 = `is.object`(l6);
    if c16 then L54() else L55(1, l6);
  L62():
    line7 = ld line;
    check L63() else D19();
  L71():
    conn9 = force? conn8;
    checkMissing(conn9);
    invisible = ldf invisible in base;
    r43 = dyn invisible(conn9);
    check L72() else D21();
  D19():
    deopt 81 [line7];
  D21():
    deopt 93 [r43];
  L53(dx11):
    st srcfile = dx11;
    st oldline = 1;
    goto L6();
  L54():
    dr10 = tryDispatchBuiltin.0("$<-", l6, 1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L56() else L55(1, dr10);
  L55(r31, l8):
    r34 = `$<-`(l8, <sym line>, 1);
    goto L53(r34);
  L63():
    line8 = force? line7;
    checkMissing(line8);
    l9 = ld srcfile;
    c18 = `is.object`(l9);
    if c18 then L65() else L66(line8, l9);
  L72():
    goto L10(r43);
  L56():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L53(dx10);
  L64(line12, dx13):
    st srcfile = dx13;
    goto L9();
  L65():
    dr12 = tryDispatchBuiltin.0("$<-", l9, line8);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L67() else L66(line8, dr12);
  L66(line10, l11):
    r40 = `$<-`(l11, <sym line>, line8);
    goto L64(line10, r40);
  L67():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L64(line8, dx12);
  }
}