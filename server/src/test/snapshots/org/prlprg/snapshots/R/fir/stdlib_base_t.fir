fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg r1:V, reg p:p(V +), reg r3:V, reg t:cls, reg a:*, reg a1:V, reg p1:p(V +), reg r5:V, reg seq:cls, reg ncol:cls, reg a2:*, reg a3:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg i7:I, reg r11:V, reg a4:*, reg a5:V, reg c1:L, reg i9:I, reg a7:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r12:V, reg ta:*, reg ta1:V, reg c2:L, reg i13:I, reg dx3:V, reg ta3:V, reg dr2:V, reg dc1:L, reg dx5:V, reg i15:I, reg dx6:V, reg dx7:V, reg j2:*, reg j3:V, reg __1:cls, reg r13:V, reg r14:V, reg all:cls, reg r15:V, reg r16:V, reg c3:L, reg stop:cls, reg r17:V, reg i18:I |
    mkenv;
    r = clos inner354062069;
    st t = r;
    matrix = ldf matrix;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      r1 = `:`(1.0, 30.0);
      return r1;
    };
    r3 = dyn matrix(p, 5.0, 6.0);
    check L8() else D1();
  D1():
    deopt 8 [r3];
  L8():
    st a = r3;
    t = ldf t;
    check L9() else D2();
  D2():
    deopt 11 [];
  L9():
    p1 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r5 = dyn t(p1);
    check L10() else D3();
  D3():
    deopt 13 [r5];
  L10():
    st ta = r5;
    seq = ldf seq;
    check L11() else D4();
  D4():
    deopt 16 [];
  L11():
    p3 = prom<V +>{
      ncol = ldf ncol;
      p2 = prom<V +>{
        a2 = ld a;
        a3 = force? a2;
        checkMissing(a3);
        return a3;
      };
      r7 = dyn ncol(p2);
      return r7;
    };
    r9 = dyn seq(p3);
    check L12() else D5();
  D5():
    deopt 18 [r9];
  L12():
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L6();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L13():
    invisible.0();
    popenv;
    return i2;
  L1(i7, r11):
    r16 = `!`(r11);
    c3 = `as.logical`(r16);
    if c3 then L27() else L4();
  L14():
    a4 = ld a;
    check L16() else D6();
  L15():
    r10 = dyn base(<lang `==`(`[`(a, , j), `[`(ta, j, ))>);
    goto L1(i2, r10);
  D6():
    deopt 21 [i2, a4];
  L4():
    goto L5(i7);
  L5(i18):
    goto L0(i18);
  L16():
    a5 = force? a4;
    checkMissing(a5);
    c1 = `is.object`(a5);
    if c1 then L17() else L18(i2, a5);
  L27():
    stop = ldf stop;
    check L28() else D11();
  D11():
    deopt 39 [i7];
  L2(i11, dx1):
    ta = ld ta;
    check L21() else D8();
  L17():
    dr = tryDispatchBuiltin.1("[", a5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(i2, dr);
  L18(i9, a7):
    j = ld j;
    check L20() else D7();
  L28():
    r17 = dyn stop("wrong transpose");
    check L29() else D12();
  D7():
    deopt 24 [i9, a7, j];
  D8():
    deopt 27 [i11, dx1, ta];
  D12():
    deopt 41 [i7, r17];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L20():
    j1 = force? j;
    __ = ldf `[` in base;
    r12 = dyn __(a5, <missing>, j1);
    goto L2(i9, r12);
  L21():
    ta1 = force? ta;
    checkMissing(ta1);
    c2 = `is.object`(ta1);
    if c2 then L22() else L23(i11, dx1, ta1);
  L29():
    goto L5(i7);
  L3(i15, dx6, dx7):
    r14 = `==`(dx6, dx7);
    all = ldf all in base;
    r15 = dyn all(r14);
    check L26() else D10();
  L22():
    dr2 = tryDispatchBuiltin.1("[", ta1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(i11, dx1, dr2);
  L23(i13, dx3, ta3):
    j2 = ld j;
    check L25() else D9();
  D9():
    deopt 29 [i13, dx3, ta3, j2];
  D10():
    deopt 36 [i15, r15];
  L24():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L3(i11, dx1, dx5);
  L25():
    j3 = force? j2;
    __1 = ldf `[` in base;
    r13 = dyn __1(ta1, j3, <missing>);
    goto L3(i13, dx3, r13);
  L26():
    goto L1(i15, r15);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("t");
    goto L0(r2);
  L2():
    r = dyn base("t");
    goto L0(r);
  }
}