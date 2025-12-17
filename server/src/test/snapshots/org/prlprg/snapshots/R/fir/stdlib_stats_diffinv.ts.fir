fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1288204249;
    st `diffinv.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1288204249(x, lag, differences, xi, `...`) {
  (reg x:*, reg lag:*, reg differences:*, reg xi:*, reg ddd:dots) -+> V { var x:*, var lag:*, reg lag_isMissing:L, reg lag_orDefault:*, var differences:*, reg differences_isMissing:L, reg differences_orDefault:*, var xi:*, var `...`:dots?, reg diffinv_default:cls, reg is_ts:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c8:L, reg r5:V, reg x3:*, reg x4:V, reg dim:cls, reg r6:V, reg c9:V, reg c10:L, reg c11:V, reg c13:L, reg as_vector:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r8:V, reg as_matrix:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg lag1:*, reg lag2:V, reg p4:p(V +), reg differences1:*, reg differences2:V, reg p5:p(V +), reg xi1:*, reg xi2:V, reg p6:p(V +), reg r15:V, reg ts:cls, reg y:*, reg y1:V, reg p7:p(V +), reg frequency:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r18:V, reg p9:p(V +), reg end:cls, reg x11:*, reg x12:V, reg p10:p(V +), reg r21:V, reg p11:p(V +), reg r23:V |
    mkenv;
    st x = x;
    lag_isMissing = missing.0(lag);
    if lag_isMissing then L0(1.0) else L0(lag);
  L0(lag_orDefault):
    st lag = lag_orDefault;
    differences_isMissing = missing.0(differences);
    if differences_isMissing then L1(1.0) else L1(differences);
  L1(differences_orDefault):
    st differences = differences_orDefault;
    st xi = xi;
    st `...` = ddd;
    diffinv_default = ldf `diffinv.default`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      is_ts = ldf `is.ts`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn is_ts(p);
      c = `as.logical`(r1);
      if c then L4() else L0(c);
    L0(c2):
      c13 = `as.logical`(c2);
      if c13 then L10() else L3();
    L4():
      sym = ldf `is.null`;
      base = ldf `is.null` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(c5, r3):
      c10 = `as.logical`(r3);
      c11 = `&&`(c5, c10);
      goto L0(c11);
    L3():
      as_matrix = ldf `as.matrix`;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r10 = dyn as_matrix(p2);
      return r10;
    L5():
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L7() else L8();
    L6():
      r2 = dyn base(<lang dim(x)>);
      goto L1(c, r2);
    L10():
      as_vector = ldf `as.vector`;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r8 = dyn as_vector(p1);
      return r8;
    L2(c8, r5):
      c9 = `==`(r5, NULL);
      goto L1(c8, c9);
    L7():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      dim = ldf dim in base;
      r6 = dyn dim(x4);
      goto L2(c, r6);
    L8():
      r4 = dyn base1(<sym x>);
      goto L2(c, r4);
    };
    p4 = prom<V +>{
      lag1 = ld lag;
      lag2 = force? lag1;
      checkMissing(lag2);
      return lag2;
    };
    p5 = prom<V +>{
      differences1 = ld differences;
      differences2 = force? differences1;
      checkMissing(differences2);
      return differences2;
    };
    p6 = prom<V +>{
      xi1 = ld xi;
      xi2 = force? xi1;
      checkMissing(xi2);
      return xi2;
    };
    r15 = dyn diffinv_default(p3, p4, p5, p6);
    check L3() else D1();
  D1():
    deopt 6 [r15];
  L3():
    st y = r15;
    ts = ldf ts;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    p7 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p9 = prom<V +>{
      frequency = ldf frequency;
      p8 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r18 = dyn frequency(p8);
      return r18;
    };
    p11 = prom<V +>{
      end = ldf end;
      p10 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r21 = dyn end(p10);
      return r21;
    };
    r23 = dyn ts[, frequency, end](p7, p9, p11);
    check L5() else D3();
  D3():
    deopt 15 [r23];
  L5():
    popenv;
    return r23;
  }
}