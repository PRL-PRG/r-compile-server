fun main() {
  () -+> V { reg r:cls, reg pmatch:cls, reg r1:V, reg pmatch1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg r6:V, reg pmatch2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg pmatch3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg pmatch4:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg c4:cls, reg r23:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg c5:cls, reg r27:V, reg p5:p(V +), reg r29:V, reg charmatch:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg c6:cls, reg r32:V, reg p6:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg c7:cls, reg r36:V, reg p7:p(V +), reg r38:V |
    mkenv;
    r = clos inner1741958398;
    st pmatch = r;
    pmatch = ldf pmatch;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn pmatch("", "");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    pmatch1 = ldf pmatch;
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
    r6 = dyn pmatch1("m", p);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    pmatch2 = ldf pmatch;
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
    r11 = dyn pmatch2("med", p1);
    check L5() else D5();
  D5():
    deopt 17 [r11];
  L5():
    pmatch3 = ldf pmatch;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c2 = ldf c in base;
      r14 = dyn c2("", "ab", "ab");
      goto L0(r14);
    L2():
      r12 = dyn base2("", "ab", "ab");
      goto L0(r12);
    };
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3("abc", "ab");
      goto L0(r18);
    L2():
      r16 = dyn base3("abc", "ab");
      goto L0(r16);
    };
    r20 = dyn pmatch3[, , `duplicates.ok`](p2, p3, FALSE);
    check L7() else D7();
  D7():
    deopt 24 [r20];
  L7():
    pmatch4 = ldf pmatch;
    check L8() else D8();
  D8():
    deopt 26 [];
  L8():
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c4 = ldf c in base;
      r23 = dyn c4("", "ab", "ab");
      goto L0(r23);
    L2():
      r21 = dyn base4("", "ab", "ab");
      goto L0(r21);
    };
    p5 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c5 = ldf c in base;
      r27 = dyn c5("abc", "ab");
      goto L0(r27);
    L2():
      r25 = dyn base5("abc", "ab");
      goto L0(r25);
    };
    r29 = dyn pmatch4[, , `duplicates.ok`](p4, p5, TRUE);
    check L9() else D9();
  D9():
    deopt 31 [r29];
  L9():
    charmatch = ldf charmatch;
    check L10() else D10();
  D10():
    deopt 33 [];
  L10():
    p6 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c6 = ldf c in base;
      r32 = dyn c6("", "ab", "ab");
      goto L0(r32);
    L2():
      r30 = dyn base6("", "ab", "ab");
      goto L0(r30);
    };
    p7 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c7 = ldf c in base;
      r36 = dyn c7("abc", "ab");
      goto L0(r36);
    L2():
      r34 = dyn base7("abc", "ab");
      goto L0(r34);
    };
    r38 = dyn charmatch(p6, p7);
    check L11() else D11();
  D11():
    deopt 36 [r38];
  L11():
    popenv;
    return r38;
  }
}
fun inner1741958398(x, table, nomatch, `duplicates.ok`) {
  (reg x:*, reg table:*, reg nomatch:*, reg duplicates_ok:*) -+> V { var x:*, var table:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, var `duplicates.ok`:*, reg duplicates_ok_isMissing:L, reg duplicates_ok_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg as_character:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg table1:*, reg table2:V, reg as_character1:cls, reg r7:V, reg nomatch1:*, reg nomatch2:V, reg duplicates_ok1:*, reg duplicates_ok2:V, reg pmatch:cls, reg r8:V |
    mkenv;
    st x = x;
    st table = table;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L0(NA_INT) else L0(nomatch);
  L0(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    duplicates_ok_isMissing = missing.0(duplicates_ok);
    if duplicates_ok_isMissing then L1(FALSE) else L1(duplicates_ok);
  L1(duplicates_ok_orDefault):
    st `duplicates.ok` = duplicates_ok_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r1):
    popenv;
    return r1;
  L5():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang pmatch(as.character(x), as.character(table), nomatch, duplicates.ok)>);
    goto L2(r);
  L3(r3):
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym x>);
    goto L3(r2);
  D0():
    deopt 4 [x1];
  L4(r6):
    nomatch1 = ld nomatch;
    check L15() else D4();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(x2);
    check L10() else D1();
  L11():
    table1 = ld table;
    check L13() else D2();
  L12():
    r5 = dyn base2(<sym table>);
    goto L4(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [table1];
  D4():
    deopt 14 [nomatch1];
  L10():
    goto L3(r4);
  L13():
    table2 = force? table1;
    checkMissing(table2);
    as_character1 = ldf `as.character` in base;
    r7 = dyn as_character1(table2);
    check L14() else D3();
  L15():
    nomatch2 = force? nomatch1;
    checkMissing(nomatch2);
    duplicates_ok1 = ld `duplicates.ok`;
    check L16() else D5();
  D3():
    deopt 13 [r7];
  D5():
    deopt 16 [duplicates_ok1];
  L14():
    goto L4(r7);
  L16():
    duplicates_ok2 = force? duplicates_ok1;
    checkMissing(duplicates_ok2);
    pmatch = ldf pmatch in base;
    r8 = dyn pmatch(r3, r6, nomatch2, duplicates_ok2);
    check L17() else D6();
  D6():
    deopt 19 [r8];
  L17():
    goto L2(r8);
  }
}