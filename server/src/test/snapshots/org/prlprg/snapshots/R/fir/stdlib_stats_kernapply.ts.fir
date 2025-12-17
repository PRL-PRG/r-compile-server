fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4205033918;
    st `kernapply.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4205033918(x, k, circular, `...`) {
  (reg x:*, reg k:*, reg circular:*, reg ddd:dots) -+> V { var x:*, var k:*, var circular:*, reg circular_isMissing:L, reg circular_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg r3:V, reg c:L, reg kernapply_vector:cls, reg as_vector:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg k1:*, reg k2:V, reg p2:p(V +), reg circular1:*, reg circular2:V, reg p3:p(V +), reg r9:V, reg apply:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg kernapply:*, reg kernapply1:V, reg p5:p(V +), reg k3:*, reg k4:V, reg p6:p(V +), reg circular3:*, reg circular4:V, reg p7:p(V +), reg r15:V, reg ts:cls, reg y:*, reg y1:V, reg p8:p(V +), reg end:cls, reg x7:*, reg x8:V, reg p9:p(V +), reg r18:V, reg p10:p(V +), reg frequency:cls, reg x9:*, reg x10:V, reg p11:p(V +), reg r21:V, reg p12:p(V +), reg r23:V |
    mkenv;
    st x = x;
    st k = k;
    circular_isMissing = missing.0(circular);
    if circular_isMissing then L0(FALSE) else L0(circular);
  L0(circular_orDefault):
    st circular = circular_orDefault;
    st `...` = ddd;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L2();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    apply = ldf apply;
    check L12() else D4();
  L3():
    ts = ldf ts;
    check L14() else D6();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L7() else D1();
  L8():
    kernapply_vector = ldf `kernapply.vector`;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 16 [];
  D6():
    deopt 28 [];
  L7():
    goto L1(r2);
  L9():
    p1 = prom<V +>{
      as_vector = ldf `as.vector`;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r5 = dyn as_vector(p);
      return r5;
    };
    p2 = prom<V +>{
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      return k2;
    };
    p3 = prom<V +>{
      circular1 = ld circular;
      circular2 = force? circular1;
      checkMissing(circular2);
      return circular2;
    };
    r9 = dyn kernapply_vector[, , circular](p1, p2, p3);
    check L10() else D3();
  L12():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p5 = prom<V +>{
      kernapply = ld kernapply;
      kernapply1 = force? kernapply;
      checkMissing(kernapply1);
      return kernapply1;
    };
    p6 = prom<V +>{
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      return k4;
    };
    p7 = prom<V +>{
      circular3 = ld circular;
      circular4 = force? circular3;
      checkMissing(circular4);
      return circular4;
    };
    r15 = dyn apply[, MARGIN, FUN, , circular](p4, 2, p5, p6, p7);
    check L13() else D5();
  L14():
    p8 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p10 = prom<V +>{
      end = ldf end;
      p9 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r18 = dyn end(p9);
      return r18;
    };
    p12 = prom<V +>{
      frequency = ldf frequency;
      p11 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r21 = dyn frequency(p11);
      return r21;
    };
    r23 = dyn ts[, end, frequency](p8, p10, p12);
    check L15() else D7();
  D3():
    deopt 13 [r9];
  D5():
    deopt 25 [r15];
  D7():
    deopt 34 [r23];
  L10():
    st y = r9;
    goto L3();
  L13():
    st y = r15;
    goto L3();
  L15():
    popenv;
    return r23;
  }
}