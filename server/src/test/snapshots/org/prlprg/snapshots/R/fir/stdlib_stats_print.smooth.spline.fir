fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.smooth.spline` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg c1:V, reg r5:V, reg c2:L, reg cat:cls, reg r6:V, reg dput:cls, reg cl:*, reg cl1:V, reg p1:p(V +), reg r8:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg cat1:cls, reg format:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg format1:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r16:V, reg p5:p(V +), reg digits3:*, reg digits4:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg ip:*, reg ip1:V, reg c6:L, reg ip3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r21:V, reg r22:V, reg c7:L, reg paste0:cls, reg ip4:*, reg ip5:V, reg c8:L, reg ip7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r23:V, reg p8:p(V +), reg r25:V, reg p9:p(V +), reg r27:V, reg cat2:cls, reg r28:V, reg cat3:cls, reg format2:cls, reg x17:*, reg x18:V, reg c9:L, reg x20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r29:V, reg p10:p(V +), reg digits5:*, reg digits6:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg r34:V, reg cat4:cls, reg r35:V, reg cat5:cls, reg sprintf:cls, reg x21:*, reg x22:V, reg c10:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r36:V, reg c11:L, reg p13:p(V +), reg format3:cls, reg x25:*, reg x26:V, reg c12:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r38:V, reg p14:p(V +), reg digits7:*, reg digits8:V, reg p15:p(V +), reg r41:V, reg p16:p(V +), reg r43:V, reg p17:p(V +), reg r45:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r46:V, reg r47:V, reg x29:*, reg x30:V, reg c13:L, reg x32:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r48:V, reg is_na:cls, reg r49:V, reg r50:V, reg c14:L, reg cat6:cls, reg cv:*, reg cv1:V, reg c15:L, reg p18:p(V +), reg format4:cls, reg x33:*, reg x34:V, reg c16:L, reg x36:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r52:V, reg p19:p(V +), reg digits9:*, reg digits10:V, reg p20:p(V +), reg r55:V, reg p21:p(V +), reg r57:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r59:V, reg r60:V, reg x37:*, reg x38:V, reg invisible:cls, reg r61:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r3):
    r5 = `!`(r3);
    c2 = `as.logical`(r5);
    if c2 then L16() else L3();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r2 = dyn base(<lang `<-`(cl, `$`(x, call))>);
    goto L2(r2);
  D0():
    deopt 1 [x1];
  L3():
    goto L4();
  L4():
    x5 = ld x;
    check L22() else D5();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L13() else L14(x2);
  L16():
    cat = ldf cat;
    check L17() else D1();
  D1():
    deopt 8 [];
  D5():
    deopt 19 [x5];
  L12(dx1):
    st cl = dx1;
    c1 = `==`(dx1, NULL);
    goto L2(c1);
  L13():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x4):
    r4 = `$`(x4, <sym call>);
    goto L12(r4);
  L17():
    r6 = dyn cat("Call:\n");
    check L18() else D2();
  L22():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L24() else L25(x6);
  D2():
    deopt 10 [r6];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L18():
    dput = ldf dput;
    check L19() else D3();
  L23(dx3):
    st ip = dx3;
    cat1 = ldf cat;
    check L27() else D6();
  L24():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(x8):
    r10 = `$`(x8, <sym iparms>);
    goto L23(r10);
  D3():
    deopt 12 [];
  D6():
    deopt 24 [];
  L19():
    p1 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r8 = dyn dput[, control](p1, NULL);
    check L20() else D4();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    p4 = prom<V +>{
      format = ldf format;
      p2 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c4 = `is.object`(x10);
        if c4 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r11 = `$`(x12, <sym spar>);
        goto L0(r11);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p3 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r14 = dyn format[, digits](p2, p3);
      return r14;
    };
    p7 = prom<V +>{
      format1 = ldf format;
      p5 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c5 = `is.object`(x14);
        if c5 then L1() else L2(x14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x16):
        r16 = `$`(x16, <sym lambda>);
        goto L0(r16);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p6 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r19 = dyn format1[, digits](p5, p6);
      return r19;
    };
    p9 = prom<V +>{
      ip = ld ip;
      ip1 = force? ip;
      checkMissing(ip1);
      c6 = `is.object`(ip1);
      if c6 then L2() else L3(ip1);
    L0(dx9):
      r22 = `!=`(dx9, 1);
      c7 = `as.logical`(r22);
      if c7 then L5() else L1();
    L2():
      dr8 = tryDispatchBuiltin.1("[", ip1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(ip3):
      __ = ldf `[` in base;
      r21 = dyn __(ip3, "ispar");
      goto L0(r21);
    L1():
      invisible.0();
      return NULL;
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L5():
      paste0 = ldf paste0;
      p8 = prom<V +>{
        ip4 = ld ip;
        ip5 = force? ip4;
        checkMissing(ip5);
        c8 = `is.object`(ip5);
        if c8 then L1() else L2(ip5);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", ip5);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(ip7):
        __1 = ldf `[` in base;
        r23 = dyn __1(ip7, "iter");
        goto L0(r23);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r25 = dyn paste0("(", p8, " iterations)");
      return r25;
    };
    r27 = dyn cat1("\nSmoothing Parameter  spar=", p4, " lambda=", p7, p9);
    check L28() else D7();
  D4():
    deopt 16 [r8];
  D7():
    deopt 30 [r27];
  L20():
    goto L4();
  L28():
    cat2 = ldf cat;
    check L29() else D8();
  D8():
    deopt 32 [];
  L29():
    r28 = dyn cat2("\n");
    check L30() else D9();
  D9():
    deopt 34 [r28];
  L30():
    cat3 = ldf cat;
    check L31() else D10();
  D10():
    deopt 36 [];
  L31():
    p12 = prom<V +>{
      format2 = ldf format;
      p10 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c9 = `is.object`(x18);
        if c9 then L1() else L2(x18);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x18);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x20):
        r29 = `$`(x20, <sym df>);
        goto L0(r29);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      p11 = prom<V +>{
        digits5 = ld digits;
        digits6 = force? digits5;
        checkMissing(digits6);
        return digits6;
      };
      r32 = dyn format2[, digits](p10, p11);
      return r32;
    };
    r34 = dyn cat3("Equivalent Degrees of Freedom (Df):", p12);
    check L32() else D11();
  D11():
    deopt 39 [r34];
  L32():
    cat4 = ldf cat;
    check L33() else D12();
  D12():
    deopt 41 [];
  L33():
    r35 = dyn cat4("\n");
    check L34() else D13();
  D13():
    deopt 43 [r35];
  L34():
    cat5 = ldf cat;
    check L35() else D14();
  D14():
    deopt 45 [];
  L35():
    p17 = prom<V +>{
      sprintf = ldf sprintf;
      p13 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c10 = `is.object`(x22);
        if c10 then L2() else L3(x22);
      L1(dx15):
        c11 = `as.logical`(dx15);
        if c11 then L5() else L0();
      L2():
        dr14 = tryDispatchBuiltin.1("$", x22);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L4() else L3(dr14);
      L3(x24):
        r36 = `$`(x24, <sym no.weights>);
        goto L1(r36);
      L0():
        return "weighted ";
      L4():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L1(dx14);
      L5():
        return "";
      };
      p16 = prom<V +>{
        format3 = ldf format;
        p14 = prom<V +>{
          x25 = ld x;
          x26 = force? x25;
          checkMissing(x26);
          c12 = `is.object`(x26);
          if c12 then L1() else L2(x26);
        L0(dx17):
          return dx17;
        L1():
          dr16 = tryDispatchBuiltin.1("$", x26);
          dc8 = getTryDispatchBuiltinDispatched(dr16);
          if dc8 then L3() else L2(dr16);
        L2(x28):
          r38 = `$`(x28, <sym pen.crit>);
          goto L0(r38);
        L3():
          dx16 = getTryDispatchBuiltinValue(dr16);
          goto L0(dx16);
        };
        p15 = prom<V +>{
          digits7 = ld digits;
          digits8 = force? digits7;
          checkMissing(digits8);
          return digits8;
        };
        r41 = dyn format3[, digits](p14, p15);
        return r41;
      };
      r43 = dyn sprintf("Penalized Criterion (%sRSS): %s\n", p13, p16);
      return r43;
    };
    r45 = dyn cat5(p17);
    check L36() else D15();
  D15():
    deopt 47 [r45];
  L36():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L5(r47):
    r50 = `!`(r47);
    c14 = `as.logical`(r50);
    if c14 then L45() else L6();
  L37():
    x29 = ld x;
    check L39() else D16();
  L38():
    r46 = dyn base1(<lang `<-`(cv, `$`(x, cv))>);
    goto L5(r46);
  D16():
    deopt 50 [x29];
  L6():
    goto L7();
  L7():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L39():
    x30 = force? x29;
    checkMissing(x30);
    c13 = `is.object`(x30);
    if c13 then L41() else L42(x30);
  L45():
    cat6 = ldf cat;
    check L46() else D18();
  D18():
    deopt 58 [];
  L8(r60):
    popenv;
    return r60;
  L40(dx19):
    st cv = dx19;
    is_na = ldf `is.na` in base;
    r49 = dyn is_na(dx19);
    check L44() else D17();
  L41():
    dr18 = tryDispatchBuiltin.1("$", x30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L43() else L42(dr18);
  L42(x32):
    r48 = `$`(x32, <sym cv>);
    goto L40(r48);
  L46():
    p18 = prom<V +>{
      cv = ld cv;
      cv1 = force? cv;
      checkMissing(cv1);
      c15 = `as.logical`(cv1);
      if c15 then L1() else L0();
    L0():
      return "GCV: ";
    L1():
      return "PRESS(l.o.o. CV): ";
    };
    p21 = prom<V +>{
      format4 = ldf format;
      p19 = prom<V +>{
        x33 = ld x;
        x34 = force? x33;
        checkMissing(x34);
        c16 = `is.object`(x34);
        if c16 then L1() else L2(x34);
      L0(dx21):
        return dx21;
      L1():
        dr20 = tryDispatchBuiltin.1("$", x34);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(x36):
        r52 = `$`(x36, <sym cv.crit>);
        goto L0(r52);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx20);
      };
      p20 = prom<V +>{
        digits9 = ld digits;
        digits10 = force? digits9;
        checkMissing(digits10);
        return digits10;
      };
      r55 = dyn format4[, digits](p19, p20);
      return r55;
    };
    r57 = dyn cat6[, , , sep](p18, p21, "\n", "");
    check L47() else D19();
  L49():
    x37 = ld x;
    check L51() else D20();
  L50():
    r59 = dyn base2(<sym x>);
    goto L8(r59);
  D17():
    deopt 55 [r49];
  D19():
    deopt 64 [r57];
  D20():
    deopt 69 [x37];
  L43():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L40(dx18);
  L44():
    goto L5(r49);
  L47():
    goto L7();
  L51():
    x38 = force? x37;
    checkMissing(x38);
    invisible = ldf invisible in base;
    r61 = dyn invisible(x38);
    check L52() else D21();
  D21():
    deopt 72 [r61];
  L52():
    goto L8(r61);
  }
}