fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2806723056;
    st `.filled.contour` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2806723056(x, y, z, levels, col) {
  (reg x:*, reg y:*, reg z:*, reg levels:*, reg col:*) -+> V { var x:*, var y:*, var z:*, var levels:*, var col:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg z1:*, reg z2:V, reg is_matrix:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg nrow:cls, reg z3:*, reg z4:V, reg p:p(V +), reg r5:V, reg r6:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg ncol:cls, reg z5:*, reg z6:V, reg p1:p(V +), reg r8:V, reg r9:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg C_filledcontour:*, reg C_filledcontour1:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg z7:*, reg z8:V, reg levels1:*, reg levels2:V, reg col1:*, reg col2:V, reg _External_graphics:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg invisible:cls, reg r17:V |
    mkenv;
    st x = x;
    st y = y;
    st z = z;
    st levels = levels;
    st col = col;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L1(c) else L11();
  L7():
    z1 = ld z;
    check L9() else D0();
  L8():
    r = dyn base(<sym z>);
    goto L0(r);
  D0():
    deopt 2 [z1];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L2(c6) else L15();
  L9():
    z2 = force? z1;
    checkMissing(z2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(z2);
    check L10() else D1();
  L11():
    nrow = ldf nrow;
    check L12() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [c];
  L2(c7):
    c12 = `as.logical`(c7);
    if c12 then L19() else L3();
  L10():
    goto L0(r2);
  L12():
    p = prom<V +>{
      z3 = ld z;
      z4 = force? z3;
      checkMissing(z4);
      return z4;
    };
    r5 = dyn nrow(p);
    check L13() else D3();
  L15():
    ncol = ldf ncol;
    check L16() else D4();
  D3():
    deopt 10 [c, r5];
  D4():
    deopt 15 [c6];
  L3():
    goto L4();
  L4():
    sym1 = ldf `.External.graphics`;
    base1 = ldf `.External.graphics` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L13():
    r6 = `<=`(r5, 1);
    c3 = `as.logical`(r6);
    c4 = `||`(c, c3);
    goto L1(c4);
  L16():
    p1 = prom<V +>{
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      return z6;
    };
    r8 = dyn ncol(p1);
    check L17() else D5();
  L19():
    stop = ldf stop;
    check L20() else D6();
  D5():
    deopt 17 [c6, r8];
  D6():
    deopt 22 [];
  L5():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L17():
    r9 = `<=`(r8, 1);
    c9 = `as.logical`(r9);
    c10 = `||`(c6, c9);
    goto L2(c10);
  L20():
    r10 = dyn stop("no proper 'z' matrix specified");
    check L21() else D7();
  L23():
    C_filledcontour = ld C_filledcontour;
    check L25() else D8();
  L24():
    r12 = dyn base1(<sym C_filledcontour>, <sym x>, <sym y>, <sym z>, <sym levels>, <sym col>);
    goto L5();
  D7():
    deopt 24 [r10];
  D8():
    deopt 29 [C_filledcontour];
  L6(r16):
    popenv;
    return r16;
  L21():
    goto L4();
  L25():
    C_filledcontour1 = force? C_filledcontour;
    checkMissing(C_filledcontour1);
    x1 = ld x;
    check L26() else D9();
  L32():
    invisible = ldf invisible in base;
    r17 = dyn invisible();
    check L34() else D15();
  L33():
    r15 = dyn base2();
    goto L6(r15);
  D9():
    deopt 31 [x1];
  D15():
    deopt 46 [r17];
  L26():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L27() else D10();
  L34():
    goto L6(r17);
  D10():
    deopt 33 [y1];
  L27():
    y2 = force? y1;
    checkMissing(y2);
    z7 = ld z;
    check L28() else D11();
  D11():
    deopt 35 [z7];
  L28():
    z8 = force? z7;
    checkMissing(z8);
    levels1 = ld levels;
    check L29() else D12();
  D12():
    deopt 37 [levels1];
  L29():
    levels2 = force? levels1;
    checkMissing(levels2);
    col1 = ld col;
    check L30() else D13();
  D13():
    deopt 39 [col1];
  L30():
    col2 = force? col1;
    checkMissing(col2);
    _External_graphics = ldf `.External.graphics` in base;
    r14 = dyn _External_graphics(C_filledcontour1, x2, y2, z8, levels2, col2);
    check L31() else D14();
  D14():
    deopt 42 [r14];
  L31():
    goto L5();
  }
}