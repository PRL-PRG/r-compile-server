fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4205033918;
    st `kernapply.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4205033918(x, k, circular, `...`) {
  (reg x:*, reg k:*, reg circular:*, reg ddd:dots) -+> V { var x:*, var k:*, var circular:*, reg circular_isMissing:L, reg circular_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_vector:cls, reg r2:V, reg c:L, reg kernapply_vector:cls, reg x3:*, reg x4:V, reg p:p(V +), reg k1:*, reg k2:V, reg p1:p(V +), reg circular1:*, reg circular2:V, reg p2:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r9:V, reg c1:L, reg apply:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg kernapply:*, reg kernapply1:V, reg p4:p(V +), reg k3:*, reg k4:V, reg p5:p(V +), reg circular3:*, reg circular4:V, reg p6:p(V +), reg r14:V, reg stop:cls, reg r15:V |
    mkenv;
    st x = x;
    st k = k;
    circular_isMissing = missing.0(circular);
    if circular_isMissing then L0(FALSE) else L0(circular);
  L0(circular_orDefault):
    st circular = circular_orDefault;
    st `...` = ddd;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c = `as.logical`(r1);
    if c then L9() else L2();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    is_vector = ldf `is.vector` in base;
    r2 = dyn is_vector(x2, "any");
    check L8() else D1();
  L9():
    kernapply_vector = ldf `kernapply.vector`;
    check L10() else D2();
  D1():
    deopt 6 [r2];
  D2():
    deopt 8 [];
  L3(r8):
    c1 = `as.logical`(r8);
    if c1 then L17() else L4();
  L8():
    goto L1(r2);
  L10():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      return k2;
    };
    p2 = prom<V +>{
      circular1 = ld circular;
      circular2 = force? circular1;
      checkMissing(circular2);
      return circular2;
    };
    r6 = dyn kernapply_vector[, , circular](p, p1, p2);
    check L11() else D3();
  L13():
    x5 = ld x;
    check L15() else D4();
  L14():
    r7 = dyn base1(<sym x>);
    goto L3(r7);
  D3():
    deopt 13 [r6];
  D4():
    deopt 16 [x5];
  L4():
    stop = ldf stop;
    check L21() else D8();
  L11():
    popenv;
    return r6;
  L15():
    x6 = force? x5;
    checkMissing(x6);
    is_matrix = ldf `is.matrix` in base;
    r9 = dyn is_matrix(x6);
    check L16() else D5();
  L17():
    apply = ldf apply;
    check L18() else D6();
  D5():
    deopt 19 [r9];
  D6():
    deopt 21 [];
  D8():
    deopt 32 [];
  L16():
    goto L3(r9);
  L18():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      kernapply = ld kernapply;
      kernapply1 = force? kernapply;
      checkMissing(kernapply1);
      return kernapply1;
    };
    p5 = prom<V +>{
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      return k4;
    };
    p6 = prom<V +>{
      circular3 = ld circular;
      circular4 = force? circular3;
      checkMissing(circular4);
      return circular4;
    };
    r14 = dyn apply[, MARGIN, FUN, , circular](p3, 2.0, p4, p5, p6);
    check L19() else D7();
  L21():
    r15 = dyn stop("'kernapply' is not available for object 'x'");
    check L22() else D9();
  D7():
    deopt 30 [r14];
  D9():
    deopt 34 [r15];
  L19():
    popenv;
    return r14;
  L22():
    popenv;
    return r15;
  }
}