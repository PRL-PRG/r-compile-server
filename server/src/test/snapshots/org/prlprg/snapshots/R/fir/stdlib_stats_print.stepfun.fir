fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner101332403;
    st `print.stepfun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner101332403(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var `...`:dots?, reg r3:cls, reg r4:cls, reg r5:cls, reg cat:cls, reg r6:V, reg print:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg attr:cls, reg r9:V, reg p1:p(V +), reg ddd1:dots?, reg r11:V, reg environment:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg eval:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg expression:cls, reg r18:V, reg p3:p(V +), reg env:*, reg env1:V, reg p4:p(V +), reg r21:V, reg length:cls, reg r22:V, reg cat1:cls, reg n:*, reg n1:V, reg p5:p(V +), reg numform:cls, reg xx:*, reg xx1:V, reg c:L, reg xx3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:cls, reg n2:*, reg n3:V, reg p6:p(V +), reg r25:V, reg __:cls, reg r26:V, reg p7:p(V +), reg r28:V, reg p8:p(V +), reg n4:*, reg n5:V, reg r30:V, reg c1:L, reg p9:p(V +), reg n6:*, reg n7:V, reg r32:V, reg c2:L, reg p10:p(V +), reg numform1:cls, reg xx4:*, reg xx5:V, reg c3:L, reg xx7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:cls, reg n8:*, reg n9:V, reg p11:p(V +), reg r35:V, reg __1:cls, reg r36:V, reg p12:p(V +), reg r38:V, reg p13:p(V +), reg r40:V, reg eval1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg expression1:cls, reg r43:V, reg p14:p(V +), reg env2:*, reg env3:V, reg p15:p(V +), reg r46:V, reg cat2:cls, reg n10:*, reg n11:V, reg r47:V, reg p16:p(V +), reg numform2:cls, reg y:*, reg y1:V, reg c4:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i3:cls, reg n12:*, reg n13:V, reg r49:V, reg p17:p(V +), reg r51:V, reg __2:cls, reg r52:V, reg p18:p(V +), reg r54:V, reg p19:p(V +), reg n14:*, reg n15:V, reg r56:V, reg r57:V, reg c5:L, reg p20:p(V +), reg n16:*, reg n17:V, reg r59:V, reg r60:V, reg c6:L, reg p21:p(V +), reg numform3:cls, reg y4:*, reg y5:V, reg c7:L, reg y7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i4:cls, reg n18:*, reg n19:V, reg r62:V, reg p22:p(V +), reg r64:V, reg __3:cls, reg r65:V, reg p23:p(V +), reg r67:V, reg p24:p(V +), reg r69:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r70:V, reg r71:V, reg x5:*, reg x6:V, reg invisible:cls, reg r72:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      r1 = `-`(r, 2.0);
      return r1;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    r3 = clos inner2501545716;
    st numform = r3;
    r4 = clos inner4266987626;
    st i1 = r4;
    r5 = clos inner4266987626;
    st i2 = r5;
    cat = ldf cat;
    check L4() else D0();
  D0():
    deopt 10 [];
  L4():
    r6 = dyn cat("Step function\nCall: ");
    check L5() else D1();
  D1():
    deopt 12 [r6];
  L5():
    print = ldf print;
    check L6() else D2();
  D2():
    deopt 14 [];
  L6():
    p1 = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r9 = dyn attr(x2, "call");
      goto L0(r9);
    L2():
      r7 = dyn base(<sym x>, "call");
      goto L0(r7);
    };
    ddd1 = ld `...`;
    r11 = dyn print[, `...`](p1, ddd1);
    check L7() else D3();
  D3():
    deopt 17 [r11];
  L7():
    environment = ldf environment;
    check L8() else D4();
  D4():
    deopt 19 [];
  L8():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r13 = dyn environment(p2);
    check L9() else D5();
  D5():
    deopt 21 [r13];
  L9():
    st env = r13;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r15):
    st n = r15;
    cat1 = ldf cat;
    check L15() else D9();
  L10():
    eval = ldf eval;
    check L12() else D6();
  L11():
    r14 = dyn base1(<lang `<-`(xx, eval(expression(x), envir=env))>);
    goto L2(r14);
  D6():
    deopt 26 [];
  D9():
    deopt 36 [];
  L12():
    p3 = prom<V +>{
      sym2 = ldf expression;
      base2 = ldf expression in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      expression = ldf expression in base;
      r18 = dyn expression(<sym x>);
      goto L0(r18);
    L2():
      r16 = dyn base2(<sym x>);
      goto L0(r16);
    };
    p4 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r21 = dyn eval[, envir](p3, p4);
    check L13() else D7();
  L15():
    p5 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    p8 = prom<V +>{
      numform = ldf numform;
      p7 = prom<V +>{
        xx = ld xx;
        xx1 = force? xx;
        checkMissing(xx1);
        c = `is.object`(xx1);
        if c then L1() else L2(xx1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", xx1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(xx3):
        i1 = ldf i1;
        p6 = prom<V +>{
          n2 = ld n;
          n3 = force? n2;
          checkMissing(n3);
          return n3;
        };
        r25 = dyn i1(p6);
        __ = ldf `[` in base;
        r26 = dyn __(xx3, r25);
        goto L0(r26);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r28 = dyn numform(p7);
      return r28;
    };
    p9 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r30 = `>`(n5, 3);
      c1 = `as.logical`(r30);
      if c1 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return ", ";
    };
    p10 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r32 = `>`(n7, 5);
      c2 = `as.logical`(r32);
      if c2 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return " ..., ";
    };
    p13 = prom<V +>{
      numform1 = ldf numform;
      p12 = prom<V +>{
        xx4 = ld xx;
        xx5 = force? xx4;
        checkMissing(xx5);
        c3 = `is.object`(xx5);
        if c3 then L1() else L2(xx5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", xx5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(xx7):
        i2 = ldf i2;
        p11 = prom<V +>{
          n8 = ld n;
          n9 = force? n8;
          checkMissing(n9);
          return n9;
        };
        r35 = dyn i2(p11);
        __1 = ldf `[` in base;
        r36 = dyn __1(xx7, r35);
        goto L0(r36);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r38 = dyn numform1(p12);
      return r38;
    };
    r40 = dyn cat1[, , , , , , , , sep](" x[1:", p5, "] = ", p8, p9, p10, p13, "\n", "");
    check L16() else D10();
  D7():
    deopt 30 [r21];
  D10():
    deopt 47 [r40];
  L13():
    st xx = r21;
    length = ldf length in base;
    r22 = dyn length(r21);
    check L14() else D8();
  L16():
    eval1 = ldf eval;
    check L17() else D11();
  D8():
    deopt 33 [r22];
  D11():
    deopt 49 [];
  L14():
    goto L2(r22);
  L17():
    p14 = prom<V +>{
      sym3 = ldf expression;
      base3 = ldf expression in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      expression1 = ldf expression in base;
      r43 = dyn expression1(<lang c(yleft, y)>);
      goto L0(r43);
    L2():
      r41 = dyn base3(<lang c(yleft, y)>);
      goto L0(r41);
    };
    p15 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r46 = dyn eval1[, envir](p14, p15);
    check L18() else D12();
  D12():
    deopt 53 [r46];
  L18():
    st y = r46;
    cat2 = ldf cat;
    check L19() else D13();
  D13():
    deopt 56 [];
  L19():
    p16 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      r47 = `+`(n11, 1);
      return r47;
    };
    p19 = prom<V +>{
      numform2 = ldf numform;
      p18 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        c4 = `is.object`(y1);
        if c4 then L1() else L2(y1);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", y1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(y3):
        i3 = ldf i1;
        p17 = prom<V +>{
          n12 = ld n;
          n13 = force? n12;
          checkMissing(n13);
          r49 = `+`(n13, 1);
          return r49;
        };
        r51 = dyn i3(p17);
        __2 = ldf `[` in base;
        r52 = dyn __2(y3, r51);
        goto L0(r52);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r54 = dyn numform2(p18);
      return r54;
    };
    p20 = prom<V +>{
      n14 = ld n;
      n15 = force? n14;
      checkMissing(n15);
      r56 = `+`(n15, 1);
      r57 = `>`(r56, 3);
      c5 = `as.logical`(r57);
      if c5 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return ", ";
    };
    p21 = prom<V +>{
      n16 = ld n;
      n17 = force? n16;
      checkMissing(n17);
      r59 = `+`(n17, 1);
      r60 = `>`(r59, 5);
      c6 = `as.logical`(r60);
      if c6 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return " ..., ";
    };
    p24 = prom<V +>{
      numform3 = ldf numform;
      p23 = prom<V +>{
        y4 = ld y;
        y5 = force? y4;
        checkMissing(y5);
        c7 = `is.object`(y5);
        if c7 then L1() else L2(y5);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", y5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(y7):
        i4 = ldf i2;
        p22 = prom<V +>{
          n18 = ld n;
          n19 = force? n18;
          checkMissing(n19);
          r62 = `+`(n19, 1);
          return r62;
        };
        r64 = dyn i4(p22);
        __3 = ldf `[` in base;
        r65 = dyn __3(y7, r64);
        goto L0(r65);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r67 = dyn numform3(p23);
      return r67;
    };
    r69 = dyn cat2[, , , , , , , sep](p16, " plateau levels = ", p19, p20, p21, p24, "\n", "");
    check L20() else D14();
  D14():
    deopt 66 [r69];
  L20():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L3(r71):
    popenv;
    return r71;
  L21():
    x5 = ld x;
    check L23() else D15();
  L22():
    r70 = dyn base4(<sym x>);
    goto L3(r70);
  D15():
    deopt 69 [x5];
  L23():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r72 = dyn invisible(x6);
    check L24() else D16();
  D16():
    deopt 72 [r72];
  L24():
    goto L3(r72);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg formatC:cls, reg x1:*, reg x2:V, reg p:p(V +), reg digits:*, reg digits1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      formatC = ldf formatC;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        digits = ld digits;
        digits1 = force? digits;
        checkMissing(digits1);
        return digits1;
      };
      r2 = dyn formatC[, digits](p, p1);
      return r2;
    };
    r4 = dyn paste[, collapse](p2, ", ");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:I, reg r4:V, reg n1:*, reg n2:V, reg min:cls, reg r5:V, reg r6:V |
    mkenv;
    st n = n;
    sym = ldf min;
    base = ldf min in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r3, r4):
    r6 = `:`(r3, r4);
    popenv;
    return r6;
  L1():
    n1 = ld n;
    check L3() else D0();
  L2():
    r2 = dyn base(3, <sym n>);
    goto L0(1, r2);
  D0():
    deopt 4 [1, n1];
  L3():
    n2 = force? n1;
    checkMissing(n2);
    min = ldf min in base;
    r5 = dyn min(3, n2);
    check L4() else D1();
  D1():
    deopt 7 [1, r5];
  L4():
    goto L0(1, r5);
  }
}