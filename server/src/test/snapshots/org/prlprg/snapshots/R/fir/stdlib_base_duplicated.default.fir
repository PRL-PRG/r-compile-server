fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1848075349`;
    st `duplicated.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1848075349`(x, incomparables, fromLast, nmax, `...`) {
  (reg x:*, reg incomparables:*, reg fromLast:*, reg nmax:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var nmax:*, reg nmax_isMissing:L, reg nmax_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg incomparables1:*, reg incomparables2:V, reg fromLast1:*, reg fromLast2:V, reg is_factor:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x5:*, reg x6:V, reg length:cls, reg r8:V, reg nlevels:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg r10:V, reg r11:V, reg min:cls, reg r12:V, reg r13:V, reg nmax1:*, reg nmax2:V, reg duplicated:cls, reg r14:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    fromLast_isMissing = missing.0(fromLast);
    if fromLast_isMissing then L1(FALSE) else L1(fromLast);
  L1(fromLast_orDefault):
    st fromLast = fromLast_orDefault;
    nmax_isMissing = missing.0(nmax);
    if nmax_isMissing then L2(NA_LGL) else L2(nmax);
  L2(nmax_orDefault):
    st nmax = nmax_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L3(r1):
    popenv;
    return r1;
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<lang duplicated(x, incomparables, fromLast, if(is.factor(x), min(length(x), `+`(nlevels(x), 1)), nmax))>);
    goto L3(r);
  D0():
    deopt 2 [x1];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    incomparables1 = ld incomparables;
    check L11() else D1();
  D1():
    deopt 4 [incomparables1];
  L11():
    incomparables2 = force? incomparables1;
    checkMissing(incomparables2);
    fromLast1 = ld fromLast;
    check L12() else D2();
  D2():
    deopt 6 [fromLast1];
  L12():
    fromLast2 = force? fromLast1;
    checkMissing(fromLast2);
    is_factor = ldf `is.factor`;
    check L13() else D3();
  D3():
    deopt 9 [];
  L13():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn is_factor(p);
    check L14() else D4();
  D4():
    deopt 11 [r3];
  L14():
    c = `as.logical`(r3);
    if c then L15() else L4();
  L4():
    nmax1 = ld nmax;
    check L26() else D10();
  L7(r13):
    duplicated = ldf duplicated in base;
    r14 = dyn duplicated(x2, incomparables2, fromLast2, r13);
    check L27() else D11();
  L15():
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D10():
    deopt 28 [nmax1];
  D11():
    deopt 31 [r14];
  L5(r5):
    goto L7(r5);
  L16():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L17():
    r4 = dyn base1(<lang length(x)>, <lang `+`(nlevels(x), 1)>);
    goto L5(r4);
  L26():
    nmax2 = force? nmax1;
    checkMissing(nmax2);
    goto L7(nmax2);
  L27():
    goto L3(r14);
  L6(r7):
    nlevels = ldf nlevels;
    check L22() else D7();
  L18():
    x5 = ld x;
    check L20() else D5();
  L19():
    r6 = dyn base2(<sym x>);
    goto L6(r6);
  D5():
    deopt 16 [x5];
  D7():
    deopt 21 [];
  L20():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r8 = dyn length(x6);
    check L21() else D6();
  L22():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r10 = dyn nlevels(p1);
    check L23() else D8();
  D6():
    deopt 19 [r8];
  D8():
    deopt 23 [r10];
  L21():
    goto L6(r8);
  L23():
    r11 = `+`(r10, 1);
    min = ldf min in base;
    r12 = dyn min(r7, r11);
    check L24() else D9();
  D9():
    deopt 27 [r12];
  L24():
    goto L5(r12);
  }
}