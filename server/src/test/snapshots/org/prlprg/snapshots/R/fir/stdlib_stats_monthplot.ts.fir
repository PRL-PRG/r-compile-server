fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3928899735;
    st `monthplot.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3928899735(x, labels, times, phase, ylab, `...`) {
  (reg x:*, reg labels:*, reg times:*, reg phase:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var times:*, reg times_isMissing:L, reg times_orDefault:*, reg time:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var phase:*, reg phase_isMissing:L, reg phase_orDefault:*, reg cycle:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg labels1:*, reg labels2:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg c2:L, reg frequency:cls, reg x5:*, reg x6:V, reg p6:p(V +), reg r18:V, reg f:*, reg f1:V, reg r19:V, reg c3:L, reg paste0:cls, reg p7:p(V +), reg r21:V, reg r22:V, reg f2:*, reg f3:V, reg r23:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg c5:cls, reg r26:V, reg f4:*, reg f5:V, reg r27:V, reg monthplot_default:cls, reg x7:*, reg x8:V, reg p8:p(V +), reg times1:*, reg times2:V, reg p9:p(V +), reg phase1:*, reg phase2:V, reg p10:p(V +), reg ylab1:*, reg ylab2:V, reg p11:p(V +), reg ddd1:dots?, reg r33:V, reg monthplot_default1:cls, reg x9:*, reg x10:V, reg p12:p(V +), reg labels3:*, reg labels4:V, reg p13:p(V +), reg times3:*, reg times4:V, reg p14:p(V +), reg phase3:*, reg phase4:V, reg p15:p(V +), reg ylab3:*, reg ylab4:V, reg p16:p(V +), reg ddd2:dots?, reg r40:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0(NULL) else L0(labels);
  L0(labels_orDefault):
    st labels = labels_orDefault;
    times_isMissing = missing.0(times);
    if times_isMissing then L1() else L2(times);
  L1():
    p1 = prom<V +>{
      time = ldf time;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn time(p);
      return r1;
    };
    goto L2(p1);
  L2(times_orDefault):
    st times = times_orDefault;
    phase_isMissing = missing.0(phase);
    if phase_isMissing then L3() else L4(phase);
  L3():
    p3 = prom<V +>{
      cycle = ldf cycle;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r4 = dyn cycle(p2);
      return r4;
    };
    goto L4(p3);
  L4(phase_orDefault):
    st phase = phase_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L5() else L6(ylab);
  L5():
    p5 = prom<V +>{
      deparse1 = ldf deparse1;
      p4 = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r7):
        return r7;
      L1():
        substitute = ldf substitute in base;
        r8 = dyn substitute(<sym x>);
        goto L0(r8);
      L2():
        r6 = dyn base(<sym x>);
        goto L0(r6);
      };
      r10 = dyn deparse1(p4);
      return r10;
    };
    goto L6(p5);
  L6(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L7(r13):
    c1 = `as.logical`(r13);
    if c1 then L20() else L8();
  L17():
    labels1 = ld labels;
    check L19() else D0();
  L18():
    r12 = dyn base1(<sym labels>);
    goto L7(r12);
  D0():
    deopt 1 [labels1];
  L8():
    goto L16();
  L16():
    monthplot_default1 = ldf `monthplot.default`;
    check L43() else D11();
  L19():
    labels2 = force? labels1;
    checkMissing(labels2);
    c = `==`(labels2, NULL);
    goto L7(c);
  L20():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D11():
    deopt 61 [];
  L9(r15):
    c2 = `as.logical`(r15);
    if c2 then L23() else L10();
  L21():
    missing = ldf missing in base;
    r16 = dyn missing(<sym phase>);
    goto L9(r16);
  L22():
    r14 = dyn base2(<sym phase>);
    goto L9(r14);
  L43():
    p12 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p13 = prom<V +>{
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      return labels4;
    };
    p14 = prom<V +>{
      times3 = ld times;
      times4 = force? times3;
      checkMissing(times4);
      return times4;
    };
    p15 = prom<V +>{
      phase3 = ld phase;
      phase4 = force? phase3;
      checkMissing(phase4);
      return phase4;
    };
    p16 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd2 = ld `...`;
    r40 = dyn monthplot_default1[, labels, times, phase, ylab, `...`](p12, p13, p14, p15, p16, ddd2);
    check L44() else D12();
  D12():
    deopt 72 [r40];
  L10():
    monthplot_default = ldf `monthplot.default`;
    check L39() else D9();
  L23():
    frequency = ldf frequency;
    check L24() else D1();
  L44():
    popenv;
    return r40;
  D1():
    deopt 8 [];
  D9():
    deopt 47 [];
  L24():
    p6 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r18 = dyn frequency(p6);
    check L25() else D2();
  L39():
    p8 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p9 = prom<V +>{
      times1 = ld times;
      times2 = force? times1;
      checkMissing(times2);
      return times2;
    };
    p10 = prom<V +>{
      phase1 = ld phase;
      phase2 = force? phase1;
      checkMissing(phase2);
      return phase2;
    };
    p11 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd1 = ld `...`;
    r33 = dyn monthplot_default[, times, phase, ylab, `...`](p8, p9, p10, p11, ddd1);
    check L40() else D10();
  D2():
    deopt 10 [r18];
  D10():
    deopt 56 [r33];
  L25():
    st f = r18;
    f = ld f;
    check L26() else D3();
  L40():
    popenv;
    return r33;
  D3():
    deopt 12 [f];
  L26():
    f1 = force? f;
    checkMissing(f1);
    r19 = `==`(f1, 4.0);
    c3 = `as.logical`(r19);
    if c3 then L27() else L11();
  L11():
    f2 = ld f;
    check L31() else D6();
  L12(r22):
    st labels = r22;
    goto L16();
  L27():
    paste0 = ldf paste0;
    check L28() else D4();
  D4():
    deopt 17 [];
  D6():
    deopt 21 [f2];
  L28():
    p7 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r21 = dyn paste0("Q", p7);
    check L29() else D5();
  L31():
    f3 = force? f2;
    checkMissing(f3);
    r23 = `==`(f3, 12.0);
    c4 = `as.logical`(r23);
    if c4 then L32() else L13();
  D5():
    deopt 20 [r21];
  L13():
    f4 = ld f;
    check L37() else D8();
  L29():
    goto L12(r21);
  L32():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  D8():
    deopt 42 [1, f4];
  L14(r25):
    goto L12(r25);
  L33():
    c5 = ldf c in base;
    r26 = dyn c5("J", "F", "M", "A", "M", "J", "J", "A", "S", "O", "N", "D");
    check L35() else D7();
  L34():
    r24 = dyn base3("J", "F", "M", "A", "M", "J", "J", "A", "S", "O", "N", "D");
    goto L14(r24);
  L37():
    f5 = force? f4;
    checkMissing(f5);
    r27 = `:`(1, f5);
    goto L12(r27);
  D7():
    deopt 40 [r26];
  L35():
    goto L14(r26);
  }
}