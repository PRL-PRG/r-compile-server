fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4227816699;
    st `head.function` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4227816699(x, n, `...`) {
  (reg x:*, reg n:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `...`:dots?, reg _checkHT:cls, reg n1:*, reg n2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg dim:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg as_matrix:cls, reg deparse:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg lines:*, reg lines1:V, reg r14:I, reg list:cls, reg r15:V, reg l:*, reg dimnames__:cls, reg r16:V, reg noquote:cls, reg head:cls, reg lines2:*, reg lines3:V, reg p4:p(V +), reg n3:*, reg n4:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    st `...` = ddd;
    _checkHT = ldf `.checkHT`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p1 = prom<V +>{
      sym = ldf dim;
      base = ldf dim in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dim = ldf dim in base;
      r3 = dyn dim(x2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    r5 = dyn _checkHT(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r5];
  L4():
    as_matrix = ldf `as.matrix`;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p3 = prom<V +>{
      deparse = ldf deparse;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn deparse(p2);
      return r7;
    };
    r9 = dyn as_matrix(p3);
    check L6() else D3();
  D3():
    deopt 8 [r9];
  L6():
    st lines = r9;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L1(r11):
    l = ld lines;
    dimnames__ = ldf `dimnames<-`;
    check L13() else D6();
  L7():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L8():
    r10 = dyn base1(<lang seq_along(lines)>, "");
    goto L1(r10);
  D6():
    deopt 20 [r11, l, r11];
  L2(r13):
    list = ldf list in base;
    r15 = dyn list(r13, "");
    check L12() else D5();
  L9():
    lines = ld lines;
    check L11() else D4();
  L10():
    r12 = dyn base2(<sym lines>);
    goto L2(r12);
  L13():
    r16 = dyn dimnames__(l, NULL, r11);
    check L14() else D7();
  D4():
    deopt 13 [lines];
  D5():
    deopt 18 [r15];
  D7():
    deopt 22 [r11, r16];
  L11():
    lines1 = force? lines;
    checkMissing(lines1);
    r14 = seq_along(lines1);
    goto L2(r14);
  L12():
    goto L1(r15);
  L14():
    st lines = r16;
    noquote = ldf noquote;
    check L15() else D8();
  D8():
    deopt 25 [];
  L15():
    p6 = prom<V +>{
      head = ldf head;
      p4 = prom<V +>{
        lines2 = ld lines;
        lines3 = force? lines2;
        checkMissing(lines3);
        return lines3;
      };
      p5 = prom<V +>{
        n3 = ld n;
        n4 = force? n3;
        checkMissing(n4);
        return n4;
      };
      r19 = dyn head[, n](p4, p5);
      return r19;
    };
    r21 = dyn noquote(p6);
    check L16() else D9();
  D9():
    deopt 27 [r21];
  L16():
    popenv;
    return r21;
  }
}