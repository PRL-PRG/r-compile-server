fun main() {
  () -+> V { reg r:cls, reg taskCallbackManager:cls, reg r1:V, reg h:*, reg h1:V, reg c:L, reg h3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg dx2:cls, reg r3:cls, reg p:p(V +), reg r5:V, reg getTaskCallbackNames:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg h4:*, reg h5:V, reg c1:L, reg h7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r9:V, reg dx5:cls, reg r10:V, reg names:cls, reg r11:V, reg removeTaskCallback:cls, reg r12:V |
    mkenv;
    r = clos `inner-1092385338`;
    st taskCallbackManager = r;
    taskCallbackManager = ldf taskCallbackManager;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn taskCallbackManager();
    check L2() else D1();
  D1():
    deopt 5 [r1];
  L2():
    st h = r1;
    h = ld h;
    check L3() else D2();
  D2():
    deopt 7 [h];
  L3():
    h1 = force? h;
    checkMissing(h1);
    c = `is.object`(h1);
    if c then L5() else L6(h1);
  L4(dx1):
    checkFun.0(dx1);
    dx2 = dx1 as cls;
    p = prom<V +>{
      r3 = clos `inner-1210436377`;
      return r3;
    };
    r5 = dyn dx2[, name](p, "simpleHandler");
    check L8() else D3();
  L5():
    dr = tryDispatchBuiltin.1("$", h1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(h3):
    r2 = `$`(h3, <sym add>);
    goto L4(r2);
  D3():
    deopt 14 [r5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    getTaskCallbackNames = ldf getTaskCallbackNames;
    check L9() else D4();
  D4():
    deopt 16 [];
  L9():
    r6 = dyn getTaskCallbackNames();
    check L10() else D5();
  D5():
    deopt 17 [r6];
  L10():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0():
    removeTaskCallback = ldf removeTaskCallback;
    check L20() else D9();
  L11():
    h4 = ld h;
    check L13() else D6();
  L12():
    r7 = dyn base(<lang `$`(h, callbacks)()>);
    goto L0();
  D6():
    deopt 20 [h4];
  D9():
    deopt 28 [];
  L13():
    h5 = force? h4;
    checkMissing(h5);
    c1 = `is.object`(h5);
    if c1 then L15() else L16(h5);
  L20():
    r12 = dyn removeTaskCallback("R-taskCallbackManager");
    check L21() else D10();
  D10():
    deopt 30 [r12];
  L14(dx4):
    checkFun.0(dx4);
    dx5 = dx4 as cls;
    r10 = dyn dx5();
    check L18() else D7();
  L15():
    dr2 = tryDispatchBuiltin.1("$", h5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(h7):
    r9 = `$`(h7, <sym callbacks>);
    goto L14(r9);
  L21():
    popenv;
    return r12;
  D7():
    deopt 24 [r10];
  L17():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx3);
  L18():
    names = ldf names in base;
    r11 = dyn names(r10);
    check L19() else D8();
  D8():
    deopt 26 [r11];
  L19():
    goto L0();
  }
}
fun `inner-1092385338`(handlers, registered, verbose) {
  (reg handlers:*, reg registered:*, reg verbose:*) -+> V { var handlers:*, reg handlers_isMissing:L, reg handlers_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var registered:*, reg registered_isMissing:L, reg registered_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg verbose1:*, reg verbose2:V, reg r4:cls, reg r5:cls, reg r6:cls, reg r7:cls, reg r8:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg add:*, reg add1:V, reg evaluate:*, reg evaluate1:V, reg remove:*, reg remove1:V, reg register:*, reg register1:V, reg suspend:*, reg suspend1:V, reg r11:cls, reg list1:cls, reg r12:V |
    mkenv;
    handlers_isMissing = missing.0(handlers);
    if handlers_isMissing then L0() else L1(handlers);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(handlers_orDefault):
    st handlers = handlers_orDefault;
    registered_isMissing = missing.0(registered);
    if registered_isMissing then L2(FALSE) else L2(registered);
  L2(registered_orDefault):
    st registered = registered_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3(FALSE) else L3(verbose);
  L3(verbose_orDefault):
    st verbose = verbose_orDefault;
    st suspended = FALSE;
    verbose1 = ld verbose;
    check L5() else D0();
  D0():
    deopt 3 [verbose1];
  L5():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    st `.verbose` = verbose2;
    r4 = clos `inner-1767135632`;
    st add = r4;
    r5 = clos inner1033644250;
    st remove = r5;
    r6 = clos `inner-1210436377`;
    st evaluate = r6;
    r7 = clos `inner-506908202`;
    st suspend = r7;
    r8 = clos `inner-1620076946`;
    st register = r8;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L4(r10):
    popenv;
    return r10;
  L6():
    add = ld add;
    check L8() else D1();
  L7():
    r9 = dyn base1[add, evaluate, remove, register, suspend, callbacks](<sym add>, <sym evaluate>, <sym remove>, <sym register>, <sym suspend>, <lang function(NULL, handlers, NULL)>);
    goto L4(r9);
  D1():
    deopt 23 [add];
  L8():
    add1 = force? add;
    checkMissing(add1);
    evaluate = ld evaluate;
    check L9() else D2();
  D2():
    deopt 26 [evaluate];
  L9():
    evaluate1 = force? evaluate;
    checkMissing(evaluate1);
    remove = ld remove;
    check L10() else D3();
  D3():
    deopt 29 [remove];
  L10():
    remove1 = force? remove;
    checkMissing(remove1);
    register = ld register;
    check L11() else D4();
  D4():
    deopt 32 [register];
  L11():
    register1 = force? register;
    checkMissing(register1);
    suspend = ld suspend;
    check L12() else D5();
  D5():
    deopt 35 [suspend];
  L12():
    suspend1 = force? suspend;
    checkMissing(suspend1);
    r11 = clos inner560854305;
    list1 = ldf list in base;
    r12 = dyn list1(add1, evaluate1, remove1, register1, suspend1, r11);
    check L13() else D6();
  D6():
    deopt 42 [r12];
  L13():
    goto L4(r12);
  }
}
fun `inner-1767135632`(f, data, name, register) {
  (reg f:*, reg data:*, reg name:*, reg register:*) -+> V { var f:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var register:*, reg register_isMissing:L, reg register_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg handlers:*, reg handlers1:V, reg length:cls, reg r6:V, reg r7:V, reg as_character:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg f1:*, reg f2:V, reg list:cls, reg r12:V, reg l:*, reg c2:L, reg r14:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name3:*, reg name4:V, reg ____:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg missing:cls, reg r20:V, reg r21:V, reg c3:L, reg data1:*, reg data2:V, reg l3:*, reg c4:L, reg data5:V, reg l6:*, reg data6:V, reg l7:*, reg dr2:V, reg dc1:L, reg dx2:V, reg data9:V, reg l9:*, reg data10:V, reg dx3:V, reg name5:*, reg name6:V, reg __:cls, reg r22:V, reg c5:L, reg data12:V, reg l11:*, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg data14:V, reg l13:*, reg dx7:V, reg ____1:cls, reg r23:V, reg c6:L, reg data16:V, reg l15:*, reg dr6:V, reg dc3:L, reg dx8:V, reg data18:V, reg dx9:V, reg name7:*, reg name8:V, reg ____2:cls, reg r24:V, reg registered:*, reg registered1:V, reg r25:V, reg c7:L, reg c9:V, reg register1:*, reg register2:V, reg c10:L, reg c11:V, reg c13:L, reg register3:cls, reg r26:V, reg name9:*, reg name10:V |
    mkenv;
    st f = f;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1(NULL) else L1(name);
  L1(name_orDefault):
    st name = name_orDefault;
    register_isMissing = missing.0(register);
    if register_isMissing then L2(TRUE) else L2(register);
  L2(register_orDefault):
    st register = register_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L22() else L4();
  L19():
    name1 = ld name;
    check L21() else D0();
  L20():
    r = dyn base(<sym name>);
    goto L3(r);
  D0():
    deopt 1 [name1];
  L4():
    goto L7();
  L7():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L21():
    name2 = force? name1;
    checkMissing(name2);
    c = `==`(name2, NULL);
    goto L3(c);
  L22():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L5(r3):
    st name = r3;
    goto L7();
  L8(r11):
    l = sld handlers;
    c2 = `is.object`(l);
    if c2 then L35() else L36(r11, l);
  L23():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L24():
    r2 = dyn base1(<lang `+`(length(handlers), 1)>);
    goto L5(r2);
  L31():
    f1 = ld f;
    check L33() else D4();
  L32():
    r10 = dyn base3[f](<sym f>);
    goto L8(r10);
  D4():
    deopt 21 [f1];
  L6(r5):
    r7 = `+`(r5, 1);
    as_character = ldf `as.character` in base;
    r8 = dyn as_character(r7);
    check L29() else D3();
  L9(dx1):
    sst handlers = dx1;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L25():
    handlers = ld handlers;
    check L27() else D1();
  L26():
    r4 = dyn base2(<sym handlers>);
    goto L6(r4);
  L33():
    f2 = force? f1;
    checkMissing(f2);
    list = ldf list in base;
    r12 = dyn list(f2);
    check L34() else D5();
  L35():
    dr = tryDispatchBuiltin.0("[[<-", l, r11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(r11, dr);
  L36(r14, l2):
    name3 = ld name;
    check L38() else D6();
  D1():
    deopt 8 [handlers];
  D3():
    deopt 15 [r8];
  D5():
    deopt 25 [r12];
  D6():
    deopt 27 [r14, l2, r11, name3];
  L10(r19):
    r21 = `!`(r19);
    c3 = `as.logical`(r21);
    if c3 then L41() else L11();
  L27():
    handlers1 = force? handlers;
    checkMissing(handlers1);
    length = ldf length in base;
    r6 = dyn length(handlers1);
    check L28() else D2();
  L29():
    goto L5(r8);
  L34():
    goto L8(r12);
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L38():
    name4 = force? name3;
    ____ = ldf `[[<-` in base;
    r17 = dyn ____(l2, r11, name4);
    goto L9(r17);
  L39():
    missing = ldf missing in base;
    r20 = dyn missing(<sym data>);
    goto L10(r20);
  L40():
    r18 = dyn base4(<sym data>);
    goto L10(r18);
  D2():
    deopt 11 [r6];
  L11():
    goto L15();
  L15():
    registered = ld registered;
    check L55() else D10();
  L28():
    goto L6(r6);
  L41():
    data1 = ld data;
    check L42() else D7();
  D7():
    deopt 35 [data1];
  D10():
    deopt 52 [registered];
  L42():
    data2 = force? data1;
    checkMissing(data2);
    l3 = sld handlers;
    c4 = `is.object`(l3);
    if c4 then L43() else L44(data2, l3, data2, l3);
  L55():
    registered1 = force? registered;
    checkMissing(registered1);
    r25 = `!`(registered1);
    c7 = `as.logical`(r25);
    if c7 then L56() else L16(c7);
  L12(data9, l9, data10, dx3):
    c5 = `is.object`(dx3);
    if c5 then L47() else L48(data9, l9, dx3);
  L16(c9):
    c13 = `as.logical`(c9);
    if c13 then L59() else L17();
  L43():
    dr2 = tryDispatchBuiltin.1("[[", l3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(data2, l3, data2, dr2);
  L44(data5, l6, data6, l7):
    name5 = ld name;
    check L46() else D8();
  L56():
    register1 = ld register;
    check L57() else D11();
  D8():
    deopt 39 [data5, l6, data6, l7, name5];
  D11():
    deopt 55 [c7, register1];
  L13(data14, l13, dx7):
    c6 = `is.object`(l13);
    if c6 then L50() else L51(data14, l13);
  L17():
    goto L18();
  L18():
    name9 = ld name;
    check L63() else D14();
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(data2, l3, data2, dx2);
  L46():
    name6 = force? name5;
    __ = ldf `[[` in base;
    r22 = dyn __(l7, name6);
    goto L12(data5, l6, data6, r22);
  L47():
    dr4 = tryDispatchBuiltin.0("[[<-", dx3, data10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(data9, l9, dr4);
  L48(data12, l11, dx5):
    ____1 = ldf `[[<-` in base;
    r23 = dyn ____1(dx5, data10, "data");
    goto L13(data12, l11, r23);
  L57():
    register2 = force? register1;
    checkMissing(register2);
    c10 = `as.logical`(register2);
    c11 = `&&`(c7, c10);
    goto L16(c11);
  L59():
    register3 = ldf register;
    check L60() else D12();
  D12():
    deopt 59 [];
  D14():
    deopt 63 [name9];
  L14(data18, dx9):
    sst handlers = dx9;
    goto L15();
  L49():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L13(data9, l9, dx6);
  L50():
    dr6 = tryDispatchBuiltin.0("[[<-", l13, dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L52() else L51(data14, dr6);
  L51(data16, l15):
    name7 = ld name;
    check L53() else D9();
  L60():
    r26 = dyn register3();
    check L61() else D13();
  L63():
    name10 = force? name9;
    checkMissing(name10);
    popenv;
    return name10;
  D9():
    deopt 46 [data16, l15, dx7, name7];
  D13():
    deopt 60 [r26];
  L52():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L14(data14, dx8);
  L53():
    name8 = force? name7;
    ____2 = ldf `[[<-` in base;
    r24 = dyn ____2(l15, dx7, name8);
    goto L14(data16, r24);
  L61():
    goto L18();
  }
}
fun inner1033644250(which) {
  (reg which:*) -+> V { var which:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg which1:*, reg which2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg which3:*, reg which4:V, reg c1:L, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg which5:*, reg which6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg handlers:*, reg handlers1:V, reg names:cls, reg r12:V, reg match:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg tmp:*, reg tmp1:V, reg is_na:cls, reg r16:V, reg c3:L, reg stop1:cls, reg gettextf:cls, reg which7:*, reg which8:V, reg p:p(V +), reg r18:V, reg p1:p(V +), reg r20:V, reg tmp2:*, reg tmp3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg which9:*, reg which10:V, reg is_numeric:cls, reg r24:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg which11:*, reg which12:V, reg as_integer:cls, reg r27:V, reg which13:*, reg which14:V, reg r28:V, reg c5:L, reg c6:V, reg which15:*, reg which16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg c10:L, reg which19:V, reg r30:V, reg handlers2:*, reg handlers3:V, reg length1:cls, reg r31:V, reg r32:V, reg c11:L, reg c12:V, reg c14:L, reg stop2:cls, reg r33:V, reg r34:V, reg stop3:cls, reg r35:V, reg handlers4:*, reg handlers5:V, reg c15:L, reg handlers7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg which20:*, reg which21:V, reg r36:V, reg __:cls, reg r37:V |
    mkenv;
    st which = which;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    r3 = `!=`(r1, 1);
    c = `as.logical`(r3);
    if c then L23() else L1();
  L19():
    which1 = ld which;
    check L21() else D0();
  L20():
    r = dyn base(<sym which>);
    goto L0(r);
  D0():
    deopt 2 [which1];
  L1():
    goto L2();
  L2():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L21():
    which2 = force? which1;
    checkMissing(which2);
    length = ldf length in base;
    r2 = dyn length(which2);
    check L22() else D1();
  L23():
    stop = ldf stop;
    check L24() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L30() else L4();
  L22():
    goto L0(r2);
  L24():
    r4 = dyn stop("'which' must be of length 1");
    check L25() else D3();
  L27():
    which3 = ld which;
    check L29() else D4();
  L28():
    r6 = dyn base1(<sym which>);
    goto L3(r6);
  D3():
    deopt 11 [r4];
  D4():
    deopt 15 [which3];
  L4():
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L10():
    handlers4 = ld handlers;
    check L73() else D26();
  L25():
    goto L2();
  L29():
    which4 = force? which3;
    checkMissing(which4);
    c1 = `is.character`(which4);
    goto L3(c1);
  L30():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D26():
    deopt 86 [handlers4];
  L5(r9):
    st tmp = r9;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L11(r23):
    c4 = `as.logical`(r23);
    if c4 then L53() else L12();
  L31():
    which5 = ld which;
    check L33() else D5();
  L32():
    r8 = dyn base2(<sym which>, <lang names(handlers)>);
    goto L5(r8);
  L49():
    which9 = ld which;
    check L51() else D14();
  L50():
    r22 = dyn base5(<sym which>);
    goto L11(r22);
  L73():
    handlers5 = force? handlers4;
    checkMissing(handlers5);
    c15 = `is.object`(handlers5);
    if c15 then L74() else L75(handlers5);
  D5():
    deopt 20 [which5];
  D14():
    deopt 52 [which9];
  L7(r15):
    c3 = `as.logical`(r15);
    if c3 then L43() else L8();
  L12():
    stop3 = ldf stop;
    check L71() else D24();
  L18(dx1):
    sst handlers = dx1;
    popenv;
    return TRUE;
  L33():
    which6 = force? which5;
    checkMissing(which6);
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L39():
    tmp = ld tmp;
    check L41() else D9();
  L40():
    r14 = dyn base4(<sym tmp>);
    goto L7(r14);
  L51():
    which10 = force? which9;
    checkMissing(which10);
    is_numeric = ldf `is.numeric` in base;
    r24 = dyn is_numeric(which10);
    check L52() else D15();
  L53():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L74():
    dr = tryDispatchBuiltin.1("[", handlers5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L76() else L75(dr);
  L75(handlers7):
    which20 = ld which;
    check L77() else D27();
  D9():
    deopt 35 [tmp];
  D15():
    deopt 55 [r24];
  D24():
    deopt 83 [];
  D27():
    deopt 88 [handlers7, which20];
  L6(r11):
    match = ldf match in base;
    r13 = dyn match(which6, r11, NA_INT, NULL);
    check L38() else D8();
  L8():
    goto L9();
  L9():
    tmp2 = ld tmp;
    check L47() else D13();
  L13(r26):
    st which = r26;
    which13 = ld which;
    check L58() else D18();
  L34():
    handlers = ld handlers;
    check L36() else D6();
  L35():
    r10 = dyn base3(<sym handlers>);
    goto L6(r10);
  L41():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(tmp1);
    check L42() else D10();
  L43():
    stop1 = ldf stop;
    check L44() else D11();
  L52():
    goto L11(r24);
  L54():
    which11 = ld which;
    check L56() else D16();
  L55():
    r25 = dyn base6(<sym which>);
    goto L13(r25);
  L71():
    r35 = dyn stop3("'which' must be character or numeric");
    check L72() else D25();
  L76():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L77():
    which21 = force? which20;
    checkMissing(which21);
    r36 = `-`(<missing>, which21);
    __ = ldf `[` in base;
    r37 = dyn __(handlers7, r36);
    goto L18(r37);
  D6():
    deopt 24 [handlers];
  D8():
    deopt 31 [r13];
  D10():
    deopt 38 [r16];
  D11():
    deopt 40 [];
  D13():
    deopt 47 [tmp2];
  D16():
    deopt 58 [which11];
  D18():
    deopt 63 [which13];
  D25():
    deopt 85 [r35];
  L36():
    handlers1 = force? handlers;
    checkMissing(handlers1);
    names = ldf names in base;
    r12 = dyn names(handlers1);
    check L37() else D7();
  L38():
    goto L5(r13);
  L42():
    goto L7(r16);
  L44():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        which7 = ld which;
        which8 = force? which7;
        checkMissing(which8);
        return which8;
      };
      r18 = dyn gettextf("no such element '%s'", p);
      return r18;
    };
    r20 = dyn stop1[, domain](p1, NA_LGL);
    check L45() else D12();
  L47():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    st which = tmp3;
    goto L10();
  L56():
    which12 = force? which11;
    checkMissing(which12);
    as_integer = ldf `as.integer` in base;
    r27 = dyn as_integer(which12);
    check L57() else D17();
  L58():
    which14 = force? which13;
    checkMissing(which14);
    r28 = `<=`(which14, 0.0);
    c5 = `as.logical`(r28);
    if c5 then L14(c5) else L59();
  L72():
    goto L10();
  D7():
    deopt 27 [r12];
  D12():
    deopt 44 [r20];
  D17():
    deopt 61 [r27];
  L14(c6):
    c14 = `as.logical`(c6);
    if c14 then L66() else L16();
  L37():
    goto L6(r12);
  L45():
    goto L9();
  L57():
    goto L13(r27);
  L59():
    which15 = ld which;
    check L60() else D19();
  D19():
    deopt 67 [c5, which15];
  L16():
    goto L17(NULL);
  L17(r34):
    goto L10();
  L60():
    which16 = force? which15;
    checkMissing(which16);
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  L66():
    stop2 = ldf stop;
    check L67() else D22();
  D22():
    deopt 77 [];
  L15(c10, which19, r30):
    r32 = `>`(which19, r30);
    c11 = `as.logical`(r32);
    c12 = `||`(c10, c11);
    goto L14(c12);
  L61():
    handlers2 = ld handlers;
    check L63() else D20();
  L62():
    r29 = dyn base7(<sym handlers>);
    goto L15(c5, which16, r29);
  L67():
    r33 = dyn stop2("invalid 'which' argument");
    check L68() else D23();
  D20():
    deopt 70 [c5, which16, handlers2];
  D23():
    deopt 79 [r33];
  L63():
    handlers3 = force? handlers2;
    checkMissing(handlers3);
    length1 = ldf length in base;
    r31 = dyn length1(handlers3);
    check L64() else D21();
  L68():
    goto L17(r33);
  D21():
    deopt 73 [c5, which16, r31];
  L64():
    goto L15(c5, which16, r31);
  }
}
fun `inner-1210436377`(expr, value, ok, visible) {
  (reg expr:*, reg value:*, reg ok:*, reg visible:*) -+> V { var expr:*, var value:*, var ok:*, var visible:*, reg suspended:*, reg suspended1:V, reg c:L, reg character:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg handlers:*, reg handlers1:V, reg names:cls, reg r5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg handlers2:*, reg handlers3:V, reg c2:L, reg i6:I, reg handlers5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg i13:I, reg r8:V, reg h:*, reg h1:V, reg length:cls, reg r9:V, reg r10:V, reg c3:L, reg h2:*, reg h3:V, reg c4:L, reg i17:I, reg h5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg __1:cls, reg r11:V, reg dx4:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg value1:*, reg value2:V, reg p1:p(V +), reg ok1:*, reg ok2:V, reg p2:p(V +), reg visible1:*, reg visible2:V, reg p3:p(V +), reg h6:*, reg h7:V, reg c5:L, reg h9:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg i20:I, reg h10:*, reg h11:V, reg c6:L, reg i22:I, reg h13:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i24:I, reg dx8:V, reg __3:cls, reg r20:V, reg dx9:cls, reg expr3:*, reg expr4:V, reg p5:p(V +), reg value3:*, reg value4:V, reg p6:p(V +), reg ok3:*, reg ok4:V, reg p7:p(V +), reg visible3:*, reg visible4:V, reg p8:p(V +), reg r25:V, reg val:*, reg val1:V, reg r26:V, reg c7:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg i29:I, reg r28:V, reg discard:*, reg discard1:V, reg i30:*, reg i31:V, reg c8:cls, reg r29:V, reg i32:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg discard2:*, reg discard3:V, reg length1:cls, reg r33:V, reg c9:L, reg _verbose:*, reg _verbose1:V, reg c10:L, reg cat:cls, reg gettextf:cls, reg paste:cls, reg discard4:*, reg discard5:V, reg p9:p(V +), reg r35:V, reg p10:p(V +), reg r37:V, reg p11:p(V +), reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg handlers6:*, reg handlers7:V, reg names1:cls, reg r47:V, reg discard6:*, reg discard7:V, reg match:cls, reg r48:V, reg is_na:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg idx:*, reg idx1:V, reg length2:cls, reg r52:V, reg c11:L, reg handlers8:*, reg handlers9:V, reg c12:L, reg handlers11:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg idx2:*, reg idx3:V, reg __4:cls, reg r53:V, reg dx12:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg list:cls, reg r56:V |
    mkenv;
    st expr = expr;
    st value = value;
    st ok = ok;
    st visible = visible;
    suspended = ld suspended;
    check L27() else D0();
  D0():
    deopt 0 [suspended];
  L27():
    suspended1 = force? suspended;
    checkMissing(suspended1);
    c = `as.logical`(suspended1);
    if c then L28() else L0();
  L0():
    character = ldf character;
    check L31() else D1();
  L28():
    popenv;
    return TRUE;
  D1():
    deopt 8 [];
  L31():
    r2 = dyn character();
    check L32() else D2();
  D2():
    deopt 9 [r2];
  L32():
    st discard = r2;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L2(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L3(i);
  L33():
    handlers = ld handlers;
    check L35() else D3();
  L34():
    r3 = dyn base(<sym handlers>);
    goto L2(r3);
  D3():
    deopt 13 [handlers];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L37() else L13();
  L35():
    handlers1 = force? handlers;
    checkMissing(handlers1);
    names = ldf names in base;
    r5 = dyn names(handlers1);
    check L36() else D4();
  D4():
    deopt 16 [r5];
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    handlers2 = ld handlers;
    check L38() else D5();
  L36():
    goto L2(r5);
  L37():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  D5():
    deopt 17 [i2, handlers2];
  L14(r32):
    c9 = `as.logical`(r32);
    if c9 then L71() else L15();
  L38():
    handlers3 = force? handlers2;
    checkMissing(handlers3);
    c2 = `is.object`(handlers3);
    if c2 then L39() else L40(i2, handlers3);
  L67():
    discard2 = ld discard;
    check L69() else D17();
  L68():
    r31 = dyn base3(<sym discard>);
    goto L14(r31);
  D17():
    deopt 75 [discard2];
  L4(i8, dx1):
    st h = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L15():
    goto L26();
  L26():
    popenv;
    return TRUE;
  L39():
    dr = tryDispatchBuiltin.1("[[", handlers3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(i2, dr);
  L40(i6, handlers5):
    i9 = ld i;
    check L42() else D6();
  L69():
    discard3 = force? discard2;
    checkMissing(discard3);
    length1 = ldf length in base;
    r33 = dyn length1(discard3);
    check L70() else D18();
  L71():
    _verbose = ld `.verbose`;
    check L72() else D19();
  D6():
    deopt 19 [i6, handlers5, i9];
  D18():
    deopt 78 [r33];
  D19():
    deopt 79 [_verbose];
  L5(i13, r8):
    r10 = `>`(r8, 1);
    c3 = `as.logical`(r10);
    if c3 then L47() else L6();
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L42():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r6 = dyn __(handlers5, i10);
    goto L4(i6, r6);
  L43():
    h = ld h;
    check L45() else D7();
  L44():
    r7 = dyn base1(<sym h>);
    goto L5(i8, r7);
  L70():
    goto L14(r33);
  L72():
    _verbose1 = force? _verbose;
    checkMissing(_verbose1);
    c10 = `as.logical`(_verbose1);
    if c10 then L73() else L16();
  D7():
    deopt 25 [i8, h];
  L6():
    h10 = ld h;
    check L54() else D11();
  L8(i20):
    val = ld val;
    check L59() else D13();
  L16():
    goto L17();
  L17():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L77() else L78();
  L45():
    h1 = force? h;
    checkMissing(h1);
    length = ldf length in base;
    r9 = dyn length(h1);
    check L46() else D8();
  L47():
    h2 = ld h;
    check L48() else D9();
  L73():
    cat = ldf cat;
    check L74() else D20();
  D8():
    deopt 28 [i8, r9];
  D9():
    deopt 31 [i13, h2];
  D11():
    deopt 44 [i13, h10];
  D13():
    deopt 56 [i20, val];
  D20():
    deopt 82 [];
  L18(r42):
    st idx = r42;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L46():
    goto L5(i8, r9);
  L48():
    h3 = force? h2;
    checkMissing(h3);
    c4 = `is.object`(h3);
    if c4 then L49() else L50(i13, h3);
  L54():
    h11 = force? h10;
    checkMissing(h11);
    c6 = `is.object`(h11);
    if c6 then L55() else L56(i13, h11);
  L59():
    val1 = force? val;
    checkMissing(val1);
    r26 = `!`(val1);
    c7 = `as.logical`(r26);
    if c7 then L60() else L10();
  L74():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        paste = ldf paste;
        p9 = prom<V +>{
          discard4 = ld discard;
          discard5 = force? discard4;
          checkMissing(discard5);
          return discard5;
        };
        r35 = dyn paste[, collapse](p9, ", ");
        return r35;
      };
      r37 = dyn gettextf("Removing %s", p10);
      return r37;
    };
    r39 = dyn cat(p11, "\n");
    check L75() else D21();
  L77():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L78():
    r41 = dyn base4(<lang match(names(handlers), discard)>);
    goto L18(r41);
  D21():
    deopt 85 [r39];
  L7(i19, dx3):
    checkFun.0(dx3);
    dx4 = dx3 as cls;
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p2 = prom<V +>{
      ok1 = ld ok;
      ok2 = force? ok1;
      checkMissing(ok2);
      return ok2;
    };
    p3 = prom<V +>{
      visible1 = ld visible;
      visible2 = force? visible1;
      checkMissing(visible2);
      return visible2;
    };
    p4 = prom<V +>{
      h6 = ld h;
      h7 = force? h6;
      checkMissing(h7);
      c5 = `is.object`(h7);
      if c5 then L1() else L2(h7);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", h7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(h9):
      __2 = ldf `[[` in base;
      r16 = dyn __2(h9, "data");
      goto L0(r16);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    r18 = dyn dx4(p, p1, p2, p3, p4);
    check L52() else D10();
  L9(i24, dx8):
    checkFun.0(dx8);
    dx9 = dx8 as cls;
    p5 = prom<V +>{
      expr3 = ld expr;
      expr4 = force? expr3;
      checkMissing(expr4);
      return expr4;
    };
    p6 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p7 = prom<V +>{
      ok3 = ld ok;
      ok4 = force? ok3;
      checkMissing(ok4);
      return ok4;
    };
    p8 = prom<V +>{
      visible3 = ld visible;
      visible4 = force? visible3;
      checkMissing(visible4);
      return visible4;
    };
    r25 = dyn dx9(p5, p6, p7, p8);
    check L58() else D12();
  L10():
    goto L12(i20);
  L12(i32):
    goto L3(i32);
  L19(r44):
    is_na = ldf `is.na` in base;
    r49 = dyn is_na(r44);
    check L87() else D26();
  L21(r51):
    c11 = `as.logical`(r51);
    if c11 then L92() else L22();
  L49():
    dr2 = tryDispatchBuiltin.1("[[", h3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(i13, dr2);
  L50(i17, h5):
    __1 = ldf `[[` in base;
    r11 = dyn __1(h5, "f");
    goto L7(i17, r11);
  L55():
    dr6 = tryDispatchBuiltin.1("[[", h11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(i13, dr6);
  L56(i22, h13):
    __3 = ldf `[[` in base;
    r20 = dyn __3(h13, "f");
    goto L9(i22, r20);
  L60():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  L75():
    goto L17();
  L79():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L80():
    r43 = dyn base5(<lang names(handlers)>, <sym discard>);
    goto L19(r43);
  L88():
    idx = ld idx;
    check L90() else D27();
  L89():
    r50 = dyn base7(<sym idx>);
    goto L21(r50);
  D10():
    deopt 42 [i19, r18];
  D12():
    deopt 54 [i24, r25];
  D26():
    deopt 105 [r49];
  D27():
    deopt 109 [idx];
  L11(i29, r28):
    st discard = r28;
    goto L12(i29);
  L20(r46):
    discard6 = ld discard;
    check L85() else D24();
  L22():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L24(dx12):
    goto L26();
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i13, dx2);
  L52():
    st val = r18;
    goto L8(i19);
  L57():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L9(i13, dx7);
  L58():
    st val = r25;
    goto L8(i24);
  L61():
    discard = ld discard;
    check L63() else D14();
  L62():
    r27 = dyn base2(<sym discard>, <sym i>);
    goto L11(i20, r27);
  L81():
    handlers6 = ld handlers;
    check L83() else D22();
  L82():
    r45 = dyn base6(<sym handlers>);
    goto L20(r45);
  L87():
    goto L18(r49);
  L90():
    idx1 = force? idx;
    checkMissing(idx1);
    length2 = ldf length in base;
    r52 = dyn length2(idx1);
    check L91() else D28();
  L92():
    handlers8 = ld handlers;
    check L93() else D29();
  D14():
    deopt 61 [i20, discard];
  D22():
    deopt 94 [handlers6];
  D24():
    deopt 98 [discard6];
  D28():
    deopt 112 [r52];
  D29():
    deopt 113 [handlers8];
  L25(r55):
    sst handlers = r55;
    goto L24(r55);
  L63():
    discard1 = force? discard;
    checkMissing(discard1);
    i30 = ld i;
    check L64() else D15();
  L83():
    handlers7 = force? handlers6;
    checkMissing(handlers7);
    names1 = ldf names in base;
    r47 = dyn names1(handlers7);
    check L84() else D23();
  L85():
    discard7 = force? discard6;
    checkMissing(discard7);
    match = ldf match in base;
    r48 = dyn match(r46, discard7, NA_INT, NULL);
    check L86() else D25();
  L91():
    goto L21(r52);
  L93():
    handlers9 = force? handlers8;
    checkMissing(handlers9);
    c12 = `is.object`(handlers9);
    if c12 then L94() else L95(handlers9);
  L99():
    list = ldf list in base;
    r56 = dyn list();
    check L101() else D31();
  L100():
    r54 = dyn base8();
    goto L25(r54);
  D15():
    deopt 63 [i20, i30];
  D23():
    deopt 97 [r47];
  D25():
    deopt 103 [r48];
  D31():
    deopt 122 [r56];
  L23(dx11):
    sst handlers = dx11;
    goto L24(dx11);
  L64():
    i31 = force? i30;
    checkMissing(i31);
    c8 = ldf c in base;
    r29 = dyn c8(discard1, i31);
    check L65() else D16();
  L84():
    goto L20(r47);
  L86():
    goto L19(r48);
  L94():
    dr8 = tryDispatchBuiltin.1("[", handlers9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L96() else L95(dr8);
  L95(handlers11):
    idx2 = ld idx;
    check L97() else D30();
  L101():
    goto L25(r56);
  D16():
    deopt 66 [i20, r29];
  D30():
    deopt 115 [handlers11, idx2];
  L65():
    goto L11(i20, r29);
  L96():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L23(dx10);
  L97():
    idx3 = force? idx2;
    __4 = ldf `[` in base;
    r53 = dyn __4(handlers11, idx3);
    goto L23(r53);
  }
}
fun `inner-506908202`(status) {
  (reg status:*) -+> V { var status:*, reg status_isMissing:L, reg status_orDefault:*, reg status1:*, reg status2:V |
    mkenv;
    status_isMissing = missing.0(status);
    if status_isMissing then L0(TRUE) else L0(status);
  L0(status_orDefault):
    st status = status_orDefault;
    status1 = ld status;
    check L1() else D0();
  D0():
    deopt 0 [status1];
  L1():
    status2 = force? status1;
    checkMissing(status2);
    sst suspended = status2;
    invisible.0();
    popenv;
    return status2;
  }
}
fun `inner-1620076946`(name, verbose) {
  (reg name:*, reg verbose:*) -+> V { var name:*, reg name_isMissing:L, reg name_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg _verbose:*, reg _verbose1:V, reg p:p(V +), reg verbose1:*, reg verbose2:V, reg c:L, reg cat:cls, reg gettext:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg addTaskCallback:cls, reg evaluate:*, reg evaluate1:V, reg p2:p(V +), reg name1:*, reg name2:V, reg p3:p(V +), reg r7:V, reg id:*, reg id1:V |
    mkenv;
    name_isMissing = missing.0(name);
    if name_isMissing then L0("R-taskCallbackManager") else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1() else L2(verbose);
  L1():
    p = prom<V +>{
      _verbose = ld `.verbose`;
      _verbose1 = force? _verbose;
      checkMissing(_verbose1);
      return _verbose1;
    };
    goto L2(p);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    verbose1 = ld verbose;
    check L5() else D0();
  D0():
    deopt 0 [verbose1];
  L5():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c = `as.logical`(verbose2);
    if c then L6() else L3();
  L3():
    goto L4();
  L4():
    addTaskCallback = ldf addTaskCallback;
    check L10() else D3();
  L6():
    cat = ldf cat;
    check L7() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L7():
    p1 = prom<V +>{
      gettext = ldf gettext;
      r1 = dyn gettext("Registering 'evaluate' as low-level callback\n");
      return r1;
    };
    r3 = dyn cat(p1);
    check L8() else D2();
  L10():
    p2 = prom<V +>{
      evaluate = ld evaluate;
      evaluate1 = force? evaluate;
      checkMissing(evaluate1);
      return evaluate1;
    };
    p3 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r7 = dyn addTaskCallback[, name](p2, p3);
    check L11() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 13 [r7];
  L8():
    goto L4();
  L11():
    st id = r7;
    sst registered = TRUE;
    id = ld id;
    check L12() else D5();
  D5():
    deopt 18 [id];
  L12():
    id1 = force? id;
    checkMissing(id1);
    popenv;
    return id1;
  }
}
fun inner560854305() {
  () -+> V { reg handlers:*, reg handlers1:V |
    mkenv;
    handlers = ld handlers;
    check L0() else D0();
  D0():
    deopt 0 [handlers];
  L0():
    handlers1 = force? handlers;
    checkMissing(handlers1);
    popenv;
    return handlers1;
  }
}