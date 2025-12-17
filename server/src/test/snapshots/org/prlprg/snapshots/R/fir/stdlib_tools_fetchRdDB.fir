fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner819782118;
    st fetchRdDB = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner819782118(filebase, key) {
  (reg filebase:*, reg key:*) -+> V { var filebase:*, var key:*, reg key_isMissing:L, reg key_orDefault:*, reg r:cls, reg lazyLoadDBexec:cls, reg filebase1:*, reg filebase2:V, reg p:p(V +), reg fun:*, reg fun1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg key1:*, reg key2:V, reg length:cls, reg r6:V, reg c:L, reg res:*, reg res1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg res2:*, reg res3:V, reg invisible:cls, reg r9:V |
    mkenv;
    st filebase = filebase;
    key_isMissing = missing.0(key);
    if key_isMissing then L0(NULL) else L0(key);
  L0(key_orDefault):
    st key = key_orDefault;
    r = clos inner2058174622;
    st fun = r;
    lazyLoadDBexec = ldf lazyLoadDBexec;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      filebase1 = ld filebase;
      filebase2 = force? filebase1;
      checkMissing(filebase2);
      return filebase2;
    };
    p1 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    r3 = dyn lazyLoadDBexec(p, p1);
    check L5() else D1();
  D1():
    deopt 7 [r3];
  L5():
    st res = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r5):
    c = `as.logical`(r5);
    if c then L10() else L2();
  L6():
    key1 = ld key;
    check L8() else D2();
  L7():
    r4 = dyn base(<sym key>);
    goto L1(r4);
  D2():
    deopt 11 [key1];
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L8():
    key2 = force? key1;
    checkMissing(key2);
    length = ldf length in base;
    r6 = dyn length(key2);
    check L9() else D3();
  L10():
    res = ld res;
    check L11() else D4();
  D3():
    deopt 14 [r6];
  D4():
    deopt 15 [res];
  L3(r8):
    popenv;
    return r8;
  L9():
    goto L1(r6);
  L11():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L13():
    res2 = ld res;
    check L15() else D5();
  L14():
    r7 = dyn base1(<sym res>);
    goto L3(r7);
  D5():
    deopt 19 [res2];
  L15():
    res3 = force? res2;
    checkMissing(res3);
    invisible = ldf invisible in base;
    r9 = dyn invisible(res3);
    check L16() else D6();
  D6():
    deopt 22 [r9];
  L16():
    goto L3(r9);
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg db5:*, reg db6:V, reg c1:L, reg db8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg db9:*, reg db10:V, reg c2:L, reg db12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r2:V, reg db13:*, reg db14:V, reg c3:L, reg db16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r3:V, reg db17:*, reg db18:V, reg c4:L, reg db20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r4:V, reg r5:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg key:*, reg key1:V, reg length:cls, reg r8:V, reg c5:L, reg _notin_:cls, reg key2:*, reg key3:V, reg p:p(V +), reg vars:*, reg vars1:V, reg p1:p(V +), reg r11:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg key4:*, reg key5:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg sQuote1:cls, reg filebase:*, reg filebase1:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg fetch:cls, reg key6:*, reg key7:V, reg p7:p(V +), reg r23:V, reg lapply:cls, reg vars2:*, reg vars3:V, reg p8:p(V +), reg fetch1:*, reg fetch2:V, reg p9:p(V +), reg r26:V, reg vars4:*, reg vars5:V, reg l:*, reg names__:cls, reg r27:V, reg res:*, reg res1:V |
    mkenv;
    st db = db;
    db1 = ld db;
    check L4() else D0();
  D0():
    deopt 0 [db1];
  L4():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L6() else L7(db2);
  L5(dx1):
    st vals = dx1;
    db5 = ld db;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(db4):
    r = `$`(db4, <sym vals>);
    goto L5(r);
  D1():
    deopt 4 [db5];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    db6 = force? db5;
    checkMissing(db6);
    c1 = `is.object`(db6);
    if c1 then L11() else L12(db6);
  L10(dx3):
    st vars = dx3;
    db9 = ld db;
    check L14() else D2();
  L11():
    dr2 = tryDispatchBuiltin.1("$", db6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(db8):
    r1 = `$`(db8, <sym vars>);
    goto L10(r1);
  D2():
    deopt 8 [db9];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L14():
    db10 = force? db9;
    checkMissing(db10);
    c2 = `is.object`(db10);
    if c2 then L16() else L17(db10);
  L15(dx5):
    st datafile = dx5;
    db13 = ld db;
    check L19() else D3();
  L16():
    dr4 = tryDispatchBuiltin.1("$", db10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(dr4);
  L17(db12):
    r2 = `$`(db12, <sym datafile>);
    goto L15(r2);
  D3():
    deopt 12 [db13];
  L18():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L19():
    db14 = force? db13;
    checkMissing(db14);
    c3 = `is.object`(db14);
    if c3 then L21() else L22(db14);
  L20(dx7):
    st compressed = dx7;
    db17 = ld db;
    check L24() else D4();
  L21():
    dr6 = tryDispatchBuiltin.1("$", db14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L23() else L22(dr6);
  L22(db16):
    r3 = `$`(db16, <sym compressed>);
    goto L20(r3);
  D4():
    deopt 16 [db17];
  L23():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx6);
  L24():
    db18 = force? db17;
    checkMissing(db18);
    c4 = `is.object`(db18);
    if c4 then L26() else L27(db18);
  L25(dx9):
    st envhook = dx9;
    r5 = clos inner56751387;
    st fetch = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L26():
    dr8 = tryDispatchBuiltin.1("$", db18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L28() else L27(dr8);
  L27(db20):
    r4 = `$`(db20, <sym envhook>);
    goto L25(r4);
  L0(r7):
    c5 = `as.logical`(r7);
    if c5 then L33() else L1();
  L28():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L25(dx8);
  L29():
    key = ld key;
    check L31() else D5();
  L30():
    r6 = dyn base(<sym key>);
    goto L0(r6);
  D5():
    deopt 25 [key];
  L1():
    lapply = ldf lapply;
    check L43() else D13();
  L31():
    key1 = force? key;
    checkMissing(key1);
    length = ldf length in base;
    r8 = dyn length(key1);
    check L32() else D6();
  L33():
    _notin_ = ldf `%notin%`;
    check L34() else D7();
  D6():
    deopt 28 [r8];
  D7():
    deopt 30 [];
  D13():
    deopt 47 [];
  L32():
    goto L0(r8);
  L34():
    p = prom<V +>{
      key2 = ld key;
      key3 = force? key2;
      checkMissing(key3);
      return key3;
    };
    p1 = prom<V +>{
      vars = ld vars;
      vars1 = force? vars;
      checkMissing(vars1);
      return vars1;
    };
    r11 = dyn _notin_(p, p1);
    check L35() else D8();
  L43():
    p8 = prom<V +>{
      vars2 = ld vars;
      vars3 = force? vars2;
      checkMissing(vars3);
      return vars3;
    };
    p9 = prom<V +>{
      fetch1 = ld fetch;
      fetch2 = force? fetch1;
      checkMissing(fetch2);
      return fetch2;
    };
    r26 = dyn lapply(p8, p9);
    check L44() else D14();
  D8():
    deopt 33 [r11];
  D14():
    deopt 50 [r26];
  L35():
    c6 = `as.logical`(r11);
    if c6 then L36() else L2();
  L44():
    st res = r26;
    vars4 = ld vars;
    check L45() else D15();
  D15():
    deopt 52 [vars4];
  L2():
    goto L3();
  L3():
    fetch = ldf fetch;
    check L40() else D11();
  L36():
    stop = ldf stop;
    check L37() else D9();
  L45():
    vars5 = force? vars4;
    checkMissing(vars5);
    l = ld res;
    names__ = ldf `names<-`;
    check L46() else D16();
  D9():
    deopt 35 [];
  D11():
    deopt 43 [];
  D16():
    deopt 55 [vars5, l, vars5];
  L37():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          key4 = ld key;
          key5 = force? key4;
          checkMissing(key5);
          return key5;
        };
        r13 = dyn sQuote(p2);
        return r13;
      };
      p5 = prom<V +>{
        sQuote1 = ldf sQuote;
        p4 = prom<V +>{
          filebase = ld filebase;
          filebase1 = force? filebase;
          checkMissing(filebase1);
          return filebase1;
        };
        r16 = dyn sQuote1(p4);
        return r16;
      };
      r18 = dyn gettextf("No help on %s found in RdDB %s", p3, p5);
      return r18;
    };
    r20 = dyn stop[, domain](p6, NA_LGL);
    check L38() else D10();
  L40():
    p7 = prom<V +>{
      key6 = ld key;
      key7 = force? key6;
      checkMissing(key7);
      return key7;
    };
    r23 = dyn fetch(p7);
    check L41() else D12();
  L46():
    r27 = dyn names__(l, NULL, vars5);
    check L47() else D17();
  D10():
    deopt 39 [r20];
  D12():
    deopt 45 [r23];
  D17():
    deopt 57 [vars5, r27];
  L38():
    goto L3();
  L41():
    popenv;
    return r23;
  L47():
    st res = r27;
    res = ld res;
    check L48() else D18();
  D18():
    deopt 59 [res];
  L48():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  }
}
fun inner56751387(key) {
  (reg key:*) -+> V { var key:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vals:*, reg vals1:V, reg c:L, reg vals3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg key1:*, reg key2:V, reg __:cls, reg r2:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r3:V, reg datafile:*, reg datafile1:V, reg compressed:*, reg compressed1:V, reg envhook:*, reg envhook1:V, reg lazyLoadDBfetch:cls, reg r4:V |
    mkenv;
    st key = key;
    sym = ldf lazyLoadDBfetch;
    base = ldf lazyLoadDBfetch in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    vals = ld vals;
    check L5() else D0();
  L4():
    r = dyn base(<lang `[[`(`[`(vals, key), 1)>, <sym datafile>, <sym compressed>, <sym envhook>);
    goto L0(r);
  D0():
    deopt 2 [vals];
  L5():
    vals1 = force? vals;
    checkMissing(vals1);
    c = `is.object`(vals1);
    if c then L6() else L7(vals1);
  L1(dx1):
    c1 = `is.object`(dx1);
    if c1 then L10() else L11(dx1);
  L6():
    dr = tryDispatchBuiltin.1("[", vals1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(vals3):
    key1 = ld key;
    check L9() else D1();
  D1():
    deopt 4 [vals3, key1];
  L2(dx5):
    datafile = ld datafile;
    check L13() else D2();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    key2 = force? key1;
    __ = ldf `[` in base;
    r2 = dyn __(vals3, key2);
    goto L1(r2);
  L10():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(dx3):
    __1 = ldf `[[` in base;
    r3 = dyn __1(dx3, 1);
    goto L2(r3);
  D2():
    deopt 10 [datafile];
  L12():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx4);
  L13():
    datafile1 = force? datafile;
    checkMissing(datafile1);
    compressed = ld compressed;
    check L14() else D3();
  D3():
    deopt 12 [compressed];
  L14():
    compressed1 = force? compressed;
    checkMissing(compressed1);
    envhook = ld envhook;
    check L15() else D4();
  D4():
    deopt 14 [envhook];
  L15():
    envhook1 = force? envhook;
    checkMissing(envhook1);
    lazyLoadDBfetch = ldf lazyLoadDBfetch in base;
    r4 = dyn lazyLoadDBfetch(dx5, datafile1, compressed1, envhook1);
    check L16() else D5();
  D5():
    deopt 17 [r4];
  L16():
    goto L0(r4);
  }
}