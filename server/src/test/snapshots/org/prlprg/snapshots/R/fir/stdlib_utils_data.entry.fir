fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1778048290;
    st `data.entry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1778048290(`...`, Modes, Names) {
  (reg ddd:dots, reg Modes:*, reg Names:*) -+> V { var `...`:dots?, var Modes:*, reg Modes_isMissing:L, reg Modes_orDefault:*, var Names:*, reg Names_isMissing:L, reg Names_orDefault:*, reg de:cls, reg ddd1:dots?, reg Modes1:*, reg Modes2:V, reg p:p(V +), reg Names1:*, reg Names2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg tmp1:*, reg tmp2:V, reg names:cls, reg r5:V, reg nn:*, reg nn1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg assign:cls, reg i5:*, reg i6:V, reg p2:p(V +), reg tmp3:*, reg tmp4:V, reg c1:L, reg tmp6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r7:V, reg p3:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p4:p(V +), reg r10:V, reg j2:*, reg j3:V, reg r11:V, reg j4:*, reg j5:V, reg r12:V, reg c2:L, reg warning:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg nn2:*, reg nn3:V, reg invisible:cls, reg r17:V |
    mkenv;
    st `...` = ddd;
    Modes_isMissing = missing.0(Modes);
    if Modes_isMissing then L0(NULL) else L0(Modes);
  L0(Modes_orDefault):
    st Modes = Modes_orDefault;
    Names_isMissing = missing.0(Names);
    if Names_isMissing then L1(NULL) else L1(Names);
  L1(Names_orDefault):
    st Names = Names_orDefault;
    de = ldf de;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    ddd1 = ld `...`;
    p = prom<V +>{
      Modes1 = ld Modes;
      Modes2 = force? Modes1;
      checkMissing(Modes2);
      return Modes2;
    };
    p1 = prom<V +>{
      Names1 = ld Names;
      Names2 = force? Names1;
      checkMissing(Names2);
      return Names2;
    };
    r2 = dyn de[`...`, Modes, Names](ddd1, p, p1);
    check L9() else D1();
  D1():
    deopt 7 [r2];
  L9():
    st tmp1 = r2;
    st j = 1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L2(r4):
    st nn = r4;
    nn = ld nn;
    check L14() else D4();
  L10():
    tmp1 = ld tmp1;
    check L12() else D2();
  L11():
    r3 = dyn base(<sym tmp1>);
    goto L2(r3);
  D2():
    deopt 14 [tmp1];
  D4():
    deopt 19 [nn];
  L12():
    tmp2 = force? tmp1;
    checkMissing(tmp2);
    names = ldf names in base;
    r5 = dyn names(tmp2);
    check L13() else D3();
  L14():
    nn1 = force? nn;
    checkMissing(nn1);
    s = toForSeq(nn1);
    l = length(s);
    i = 0;
    goto L3(i);
  D3():
    deopt 17 [r5];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L4();
  L13():
    goto L2(r5);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    assign = ldf assign;
    check L16() else D5();
  L15():
    j4 = ld j;
    check L19() else D8();
  D5():
    deopt 22 [i2];
  D8():
    deopt 36 [j4];
  L16():
    p2 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    p3 = prom<V +>{
      tmp3 = ld tmp1;
      tmp4 = force? tmp3;
      checkMissing(tmp4);
      c1 = `is.object`(tmp4);
      if c1 then L1() else L2(tmp4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", tmp4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(tmp6):
      j = ld j;
      j1 = force? j;
      __ = ldf `[[` in base;
      r7 = dyn __(tmp6, j1);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r10 = dyn assign[, , envir](p2, p3, p4);
    check L17() else D6();
  L19():
    j5 = force? j4;
    checkMissing(j5);
    r12 = `==`(j5, 1);
    c2 = `as.logical`(r12);
    if c2 then L20() else L5();
  D6():
    deopt 27 [i2, r10];
  L5():
    goto L6();
  L6():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L17():
    j2 = ld j;
    check L18() else D7();
  L20():
    warning = ldf warning;
    check L21() else D9();
  D7():
    deopt 28 [i2, j2];
  D9():
    deopt 41 [];
  L7(r16):
    popenv;
    return r16;
  L18():
    j3 = force? j2;
    checkMissing(j3);
    r11 = `+`(j3, 1);
    st j = r11;
    goto L3(i2);
  L21():
    r13 = dyn warning("did not assign() anything");
    check L22() else D10();
  L24():
    nn2 = ld nn;
    check L26() else D11();
  L25():
    r15 = dyn base1(<sym nn>);
    goto L7(r15);
  D10():
    deopt 43 [r13];
  D11():
    deopt 48 [nn2];
  L22():
    goto L6();
  L26():
    nn3 = force? nn2;
    checkMissing(nn3);
    invisible = ldf invisible in base;
    r17 = dyn invisible(nn3);
    check L27() else D12();
  D12():
    deopt 51 [r17];
  L27():
    goto L7(r17);
  }
}