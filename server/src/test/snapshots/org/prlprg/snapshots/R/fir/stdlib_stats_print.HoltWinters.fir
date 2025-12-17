fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.HoltWinters` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:L, reg c2:L, reg c4:V, reg x5:*, reg x6:V, reg c5:L, reg c7:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c9:L, reg dx3:V, reg r3:V, reg r4:V, reg c10:L, reg c11:V, reg c13:L, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x9:*, reg x10:V, reg c14:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg c15:L, reg c16:L, reg c18:V, reg x13:*, reg x14:V, reg c19:L, reg c21:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c23:L, reg dx7:V, reg r9:V, reg r10:V, reg c24:L, reg c25:V, reg c27:L, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x17:*, reg x18:V, reg c28:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r13:V, reg c29:L, reg c30:L, reg c32:V, reg x21:*, reg x22:V, reg c33:L, reg c35:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c37:L, reg dx11:V, reg r14:V, reg r15:V, reg c38:L, reg c39:V, reg c41:L, reg p1:p(V +), reg x25:*, reg x26:V, reg c42:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r17:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg r21:V, reg cat1:cls, reg deparse:cls, reg x29:*, reg x30:V, reg c43:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r22:V, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg r26:V, reg cat2:cls, reg r27:V, reg cat3:cls, reg x33:*, reg x34:V, reg c44:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r28:V, reg p6:p(V +), reg r30:V, reg cat4:cls, reg x37:*, reg x38:V, reg c45:L, reg x40:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r31:V, reg p7:p(V +), reg r33:V, reg cat5:cls, reg x41:*, reg x42:V, reg c46:L, reg x44:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r34:V, reg p8:p(V +), reg r36:V, reg cat6:cls, reg r37:V, reg print:cls, reg t:cls, reg t1:cls, reg x45:*, reg x46:V, reg c47:L, reg x48:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r38:V, reg p9:p(V +), reg r40:V, reg p10:p(V +), reg r42:V, reg p11:p(V +), reg r44:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r45:V, reg r46:V, reg x49:*, reg x50:V, reg invisible:cls, reg r47:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf `is.logical`;
      base = ldf `is.logical` in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r1):
      c2 = `as.logical`(r1);
      if c2 then L9() else L1(c2);
    L3():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L6() else L7(x2);
    L4():
      r = dyn base(<lang `$`(x, beta)>);
      goto L0(r);
    L1(c4):
      c13 = `as.logical`(c4);
      if c13 then L15() else L2();
    L5(dx1):
      c1 = `is.logical`(dx1);
      goto L0(c1);
    L6():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L8() else L7(dr);
    L7(x4):
      r2 = `$`(x4, <sym beta>);
      goto L5(r2);
    L9():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c5 = `is.object`(x6);
      if c5 then L11() else L12(c2, x6);
    L2():
      return "with";
    L8():
      dx = getTryDispatchBuiltinValue(dr);
      goto L5(dx);
    L10(c9, dx3):
      r4 = `!`(dx3);
      c10 = `as.logical`(r4);
      c11 = `&&`(c9, c10);
      goto L1(c11);
    L11():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L13() else L12(c2, dr2);
    L12(c7, x8):
      r3 = `$`(x8, <sym beta>);
      goto L10(c7, r3);
    L15():
      return "without";
    L13():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L10(c2, dx2);
    };
    p3 = prom<V +>{
      sym1 = ldf `is.logical`;
      base1 = ldf `is.logical` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r7):
      c16 = `as.logical`(r7);
      if c16 then L9() else L1(c16);
    L3():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c14 = `is.object`(x10);
      if c14 then L6() else L7(x10);
    L4():
      r6 = dyn base1(<lang `$`(x, gamma)>);
      goto L0(r6);
    L1(c18):
      c27 = `as.logical`(c18);
      if c27 then L15() else L2();
    L5(dx5):
      c15 = `is.logical`(dx5);
      goto L0(c15);
    L6():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L8() else L7(dr4);
    L7(x12):
      r8 = `$`(x12, <sym gamma>);
      goto L5(r8);
    L9():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c19 = `is.object`(x14);
      if c19 then L11() else L12(c16, x14);
    L2():
      paste0 = ldf paste0;
      p1 = prom<V +>{
        sym2 = ldf `is.logical`;
        base2 = ldf `is.logical` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L3() else L4();
      L0(r12):
        c30 = `as.logical`(r12);
        if c30 then L9() else L1(c30);
      L3():
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c28 = `is.object`(x18);
        if c28 then L6() else L7(x18);
      L4():
        r11 = dyn base2(<lang `$`(x, beta)>);
        goto L0(r11);
      L1(c32):
        c41 = `as.logical`(c32);
        if c41 then L15() else L2();
      L5(dx9):
        c29 = `is.logical`(dx9);
        goto L0(c29);
      L6():
        dr8 = tryDispatchBuiltin.1("$", x18);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L8() else L7(dr8);
      L7(x20):
        r13 = `$`(x20, <sym beta>);
        goto L5(r13);
      L9():
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c33 = `is.object`(x22);
        if c33 then L11() else L12(c30, x22);
      L2():
        invisible.0();
        return NULL;
      L8():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L5(dx8);
      L10(c37, dx11):
        r15 = `!`(dx11);
        c38 = `as.logical`(r15);
        c39 = `&&`(c37, c38);
        goto L1(c39);
      L11():
        dr10 = tryDispatchBuiltin.1("$", x22);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L13() else L12(c30, dr10);
      L12(c35, x24):
        r14 = `$`(x24, <sym beta>);
        goto L10(c35, r14);
      L15():
        return "with ";
      L13():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L10(c30, dx10);
      };
      p2 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        c42 = `is.object`(x26);
        if c42 then L1() else L2(x26);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x26);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x28):
        r17 = `$`(x28, <sym seasonal>);
        goto L0(r17);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r19 = dyn paste0(p1, p2);
      return r19;
    L8():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L5(dx4);
    L10(c23, dx7):
      r10 = `!`(dx7);
      c24 = `as.logical`(r10);
      c25 = `&&`(c23, c24);
      goto L1(c25);
    L11():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L13() else L12(c16, dr6);
    L12(c21, x16):
      r9 = `$`(x16, <sym gamma>);
      goto L10(c21, r9);
    L15():
      return "without";
    L13():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L10(c16, dx6);
    };
    r21 = dyn cat("Holt-Winters exponential smoothing", p, "trend and", p3, "seasonal component.");
    check L2() else D1();
  D1():
    deopt 7 [r21];
  L2():
    cat1 = ldf cat;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p5 = prom<V +>{
      deparse = ldf deparse;
      p4 = prom<V +>{
        x29 = ld x;
        x30 = force? x29;
        checkMissing(x30);
        c43 = `is.object`(x30);
        if c43 then L1() else L2(x30);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x30);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x32):
        r22 = `$`(x32, <sym call>);
        goto L0(r22);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r24 = dyn deparse(p4);
      return r24;
    };
    r26 = dyn cat1[, , , sep]("\n\nCall:\n", p5, "\n\n", "");
    check L4() else D3();
  D3():
    deopt 15 [r26];
  L4():
    cat2 = ldf cat;
    check L5() else D4();
  D4():
    deopt 17 [];
  L5():
    r27 = dyn cat2("Smoothing parameters:\n");
    check L6() else D5();
  D5():
    deopt 19 [r27];
  L6():
    cat3 = ldf cat;
    check L7() else D6();
  D6():
    deopt 21 [];
  L7():
    p6 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c44 = `is.object`(x34);
      if c44 then L1() else L2(x34);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x34);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x36):
      r28 = `$`(x36, <sym alpha>);
      goto L0(r28);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r30 = dyn cat3[, , , sep](" alpha: ", p6, "\n", "");
    check L8() else D7();
  D7():
    deopt 27 [r30];
  L8():
    cat4 = ldf cat;
    check L9() else D8();
  D8():
    deopt 29 [];
  L9():
    p7 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c45 = `is.object`(x38);
      if c45 then L1() else L2(x38);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", x38);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x40):
      r31 = `$`(x40, <sym beta>);
      goto L0(r31);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r33 = dyn cat4[, , , sep](" beta : ", p7, "\n", "");
    check L10() else D9();
  D9():
    deopt 35 [r33];
  L10():
    cat5 = ldf cat;
    check L11() else D10();
  D10():
    deopt 37 [];
  L11():
    p8 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c46 = `is.object`(x42);
      if c46 then L1() else L2(x42);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", x42);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x44):
      r34 = `$`(x44, <sym gamma>);
      goto L0(r34);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r36 = dyn cat5[, , , sep](" gamma: ", p8, "\n\n", "");
    check L12() else D11();
  D11():
    deopt 43 [r36];
  L12():
    cat6 = ldf cat;
    check L13() else D12();
  D12():
    deopt 45 [];
  L13():
    r37 = dyn cat6("Coefficients:\n");
    check L14() else D13();
  D13():
    deopt 47 [r37];
  L14():
    print = ldf print;
    check L15() else D14();
  D14():
    deopt 49 [];
  L15():
    p11 = prom<V +>{
      t = ldf t;
      p10 = prom<V +>{
        t1 = ldf t;
        p9 = prom<V +>{
          x45 = ld x;
          x46 = force? x45;
          checkMissing(x46);
          c47 = `is.object`(x46);
          if c47 then L1() else L2(x46);
        L0(dx23):
          return dx23;
        L1():
          dr22 = tryDispatchBuiltin.1("$", x46);
          dc11 = getTryDispatchBuiltinDispatched(dr22);
          if dc11 then L3() else L2(dr22);
        L2(x48):
          r38 = `$`(x48, <sym coefficients>);
          goto L0(r38);
        L3():
          dx22 = getTryDispatchBuiltinValue(dr22);
          goto L0(dx22);
        };
        r40 = dyn t1(p9);
        return r40;
      };
      r42 = dyn t(p10);
      return r42;
    };
    r44 = dyn print(p11);
    check L16() else D15();
  D15():
    deopt 51 [r44];
  L16():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L0(r46):
    popenv;
    return r46;
  L17():
    x49 = ld x;
    check L19() else D16();
  L18():
    r45 = dyn base3(<sym x>);
    goto L0(r45);
  D16():
    deopt 54 [x49];
  L19():
    x50 = force? x49;
    checkMissing(x50);
    invisible = ldf invisible in base;
    r47 = dyn invisible(x50);
    check L20() else D17();
  D17():
    deopt 57 [r47];
  L20():
    goto L0(r47);
  }
}