fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2989570553;
    st Axis = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2989570553(x, at, `...`, side, labels) {
  (reg x:*, reg at:*, reg ddd:dots, reg side:*, reg labels:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, var `...`:dots?, var side:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg UseMethod:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg at1:*, reg at2:V, reg c2:V, reg r8:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg UseMethod1:cls, reg r11:V, reg axis:cls, reg side1:*, reg side2:V, reg p:p(V +), reg at3:*, reg at4:V, reg p1:p(V +), reg labels1:*, reg labels2:V, reg p2:p(V +), reg ddd1:dots?, reg r15:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(NULL) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    at_isMissing = missing.0(at);
    if at_isMissing then L1(NULL) else L1(at);
  L1(at_orDefault):
    st at = at_orDefault;
    st `...` = ddd;
    st side = side;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L2(NULL) else L2(labels);
  L2(labels_orDefault):
    st labels = labels_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L3(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L12() else L4();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>);
    goto L3(r);
  D0():
    deopt 1 [x1];
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L3(c);
  L12():
    sym1 = ldf UseMethod;
    base1 = ldf UseMethod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L5(r4):
    popenv;
    return r4;
  L6(r7):
    r8 = `!`(r7);
    c3 = `as.logical`(r8);
    if c3 then L19() else L7();
  L13():
    UseMethod = ldf UseMethod in base;
    r5 = dyn UseMethod("Axis", <sym x>);
    goto L5(r5);
  L14():
    r3 = dyn base1("Axis", <sym x>);
    goto L5(r3);
  L16():
    at1 = ld at;
    check L18() else D1();
  L17():
    r6 = dyn base2(<sym at>);
    goto L6(r6);
  D1():
    deopt 9 [at1];
  L7():
    axis = ldf axis;
    check L23() else D2();
  L18():
    at2 = force? at1;
    checkMissing(at2);
    c2 = `==`(at2, NULL);
    goto L6(c2);
  L19():
    sym3 = ldf UseMethod;
    base3 = ldf UseMethod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  D2():
    deopt 17 [];
  L8(r10):
    popenv;
    return r10;
  L20():
    UseMethod1 = ldf UseMethod in base;
    r11 = dyn UseMethod1("Axis", <sym at>);
    goto L8(r11);
  L21():
    r9 = dyn base3("Axis", <sym at>);
    goto L8(r9);
  L23():
    p = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p1 = prom<V +>{
      at3 = ld at;
      at4 = force? at3;
      checkMissing(at4);
      return at4;
    };
    p2 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r15 = dyn axis[side, at, labels, `...`](p, p1, p2, ddd1);
    check L24() else D3();
  D3():
    deopt 25 [r15];
  L24():
    popenv;
    return r15;
  }
}