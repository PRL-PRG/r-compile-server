fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.summary.prcomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg dim:cls, reg r9:V, reg dr2:*, reg dr3:V, reg c1:L, reg dr5:V, reg dr6:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr8:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg length:cls, reg r14:V, reg k:*, reg k1:V, reg p1:*, reg p2:V, reg r15:V, reg c3:L, reg cat:cls, reg sprintf:cls, reg k2:*, reg k3:V, reg p3:p(V +), reg p4:*, reg p5:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg print:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr10:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r21:V, reg c5:L, reg dr12:V, reg dc4:L, reg dx10:V, reg dx11:V, reg k4:*, reg k5:V, reg r22:V, reg __1:cls, reg r23:V, reg p8:p(V +), reg digits1:*, reg digits2:V, reg p9:p(V +), reg ddd1:dots?, reg r26:V, reg cat1:cls, reg r28:V, reg print1:cls, reg x13:*, reg x14:V, reg c6:L, reg x16:V, reg dr14:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r29:V, reg p10:p(V +), reg digits3:*, reg digits4:V, reg p11:p(V +), reg ddd2:dots?, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg x17:*, reg x18:V, reg invisible:cls, reg r35:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L2(r7):
    st dr = r7;
    dr2 = ld dr;
    check L16() else D2();
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r6 = dyn base1(<lang `$`(x, rotation)>);
    goto L2(r6);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [dr2];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L12() else L13(x2);
  L16():
    dr3 = force? dr2;
    checkMissing(dr3);
    c1 = `is.object`(dr3);
    if c1 then L17() else L18(dr3);
  L3(dx3):
    st k = dx3;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L11(dx1):
    dim = ldf dim in base;
    r9 = dyn dim(dx1);
    check L15() else D1();
  L12():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(x4):
    r8 = `$`(x4, <sym rotation>);
    goto L11(r8);
  L17():
    dr6 = tryDispatchBuiltin.1("[", dr3);
    dc1 = getTryDispatchBuiltinDispatched(dr6);
    if dc1 then L19() else L18(dr6);
  L18(dr5):
    __ = ldf `[` in base;
    r10 = dyn __(dr5, 2.0);
    goto L3(r10);
  D1():
    deopt 6 [r9];
  L4(r12):
    st p = r12;
    k = ld k;
    check L28() else D5();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L15():
    goto L2(r9);
  L19():
    dx2 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx2);
  L20():
    x5 = ld x;
    check L22() else D3();
  L21():
    r11 = dyn base2(<lang `$`(x, sdev)>);
    goto L4(r11);
  D3():
    deopt 16 [x5];
  D5():
    deopt 22 [k];
  L22():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L24() else L25(x6);
  L28():
    k1 = force? k;
    checkMissing(k1);
    p1 = ld p;
    check L29() else D6();
  D6():
    deopt 23 [k1, p1];
  L23(dx5):
    length = ldf length in base;
    r14 = dyn length(dx5);
    check L27() else D4();
  L24():
    dr8 = tryDispatchBuiltin.1("$", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr8);
    if dc2 then L26() else L25(dr8);
  L25(x8):
    r13 = `$`(x8, <sym sdev>);
    goto L23(r13);
  L29():
    p2 = force? p1;
    checkMissing(p2);
    r15 = `<`(k1, p2);
    c3 = `as.logical`(r15);
    if c3 then L30() else L5();
  D4():
    deopt 20 [r14];
  L5():
    cat1 = ldf cat;
    check L36() else D11();
  L6():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L26():
    dx4 = getTryDispatchBuiltinValue(dr8);
    goto L23(dx4);
  L27():
    goto L4(r14);
  L30():
    cat = ldf cat;
    check L31() else D7();
  D7():
    deopt 27 [];
  D11():
    deopt 38 [];
  L7(r34):
    popenv;
    return r34;
  L31():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        k2 = ld k;
        k3 = force? k2;
        checkMissing(k3);
        return k3;
      };
      p6 = prom<V +>{
        p4 = ld p;
        p5 = force? p4;
        checkMissing(p5);
        return p5;
      };
      r18 = dyn sprintf("Importance of first k=%d (out of %d) components:\n", p3, p6);
      return r18;
    };
    r20 = dyn cat(p7);
    check L32() else D8();
  L36():
    r28 = dyn cat1("Importance of components:\n");
    check L37() else D12();
  L40():
    x17 = ld x;
    check L42() else D15();
  L41():
    r33 = dyn base3(<sym x>);
    goto L7(r33);
  D8():
    deopt 29 [r20];
  D12():
    deopt 40 [r28];
  D15():
    deopt 50 [x17];
  L32():
    print = ldf print;
    check L33() else D9();
  L37():
    print1 = ldf print;
    check L38() else D13();
  L42():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r35 = dyn invisible(x18);
    check L43() else D16();
  D9():
    deopt 31 [];
  D13():
    deopt 42 [];
  D16():
    deopt 53 [r35];
  L33():
    p8 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c4 = `is.object`(x10);
      if c4 then L2() else L3(x10);
    L1(dx7):
      c5 = `is.object`(dx7);
      if c5 then L5() else L6();
    L2():
      dr10 = tryDispatchBuiltin.1("$", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr10);
      if dc3 then L4() else L3(dr10);
    L3(x12):
      r21 = `$`(x12, <sym importance>);
      goto L1(r21);
    L0(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx6);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr12);
      if dc4 then L7() else L6();
    L6():
      k4 = ld k;
      k5 = force? k4;
      checkMissing(k5);
      r22 = `:`(1.0, k5);
      __1 = ldf `[` in base;
      r23 = dyn __1(dx7, <missing>, r22, FALSE);
      goto L0(r23);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx10);
    };
    p9 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r26 = dyn print[, digits, `...`](p8, p9, ddd1);
    check L34() else D10();
  L38():
    p10 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c6 = `is.object`(x14);
      if c6 then L1() else L2(x14);
    L0(dx13):
      return dx13;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x14);
      dc5 = getTryDispatchBuiltinDispatched(dr14);
      if dc5 then L3() else L2(dr14);
    L2(x16):
      r29 = `$`(x16, <sym importance>);
      goto L0(r29);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx12);
    };
    p11 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd2 = ld `...`;
    r32 = dyn print1[, digits, `...`](p10, p11, ddd2);
    check L39() else D14();
  L43():
    goto L7(r35);
  D10():
    deopt 36 [r26];
  D14():
    deopt 47 [r32];
  L34():
    goto L6();
  L39():
    goto L6();
  }
}