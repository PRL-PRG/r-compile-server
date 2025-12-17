fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `is.na.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg do_call:cls, reg cbind:*, reg cbind1:V, reg p:p(V +), reg lapply:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg is_na:*, reg is_na1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg r9:V, reg matrix:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg row_names:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r13:V, reg length1:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg _row_names_info:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r18:V, reg r19:V, reg c1:L, reg row_names1:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg r21:V, reg l:*, reg rownames__:cls, reg r22:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    matrix = ldf matrix;
    check L13() else D4();
  L2(r9):
    st y = r9;
    _row_names_info = ldf `.row_names_info`;
    check L15() else D6();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L8() else D1();
  L9():
    do_call = ldf `do.call`;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [];
  D6():
    deopt 19 [];
  L8():
    goto L0(r2);
  L10():
    p = prom<V +>{
      cbind = ld cbind;
      cbind1 = force? cbind;
      checkMissing(cbind1);
      return cbind1;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p2 = prom<V +>{
        is_na = ld `is.na`;
        is_na1 = force? is_na;
        checkMissing(is_na1);
        return is_na1;
      };
      r6 = dyn lapply(p1, p2);
      return r6;
    };
    r8 = dyn do_call(p, p3);
    check L11() else D3();
  L13():
    p5 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      row_names = ldf `row.names`;
      p4 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r13 = dyn row_names(p4);
      length1 = ldf length in base;
      r14 = dyn length1(r13);
      goto L0(r14);
    L2():
      r10 = dyn base1(<lang row.names(x)>);
      goto L0(r10);
    };
    r16 = dyn matrix(FALSE, p5, 0.0);
    check L14() else D5();
  L15():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r18 = dyn _row_names_info(p6);
    check L16() else D7();
  D3():
    deopt 10 [r8];
  D5():
    deopt 16 [r16];
  D7():
    deopt 21 [r18];
  L11():
    goto L2(r8);
  L14():
    goto L2(r16);
  L16():
    r19 = `>`(r18, 0);
    c1 = `as.logical`(r19);
    if c1 then L17() else L3();
  L3():
    goto L4();
  L4():
    y = ld y;
    check L23() else D12();
  L17():
    row_names1 = ldf `row.names`;
    check L18() else D8();
  D8():
    deopt 25 [];
  D12():
    deopt 35 [y];
  L18():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r21 = dyn row_names1(p7);
    check L19() else D9();
  L23():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D9():
    deopt 27 [r21];
  L19():
    l = ld y;
    rownames__ = ldf `rownames<-`;
    check L20() else D10();
  D10():
    deopt 29 [r21, l, r21];
  L20():
    r22 = dyn rownames__(l, NULL, r21);
    check L21() else D11();
  D11():
    deopt 31 [r21, r22];
  L21():
    st y = r22;
    goto L4();
  }
}