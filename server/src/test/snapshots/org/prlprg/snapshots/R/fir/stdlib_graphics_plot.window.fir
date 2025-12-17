fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg cmdscale:cls, reg eurodist:*, reg eurodist1:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg loc:*, reg loc1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg range:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg loc4:*, reg loc5:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r13:V, reg r14:V, reg range1:cls, reg r15:V, reg plot:cls, reg x:*, reg x1:V, reg p2:p(V +), reg y:*, reg y1:V, reg p3:p(V +), reg r18:V, reg abline:cls, reg pretty:cls, reg rx:*, reg rx1:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg pretty1:cls, reg ry:*, reg ry1:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg text:cls, reg x2:*, reg x3:V, reg p8:p(V +), reg y2:*, reg y3:V, reg p9:p(V +), reg labels:cls, reg eurodist2:*, reg eurodist3:V, reg p10:p(V +), reg r29:V, reg p11:p(V +), reg r31:V |
    mkenv;
    r = clos inner4092219310;
    st `plot.window` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    cmdscale = ldf cmdscale;
    check L9() else D2();
  L5():
    require = ldf require;
    check L7() else D0();
  L6():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L7():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L8() else D1();
  L9():
    p1 = prom<V +>{
      eurodist = ld eurodist;
      eurodist1 = force? eurodist;
      checkMissing(eurodist1);
      return eurodist1;
    };
    r6 = dyn cmdscale(p1);
    check L10() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L8():
    goto L0();
  L10():
    st loc = r6;
    sym1 = ldf range;
    base1 = ldf range in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L1(r8):
    st rx = r8;
    sym2 = ldf range;
    base2 = ldf range in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L11():
    loc = ld loc;
    check L13() else D4();
  L12():
    r7 = dyn base1(<lang `<-`(x, `[`(loc, , 1.0))>);
    goto L1(r7);
  D4():
    deopt 15 [loc];
  L3(r12):
    st ry = r12;
    plot = ldf plot;
    check L25() else D8();
  L13():
    loc1 = force? loc;
    checkMissing(loc1);
    c = `is.object`(loc1);
    if c then L14() else L15();
  L18():
    loc4 = ld loc;
    check L20() else D6();
  L19():
    r11 = dyn base2(<lang `<-`(y, `-`(`[`(loc, , 2.0)))>);
    goto L3(r11);
  D6():
    deopt 27 [loc4];
  D8():
    deopt 39 [];
  L2(dx1):
    st x = dx1;
    range = ldf range in base;
    r10 = dyn range(dx1);
    check L17() else D5();
  L14():
    dr = tryDispatchBuiltin.1("[", loc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15();
  L15():
    __ = ldf `[` in base;
    r9 = dyn __(loc1, <missing>, 1.0);
    goto L2(r9);
  L20():
    loc5 = force? loc4;
    checkMissing(loc5);
    c1 = `is.object`(loc5);
    if c1 then L21() else L22();
  L25():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r18 = dyn plot[, , type, asp, xlab, ylab](p2, p3, "n", 1.0, "", "");
    check L26() else D9();
  D5():
    deopt 23 [r10];
  D9():
    deopt 50 [r18];
  L4(dx3):
    r14 = `-`(<missing>, dx3);
    st y = r14;
    range1 = ldf range in base;
    r15 = dyn range1(r14);
    check L24() else D7();
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    goto L1(r10);
  L21():
    dr2 = tryDispatchBuiltin.1("[", loc5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22();
  L22():
    __1 = ldf `[` in base;
    r13 = dyn __1(loc5, <missing>, 2.0);
    goto L4(r13);
  L26():
    abline = ldf abline;
    check L27() else D10();
  D7():
    deopt 36 [r15];
  D10():
    deopt 52 [];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L24():
    goto L3(r15);
  L27():
    p5 = prom<V +>{
      pretty = ldf pretty;
      p4 = prom<V +>{
        rx = ld rx;
        rx1 = force? rx;
        checkMissing(rx1);
        return rx1;
      };
      r20 = dyn pretty(p4, 10.0);
      return r20;
    };
    p7 = prom<V +>{
      pretty1 = ldf pretty;
      p6 = prom<V +>{
        ry = ld ry;
        ry1 = force? ry;
        checkMissing(ry1);
        return ry1;
      };
      r23 = dyn pretty1(p6, 10.0);
      return r23;
    };
    r25 = dyn abline[h, v, col](p5, p7, "lightgray");
    check L28() else D11();
  D11():
    deopt 59 [r25];
  L28():
    text = ldf text;
    check L29() else D12();
  D12():
    deopt 61 [];
  L29():
    p8 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p9 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p11 = prom<V +>{
      labels = ldf labels;
      p10 = prom<V +>{
        eurodist2 = ld eurodist;
        eurodist3 = force? eurodist2;
        checkMissing(eurodist3);
        return eurodist3;
      };
      r29 = dyn labels(p10);
      return r29;
    };
    r31 = dyn text[, , , cex](p8, p9, p11, 0.8);
    check L30() else D13();
  D13():
    deopt 67 [r31];
  L30():
    popenv;
    return r31;
  }
}
fun inner4092219310(xlim, ylim, log, asp, `...`) {
  (reg xlim:*, reg ylim:*, reg log:*, reg asp:*, reg ddd:dots) -+> V { var xlim:*, var ylim:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var asp:*, reg asp_isMissing:L, reg asp_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg _External_graphics:cls, reg C_plot_window:*, reg C_plot_window1:V, reg p:p(V +), reg xlim1:*, reg xlim2:V, reg p1:p(V +), reg ylim1:*, reg ylim2:V, reg p2:p(V +), reg log1:*, reg log2:V, reg p3:p(V +), reg asp1:*, reg asp2:V, reg p4:p(V +), reg ddd1:dots?, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg invisible:cls, reg r10:V |
    mkenv;
    st xlim = xlim;
    st ylim = ylim;
    log_isMissing = missing.0(log);
    if log_isMissing then L0("") else L0(log);
  L0(log_orDefault):
    st log = log_orDefault;
    asp_isMissing = missing.0(asp);
    if asp_isMissing then L1(NA_LGL) else L1(asp);
  L1(asp_orDefault):
    st asp = asp_orDefault;
    st `...` = ddd;
    sym = ldf `.External.graphics`;
    base = ldf `.External.graphics` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    _External_graphics = ldf `.External.graphics`;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_plot_window>, <sym xlim>, <sym ylim>, <sym log>, <sym asp>, <sym ...>);
    goto L2();
  D0():
    deopt 2 [];
  L3(r9):
    popenv;
    return r9;
  L6():
    p = prom<V +>{
      C_plot_window = ld C_plot_window;
      C_plot_window1 = force? C_plot_window;
      checkMissing(C_plot_window1);
      return C_plot_window1;
    };
    p1 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p2 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p3 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    p4 = prom<V +>{
      asp1 = ld asp;
      asp2 = force? asp1;
      checkMissing(asp2);
      return asp2;
    };
    ddd1 = ld `...`;
    r7 = dyn _External_graphics[, , , , , `...`](p, p1, p2, p3, p4, ddd1);
    check L7() else D1();
  L8():
    invisible = ldf invisible in base;
    r10 = dyn invisible();
    check L10() else D2();
  L9():
    r8 = dyn base1();
    goto L3(r8);
  D1():
    deopt 9 [r7];
  D2():
    deopt 13 [r10];
  L7():
    goto L2();
  L10():
    goto L3(r10);
  }
}