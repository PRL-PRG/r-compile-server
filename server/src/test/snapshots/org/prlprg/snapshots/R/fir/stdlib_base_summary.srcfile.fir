fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2083163048`;
    st `summary.srcfile` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2083163048`(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg cat:cls, reg ___:cls, reg r:V, reg r1:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg object9:*, reg object10:V, reg c2:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg inherits:cls, reg r12:V, reg c3:L, reg cat1:cls, reg format:cls, reg object13:*, reg object14:V, reg c4:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg cat2:cls, reg object17:*, reg object18:V, reg c5:L, reg object20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r19:V, reg p5:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg object21:*, reg object22:V, reg c6:L, reg object24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r24:V, reg c7:V, reg r25:V, reg c8:L, reg c10:V, reg object25:*, reg object26:V, reg c11:L, reg c13:L, reg object28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c15:L, reg dx13:V, reg r26:V, reg object29:*, reg object30:V, reg c16:L, reg c18:L, reg dx15:V, reg object32:V, reg dr14:V, reg dc7:L, reg dx17:V, reg c20:L, reg dx18:V, reg dx19:V, reg r27:V, reg r28:V, reg c21:L, reg c22:V, reg c24:L, reg c26:V, reg object33:*, reg object34:V, reg c27:L, reg c29:L, reg object36:V, reg dr16:V, reg dc8:L, reg dx20:V, reg c31:L, reg dx21:V, reg r29:V, reg r30:V, reg c32:L, reg c33:V, reg c35:L, reg cat3:cls, reg object37:*, reg object38:V, reg c36:L, reg object40:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r31:V, reg p6:p(V +), reg r33:V, reg cat4:cls, reg r35:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg object41:*, reg object42:V, reg invisible:cls, reg r38:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    cat = ldf cat;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      ___ = ldf `:::`;
      r = dyn ___("utils", ".normalizePath");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        c = `is.object`(object2);
        if c then L1() else L2(object2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", object2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(object4):
        r2 = `$`(object4, <sym filename>);
        goto L0(r2);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p1 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        c1 = `is.object`(object6);
        if c1 then L1() else L2(object6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", object6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(object8):
        r4 = `$`(object8, <sym wd>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r6 = dyn r1(p, p1);
      return r6;
    };
    r8 = dyn cat(p2, "\n");
    check L10() else D1();
  D1():
    deopt 4 [r8];
  L10():
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r10):
    c3 = `as.logical`(r10);
    if c3 then L19() else L1();
  L11():
    object9 = ld object;
    check L13() else D2();
  L12():
    r9 = dyn base(<lang `$`(object, timestamp)>, "POSIXt");
    goto L0(r9);
  D2():
    deopt 7 [object9];
  L1():
    goto L2();
  L2():
    cat2 = ldf cat;
    check L23() else D6();
  L13():
    object10 = force? object9;
    checkMissing(object10);
    c2 = `is.object`(object10);
    if c2 then L15() else L16(object10);
  L19():
    cat1 = ldf cat;
    check L20() else D4();
  D4():
    deopt 15 [];
  D6():
    deopt 25 [];
  L14(dx5):
    inherits = ldf inherits in base;
    r12 = dyn inherits(dx5, "POSIXt", FALSE);
    check L18() else D3();
  L15():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L17() else L16(dr4);
  L16(object12):
    r11 = `$`(object12, <sym timestamp>);
    goto L14(r11);
  L20():
    p4 = prom<V +>{
      format = ldf format;
      p3 = prom<V +>{
        object13 = ld object;
        object14 = force? object13;
        checkMissing(object14);
        c4 = `is.object`(object14);
        if c4 then L1() else L2(object14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", object14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(object16):
        r13 = `$`(object16, <sym timestamp>);
        goto L0(r13);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r15 = dyn format[, usetz](p3, TRUE);
      return r15;
    };
    r17 = dyn cat1[, , , sep]("Timestamp: ", p4, "\n", "");
    check L21() else D5();
  L23():
    p5 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c5 = `is.object`(object18);
      if c5 then L1() else L2(object18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object20):
      r19 = `$`(object20, <sym encoding>);
      goto L0(r19);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r21 = dyn cat2[, , , sep]("Encoding: \"", p5, "\"", "");
    check L24() else D7();
  D3():
    deopt 13 [r12];
  D5():
    deopt 21 [r17];
  D7():
    deopt 31 [r21];
  L17():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L18():
    goto L0(r12);
  L21():
    goto L2();
  L24():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L3(r23):
    r25 = `!`(r23);
    c8 = `as.logical`(r25);
    if c8 then L32() else L4(c8);
  L25():
    object21 = ld object;
    check L27() else D8();
  L26():
    r22 = dyn base1(<lang `$`(object, Enc)>);
    goto L3(r22);
  D8():
    deopt 33 [object21];
  L4(c10):
    c24 = `as.logical`(c10);
    if c24 then L44() else L5(c24);
  L27():
    object22 = force? object21;
    checkMissing(object22);
    c6 = `is.object`(object22);
    if c6 then L29() else L30(object22);
  L32():
    object25 = ld object;
    check L33() else D9();
  D9():
    deopt 38 [c8, object25];
  L5(c26):
    c35 = `as.logical`(c26);
    if c35 then L51() else L6();
  L28(dx11):
    c7 = `==`(dx11, NULL);
    goto L3(c7);
  L29():
    dr10 = tryDispatchBuiltin.1("$", object22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L31() else L30(dr10);
  L30(object24):
    r24 = `$`(object24, <sym Enc>);
    goto L28(r24);
  L33():
    object26 = force? object25;
    checkMissing(object26);
    c11 = `is.object`(object26);
    if c11 then L35() else L36(c8, object26);
  L44():
    object33 = ld object;
    check L45() else D11();
  D11():
    deopt 45 [c24, object33];
  L6():
    goto L7();
  L7():
    cat4 = ldf cat;
    check L55() else D14();
  L31():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L28(dx10);
  L34(c15, dx13):
    object29 = ld object;
    check L38() else D10();
  L35():
    dr12 = tryDispatchBuiltin.1("$", object26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L37() else L36(c8, dr12);
  L36(c13, object28):
    r26 = `$`(object28, <sym Enc>);
    goto L34(c13, r26);
  L45():
    object34 = force? object33;
    checkMissing(object34);
    c27 = `is.object`(object34);
    if c27 then L47() else L48(c24, object34);
  L51():
    cat3 = ldf cat;
    check L52() else D12();
  D10():
    deopt 40 [c15, dx13, object29];
  D12():
    deopt 52 [];
  D14():
    deopt 62 [];
  L37():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L34(c8, dx12);
  L38():
    object30 = force? object29;
    checkMissing(object30);
    c16 = `is.object`(object30);
    if c16 then L40() else L41(c15, dx13, object30);
  L46(c31, dx21):
    r30 = `!=`(dx21, "unknown");
    c32 = `as.logical`(r30);
    c33 = `&&`(c31, c32);
    goto L5(c33);
  L47():
    dr16 = tryDispatchBuiltin.1("$", object34);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L49() else L48(c24, dr16);
  L48(c29, object36):
    r29 = `$`(object36, <sym Enc>);
    goto L46(c29, r29);
  L52():
    p6 = prom<V +>{
      object37 = ld object;
      object38 = force? object37;
      checkMissing(object38);
      c36 = `is.object`(object38);
      if c36 then L1() else L2(object38);
    L0(dx23):
      return dx23;
    L1():
      dr18 = tryDispatchBuiltin.1("$", object38);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(object40):
      r31 = `$`(object40, <sym Enc>);
      goto L0(r31);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx22);
    };
    r33 = dyn cat3[, , , sep](", re-encoded to \"", p6, "\"", "");
    check L53() else D13();
  L55():
    r35 = dyn cat4("\n");
    check L56() else D15();
  D13():
    deopt 58 [r33];
  D15():
    deopt 64 [r35];
  L39(c20, dx18, dx19):
    r28 = `!=`(dx18, dx19);
    c21 = `as.logical`(r28);
    c22 = `&&`(c20, c21);
    goto L4(c22);
  L40():
    dr14 = tryDispatchBuiltin.1("$", object30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L42() else L41(c15, dx13, dr14);
  L41(c18, dx15, object32):
    r27 = `$`(object32, <sym encoding>);
    goto L39(c18, dx15, r27);
  L49():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L46(c24, dx20);
  L53():
    goto L7();
  L56():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L8(r37):
    popenv;
    return r37;
  L42():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L39(c15, dx13, dx17);
  L57():
    object41 = ld object;
    check L59() else D16();
  L58():
    r36 = dyn base2(<sym object>);
    goto L8(r36);
  D16():
    deopt 67 [object41];
  L59():
    object42 = force? object41;
    checkMissing(object42);
    invisible = ldf invisible in base;
    r38 = dyn invisible(object42);
    check L60() else D17();
  D17():
    deopt 70 [r38];
  L60():
    goto L8(r38);
  }
}