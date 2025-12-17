fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg attach:cls, reg rock:*, reg rock1:V, reg p1:p(V +), reg r6:V, reg area:*, reg area1:V, reg r7:V, reg peri:*, reg peri1:V, reg r8:V, reg ppr:cls, reg __:cls, reg r9:V, reg p2:p(V +), reg rock2:*, reg rock3:V, reg p3:p(V +), reg r12:V, reg rock_ppr:*, reg rock_ppr1:V, reg summary:cls, reg rock_ppr2:*, reg rock_ppr3:V, reg p4:p(V +), reg r14:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg c:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg plot:cls, reg rock_ppr4:*, reg rock_ppr5:V, reg p6:p(V +), reg r21:V, reg plot1:cls, reg update:cls, reg rock_ppr6:*, reg rock_ppr7:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg plot2:cls, reg update1:cls, reg rock_ppr8:*, reg rock_ppr9:V, reg p9:p(V +), reg r27:V, reg p10:p(V +), reg r29:V, reg cbind:cls, reg rock4:*, reg rock5:V, reg c1:L, reg rock7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r30:V, reg p11:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg round:cls, reg r34:V, reg p12:p(V +), reg r36:V, reg detach:cls, reg r37:V |
    mkenv;
    r = clos inner2044426018;
    st ppr = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    attach = ldf attach;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      rock = ld rock;
      rock1 = force? rock;
      checkMissing(rock1);
      return rock1;
    };
    r6 = dyn attach(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    area = ld area;
    check L7() else D4();
  D4():
    deopt 12 [area];
  L7():
    area1 = force? area;
    checkMissing(area1);
    r7 = `/`(area1, 10000.0);
    st area1 = r7;
    peri = ld peri;
    check L8() else D5();
  D5():
    deopt 17 [peri];
  L8():
    peri1 = force? peri;
    checkMissing(peri1);
    r8 = `/`(peri1, 10000.0);
    st peri1 = r8;
    ppr = ldf ppr;
    check L9() else D6();
  D6():
    deopt 23 [];
  L9():
    p2 = prom<V +>{
      __ = ldf `~` in base;
      r9 = dyn __(<lang log(perm)>, <lang `+`(`+`(area1, peri1), shape)>);
      return r9;
    };
    p3 = prom<V +>{
      rock2 = ld rock;
      rock3 = force? rock2;
      checkMissing(rock3);
      return rock3;
    };
    r12 = dyn ppr[, data, nterms, `max.terms`](p2, p3, 2.0, 5.0);
    check L10() else D7();
  D7():
    deopt 31 [r12];
  L10():
    st `rock.ppr` = r12;
    rock_ppr = ld `rock.ppr`;
    check L11() else D8();
  D8():
    deopt 33 [rock_ppr];
  L11():
    rock_ppr1 = force? rock_ppr;
    checkMissing(rock_ppr1);
    summary = ldf summary;
    check L12() else D9();
  D9():
    deopt 36 [];
  L12():
    p4 = prom<V +>{
      rock_ppr2 = ld `rock.ppr`;
      rock_ppr3 = force? rock_ppr2;
      checkMissing(rock_ppr3);
      return rock_ppr3;
    };
    r14 = dyn summary(p4);
    check L13() else D10();
  D10():
    deopt 38 [r14];
  L13():
    par = ldf par;
    check L14() else D11();
  D11():
    deopt 40 [];
  L14():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c = ldf c in base;
      r17 = dyn c(3.0, 2.0);
      goto L0(r17);
    L2():
      r15 = dyn base1(3.0, 2.0);
      goto L0(r15);
    };
    r19 = dyn par[mfrow](p5);
    check L15() else D12();
  D12():
    deopt 43 [r19];
  L15():
    plot = ldf plot;
    check L16() else D13();
  D13():
    deopt 45 [];
  L16():
    p6 = prom<V +>{
      rock_ppr4 = ld `rock.ppr`;
      rock_ppr5 = force? rock_ppr4;
      checkMissing(rock_ppr5);
      return rock_ppr5;
    };
    r21 = dyn plot[, main](p6, "ppr(log(perm)~ ., nterms=2, max.terms=5)");
    check L17() else D14();
  D14():
    deopt 49 [r21];
  L17():
    plot1 = ldf plot;
    check L18() else D15();
  D15():
    deopt 51 [];
  L18():
    p8 = prom<V +>{
      update = ldf update;
      p7 = prom<V +>{
        rock_ppr6 = ld `rock.ppr`;
        rock_ppr7 = force? rock_ppr6;
        checkMissing(rock_ppr7);
        return rock_ppr7;
      };
      r23 = dyn update[, bass](p7, 5.0);
      return r23;
    };
    r25 = dyn plot1[, main](p8, "update(..., bass = 5)");
    check L19() else D16();
  D16():
    deopt 55 [r25];
  L19():
    plot2 = ldf plot;
    check L20() else D17();
  D17():
    deopt 57 [];
  L20():
    p10 = prom<V +>{
      update1 = ldf update;
      p9 = prom<V +>{
        rock_ppr8 = ld `rock.ppr`;
        rock_ppr9 = force? rock_ppr8;
        checkMissing(rock_ppr9);
        return rock_ppr9;
      };
      r27 = dyn update1[, `sm.method`, gcvpen](p9, "gcv", 2.0);
      return r27;
    };
    r29 = dyn plot2[, main](p10, "update(..., sm.method=\"gcv\", gcvpen=2)");
    check L21() else D18();
  D18():
    deopt 61 [r29];
  L21():
    cbind = ldf cbind;
    check L22() else D19();
  D19():
    deopt 63 [];
  L22():
    p11 = prom<V +>{
      rock4 = ld rock;
      rock5 = force? rock4;
      checkMissing(rock5);
      c1 = `is.object`(rock5);
      if c1 then L1() else L2(rock5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", rock5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(rock7):
      r30 = `$`(rock7, <sym perm>);
      goto L0(r30);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p12 = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      round = ldf round in base;
      r34 = dyn round(<lang exp(predict(rock.ppr))>, 1.0);
      goto L0(r34);
    L2():
      r32 = dyn base2(<lang exp(predict(rock.ppr))>, 1.0);
      goto L0(r32);
    };
    r36 = dyn cbind[perm, prediction](p11, p12);
    check L23() else D20();
  D20():
    deopt 68 [r36];
  L23():
    detach = ldf detach;
    check L24() else D21();
  D21():
    deopt 70 [];
  L24():
    r37 = dyn detach();
    check L25() else D22();
  D22():
    deopt 71 [r37];
  L25():
    popenv;
    return r37;
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
    r2 = dyn UseMethod("ppr");
    goto L0(r2);
  L2():
    r = dyn base("ppr");
    goto L0(r);
  }
}