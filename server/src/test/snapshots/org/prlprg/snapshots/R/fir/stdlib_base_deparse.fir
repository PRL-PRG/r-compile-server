fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg graphics:*, reg graphics1:V, reg p1:p(V +), reg r8:V, reg deparse:cls, reg args:cls, reg lm:*, reg lm1:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg deparse1:cls, reg args1:cls, reg lm2:*, reg lm3:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg r17:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg quote:cls, reg r20:V, reg deparse2:cls, reg e:*, reg e1:V, reg p6:p(V +), reg r22:V, reg deparse3:cls, reg e2:*, reg e3:V, reg p7:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg quote1:cls, reg r27:V, reg deparse4:cls, reg e4:*, reg e5:V, reg p8:p(V +), reg r29:V, reg deparse5:cls, reg e6:*, reg e7:V, reg p9:p(V +), reg r31:V |
    mkenv;
    r = clos inner1663950908;
    st deparse = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    deparse = ldf deparse;
    check L12() else D4();
  L6():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    require1 = ldf require;
    check L10() else D2();
  L9():
    r5 = dyn base1(<sym graphics>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 14 [];
  L7():
    goto L0();
  L10():
    p1 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r8 = dyn require1(p1);
    check L11() else D3();
  L12():
    p3 = prom<V +>{
      args = ldf args;
      p2 = prom<V +>{
        lm = ld lm;
        lm1 = force? lm;
        checkMissing(lm1);
        return lm1;
      };
      r10 = dyn args(p2);
      return r10;
    };
    r12 = dyn deparse(p3);
    check L13() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 16 [r12];
  L11():
    goto L1();
  L13():
    deparse1 = ldf deparse;
    check L14() else D6();
  D6():
    deopt 18 [];
  L14():
    p5 = prom<V +>{
      args1 = ldf args;
      p4 = prom<V +>{
        lm2 = ld lm;
        lm3 = force? lm2;
        checkMissing(lm3);
        return lm3;
      };
      r14 = dyn args1(p4);
      return r14;
    };
    r16 = dyn deparse1[, `width.cutoff`](p5, 500.0);
    check L15() else D7();
  D7():
    deopt 22 [r16];
  L15():
    r17 = clos `inner-1347906706`;
    st myplot = r17;
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L2(r19):
    st e = r19;
    deparse2 = ldf deparse;
    check L18() else D8();
  L16():
    quote = ldf quote in base;
    r20 = dyn quote(<sym `foo bar`>);
    goto L2(r20);
  L17():
    r18 = dyn base2(<sym `foo bar`>);
    goto L2(r18);
  D8():
    deopt 31 [];
  L18():
    p6 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r22 = dyn deparse2(p6);
    check L19() else D9();
  D9():
    deopt 33 [r22];
  L19():
    deparse3 = ldf deparse;
    check L20() else D10();
  D10():
    deopt 35 [];
  L20():
    p7 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r24 = dyn deparse3[, backtick](p7, TRUE);
    check L21() else D11();
  D11():
    deopt 39 [r24];
  L21():
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L3(r26):
    st e = r26;
    deparse4 = ldf deparse;
    check L24() else D12();
  L22():
    quote1 = ldf quote in base;
    r27 = dyn quote1(<lang `+`(`foo bar`, 1.0)>);
    goto L3(r27);
  L23():
    r25 = dyn base3(<lang `+`(`foo bar`, 1.0)>);
    goto L3(r25);
  D12():
    deopt 45 [];
  L24():
    p8 = prom<V +>{
      e4 = ld e;
      e5 = force? e4;
      checkMissing(e5);
      return e5;
    };
    r29 = dyn deparse4(p8);
    check L25() else D13();
  D13():
    deopt 47 [r29];
  L25():
    deparse5 = ldf deparse;
    check L26() else D14();
  D14():
    deopt 49 [];
  L26():
    p9 = prom<V +>{
      e6 = ld e;
      e7 = force? e6;
      checkMissing(e7);
      return e7;
    };
    r31 = dyn deparse5[, control](p9, "all");
    check L27() else D15();
  D15():
    deopt 53 [r31];
  L27():
    popenv;
    return r31;
  }
}
fun inner1663950908(expr, `width.cutoff`, backtick, control, nlines) {
  (reg expr:*, reg width_cutoff:*, reg backtick:*, reg control:*, reg nlines:*) -+> V { var expr:*, var `width.cutoff`:*, reg width_cutoff_isMissing:L, reg width_cutoff_orDefault:*, var backtick:*, reg backtick_isMissing:L, reg backtick_orDefault:*, reg _in_:cls, reg mode:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p4:p(V +), var nlines:*, reg nlines_isMissing:L, reg nlines_orDefault:*, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg expr3:*, reg expr4:V, reg width_cutoff1:*, reg width_cutoff2:V, reg backtick1:*, reg backtick2:V, reg _deparseOpts:cls, reg control1:*, reg control2:V, reg p6:p(V +), reg r17:V, reg nlines1:*, reg nlines2:V, reg deparse:cls, reg r18:V |
    mkenv;
    st expr = expr;
    width_cutoff_isMissing = missing.0(width_cutoff);
    if width_cutoff_isMissing then L0(60) else L0(width_cutoff);
  L0(width_cutoff_orDefault):
    st `width.cutoff` = width_cutoff_orDefault;
    backtick_isMissing = missing.0(backtick);
    if backtick_isMissing then L1() else L2(backtick);
  L1():
    p3 = prom<V +>{
      _in_ = ldf `%in%`;
      p1 = prom<V +>{
        mode = ldf mode;
        p = prom<V +>{
          expr1 = ld expr;
          expr2 = force? expr1;
          checkMissing(expr2);
          return expr2;
        };
        r1 = dyn mode(p);
        return r1;
      };
      p2 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r4):
        return r4;
      L1():
        c = ldf c in base;
        r5 = dyn c("call", "expression", "(", "function");
        goto L0(r5);
      L2():
        r3 = dyn base("call", "expression", "(", "function");
        goto L0(r3);
      };
      r7 = dyn _in_(p1, p2);
      return r7;
    };
    goto L2(p3);
  L2(backtick_orDefault):
    st backtick = backtick_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L3() else L4(control);
  L3():
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1("keepNA", "keepInteger", "niceNames", "showAttributes");
      goto L0(r11);
    L2():
      r9 = dyn base1("keepNA", "keepInteger", "niceNames", "showAttributes");
      goto L0(r9);
    };
    goto L4(p4);
  L4(control_orDefault):
    st control = control_orDefault;
    nlines_isMissing = missing.0(nlines);
    if nlines_isMissing then L5() else L6(nlines);
  L5():
    p5 = prom<V +>{
      return -1;
    };
    goto L6(p5);
  L6(nlines_orDefault):
    st nlines = nlines_orDefault;
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L7(r15):
    popenv;
    return r15;
  L8():
    expr3 = ld expr;
    check L10() else D0();
  L9():
    r14 = dyn base2(<lang deparse(expr, width.cutoff, backtick, .deparseOpts(control), nlines)>);
    goto L7(r14);
  D0():
    deopt 2 [expr3];
  L10():
    expr4 = force? expr3;
    checkMissing(expr4);
    width_cutoff1 = ld `width.cutoff`;
    check L11() else D1();
  D1():
    deopt 4 [width_cutoff1];
  L11():
    width_cutoff2 = force? width_cutoff1;
    checkMissing(width_cutoff2);
    backtick1 = ld backtick;
    check L12() else D2();
  D2():
    deopt 6 [backtick1];
  L12():
    backtick2 = force? backtick1;
    checkMissing(backtick2);
    _deparseOpts = ldf `.deparseOpts`;
    check L13() else D3();
  D3():
    deopt 9 [];
  L13():
    p6 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    r17 = dyn _deparseOpts(p6);
    check L14() else D4();
  D4():
    deopt 11 [r17];
  L14():
    nlines1 = ld nlines;
    check L15() else D5();
  D5():
    deopt 12 [nlines1];
  L15():
    nlines2 = force? nlines1;
    checkMissing(nlines2);
    deparse = ldf deparse in base;
    r18 = dyn deparse(expr4, width_cutoff2, backtick2, r17, nlines2);
    check L16() else D6();
  D6():
    deopt 15 [r18];
  L16():
    goto L7(r18);
  }
}
fun `inner-1347906706`(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg plot:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg deparse2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg substitute1:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V |
    mkenv;
    st x = x;
    st y = y;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p3 = prom<V +>{
      deparse1 = ldf deparse1;
      p2 = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        substitute = ldf substitute in base;
        r4 = dyn substitute(<sym x>);
        goto L0(r4);
      L2():
        r2 = dyn base(<sym x>);
        goto L0(r2);
      };
      r6 = dyn deparse1(p2);
      return r6;
    };
    p5 = prom<V +>{
      deparse2 = ldf deparse1;
      p4 = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        substitute1 = ldf substitute in base;
        r10 = dyn substitute1(<sym y>);
        goto L0(r10);
      L2():
        r8 = dyn base1(<sym y>);
        goto L0(r8);
      };
      r12 = dyn deparse2(p4);
      return r12;
    };
    r14 = dyn plot[, , xlab, ylab](p, p1, p3, p5);
    check L1() else D1();
  D1():
    deopt 8 [r14];
  L1():
    popenv;
    return r14;
  }
}