fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner350793923;
    st `predict.prcomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner350793923(object, newdata, `...`) {
  (reg object:*, reg newdata:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `...`:dots?, reg chkDots:cls, reg ddd1:dots?, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg c2:V, reg r7:V, reg c3:L, reg object5:*, reg object6:V, reg c4:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg stop:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg newdata1:*, reg newdata2:V, reg dim:cls, reg r17:V, reg length:cls, reg r18:V, reg r19:V, reg c5:L, reg stop1:cls, reg r20:V, reg rownames:cls, reg object9:*, reg object10:V, reg c6:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r22:V, reg p:p(V +), reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg nm:*, reg nm1:V, reg c7:V, reg r27:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg _in_:cls, reg nm2:*, reg nm3:V, reg p1:p(V +), reg colnames:cls, reg newdata3:*, reg newdata4:V, reg p2:p(V +), reg r32:V, reg p3:p(V +), reg r34:V, reg all:cls, reg r35:V, reg r36:V, reg c9:L, reg stop2:cls, reg r37:V, reg newdata5:*, reg newdata6:V, reg c10:L, reg newdata8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nm4:*, reg nm5:V, reg __:cls, reg r39:V, reg NCOL:cls, reg newdata9:*, reg newdata10:V, reg p4:p(V +), reg r41:V, reg NROW:cls, reg object13:*, reg object14:V, reg c11:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r42:V, reg p5:p(V +), reg r44:V, reg r45:V, reg c12:L, reg stop3:cls, reg r46:V, reg scale:cls, reg newdata11:*, reg newdata12:V, reg p6:p(V +), reg object17:*, reg object18:V, reg c13:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r48:V, reg p7:p(V +), reg object21:*, reg object22:V, reg c14:L, reg object24:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r50:V, reg p8:p(V +), reg r52:V, reg object25:*, reg object26:V, reg c15:L, reg object28:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r53:V, reg ___:cls, reg r54:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    st `...` = ddd;
    chkDots = ldf chkDots;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    ddd1 = ld `...`;
    r = dyn chkDots[`...`](ddd1);
    check L19() else D1();
  D1():
    deopt 3 [r];
  L19():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r2):
    c = `as.logical`(r2);
    if c then L22() else L1();
  L20():
    missing = ldf missing in base;
    r3 = dyn missing(<sym newdata>);
    goto L0(r3);
  L21():
    r1 = dyn base(<sym newdata>);
    goto L0(r1);
  L1():
    goto L5();
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L22():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L2(r5):
    r7 = `!`(r5);
    c3 = `as.logical`(r7);
    if c3 then L30() else L3();
  L6(r14):
    r19 = `!=`(r14, 2);
    c5 = `as.logical`(r19);
    if c5 then L48() else L8();
  L23():
    object1 = ld object;
    check L25() else D2();
  L24():
    r4 = dyn base1(<lang `$`(object, x)>);
    goto L2(r4);
  L41():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L42():
    r13 = dyn base2(<lang dim(newdata)>);
    goto L6(r13);
  D2():
    deopt 8 [object1];
  L3():
    stop = ldf stop;
    check L38() else D4();
  L7(r16):
    length = ldf length in base;
    r18 = dyn length(r16);
    check L47() else D8();
  L8():
    goto L9();
  L9():
    rownames = ldf rownames;
    check L52() else D11();
  L25():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L27() else L28(object2);
  L30():
    object5 = ld object;
    check L31() else D3();
  L43():
    newdata1 = ld newdata;
    check L45() else D6();
  L44():
    r15 = dyn base3(<sym newdata>);
    goto L7(r15);
  L48():
    stop1 = ldf stop;
    check L49() else D9();
  D3():
    deopt 13 [object5];
  D4():
    deopt 18 [];
  D6():
    deopt 27 [newdata1];
  D8():
    deopt 32 [r18];
  D9():
    deopt 36 [];
  D11():
    deopt 42 [];
  L26(dx1):
    c2 = `==`(dx1, NULL);
    goto L2(c2);
  L27():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(object4):
    r6 = `$`(object4, <sym x>);
    goto L26(r6);
  L31():
    object6 = force? object5;
    checkMissing(object6);
    c4 = `is.object`(object6);
    if c4 then L33() else L34(object6);
  L38():
    r11 = dyn stop("no scores are available: refit with 'retx=TRUE'");
    check L39() else D5();
  L45():
    newdata2 = force? newdata1;
    checkMissing(newdata2);
    dim = ldf dim in base;
    r17 = dyn dim(newdata2);
    check L46() else D7();
  L47():
    goto L6(r18);
  L49():
    r20 = dyn stop1("'newdata' must be a matrix or data frame");
    check L50() else D10();
  L52():
    p = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c6 = `is.object`(object10);
      if c6 then L1() else L2(object10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object12):
      r22 = `$`(object12, <sym rotation>);
      goto L0(r22);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r24 = dyn rownames(p);
    check L53() else D12();
  D5():
    deopt 20 [r11];
  D7():
    deopt 30 [r17];
  D10():
    deopt 38 [r20];
  D12():
    deopt 44 [r24];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L32(dx3):
    popenv;
    return dx3;
  L33():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(object8):
    r8 = `$`(object8, <sym x>);
    goto L32(r8);
  L39():
    goto L5();
  L46():
    goto L7(r17);
  L50():
    goto L9();
  L53():
    st nm = r24;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L10(r26):
    r27 = `!`(r26);
    c8 = `as.logical`(r27);
    if c8 then L57() else L11();
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L54():
    nm = ld nm;
    check L56() else D13();
  L55():
    r25 = dyn base4(<sym nm>);
    goto L10(r25);
  D13():
    deopt 47 [nm];
  L11():
    NCOL = ldf NCOL;
    check L73() else D21();
  L16():
    scale = ldf scale;
    check L81() else D27();
  L56():
    nm1 = force? nm;
    checkMissing(nm1);
    c7 = `==`(nm1, NULL);
    goto L10(c7);
  L57():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  D21():
    deopt 78 [];
  D27():
    deopt 93 [];
  L12(r29):
    r36 = `!`(r29);
    c9 = `as.logical`(r36);
    if c9 then L63() else L13();
  L58():
    _in_ = ldf `%in%`;
    check L60() else D14();
  L59():
    r28 = dyn base5(<lang `%in%`(nm, colnames(newdata))>);
    goto L12(r28);
  L73():
    p4 = prom<V +>{
      newdata9 = ld newdata;
      newdata10 = force? newdata9;
      checkMissing(newdata10);
      return newdata10;
    };
    r41 = dyn NCOL(p4);
    check L74() else D22();
  L81():
    p6 = prom<V +>{
      newdata11 = ld newdata;
      newdata12 = force? newdata11;
      checkMissing(newdata12);
      return newdata12;
    };
    p7 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c13 = `is.object`(object18);
      if c13 then L1() else L2(object18);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("$", object18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(object20):
      r48 = `$`(object20, <sym center>);
      goto L0(r48);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p8 = prom<V +>{
      object21 = ld object;
      object22 = force? object21;
      checkMissing(object22);
      c14 = `is.object`(object22);
      if c14 then L1() else L2(object22);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object24):
      r50 = `$`(object24, <sym scale>);
      goto L0(r50);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r52 = dyn scale(p6, p7, p8);
    check L82() else D28();
  D14():
    deopt 54 [];
  D22():
    deopt 80 [r41];
  D28():
    deopt 97 [r52];
  L13():
    goto L14();
  L14():
    newdata5 = ld newdata;
    check L67() else D19();
  L60():
    p1 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    p3 = prom<V +>{
      colnames = ldf colnames;
      p2 = prom<V +>{
        newdata3 = ld newdata;
        newdata4 = force? newdata3;
        checkMissing(newdata4);
        return newdata4;
      };
      r32 = dyn colnames(p2);
      return r32;
    };
    r34 = dyn _in_(p1, p3);
    check L61() else D15();
  L63():
    stop2 = ldf stop;
    check L64() else D17();
  L74():
    NROW = ldf NROW;
    check L75() else D23();
  L82():
    object25 = ld object;
    check L83() else D29();
  D15():
    deopt 57 [r34];
  D17():
    deopt 62 [];
  D19():
    deopt 67 [newdata5];
  D23():
    deopt 81 [r41];
  D29():
    deopt 98 [object25];
  L61():
    all = ldf all in base;
    r35 = dyn all(r34);
    check L62() else D16();
  L64():
    r37 = dyn stop2("'newdata' does not have named columns matching one or more of the original columns");
    check L65() else D18();
  L67():
    newdata6 = force? newdata5;
    checkMissing(newdata6);
    c10 = `is.object`(newdata6);
    if c10 then L68() else L69(newdata6);
  L75():
    p5 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c11 = `is.object`(object14);
      if c11 then L1() else L2(object14);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object16):
      r42 = `$`(object16, <sym rotation>);
      goto L0(r42);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r44 = dyn NROW(p5);
    check L76() else D24();
  L83():
    object26 = force? object25;
    checkMissing(object26);
    c15 = `is.object`(object26);
    if c15 then L85() else L86(object26);
  D16():
    deopt 59 [r35];
  D18():
    deopt 64 [r37];
  D24():
    deopt 83 [r41, r44];
  L15(dx7):
    st newdata = dx7;
    goto L16();
  L62():
    goto L12(r35);
  L65():
    goto L14();
  L68():
    dr6 = tryDispatchBuiltin.1("[", newdata6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L70() else L69(dr6);
  L69(newdata8):
    nm4 = ld nm;
    check L71() else D20();
  L76():
    r45 = `!=`(r41, r44);
    c12 = `as.logical`(r45);
    if c12 then L77() else L17();
  L84(dx16):
    ___ = ldf `%*%` in base;
    r54 = dyn ___(r52, dx16);
    check L88() else D30();
  L85():
    dr14 = tryDispatchBuiltin.1("$", object26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L87() else L86(dr14);
  L86(object28):
    r53 = `$`(object28, <sym rotation>);
    goto L84(r53);
  D20():
    deopt 70 [newdata8, nm4];
  D30():
    deopt 102 [r54];
  L17():
    goto L16();
  L70():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L71():
    nm5 = force? nm4;
    __ = ldf `[` in base;
    r39 = dyn __(newdata6, <missing>, nm5, FALSE);
    goto L15(r39);
  L77():
    stop3 = ldf stop;
    check L78() else D25();
  L87():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L84(dx15);
  L88():
    popenv;
    return r54;
  D25():
    deopt 86 [];
  L78():
    r46 = dyn stop3("'newdata' does not have the correct number of columns");
    check L79() else D26();
  D26():
    deopt 88 [r46];
  L79():
    goto L16();
  }
}