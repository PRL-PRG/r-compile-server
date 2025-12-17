fun main() {
  () -+> V { reg r:cls, reg cbind:cls, reg r1:V, reg r2:V, reg p:p(V +), reg rnorm:cls, reg r4:V, reg p1:p(V +), reg rt:cls, reg r6:V, reg p2:p(V +), reg rgamma:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg boxplot:cls, reg mat:*, reg mat1:V, reg p4:p(V +), reg p5:p(V +), reg r13:V |
    mkenv;
    r = clos inner1353724977;
    st `boxplot.matrix` = r;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      r1 = `:`(1.0, 100.0);
      r2 = `/`(r1, 21.0);
      return r2;
    };
    p1 = prom<V +>{
      rnorm = ldf rnorm;
      r4 = dyn rnorm(100.0);
      return r4;
    };
    p2 = prom<V +>{
      rt = ldf rt;
      r6 = dyn rt[, df](100.0, 5.0);
      return r6;
    };
    p3 = prom<V +>{
      rgamma = ldf rgamma;
      r8 = dyn rgamma[, shape](100.0, 2.0);
      return r8;
    };
    r10 = dyn cbind[Uni05, Norm, T5, Gam2](p, p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 13 [r10];
  L1():
    st mat = r10;
    boxplot = ldf boxplot;
    check L2() else D2();
  D2():
    deopt 16 [];
  L2():
    p4 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      return mat1;
    };
    p5 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r13 = dyn boxplot[, main, notch, col](p4, "boxplot.matrix(...., main = ...)", TRUE, p5);
    check L3() else D3();
  D3():
    deopt 24 [r13];
  L3():
    popenv;
    return r13;
  }
}
fun inner1353724977(x, `use.cols`, `...`) {
  (reg x:*, reg use_cols:*, reg ddd:dots) -+> V { var x:*, var `use.cols`:*, reg use_cols_isMissing:L, reg use_cols_orDefault:*, var `...`:dots?, reg use_cols1:*, reg use_cols2:V, reg c:L, reg split:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c1:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg ncol:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg nrow:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r12:V, reg ncol1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r14:V, reg rep_int:cls, reg r15:V, reg rep_int1:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg r19:V, reg split1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x9:*, reg x10:V, reg c2:cls, reg r22:V, reg p5:p(V +), reg seq:cls, reg nrow1:cls, reg x11:*, reg x12:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg x13:*, reg x14:V, reg dimnames:cls, reg r34:V, reg c3:L, reg r36:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg use_cols3:*, reg use_cols4:V, reg r37:V, reg __:cls, reg r38:V, reg length:cls, reg r39:V, reg c4:L, reg nam:*, reg nam1:V, reg l:*, reg names__:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg boxplot:cls, reg groups:*, reg groups1:V, reg p9:p(V +), reg ddd1:dots?, reg r44:V, reg invisible:cls, reg r45:V |
    mkenv;
    st x = x;
    use_cols_isMissing = missing.0(use_cols);
    if use_cols_isMissing then L0(TRUE) else L0(use_cols);
  L0(use_cols_orDefault):
    st `use.cols` = use_cols_orDefault;
    st `...` = ddd;
    use_cols1 = ld `use.cols`;
    check L9() else D0();
  D0():
    deopt 0 [use_cols1];
  L9():
    use_cols2 = force? use_cols1;
    checkMissing(use_cols2);
    c = `as.logical`(use_cols2);
    if c then L10() else L1();
  L1():
    split1 = ldf split;
    check L14() else D3();
  L2(r19):
    st groups = r19;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L16() else L17();
  L10():
    split = ldf split;
    check L11() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 8 [];
  L3(r31):
    c4 = `as.logical`(r31);
    if c4 then L27() else L6();
  L11():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c1 = ldf c in base;
      r2 = dyn c1(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p4 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r5):
      return r5;
    L2():
      ncol = ldf ncol;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn ncol(p1);
      r8 = `:`(1, r7);
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r4 = dyn base1(<lang `:`(1, ncol(x))>, <lang rep.int(nrow(x), ncol(x))>);
      goto L0(r4);
    L1(r10):
      rep_int1 = ldf `rep.int` in base;
      r16 = dyn rep_int1(r8, r10);
      goto L0(r16);
    L4():
      nrow = ldf nrow;
      p2 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r12 = dyn nrow(p2);
      ncol1 = ldf ncol;
      p3 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r14 = dyn ncol1(p3);
      rep_int = ldf `rep.int` in base;
      r15 = dyn rep_int(r12, r14);
      goto L1(r15);
    L5():
      r9 = dyn base2(<lang nrow(x)>, <lang ncol(x)>);
      goto L1(r9);
    };
    r18 = dyn split(p, p4);
    check L12() else D2();
  L14():
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = ldf c in base;
      r22 = dyn c2(x10);
      goto L0(r22);
    L2():
      r20 = dyn base3(<sym x>);
      goto L0(r20);
    };
    p8 = prom<V +>{
      seq = ldf seq;
      p7 = prom<V +>{
        nrow1 = ldf nrow;
        p6 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          return x12;
        };
        r25 = dyn nrow1(p6);
        return r25;
      };
      r27 = dyn seq(p7);
      return r27;
    };
    r29 = dyn split1(p5, p8);
    check L15() else D4();
  L16():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L18() else L19();
  L17():
    r30 = dyn base4(<lang `<-`(nam, `[[`(dimnames(x), `+`(1.0, use.cols)))>);
    goto L3(r30);
  D2():
    deopt 6 [r18];
  D4():
    deopt 11 [r29];
  L4(r33):
    c3 = `is.object`(r33);
    if c3 then L22() else L23(r33);
  L6():
    goto L7();
  L7():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L32() else L33();
  L12():
    goto L2(r18);
  L15():
    goto L2(r29);
  L18():
    x13 = ld x;
    check L20() else D5();
  L19():
    r32 = dyn base5(<sym x>);
    goto L4(r32);
  L27():
    nam = ld nam;
    check L28() else D9();
  D5():
    deopt 17 [x13];
  D9():
    deopt 29 [nam];
  L5(dx1):
    st nam = dx1;
    length = ldf length in base;
    r39 = dyn length(dx1);
    check L26() else D8();
  L8(r42):
    popenv;
    return r42;
  L20():
    x14 = force? x13;
    checkMissing(x14);
    dimnames = ldf dimnames in base;
    r34 = dyn dimnames(x14);
    check L21() else D6();
  L22():
    dr = tryDispatchBuiltin.1("[[", r33);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r36):
    use_cols3 = ld `use.cols`;
    check L25() else D7();
  L28():
    nam1 = force? nam;
    checkMissing(nam1);
    l = ld groups;
    names__ = ldf `names<-`;
    check L29() else D10();
  L32():
    boxplot = ldf boxplot;
    check L34() else D12();
  L33():
    r41 = dyn base6(<lang boxplot(groups, ...)>);
    goto L8(r41);
  D6():
    deopt 20 [r34];
  D7():
    deopt 22 [r36, 1.0, use_cols3];
  D8():
    deopt 28 [r39];
  D10():
    deopt 32 [nam1, l, nam1];
  D12():
    deopt 41 [];
  L21():
    goto L4(r34);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L25():
    use_cols4 = force? use_cols3;
    checkMissing(use_cols4);
    r37 = `+`(1.0, use_cols4);
    __ = ldf `[[` in base;
    r38 = dyn __(r36, r37);
    goto L5(r38);
  L26():
    goto L3(r39);
  L29():
    r40 = dyn names__(l, NULL, nam1);
    check L30() else D11();
  L34():
    p9 = prom<V +>{
      groups = ld groups;
      groups1 = force? groups;
      checkMissing(groups1);
      return groups1;
    };
    ddd1 = ld `...`;
    r44 = dyn boxplot[, `...`](p9, ddd1);
    check L35() else D13();
  D11():
    deopt 34 [nam1, r40];
  D13():
    deopt 44 [r44];
  L30():
    st groups = r40;
    goto L7();
  L35():
    invisible = ldf invisible in base;
    r45 = dyn invisible(r44);
    check L36() else D14();
  D14():
    deopt 46 [r45];
  L36():
    goto L8(r45);
  }
}