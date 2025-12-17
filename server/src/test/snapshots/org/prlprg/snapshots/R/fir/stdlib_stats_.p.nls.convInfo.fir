fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner675711;
    st `.p.nls.convInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner675711(x, digits, `show.`) {
  (reg x:*, reg digits:*, reg show_:*) -+> V { var x:*, var digits:*, var `show.`:*, reg show__isMissing:L, reg show__orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg c1:V, reg r5:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg with:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg c5:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r13:V, reg identical:cls, reg r14:V, reg c6:L, reg cat:cls, reg stopMessage:*, reg stopMessage1:V, reg p2:p(V +), reg r16:V, reg isConv:*, reg isConv1:V, reg r17:V, reg c7:L, reg c8:V, reg show_1:*, reg show_2:V, reg c10:L, reg c11:V, reg c13:L, reg cat1:cls, reg isConv2:*, reg isConv3:V, reg c14:L, reg p3:p(V +), reg finIter:*, reg finIter1:V, reg p4:p(V +), reg format:cls, reg finTol:*, reg finTol1:V, reg p5:p(V +), reg digits1:*, reg digits2:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg cat2:cls, reg r25:V, reg isConv4:*, reg isConv5:V, reg r27:V, reg c15:L, reg cat3:cls, reg stopMessage2:*, reg stopMessage3:V, reg p8:p(V +), reg cat4:cls, reg r30:V, reg p9:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg invisible:cls, reg r36:V |
    mkenv;
    st x = x;
    st digits = digits;
    show__isMissing = missing.0(show_);
    if show__isMissing then L0() else L1(show_);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("show.nls.convergence", TRUE);
      return r;
    };
    goto L1(p);
  L1(show__orDefault):
    st `show.` = show__orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r3):
    r5 = `!`(r3);
    c2 = `as.logical`(r5);
    if c2 then L14() else L3();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base(<lang `$`(x, convInfo)>);
    goto L2(r2);
  D0():
    deopt 1 [x1];
  L3():
    goto L5();
  L5():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L11() else L12(x2);
  L14():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L4(r7):
    goto L5();
  L6(r35):
    popenv;
    return r35;
  L10(dx1):
    c1 = `==`(dx1, NULL);
    goto L2(c1);
  L11():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(x4):
    r4 = `$`(x4, <sym convInfo>);
    goto L10(r4);
  L15():
    with = ldf with;
    check L17() else D1();
  L16():
    r6 = dyn base1(<lang `$`(x, convInfo)>, <lang {
      if(identical(`$`(`$`(x, call), algorithm), "port"), cat("\nAlgorithm \"port\", convergence message: ", stopMessage, "\n", sep=""), {
          if(`||`(`!`(isConv), show.), {
              cat("\nNumber of iterations", if(isConv, "to convergence:", "till stop:"), finIter, "\nAchieved convergence tolerance:", format(finTol, digits=digits));
              cat("\n")
            });
          if(`!`(isConv), {
              cat("Reason stopped:", stopMessage);
              cat("\n")
            })
        })
    }>);
    goto L4(r6);
  L20():
    invisible = ldf invisible in base;
    r36 = dyn invisible();
    check L22() else D3();
  L21():
    r34 = dyn base3();
    goto L6(r34);
  D1():
    deopt 8 [];
  D3():
    deopt 17 [r36];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L17():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r8 = `$`(x8, <sym convInfo>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p9 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L0(r11):
      c6 = `as.logical`(r11);
      if c6 then L16() else L1();
    L6():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c4 = `is.object`(x10);
      if c4 then L9() else L10(x10);
    L7():
      r10 = dyn base2(<lang `$`(`$`(x, call), algorithm)>, "port");
      goto L0(r10);
    L1():
      isConv = ld isConv;
      isConv1 = force? isConv;
      checkMissing(isConv1);
      r17 = `!`(isConv1);
      c7 = `as.logical`(r17);
      if c7 then L2(c7) else L18();
    L8(dx5):
      c5 = `is.object`(dx5);
      if c5 then L13() else L14(dx5);
    L9():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L11() else L10(dr4);
    L10(x12):
      r12 = `$`(x12, <sym call>);
      goto L8(r12);
    L16():
      cat = ldf cat;
      p2 = prom<V +>{
        stopMessage = ld stopMessage;
        stopMessage1 = force? stopMessage;
        checkMissing(stopMessage1);
        return stopMessage1;
      };
      r16 = dyn cat[, , , sep]("\nAlgorithm \"port\", convergence message: ", p2, "\n", "");
      return r16;
    L2(c8):
      c13 = `as.logical`(c8);
      if c13 then L20() else L3();
    L11():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L8(dx4);
    L12(dx9):
      identical = ldf identical in base;
      r14 = dyn identical(dx9, "port", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r14);
    L13():
      dr6 = tryDispatchBuiltin.1("$", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L15() else L14(dr6);
    L14(dx7):
      r13 = `$`(dx7, <sym algorithm>);
      goto L12(r13);
    L18():
      show_1 = ld `show.`;
      show_2 = force? show_1;
      checkMissing(show_2);
      c10 = `as.logical`(show_2);
      c11 = `||`(c7, c10);
      goto L2(c11);
    L3():
      goto L4();
    L4():
      isConv4 = ld isConv;
      isConv5 = force? isConv4;
      checkMissing(isConv5);
      r27 = `!`(isConv5);
      c15 = `as.logical`(r27);
      if c15 then L22() else L5();
    L15():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L12(dx8);
    L20():
      cat1 = ldf cat;
      p3 = prom<V +>{
        isConv2 = ld isConv;
        isConv3 = force? isConv2;
        checkMissing(isConv3);
        c14 = `as.logical`(isConv3);
        if c14 then L1() else L0();
      L0():
        return "till stop:";
      L1():
        return "to convergence:";
      };
      p4 = prom<V +>{
        finIter = ld finIter;
        finIter1 = force? finIter;
        checkMissing(finIter1);
        return finIter1;
      };
      p7 = prom<V +>{
        format = ldf format;
        p5 = prom<V +>{
          finTol = ld finTol;
          finTol1 = force? finTol;
          checkMissing(finTol1);
          return finTol1;
        };
        p6 = prom<V +>{
          digits1 = ld digits;
          digits2 = force? digits1;
          checkMissing(digits2);
          return digits2;
        };
        r22 = dyn format[, digits](p5, p6);
        return r22;
      };
      dyn cat1("\nNumber of iterations", p3, p4, "\nAchieved convergence tolerance:", p7);
      cat2 = ldf cat;
      r25 = dyn cat2("\n");
      goto L4();
    L5():
      invisible.0();
      return NULL;
    L22():
      cat3 = ldf cat;
      p8 = prom<V +>{
        stopMessage2 = ld stopMessage;
        stopMessage3 = force? stopMessage2;
        checkMissing(stopMessage3);
        return stopMessage3;
      };
      dyn cat3("Reason stopped:", p8);
      cat4 = ldf cat;
      r30 = dyn cat4("\n");
      return r30;
    };
    r32 = dyn with(p1, p9);
    check L18() else D2();
  L22():
    goto L6(r36);
  D2():
    deopt 11 [r32];
  L18():
    goto L4(r32);
  }
}