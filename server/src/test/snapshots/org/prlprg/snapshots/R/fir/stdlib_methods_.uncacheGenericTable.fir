fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3333887956;
    st `.uncacheGenericTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3333887956(name, def, table) {
  (reg name:*, reg def:*, reg table:*) -+> V { var name:*, var def:*, var table:*, reg exists:cls, reg name1:*, reg name2:V, reg p:p(V +), reg table1:*, reg table2:V, reg p1:p(V +), reg r2:V, reg c:L, reg __:cls, reg r3:V, reg get:cls, reg name3:*, reg name4:V, reg p2:p(V +), reg table3:*, reg table4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg prev:*, reg prev1:V, reg is_function:cls, reg r9:V, reg c1:L, reg remove:cls, reg name5:*, reg name6:V, reg p4:p(V +), reg table5:*, reg table6:V, reg p5:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg newpkg:*, reg newpkg1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg prev2:*, reg prev3:V, reg names:cls, reg r19:V, reg match:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg i:*, reg i1:V, reg is_na:cls, reg r23:V, reg r24:V, reg c2:L, reg l:*, reg c3:L, reg r26:dots, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg ____:cls, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg prev4:*, reg prev5:V, reg length:cls, reg r33:V, reg r34:V, reg c4:L, reg remove1:cls, reg name7:*, reg name8:V, reg p6:p(V +), reg table7:*, reg table8:V, reg p7:p(V +), reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg prev6:*, reg prev7:V, reg length1:cls, reg r42:V, reg r43:V, reg c5:L, reg prev8:*, reg prev9:V, reg c6:L, reg prev11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r44:V, reg assign:cls, reg name9:*, reg name10:V, reg p8:p(V +), reg prev12:*, reg prev13:V, reg p9:p(V +), reg table9:*, reg table10:V, reg p10:p(V +), reg r48:V |
    mkenv;
    st name = name;
    st def = def;
    st table = table;
    exists = ldf exists;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r2 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L17() else D1();
  D1():
    deopt 7 [r2];
  L17():
    c = `as.logical`(r2);
    if c then L18() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L18():
    __ = ldf `@` in base;
    r3 = dyn __(<sym def>, <sym package>);
    st newpkg = r3;
    get = ldf get;
    check L19() else D2();
  D2():
    deopt 12 [];
  L19():
    p2 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p3 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r6 = dyn get[, envir](p2, p3);
    check L20() else D3();
  D3():
    deopt 16 [r6];
  L20():
    st prev = r6;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r8):
    c1 = `as.logical`(r8);
    if c1 then L25() else L2();
  L21():
    prev = ld prev;
    check L23() else D4();
  L22():
    r7 = dyn base(<sym prev>);
    goto L1(r7);
  D4():
    deopt 20 [prev];
  L2():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L23():
    prev1 = force? prev;
    checkMissing(prev1);
    is_function = ldf `is.function` in base;
    r9 = dyn is_function(prev1);
    check L24() else D5();
  L25():
    remove = ldf remove;
    check L26() else D6();
  D5():
    deopt 23 [r9];
  D6():
    deopt 25 [];
  L4(r16):
    st i = r16;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L24():
    goto L1(r9);
  L26():
    p4 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p5 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    r12 = dyn remove[list, envir](p4, p5);
    check L27() else D7();
  L30():
    newpkg = ld newpkg;
    check L32() else D8();
  L31():
    r15 = dyn base1(<sym newpkg>, <lang names(prev)>);
    goto L4(r15);
  D7():
    deopt 30 [r12];
  D8():
    deopt 36 [newpkg];
  L6(r22):
    r24 = `!`(r22);
    c2 = `as.logical`(r24);
    if c2 then L42() else L7();
  L27():
    popenv;
    return r12;
  L32():
    newpkg1 = force? newpkg;
    checkMissing(newpkg1);
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L38():
    i = ld i;
    check L40() else D12();
  L39():
    r21 = dyn base3(<sym i>);
    goto L6(r21);
  D12():
    deopt 51 [i];
  L5(r18):
    match = ldf match in base;
    r20 = dyn match(newpkg1, r18, NA_INT, NULL);
    check L37() else D11();
  L7():
    popenv;
    return NULL;
  L33():
    prev2 = ld prev;
    check L35() else D9();
  L34():
    r17 = dyn base2(<sym prev>);
    goto L5(r17);
  L40():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(i1);
    check L41() else D13();
  L42():
    l = ld prev;
    c3 = `is.object`(l);
    if c3 then L43() else L44(NULL, l);
  D9():
    deopt 40 [prev2];
  D11():
    deopt 47 [r20];
  D13():
    deopt 54 [r23];
  L8(dx1):
    st prev = dx1;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L35():
    prev3 = force? prev2;
    checkMissing(prev3);
    names = ldf names in base;
    r19 = dyn names(prev3);
    check L36() else D10();
  L37():
    goto L4(r20);
  L41():
    goto L6(r23);
  L43():
    dr = tryDispatchBuiltin.0("[[<-", l, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(NULL, dr);
  L44(r26, l2):
    i2 = ld i;
    check L46() else D14();
  D10():
    deopt 43 [r19];
  D14():
    deopt 59 [r26, l2, NULL, i2];
  L10(r32):
    r34 = `==`(r32, 0);
    c4 = `as.logical`(r34);
    if c4 then L53() else L11();
  L36():
    goto L5(r19);
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L46():
    i3 = force? i2;
    ____ = ldf `[[<-` in base;
    r29 = dyn ____(l2, NULL, i3);
    goto L8(r29);
  L49():
    prev4 = ld prev;
    check L51() else D15();
  L50():
    r31 = dyn base4(<sym prev>);
    goto L10(r31);
  D15():
    deopt 68 [prev4];
  L11():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L51():
    prev5 = force? prev4;
    checkMissing(prev5);
    length = ldf length in base;
    r33 = dyn length(prev5);
    check L52() else D16();
  L53():
    remove1 = ldf remove;
    check L54() else D17();
  D16():
    deopt 71 [r33];
  D17():
    deopt 75 [];
  L13(r41):
    r43 = `==`(r41, 1);
    c5 = `as.logical`(r43);
    if c5 then L62() else L14();
  L52():
    goto L10(r33);
  L54():
    p6 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p7 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      return table8;
    };
    r37 = dyn remove1[list, envir](p6, p7);
    check L55() else D18();
  L58():
    prev6 = ld prev;
    check L60() else D19();
  L59():
    r40 = dyn base5(<sym prev>);
    goto L13(r40);
  D18():
    deopt 80 [r37];
  D19():
    deopt 84 [prev6];
  L12():
    assign = ldf assign;
    check L68() else D22();
  L14():
    goto L12();
  L55():
    popenv;
    return r37;
  L60():
    prev7 = force? prev6;
    checkMissing(prev7);
    length1 = ldf length in base;
    r42 = dyn length1(prev7);
    check L61() else D20();
  L62():
    prev8 = ld prev;
    check L63() else D21();
  D20():
    deopt 87 [r42];
  D21():
    deopt 90 [prev8];
  D22():
    deopt 99 [];
  L61():
    goto L13(r42);
  L63():
    prev9 = force? prev8;
    checkMissing(prev9);
    c6 = `is.object`(prev9);
    if c6 then L64() else L65(prev9);
  L68():
    p8 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p9 = prom<V +>{
      prev12 = ld prev;
      prev13 = force? prev12;
      checkMissing(prev13);
      return prev13;
    };
    p10 = prom<V +>{
      table9 = ld table;
      table10 = force? table9;
      checkMissing(table10);
      return table10;
    };
    r48 = dyn assign[, , envir](p8, p9, p10);
    check L69() else D23();
  D23():
    deopt 104 [r48];
  L15(dx3):
    st prev = dx3;
    goto L12();
  L64():
    dr2 = tryDispatchBuiltin.1("[[", prev9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(prev11):
    __1 = ldf `[[` in base;
    r44 = dyn __1(prev11, 1);
    goto L15(r44);
  L69():
    popenv;
    return r48;
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  }
}