fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3717324458;
    st tryCatch = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3717324458(expr, `...`, finally) {
  (reg expr:*, reg ddd:dots, reg finally:*) -+> V { var expr:*, var `...`:dots?, var finally:*, reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg on_exit:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg list:cls, reg ddd1:dots?, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg handlers:*, reg handlers1:V, reg names:cls, reg r15:V, reg parent_frame:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg classes:*, reg classes1:V, reg length:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg r24:V, reg handlers2:*, reg handlers3:V, reg length1:cls, reg r25:V, reg r26:V, reg c1:L, reg stop:cls, reg r27:V, reg tryCatchList:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg classes2:*, reg classes3:V, reg p1:p(V +), reg parentenv:*, reg parentenv1:V, reg p2:p(V +), reg handlers4:*, reg handlers5:V, reg p3:p(V +), reg r33:V |
    mkenv;
    st expr = expr;
    st `...` = ddd;
    st finally = finally;
    r = clos inner1643535149;
    st tryCatchList = r;
    r1 = clos inner2994278331;
    st tryCatchOne = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L12() else L1();
  L10():
    missing = ldf missing in base;
    r4 = dyn missing(<sym finally>);
    goto L0(r4);
  L11():
    r2 = dyn base(<sym finally>);
    goto L0(r2);
  L1():
    goto L3();
  L3():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L12():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r7):
    goto L3();
  L4(r11):
    st handlers = r11;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L13():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<sym finally>);
    goto L2(r8);
  L14():
    r6 = dyn base1(<sym finally>);
    goto L2(r6);
  L16():
    list = ldf list;
    check L18() else D0();
  L17():
    r10 = dyn base2(<sym ...>);
    goto L4(r10);
  D0():
    deopt 17 [];
  L5(r14):
    st classes = r14;
    parent_frame = ldf `parent.frame`;
    check L24() else D4();
  L18():
    ddd1 = ld `...`;
    r12 = dyn list[`...`](ddd1);
    check L19() else D1();
  L20():
    handlers = ld handlers;
    check L22() else D2();
  L21():
    r13 = dyn base3(<sym handlers>);
    goto L5(r13);
  D1():
    deopt 19 [r12];
  D2():
    deopt 23 [handlers];
  D4():
    deopt 29 [];
  L19():
    goto L4(r12);
  L22():
    handlers1 = force? handlers;
    checkMissing(handlers1);
    names = ldf names in base;
    r15 = dyn names(handlers1);
    check L23() else D3();
  L24():
    r16 = dyn parent_frame();
    check L25() else D5();
  D3():
    deopt 26 [r15];
  D5():
    deopt 30 [r16];
  L23():
    goto L5(r15);
  L25():
    st parentenv = r16;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L6(r18):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L26():
    classes = ld classes;
    check L28() else D6();
  L27():
    r17 = dyn base4(<sym classes>);
    goto L6(r17);
  D6():
    deopt 34 [classes];
  L7(r23, r24):
    r26 = `!=`(r23, r24);
    c1 = `as.logical`(r26);
    if c1 then L34() else L8();
  L28():
    classes1 = force? classes;
    checkMissing(classes1);
    length = ldf length in base;
    r19 = dyn length(classes1);
    check L29() else D7();
  L30():
    handlers2 = ld handlers;
    check L32() else D8();
  L31():
    r22 = dyn base5(<sym handlers>);
    goto L7(r18, r22);
  D7():
    deopt 37 [r19];
  D8():
    deopt 39 [r18, handlers2];
  L8():
    goto L9();
  L9():
    tryCatchList = ldf tryCatchList;
    check L38() else D12();
  L29():
    goto L6(r19);
  L32():
    handlers3 = force? handlers2;
    checkMissing(handlers3);
    length1 = ldf length in base;
    r25 = dyn length1(handlers3);
    check L33() else D9();
  L34():
    stop = ldf stop;
    check L35() else D10();
  D9():
    deopt 42 [r18, r25];
  D10():
    deopt 45 [];
  D12():
    deopt 51 [];
  L33():
    goto L7(r18, r25);
  L35():
    r27 = dyn stop("condition handlers must be specified with a condition class");
    check L36() else D11();
  L38():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      classes2 = ld classes;
      classes3 = force? classes2;
      checkMissing(classes3);
      return classes3;
    };
    p2 = prom<V +>{
      parentenv = ld parentenv;
      parentenv1 = force? parentenv;
      checkMissing(parentenv1);
      return parentenv1;
    };
    p3 = prom<V +>{
      handlers4 = ld handlers;
      handlers5 = force? handlers4;
      checkMissing(handlers5);
      return handlers5;
    };
    r33 = dyn tryCatchList(p, p1, p2, p3);
    check L39() else D13();
  D11():
    deopt 47 [r27];
  D13():
    deopt 56 [r33];
  L36():
    goto L9();
  L39():
    popenv;
    return r33;
  }
}
fun inner1643535149(expr, names, parentenv, handlers) {
  (reg expr:*, reg names:*, reg parentenv:*, reg handlers:*) -+> V { var expr:*, var names:*, var parentenv:*, var handlers:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg names1:*, reg names2:V, reg length:cls, reg r2:V, reg nh:*, reg nh1:V, reg r3:V, reg c:L, reg tryCatchOne:cls, reg tryCatchList:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg names3:*, reg names4:V, reg c1:L, reg names6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nh2:*, reg nh3:V, reg r5:V, reg __:cls, reg r6:V, reg p1:p(V +), reg parentenv1:*, reg parentenv2:V, reg p2:p(V +), reg handlers1:*, reg handlers2:V, reg c2:L, reg handlers4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nh4:*, reg nh5:V, reg r9:V, reg __1:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg names7:*, reg names8:V, reg c3:L, reg names10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nh6:*, reg nh7:V, reg __2:cls, reg r14:V, reg p5:p(V +), reg parentenv3:*, reg parentenv4:V, reg p6:p(V +), reg handlers5:*, reg handlers6:V, reg c4:L, reg handlers8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nh8:*, reg nh9:V, reg __3:cls, reg r17:V, reg p7:p(V +), reg r19:V, reg nh10:*, reg nh11:V, reg r20:V, reg c5:L, reg tryCatchOne1:cls, reg expr3:*, reg expr4:V, reg p8:p(V +), reg names11:*, reg names12:V, reg p9:p(V +), reg parentenv5:*, reg parentenv6:V, reg p10:p(V +), reg handlers9:*, reg handlers10:V, reg c6:L, reg handlers12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r24:V, reg p11:p(V +), reg r26:V, reg expr5:*, reg expr6:V |
    mkenv;
    st expr = expr;
    st names = names;
    st parentenv = parentenv;
    st handlers = handlers;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st nh = r1;
    nh = ld nh;
    check L7() else D2();
  L3():
    names1 = ld names;
    check L5() else D0();
  L4():
    r = dyn base(<sym names>);
    goto L0(r);
  D0():
    deopt 2 [names1];
  D2():
    deopt 7 [nh];
  L5():
    names2 = force? names1;
    checkMissing(names2);
    length = ldf length in base;
    r2 = dyn length(names2);
    check L6() else D1();
  L7():
    nh1 = force? nh;
    checkMissing(nh1);
    r3 = `>`(nh1, 1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  D1():
    deopt 5 [r2];
  L1():
    nh10 = ld nh;
    check L12() else D5();
  L6():
    goto L0(r2);
  L8():
    tryCatchOne = ldf tryCatchOne;
    check L9() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 18 [nh10];
  L9():
    p4 = prom<V +>{
      tryCatchList = ldf tryCatchList;
      p = prom<V +>{
        expr1 = ld expr;
        expr2 = force? expr1;
        checkMissing(expr2);
        return expr2;
      };
      p1 = prom<V +>{
        names3 = ld names;
        names4 = force? names3;
        checkMissing(names4);
        c1 = `is.object`(names4);
        if c1 then L1() else L2(names4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", names4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(names6):
        nh2 = ld nh;
        nh3 = force? nh2;
        checkMissing(nh3);
        r5 = `-`(<missing>, nh3);
        __ = ldf `[` in base;
        r6 = dyn __(names6, r5);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        parentenv1 = ld parentenv;
        parentenv2 = force? parentenv1;
        checkMissing(parentenv2);
        return parentenv2;
      };
      p3 = prom<V +>{
        handlers1 = ld handlers;
        handlers2 = force? handlers1;
        checkMissing(handlers2);
        c2 = `is.object`(handlers2);
        if c2 then L1() else L2(handlers2);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", handlers2);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(handlers4):
        nh4 = ld nh;
        nh5 = force? nh4;
        checkMissing(nh5);
        r9 = `-`(<missing>, nh5);
        __1 = ldf `[` in base;
        r10 = dyn __1(handlers4, r9);
        goto L0(r10);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r12 = dyn tryCatchList(p, p1, p2, p3);
      return r12;
    };
    p5 = prom<V +>{
      names7 = ld names;
      names8 = force? names7;
      checkMissing(names8);
      c3 = `is.object`(names8);
      if c3 then L1() else L2(names8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", names8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(names10):
      nh6 = ld nh;
      nh7 = force? nh6;
      __2 = ldf `[` in base;
      r14 = dyn __2(names10, nh7);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      parentenv3 = ld parentenv;
      parentenv4 = force? parentenv3;
      checkMissing(parentenv4);
      return parentenv4;
    };
    p7 = prom<V +>{
      handlers5 = ld handlers;
      handlers6 = force? handlers5;
      checkMissing(handlers6);
      c4 = `is.object`(handlers6);
      if c4 then L1() else L2(handlers6);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", handlers6);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(handlers8):
      nh8 = ld nh;
      nh9 = force? nh8;
      __3 = ldf `[[` in base;
      r17 = dyn __3(handlers8, nh9);
      goto L0(r17);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r19 = dyn tryCatchOne(p4, p5, p6, p7);
    check L10() else D4();
  L12():
    nh11 = force? nh10;
    checkMissing(nh11);
    r20 = `==`(nh11, 1);
    c5 = `as.logical`(r20);
    if c5 then L13() else L2();
  D4():
    deopt 17 [r19];
  L2():
    expr5 = ld expr;
    check L17() else D8();
  L10():
    popenv;
    return r19;
  L13():
    tryCatchOne1 = ldf tryCatchOne;
    check L14() else D6();
  D6():
    deopt 23 [];
  D8():
    deopt 29 [expr5];
  L14():
    p8 = prom<V +>{
      expr3 = ld expr;
      expr4 = force? expr3;
      checkMissing(expr4);
      return expr4;
    };
    p9 = prom<V +>{
      names11 = ld names;
      names12 = force? names11;
      checkMissing(names12);
      return names12;
    };
    p10 = prom<V +>{
      parentenv5 = ld parentenv;
      parentenv6 = force? parentenv5;
      checkMissing(parentenv6);
      return parentenv6;
    };
    p11 = prom<V +>{
      handlers9 = ld handlers;
      handlers10 = force? handlers9;
      checkMissing(handlers10);
      c6 = `is.object`(handlers10);
      if c6 then L1() else L2(handlers10);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", handlers10);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(handlers12):
      __4 = ldf `[[` in base;
      r24 = dyn __4(handlers12, 1);
      goto L0(r24);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r26 = dyn tryCatchOne1(p8, p9, p10, p11);
    check L15() else D7();
  L17():
    expr6 = force? expr5;
    checkMissing(expr6);
    popenv;
    return expr6;
  D7():
    deopt 28 [r26];
  L15():
    popenv;
    return r26;
  }
}
fun inner2994278331(expr, name, parentenv, handler) {
  (reg expr:*, reg name:*, reg parentenv:*, reg handler:*) -+> V { var expr:*, var name:*, var parentenv:*, var handler:*, reg r:cls, reg doTryCatch:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg name1:*, reg name2:V, reg p1:p(V +), reg parentenv1:*, reg parentenv2:V, reg p2:p(V +), reg handler1:*, reg handler2:V, reg p3:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg value:*, reg value1:V, reg c:L, reg value3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg geterrmessage:cls, reg r10:V, reg value4:*, reg value5:V, reg c3:L, reg value7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg simpleError:cls, reg msg:*, reg msg1:V, reg p4:p(V +), reg call:*, reg call1:V, reg p5:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg value8:*, reg value9:V, reg c4:L, reg value11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r18:V, reg c5:L, reg c6:L, reg value12:*, reg value13:V, reg c7:L, reg value15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r19:V, reg value16:*, reg value17:V, reg c8:L, reg value19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r20:V, reg simpleError1:cls, reg msg2:*, reg msg3:V, reg p6:p(V +), reg call2:*, reg call3:V, reg p7:p(V +), reg r23:V, reg value20:*, reg value21:V, reg c9:L, reg value23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r24:V, reg value24:*, reg value25:V, reg c10:L, reg value27:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r25:V, reg dx14:cls, reg cond:*, reg cond1:V, reg p8:p(V +), reg r27:V |
    mkenv;
    st expr = expr;
    st name = name;
    st parentenv = parentenv;
    st handler = handler;
    r = clos inner2994278331;
    st doTryCatch = r;
    doTryCatch = ldf doTryCatch;
    check L13() else D0();
  D0():
    deopt 4 [];
  L13():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p2 = prom<V +>{
      parentenv1 = ld parentenv;
      parentenv2 = force? parentenv1;
      checkMissing(parentenv2);
      return parentenv2;
    };
    p3 = prom<V +>{
      handler1 = ld handler;
      handler2 = force? handler1;
      checkMissing(handler2);
      return handler2;
    };
    r4 = dyn doTryCatch(p, p1, p2, p3);
    check L14() else D1();
  D1():
    deopt 9 [r4];
  L14():
    st value = r4;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r6):
    c2 = `as.logical`(r6);
    if c2 then L21() else L2();
  L15():
    value = ld value;
    check L17() else D2();
  L16():
    r5 = dyn base(<lang `[[`(value, 1)>);
    goto L0(r5);
  D2():
    deopt 12 [value];
  L2():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L5():
    value24 = ld value;
    check L54() else D13();
  L17():
    value1 = force? value;
    checkMissing(value1);
    c = `is.object`(value1);
    if c then L18() else L19(value1);
  L21():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D13():
    deopt 66 [value24];
  L1(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L3(r9):
    st msg = r9;
    value4 = ld value;
    check L25() else D4();
  L6(r17):
    c6 = `as.logical`(r17);
    if c6 then L38() else L8();
  L18():
    dr = tryDispatchBuiltin.1("[[", value1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(value3):
    __ = ldf `[[` in base;
    r7 = dyn __(value3, 1);
    goto L1(r7);
  L22():
    geterrmessage = ldf geterrmessage in base;
    r10 = dyn geterrmessage();
    check L24() else D3();
  L23():
    r8 = dyn base1(<lang geterrmessage()>);
    goto L3(r8);
  L32():
    value8 = ld value;
    check L34() else D7();
  L33():
    r16 = dyn base2(<lang `[[`(value, 1)>);
    goto L6(r16);
  L54():
    value25 = force? value24;
    checkMissing(value25);
    c10 = `is.object`(value25);
    if c10 then L55() else L56(value25);
  D3():
    deopt 21 [r10];
  D4():
    deopt 23 [value4];
  D7():
    deopt 36 [value8];
  L8():
    value20 = ld value;
    check L50() else D12();
  L12(dx13):
    checkFun.0(dx13);
    dx14 = dx13 as cls;
    p8 = prom<V +>{
      cond = ld cond;
      cond1 = force? cond;
      checkMissing(cond1);
      return cond1;
    };
    r27 = dyn dx14(p8);
    check L58() else D14();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L24():
    goto L3(r10);
  L25():
    value5 = force? value4;
    checkMissing(value5);
    c3 = `is.object`(value5);
    if c3 then L26() else L27(value5);
  L34():
    value9 = force? value8;
    checkMissing(value9);
    c4 = `is.object`(value9);
    if c4 then L35() else L36(value9);
  L38():
    value12 = ld value;
    check L39() else D8();
  L55():
    dr12 = tryDispatchBuiltin.1("[[", value25);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L57() else L56(dr12);
  L56(value27):
    __6 = ldf `[[` in base;
    r25 = dyn __6(value27, 3);
    goto L12(r25);
  D8():
    deopt 42 [value12];
  D12():
    deopt 60 [value20];
  D14():
    deopt 73 [r27];
  L4(dx3):
    st call = dx3;
    simpleError = ldf simpleError;
    check L29() else D5();
  L7(dx5):
    c5 = `is.character`(dx5);
    goto L6(c5);
  L26():
    dr2 = tryDispatchBuiltin.1("[[", value5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(value7):
    __1 = ldf `[[` in base;
    r11 = dyn __1(value7, 2);
    goto L4(r11);
  L35():
    dr4 = tryDispatchBuiltin.1("[[", value9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(dr4);
  L36(value11):
    __2 = ldf `[[` in base;
    r18 = dyn __2(value11, 1);
    goto L7(r18);
  L39():
    value13 = force? value12;
    checkMissing(value13);
    c7 = `is.object`(value13);
    if c7 then L40() else L41(value13);
  L50():
    value21 = force? value20;
    checkMissing(value21);
    c9 = `is.object`(value21);
    if c9 then L51() else L52(value21);
  L57():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L12(dx12);
  L58():
    popenv;
    return r27;
  D5():
    deopt 30 [];
  L9(dx7):
    st msg = dx7;
    value16 = ld value;
    check L43() else D9();
  L11(dx11):
    st cond = dx11;
    goto L5();
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L29():
    p4 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p5 = prom<V +>{
      call = ld call;
      call1 = force? call;
      checkMissing(call1);
      return call1;
    };
    r14 = dyn simpleError(p4, p5);
    check L30() else D6();
  L37():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L40():
    dr6 = tryDispatchBuiltin.1("[[", value13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41(dr6);
  L41(value15):
    __3 = ldf `[[` in base;
    r19 = dyn __3(value15, 1);
    goto L9(r19);
  L51():
    dr10 = tryDispatchBuiltin.1("[[", value21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L53() else L52(dr10);
  L52(value23):
    __5 = ldf `[[` in base;
    r24 = dyn __5(value23, 1);
    goto L11(r24);
  D6():
    deopt 33 [r14];
  D9():
    deopt 48 [value16];
  L30():
    st cond = r14;
    goto L5();
  L42():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L43():
    value17 = force? value16;
    checkMissing(value17);
    c8 = `is.object`(value17);
    if c8 then L44() else L45(value17);
  L53():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L10(dx9):
    st call = dx9;
    simpleError1 = ldf simpleError;
    check L47() else D10();
  L44():
    dr8 = tryDispatchBuiltin.1("[[", value17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45(dr8);
  L45(value19):
    __4 = ldf `[[` in base;
    r20 = dyn __4(value19, 2);
    goto L10(r20);
  D10():
    deopt 55 [];
  L46():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L47():
    p6 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    p7 = prom<V +>{
      call2 = ld call;
      call3 = force? call2;
      checkMissing(call3);
      return call3;
    };
    r23 = dyn simpleError1(p6, p7);
    check L48() else D11();
  D11():
    deopt 58 [r23];
  L48():
    st cond = r23;
    goto L5();
  }
}