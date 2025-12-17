fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner350793923;
    st `predict.princomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner350793923(object, newdata, `...`) {
  (reg object:*, reg newdata:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg newdata1:*, reg newdata2:V, reg dim:cls, reg r10:V, reg length:cls, reg r11:V, reg r12:V, reg c2:L, reg stop:cls, reg r13:V, reg NCOL:cls, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p:p(V +), reg r17:V, reg rownames:cls, reg object9:*, reg object10:V, reg c4:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r18:V, reg p1:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg nm:*, reg nm1:V, reg c5:V, reg r23:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg _in_:cls, reg nm2:*, reg nm3:V, reg p2:p(V +), reg colnames:cls, reg newdata3:*, reg newdata4:V, reg p3:p(V +), reg r28:V, reg p4:p(V +), reg r30:V, reg all:cls, reg r31:V, reg r32:V, reg c7:L, reg stop1:cls, reg r33:V, reg newdata5:*, reg newdata6:V, reg c8:L, reg newdata8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nm4:*, reg nm5:V, reg __:cls, reg r35:V, reg NCOL1:cls, reg newdata9:*, reg newdata10:V, reg p5:p(V +), reg r37:V, reg p6:*, reg p7:V, reg r38:V, reg c9:L, reg stop2:cls, reg r39:V, reg scale:cls, reg newdata11:*, reg newdata12:V, reg p8:p(V +), reg object13:*, reg object14:V, reg c10:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r41:V, reg p9:p(V +), reg object17:*, reg object18:V, reg c11:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r43:V, reg p10:p(V +), reg r45:V, reg object21:*, reg object22:V, reg c12:L, reg object24:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r46:V, reg ___:cls, reg r47:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    c = `as.logical`(r1);
    if c then L17() else L1();
  L15():
    missing = ldf missing in base;
    r2 = dyn missing(<sym newdata>);
    goto L0(r2);
  L16():
    r = dyn base(<sym newdata>);
    goto L0(r);
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L17():
    object1 = ld object;
    check L18() else D0();
  D0():
    deopt 3 [object1];
  L3(r7):
    r12 = `!=`(r7, 2);
    c2 = `as.logical`(r12);
    if c2 then L32() else L5();
  L18():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L20() else L21(object2);
  L25():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L26():
    r6 = dyn base1(<lang dim(newdata)>);
    goto L3(r6);
  L4(r9):
    length = ldf length in base;
    r11 = dyn length(r9);
    check L31() else D3();
  L5():
    goto L6();
  L6():
    NCOL = ldf NCOL;
    check L36() else D6();
  L19(dx1):
    popenv;
    return dx1;
  L20():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(object4):
    r3 = `$`(object4, <sym scores>);
    goto L19(r3);
  L27():
    newdata1 = ld newdata;
    check L29() else D1();
  L28():
    r8 = dyn base2(<sym newdata>);
    goto L4(r8);
  L32():
    stop = ldf stop;
    check L33() else D4();
  D1():
    deopt 13 [newdata1];
  D3():
    deopt 18 [r11];
  D4():
    deopt 22 [];
  D6():
    deopt 28 [];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L29():
    newdata2 = force? newdata1;
    checkMissing(newdata2);
    dim = ldf dim in base;
    r10 = dyn dim(newdata2);
    check L30() else D2();
  L31():
    goto L3(r11);
  L33():
    r13 = dyn stop("'newdata' must be a matrix or data frame");
    check L34() else D5();
  L36():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c3 = `is.object`(object6);
      if c3 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r15 = `$`(object8, <sym loadings>);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn NCOL(p);
    check L37() else D7();
  D2():
    deopt 16 [r10];
  D5():
    deopt 24 [r13];
  D7():
    deopt 30 [r17];
  L30():
    goto L4(r10);
  L34():
    goto L6();
  L37():
    st p = r17;
    rownames = ldf rownames;
    check L38() else D8();
  D8():
    deopt 33 [];
  L38():
    p1 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c4 = `is.object`(object10);
      if c4 then L1() else L2(object10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object12):
      r18 = `$`(object12, <sym loadings>);
      goto L0(r18);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r20 = dyn rownames(p1);
    check L39() else D9();
  D9():
    deopt 35 [r20];
  L39():
    st nm = r20;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L7(r22):
    r23 = `!`(r22);
    c6 = `as.logical`(r23);
    if c6 then L43() else L8();
  L40():
    nm = ld nm;
    check L42() else D10();
  L41():
    r21 = dyn base3(<sym nm>);
    goto L7(r21);
  D10():
    deopt 38 [nm];
  L8():
    NCOL1 = ldf NCOL;
    check L59() else D18();
  L13():
    scale = ldf scale;
    check L66() else D23();
  L42():
    nm1 = force? nm;
    checkMissing(nm1);
    c5 = `==`(nm1, NULL);
    goto L7(c5);
  L43():
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D18():
    deopt 67 [];
  D23():
    deopt 80 [];
  L9(r25):
    r32 = `!`(r25);
    c7 = `as.logical`(r32);
    if c7 then L49() else L10();
  L44():
    _in_ = ldf `%in%`;
    check L46() else D11();
  L45():
    r24 = dyn base4(<lang `%in%`(nm, colnames(newdata))>);
    goto L9(r24);
  L59():
    p5 = prom<V +>{
      newdata9 = ld newdata;
      newdata10 = force? newdata9;
      checkMissing(newdata10);
      return newdata10;
    };
    r37 = dyn NCOL1(p5);
    check L60() else D19();
  L66():
    p8 = prom<V +>{
      newdata11 = ld newdata;
      newdata12 = force? newdata11;
      checkMissing(newdata12);
      return newdata12;
    };
    p9 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c10 = `is.object`(object14);
      if c10 then L1() else L2(object14);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object16):
      r41 = `$`(object16, <sym center>);
      goto L0(r41);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p10 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c11 = `is.object`(object18);
      if c11 then L1() else L2(object18);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("$", object18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(object20):
      r43 = `$`(object20, <sym scale>);
      goto L0(r43);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r45 = dyn scale(p8, p9, p10);
    check L67() else D24();
  D11():
    deopt 45 [];
  D19():
    deopt 69 [r37];
  D24():
    deopt 84 [r45];
  L10():
    goto L11();
  L11():
    newdata5 = ld newdata;
    check L53() else D16();
  L46():
    p2 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    p4 = prom<V +>{
      colnames = ldf colnames;
      p3 = prom<V +>{
        newdata3 = ld newdata;
        newdata4 = force? newdata3;
        checkMissing(newdata4);
        return newdata4;
      };
      r28 = dyn colnames(p3);
      return r28;
    };
    r30 = dyn _in_(p2, p4);
    check L47() else D12();
  L49():
    stop1 = ldf stop;
    check L50() else D14();
  L60():
    p6 = ld p;
    check L61() else D20();
  L67():
    object21 = ld object;
    check L68() else D25();
  D12():
    deopt 48 [r30];
  D14():
    deopt 53 [];
  D16():
    deopt 58 [newdata5];
  D20():
    deopt 69 [r37, p6];
  D25():
    deopt 85 [object21];
  L47():
    all = ldf all in base;
    r31 = dyn all(r30);
    check L48() else D13();
  L50():
    r33 = dyn stop1("'newdata' does not have named columns matching one or more of the original columns");
    check L51() else D15();
  L53():
    newdata6 = force? newdata5;
    checkMissing(newdata6);
    c8 = `is.object`(newdata6);
    if c8 then L54() else L55(newdata6);
  L61():
    p7 = force? p6;
    checkMissing(p7);
    r38 = `!=`(r37, p7);
    c9 = `as.logical`(r38);
    if c9 then L62() else L14();
  L68():
    object22 = force? object21;
    checkMissing(object22);
    c12 = `is.object`(object22);
    if c12 then L70() else L71(object22);
  D13():
    deopt 50 [r31];
  D15():
    deopt 55 [r33];
  L12(dx7):
    st newdata = dx7;
    goto L13();
  L14():
    goto L13();
  L48():
    goto L9(r31);
  L51():
    goto L11();
  L54():
    dr6 = tryDispatchBuiltin.1("[", newdata6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(newdata8):
    nm4 = ld nm;
    check L57() else D17();
  L62():
    stop2 = ldf stop;
    check L63() else D21();
  L69(dx14):
    ___ = ldf `%*%` in base;
    r47 = dyn ___(r45, dx14);
    check L73() else D26();
  L70():
    dr12 = tryDispatchBuiltin.1("$", object22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L72() else L71(dr12);
  L71(object24):
    r46 = `$`(object24, <sym loadings>);
    goto L69(r46);
  D17():
    deopt 61 [newdata8, nm4];
  D21():
    deopt 73 [];
  D26():
    deopt 89 [r47];
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L57():
    nm5 = force? nm4;
    __ = ldf `[` in base;
    r35 = dyn __(newdata6, <missing>, nm5);
    goto L12(r35);
  L63():
    r39 = dyn stop2("'newdata' does not have the correct number of columns");
    check L64() else D22();
  L72():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L69(dx13);
  L73():
    popenv;
    return r47;
  D22():
    deopt 75 [r39];
  L64():
    goto L13();
  }
}