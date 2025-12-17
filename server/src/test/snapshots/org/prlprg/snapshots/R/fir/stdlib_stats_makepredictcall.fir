fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg lm:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg women:*, reg women1:V, reg p2:p(V +), reg r8:V, reg plot:cls, reg women2:*, reg women3:V, reg p3:p(V +), reg r10:V, reg seq:cls, reg r11:V, reg data_frame:cls, reg ht:*, reg ht1:V, reg p4:p(V +), reg r13:V, reg predict:cls, reg fm:*, reg fm1:V, reg p5:p(V +), reg nD:*, reg nD1:V, reg p6:p(V +), reg r16:V, reg lines:cls, reg ht2:*, reg ht3:V, reg p7:p(V +), reg pfm:*, reg pfm1:V, reg p8:p(V +), reg r19:V, reg predict1:cls, reg update:cls, reg fm2:*, reg fm3:V, reg p9:p(V +), reg __1:cls, reg r21:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg nD2:*, reg nD3:V, reg p12:p(V +), reg r26:V, reg stopifnot:cls, reg all_equal:cls, reg pfm2:*, reg pfm3:V, reg p13:p(V +), reg pf2:*, reg pf3:V, reg p14:p(V +), reg r29:V, reg p15:p(V +), reg r31:V |
    mkenv;
    r = clos inner3784084085;
    st makepredictcall = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    lm = ldf lm;
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
      __ = ldf `~` in base;
      r5 = dyn __(<sym weight>, <lang poly(height, 2.0)>);
      return r5;
    };
    p2 = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      return women1;
    };
    r8 = dyn lm[, data](p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r8];
  L4():
    goto L0();
  L6():
    st fm = r8;
    plot = ldf plot;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p3 = prom<V +>{
      women2 = ld women;
      women3 = force? women2;
      checkMissing(women3);
      return women3;
    };
    r10 = dyn plot[, xlab, ylab](p3, "Height (in)", "Weight (lb)");
    check L8() else D5();
  D5():
    deopt 22 [r10];
  L8():
    seq = ldf seq;
    check L9() else D6();
  D6():
    deopt 24 [];
  L9():
    r11 = dyn seq[, , `length.out`](57.0, 73.0, 200.0);
    check L10() else D7();
  D7():
    deopt 29 [r11];
  L10():
    st ht = r11;
    data_frame = ldf `data.frame`;
    check L11() else D8();
  D8():
    deopt 32 [];
  L11():
    p4 = prom<V +>{
      ht = ld ht;
      ht1 = force? ht;
      checkMissing(ht1);
      return ht1;
    };
    r13 = dyn data_frame[height](p4);
    check L12() else D9();
  D9():
    deopt 35 [r13];
  L12():
    st nD = r13;
    predict = ldf predict;
    check L13() else D10();
  D10():
    deopt 38 [];
  L13():
    p5 = prom<V +>{
      fm = ld fm;
      fm1 = force? fm;
      checkMissing(fm1);
      return fm1;
    };
    p6 = prom<V +>{
      nD = ld nD;
      nD1 = force? nD;
      checkMissing(nD1);
      return nD1;
    };
    r16 = dyn predict(p5, p6);
    check L14() else D11();
  D11():
    deopt 41 [r16];
  L14():
    st pfm = r16;
    lines = ldf lines;
    check L15() else D12();
  D12():
    deopt 44 [];
  L15():
    p7 = prom<V +>{
      ht2 = ld ht;
      ht3 = force? ht2;
      checkMissing(ht3);
      return ht3;
    };
    p8 = prom<V +>{
      pfm = ld pfm;
      pfm1 = force? pfm;
      checkMissing(pfm1);
      return pfm1;
    };
    r19 = dyn lines(p7, p8);
    check L16() else D13();
  D13():
    deopt 47 [r19];
  L16():
    predict1 = ldf predict;
    check L17() else D14();
  D14():
    deopt 49 [];
  L17():
    p11 = prom<V +>{
      update = ldf update;
      p9 = prom<V +>{
        fm2 = ld fm;
        fm3 = force? fm2;
        checkMissing(fm3);
        return fm3;
      };
      p10 = prom<V +>{
        __1 = ldf `~` in base;
        r21 = dyn __1(<lang `::`(stats, poly)(height, 2.0)>);
        return r21;
      };
      r23 = dyn update(p9, p10);
      return r23;
    };
    p12 = prom<V +>{
      nD2 = ld nD;
      nD3 = force? nD2;
      checkMissing(nD3);
      return nD3;
    };
    r26 = dyn predict1(p11, p12);
    check L18() else D15();
  D15():
    deopt 52 [r26];
  L18():
    st pf2 = r26;
    stopifnot = ldf stopifnot;
    check L19() else D16();
  D16():
    deopt 55 [];
  L19():
    p15 = prom<V +>{
      all_equal = ldf `all.equal`;
      p13 = prom<V +>{
        pfm2 = ld pfm;
        pfm3 = force? pfm2;
        checkMissing(pfm3);
        return pfm3;
      };
      p14 = prom<V +>{
        pf2 = ld pf2;
        pf3 = force? pf2;
        checkMissing(pf3);
        return pf3;
      };
      r29 = dyn all_equal(p13, p14);
      return r29;
    };
    r31 = dyn stopifnot(p15);
    check L20() else D17();
  D17():
    deopt 57 [r31];
  L20():
    popenv;
    return r31;
  }
}
fun inner3784084085(var, call) {
  (reg var:*, reg call:*) -+> V { var var:*, var call:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st var = var;
    st call = call;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("makepredictcall");
    goto L0(r2);
  L2():
    r = dyn base("makepredictcall");
    goto L0(r);
  }
}