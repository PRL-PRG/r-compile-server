fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4227816699;
    st `head.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4227816699(x, n, `...`) {
  (reg x:*, reg n:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `...`:dots?, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg nrow:cls, reg r6:*, reg r7:V, reg p1:p(V +), reg r9:V, reg rep_int:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg ncol:cls, reg r13:*, reg r14:V, reg p2:p(V +), reg r16:V, reg rep_int1:cls, reg r17:V, reg list:cls, reg r18:V, reg l:*, reg dimnames__:cls, reg r19:V, reg noquote:cls, reg head_matrix:cls, reg r20:*, reg r21:V, reg p3:p(V +), reg n1:*, reg n2:V, reg nrow1:cls, reg r23:*, reg r24:V, reg p4:p(V +), reg r26:V, reg r27:V, reg nrow2:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r29:V, reg r30:V, reg p6:p(V +), reg ddd1:dots?, reg r32:V, reg p7:p(V +), reg r34:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    st `...` = ddd;
    format = ldf format;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn format(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st r = r1;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r3):
    l = ld r;
    dimnames__ = ldf `dimnames<-`;
    check L19() else D9();
  L6():
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r2 = dyn base(<lang rep.int("", nrow(r))>, <lang rep.int("", ncol(r))>);
    goto L1(r2);
  D9():
    deopt 28 [r3, l, r3];
  L2(r5):
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L8():
    nrow = ldf nrow;
    check L10() else D2();
  L9():
    r4 = dyn base1("", <lang nrow(r)>);
    goto L2(r4);
  L19():
    r19 = dyn dimnames__(l, NULL, r3);
    check L20() else D10();
  D2():
    deopt 11 [];
  D10():
    deopt 30 [r3, r19];
  L3(r12):
    list = ldf list in base;
    r18 = dyn list(r5, r12);
    check L18() else D8();
  L10():
    p1 = prom<V +>{
      r6 = ld r;
      r7 = force? r6;
      checkMissing(r7);
      return r7;
    };
    r9 = dyn nrow(p1);
    check L11() else D3();
  L13():
    ncol = ldf ncol;
    check L15() else D5();
  L14():
    r11 = dyn base2("", <lang ncol(r)>);
    goto L3(r11);
  L20():
    st r = r19;
    noquote = ldf noquote;
    check L21() else D11();
  D3():
    deopt 13 [r9];
  D5():
    deopt 20 [];
  D8():
    deopt 26 [r18];
  D11():
    deopt 33 [];
  L11():
    rep_int = ldf `rep.int` in base;
    r10 = dyn rep_int("", r9);
    check L12() else D4();
  L15():
    p2 = prom<V +>{
      r13 = ld r;
      r14 = force? r13;
      checkMissing(r14);
      return r14;
    };
    r16 = dyn ncol(p2);
    check L16() else D6();
  L18():
    goto L1(r18);
  L21():
    p7 = prom<V +>{
      head_matrix = ldf `head.matrix`;
      p3 = prom<V +>{
        r20 = ld r;
        r21 = force? r20;
        checkMissing(r21);
        return r21;
      };
      p6 = prom<V +>{
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        nrow1 = ldf nrow;
        p4 = prom<V +>{
          r23 = ld r;
          r24 = force? r23;
          checkMissing(r24);
          return r24;
        };
        r26 = dyn nrow1(p4);
        r27 = `+`(n2, r26);
        nrow2 = ldf nrow;
        p5 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        r29 = dyn nrow2(p5);
        r30 = `-`(r27, r29);
        return r30;
      };
      ddd1 = ld `...`;
      r32 = dyn head_matrix[, n, `...`](p3, p6, ddd1);
      return r32;
    };
    r34 = dyn noquote(p7);
    check L22() else D12();
  D4():
    deopt 15 [r10];
  D6():
    deopt 22 [r16];
  D12():
    deopt 35 [r34];
  L12():
    goto L2(r10);
  L16():
    rep_int1 = ldf `rep.int` in base;
    r17 = dyn rep_int1("", r16);
    check L17() else D7();
  L22():
    popenv;
    return r34;
  D7():
    deopt 24 [r17];
  L17():
    goto L3(r17);
  }
}