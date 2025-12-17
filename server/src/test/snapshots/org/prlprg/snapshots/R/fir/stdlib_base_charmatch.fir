fun main() {
  () -+> V { reg r:cls, reg charmatch:cls, reg r1:V, reg charmatch1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg r6:V, reg charmatch2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V |
    mkenv;
    r = clos inner1276910098;
    st charmatch = r;
    charmatch = ldf charmatch;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn charmatch("", "");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    charmatch1 = ldf charmatch;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("mean", "median", "mode");
      goto L0(r4);
    L2():
      r2 = dyn base("mean", "median", "mode");
      goto L0(r2);
    };
    r6 = dyn charmatch1("m", p);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    charmatch2 = ldf charmatch;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("mean", "median", "mode");
      goto L0(r9);
    L2():
      r7 = dyn base1("mean", "median", "mode");
      goto L0(r7);
    };
    r11 = dyn charmatch2("med", p1);
    check L5() else D5();
  D5():
    deopt 17 [r11];
  L5():
    popenv;
    return r11;
  }
}
fun inner1276910098(x, table, nomatch) {
  (reg x:*, reg table:*, reg nomatch:*) -+> V { var x:*, var table:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg as_character:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg table1:*, reg table2:V, reg as_character1:cls, reg r7:V, reg nomatch1:*, reg nomatch2:V, reg charmatch:cls, reg r8:V |
    mkenv;
    st x = x;
    st table = table;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L0(NA_INT) else L0(nomatch);
  L0(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    popenv;
    return r1;
  L4():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang charmatch(as.character(x), as.character(table), nomatch)>);
    goto L1(r);
  L2(r3):
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  D0():
    deopt 4 [x1];
  L3(r6):
    nomatch1 = ld nomatch;
    check L14() else D4();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(x2);
    check L9() else D1();
  L10():
    table1 = ld table;
    check L12() else D2();
  L11():
    r5 = dyn base2(<sym table>);
    goto L3(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [table1];
  D4():
    deopt 14 [nomatch1];
  L9():
    goto L2(r4);
  L12():
    table2 = force? table1;
    checkMissing(table2);
    as_character1 = ldf `as.character` in base;
    r7 = dyn as_character1(table2);
    check L13() else D3();
  L14():
    nomatch2 = force? nomatch1;
    checkMissing(nomatch2);
    charmatch = ldf charmatch in base;
    r8 = dyn charmatch(r3, r6, nomatch2);
    check L15() else D5();
  D3():
    deopt 13 [r7];
  D5():
    deopt 17 [r8];
  L13():
    goto L3(r7);
  L15():
    goto L1(r8);
  }
}