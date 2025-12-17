fun main() {
  () -+> V { reg r:cls, reg quantile:cls, reg rnorm:cls, reg r1:V, reg p:p(V +), reg r3:V, reg quantile1:cls, reg x:*, reg x1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg r10:V, reg r11:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c1:cls, reg r14:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg signif:cls, reg r18:V, reg stopifnot:cls, reg t:cls, reg quantAll:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg r28:V, reg x4:*, reg x5:V, reg range:cls, reg r29:V, reg r30:V, reg p6:p(V +), reg r32:V, reg complex:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg x8:*, reg x9:V, reg r34:V, reg p8:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg signif1:cls, reg r39:V |
    mkenv;
    r = clos inner2044426018;
    st quantile = r;
    quantile = ldf quantile;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      rnorm = ldf rnorm;
      r1 = dyn rnorm(1001.0);
      st x = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn quantile(p);
    check L4() else D1();
  D1():
    deopt 6 [r3];
  L4():
    quantile1 = ldf quantile;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      r8 = `/`(r6, 100.0);
      return r8;
    L1():
      c = ldf c in base;
      r7 = dyn c(0.1, 0.5, 1.0, 2.0, 5.0, 10.0, 50.0, NA_LGL);
      goto L0(r7);
    L2():
      r5 = dyn base(0.1, 0.5, 1.0, 2.0, 5.0, 10.0, 50.0, NA_LGL);
      goto L0(r5);
    };
    r10 = dyn quantile1[, probs](p1, p2);
    check L6() else D3();
  D3():
    deopt 12 [r10];
  L6():
    r11 = clos inner1656838713;
    st quantAll = r11;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L0(r13):
    r15 = `/`(r13, 100.0);
    st p = r15;
    sym2 = ldf signif;
    base2 = ldf signif in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L7():
    c1 = ldf c in base;
    r14 = dyn c1(0.1, 0.5, 1.0, 2.0, 5.0, 10.0, 50.0);
    check L9() else D4();
  L8():
    r12 = dyn base1(0.1, 0.5, 1.0, 2.0, 5.0, 10.0, 50.0);
    goto L0(r12);
  D4():
    deopt 26 [r14];
  L1():
    stopifnot = ldf stopifnot;
    check L12() else D5();
  L9():
    goto L0(r14);
  L10():
    signif = ldf signif in base;
    r18 = dyn signif(<lang quantAll(x, p)>, 4.0);
    goto L1();
  L11():
    r16 = dyn base2(<lang quantAll(x, p)>, 4.0);
    goto L1();
  D5():
    deopt 34 [];
  L12():
    p6 = prom<V +>{
      t = ldf t;
      p5 = prom<V +>{
        quantAll = ldf quantAll;
        p3 = prom<V +>{
          x2 = ld x;
          x3 = force? x2;
          checkMissing(x3);
          return x3;
        };
        p4 = prom<V +>{
          return <int 0, 1>;
        };
        r21 = dyn quantAll[, prob](p3, p4);
        return r21;
      };
      r23 = dyn t(p5);
      sym3 = ldf range;
      base3 = ldf range in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27, r28):
      r30 = `==`(r27, r28);
      return r30;
    L1():
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      range = ldf range in base;
      r29 = dyn range(x5);
      goto L0(r23, r29);
    L2():
      r26 = dyn base3(<sym x>);
      goto L0(r23, r26);
    };
    r32 = dyn stopifnot(p6);
    check L13() else D6();
  D6():
    deopt 36 [r32];
  L13():
    complex = ldf complex;
    check L14() else D7();
  D7():
    deopt 38 [];
  L14():
    p7 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p8 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      r34 = `*`(-10.0, x9);
      return r34;
    };
    r36 = dyn complex[real, imaginary](p7, p8);
    check L15() else D8();
  D8():
    deopt 43 [r36];
  L15():
    st z = r36;
    sym4 = ldf signif;
    base4 = ldf signif in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L16() else L17();
  L2(r38):
    popenv;
    return r38;
  L16():
    signif1 = ldf signif in base;
    r39 = dyn signif1(<lang quantAll(z, p)>, 4.0);
    goto L2(r39);
  L17():
    r37 = dyn base4(<lang quantAll(z, p)>, 4.0);
    goto L2(r37);
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("quantile");
    goto L0(r2);
  L2():
    r = dyn base("quantile");
    goto L0(r);
  }
}
fun inner1656838713(x, prob, `...`) {
  (reg x:*, reg prob:*, reg ddd:dots) -+> V { var x:*, var prob:*, var `...`:dots?, reg t:cls, reg vapply:cls, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg quantile:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg prob1:*, reg prob2:V, reg p3:p(V +), reg ddd1:dots?, reg r5:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg r9:V |
    mkenv;
    st x = x;
    st prob = prob;
    st `...` = ddd;
    t = ldf t;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p5 = prom<V +>{
      vapply = ldf vapply;
      p = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9>;
      };
      p1 = prom<V +>{
        r1 = clos inner1640082503;
        return r1;
      };
      p4 = prom<V +>{
        quantile = ldf quantile;
        p2 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        p3 = prom<V +>{
          prob1 = ld prob;
          prob2 = force? prob1;
          checkMissing(prob2);
          return prob2;
        };
        ddd1 = ld `...`;
        r5 = dyn quantile[, , type, `...`](p2, p3, 1.0, ddd1);
        return r5;
      };
      r7 = dyn vapply(p, p1, p4);
      return r7;
    };
    r9 = dyn t(p5);
    check L1() else D1();
  D1():
    deopt 3 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner1640082503(typ) {
  (reg typ:*) -+> V { var typ:*, reg quantile:cls, reg x:*, reg x1:V, reg p:p(V +), reg prob:*, reg prob1:V, reg p1:p(V +), reg typ1:*, reg typ2:V, reg p2:p(V +), reg ddd:*, reg r3:V |
    mkenv;
    st typ = typ;
    quantile = ldf quantile;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      prob = ld prob;
      prob1 = force? prob;
      checkMissing(prob1);
      return prob1;
    };
    p2 = prom<V +>{
      typ1 = ld typ;
      typ2 = force? typ1;
      checkMissing(typ2);
      return typ2;
    };
    ddd = ld `...`;
    r3 = dyn quantile[, probs, type, `...`](p, p1, p2, ddd);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}