fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.deparse_S3_methods_table_for_base` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_getlocale:cls, reg r2:V, reg identical:cls, reg r3:V, reg r4:V, reg c:L, reg warning:cls, reg r5:V, reg _make_S3_methods_table_for_base:cls, reg r7:V, reg nrow:cls, reg mdb:*, reg mdb1:V, reg p:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg sprintf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg n:*, reg n1:V, reg r16:V, reg rep_int:cls, reg r17:V, reg c1:cls, reg r18:V, reg p1:p(V +), reg mdb2:*, reg mdb3:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg p2:p(V +), reg mdb6:*, reg mdb7:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r22:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg n2:*, reg n3:V, reg r28:V, reg rep_int1:cls, reg r29:V, reg c4:cls, reg r30:V, reg p4:p(V +), reg r32:V, reg c5:cls, reg r33:V |
    mkenv;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r4 = `!`(r1);
    c = `as.logical`(r4);
    if c then L9() else L1();
  L4():
    Sys_getlocale = ldf `Sys.getlocale`;
    check L6() else D0();
  L5():
    r = dyn base("C", <lang Sys.getlocale("LC_COLLATE")>);
    goto L0(r);
  D0():
    deopt 4 [];
  L1():
    goto L2();
  L2():
    _make_S3_methods_table_for_base = ldf `.make_S3_methods_table_for_base`;
    check L13() else D5();
  L6():
    r2 = dyn Sys_getlocale("LC_COLLATE");
    check L7() else D1();
  L9():
    warning = ldf warning;
    check L10() else D3();
  D1():
    deopt 6 [r2];
  D3():
    deopt 18 [];
  D5():
    deopt 24 [];
  L7():
    identical = ldf identical in base;
    r3 = dyn identical("C", r2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L8() else D2();
  L10():
    r5 = dyn warning("*not* using 'C' for LC_COLLATE locale");
    check L11() else D4();
  L13():
    r7 = dyn _make_S3_methods_table_for_base();
    check L14() else D6();
  D2():
    deopt 15 [r3];
  D4():
    deopt 20 [r5];
  D6():
    deopt 25 [r7];
  L8():
    goto L0(r3);
  L11():
    goto L2();
  L14():
    st mdb = r7;
    nrow = ldf nrow;
    check L15() else D7();
  D7():
    deopt 28 [];
  L15():
    p = prom<V +>{
      mdb = ld mdb;
      mdb1 = force? mdb;
      checkMissing(mdb1);
      return mdb1;
    };
    r9 = dyn nrow(p);
    check L16() else D8();
  D8():
    deopt 30 [r9];
  L16():
    st n = r9;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(r11):
    popenv;
    return r11;
  L17():
    sprintf = ldf sprintf;
    check L19() else D9();
  L18():
    r10 = dyn base1(<lang sprintf("%s\"%s\", \"%s\"%s", c("matrix(c(", rep.int("         ", `-`(n, 1))), `[`(mdb, , 1), `[`(mdb, , 2), c(rep.int(",", `-`(n, 1)), "),"))>, "       ncol = 2L, byrow = TRUE,", "       dimnames = list(NULL, c(\"generic\", \"class\")))");
    goto L3(r10);
  D9():
    deopt 35 [];
  L19():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r13):
      return r13;
    L2():
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r12 = dyn base2("matrix(c(", <lang rep.int("         ", `-`(n, 1))>);
      goto L0(r12);
    L1(r15):
      c1 = ldf c in base;
      r18 = dyn c1("matrix(c(", r15);
      goto L0(r18);
    L4():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r16 = `-`(n1, 1);
      rep_int = ldf `rep.int` in base;
      r17 = dyn rep_int("         ", r16);
      goto L1(r17);
    L5():
      r14 = dyn base3("         ", <lang `-`(n, 1)>);
      goto L1(r14);
    };
    p2 = prom<V +>{
      mdb2 = ld mdb;
      mdb3 = force? mdb2;
      checkMissing(mdb3);
      c2 = `is.object`(mdb3);
      if c2 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", mdb3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r20 = dyn __(mdb3, <missing>, 1);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      mdb6 = ld mdb;
      mdb7 = force? mdb6;
      checkMissing(mdb7);
      c3 = `is.object`(mdb7);
      if c3 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", mdb7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r22 = dyn __1(mdb7, <missing>, 2);
      goto L0(r22);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r25):
      return r25;
    L2():
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r24 = dyn base4(<lang rep.int(",", `-`(n, 1))>, "),");
      goto L0(r24);
    L1(r27):
      c4 = ldf c in base;
      r30 = dyn c4(r27, "),");
      goto L0(r30);
    L4():
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r28 = `-`(n3, 1);
      rep_int1 = ldf `rep.int` in base;
      r29 = dyn rep_int1(",", r28);
      goto L1(r29);
    L5():
      r26 = dyn base5(",", <lang `-`(n, 1)>);
      goto L1(r26);
    };
    r32 = dyn sprintf("%s\"%s\", \"%s\"%s", p1, p2, p3, p4);
    check L20() else D10();
  D10():
    deopt 41 [r32];
  L20():
    c5 = ldf c in base;
    r33 = dyn c5(r32, "       ncol = 2L, byrow = TRUE,", "       dimnames = list(NULL, c(\"generic\", \"class\")))");
    check L21() else D11();
  D11():
    deopt 45 [r33];
  L21():
    goto L3(r33);
  }
}