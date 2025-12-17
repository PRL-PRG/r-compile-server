fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2721076550;
    st lazyLoadDBexec = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2721076550(filebase, fun, filter) {
  (reg filebase:*, reg fun:*, reg filter:*) -+> V { var filebase:*, var fun:*, var filter:*, reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg r4:cls, reg r5:cls, reg r6:cls, reg glue:cls, reg filebase1:*, reg filebase2:V, reg p:p(V +), reg r8:V, reg glue1:cls, reg filebase3:*, reg filebase4:V, reg p1:p(V +), reg r10:V, reg mkenv:cls, reg r11:V, reg readRDS:cls, reg mapfile:*, reg mapfile1:V, reg p2:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg map:*, reg map1:V, reg c:L, reg map3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg names:cls, reg r17:V, reg map4:*, reg map5:V, reg c1:L, reg map7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg list2env:cls, reg map8:*, reg map9:V, reg c2:L, reg map11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg p3:p(V +), reg env:*, reg env1:V, reg p4:p(V +), reg r22:V, reg mkenv1:cls, reg r23:V, reg r24:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg r28:V, reg c3:L, reg filter1:cls, reg vars:*, reg vars1:V, reg p5:p(V +), reg r30:V, reg vars2:*, reg vars3:V, reg c4:L, reg vars5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg use:*, reg use1:V, reg __:cls, reg r31:V, reg map12:*, reg map13:V, reg c5:L, reg map15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r32:V, reg c6:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg use2:*, reg use3:V, reg __1:cls, reg r33:V, reg map16:*, reg map17:V, reg c7:L, reg map19:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r35:V, reg fun1:cls, reg environment:cls, reg r36:V, reg p6:p(V +), reg r38:V, reg res:*, reg res1:V |
    mkenv;
    st filebase = filebase;
    st fun = fun;
    st filter = filter;
    r = clos inner558147164;
    st glue = r;
    r1 = clos inner270641308;
    st readRDS = r1;
    r2 = clos inner424378768;
    st `parent.env<-` = r2;
    r3 = clos inner3715024737;
    st existsInFrame = r3;
    r4 = clos inner844764170;
    st list2env = r4;
    r5 = clos inner2708337952;
    st environment = r5;
    r6 = clos inner2708337952;
    st mkenv = r6;
    glue = ldf glue;
    check L6() else D0();
  D0():
    deopt 22 [];
  L6():
    p = prom<V +>{
      filebase1 = ld filebase;
      filebase2 = force? filebase1;
      checkMissing(filebase2);
      return filebase2;
    };
    r8 = dyn glue[, , sep](p, "rdx", ".");
    check L7() else D1();
  D1():
    deopt 27 [r8];
  L7():
    st mapfile = r8;
    glue1 = ldf glue;
    check L8() else D2();
  D2():
    deopt 30 [];
  L8():
    p1 = prom<V +>{
      filebase3 = ld filebase;
      filebase4 = force? filebase3;
      checkMissing(filebase4);
      return filebase4;
    };
    r10 = dyn glue1[, , sep](p1, "rdb", ".");
    check L9() else D3();
  D3():
    deopt 35 [r10];
  L9():
    st datafile = r10;
    mkenv = ldf mkenv;
    check L10() else D4();
  D4():
    deopt 38 [];
  L10():
    r11 = dyn mkenv();
    check L11() else D5();
  D5():
    deopt 39 [r11];
  L11():
    st env = r11;
    readRDS = ldf readRDS;
    check L12() else D6();
  D6():
    deopt 42 [];
  L12():
    p2 = prom<V +>{
      mapfile = ld mapfile;
      mapfile1 = force? mapfile;
      checkMissing(mapfile1);
      return mapfile1;
    };
    r13 = dyn readRDS(p2);
    check L13() else D7();
  D7():
    deopt 44 [r13];
  L13():
    st map = r13;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r15):
    st vars = r15;
    map4 = ld map;
    check L22() else D10();
  L14():
    map = ld map;
    check L16() else D8();
  L15():
    r14 = dyn base(<lang `$`(map, variables)>);
    goto L0(r14);
  D8():
    deopt 48 [map];
  D10():
    deopt 54 [map4];
  L16():
    map1 = force? map;
    checkMissing(map1);
    c = `is.object`(map1);
    if c then L18() else L19(map1);
  L22():
    map5 = force? map4;
    checkMissing(map5);
    c1 = `is.object`(map5);
    if c1 then L24() else L25(map5);
  L17(dx1):
    names = ldf names in base;
    r17 = dyn names(dx1);
    check L21() else D9();
  L18():
    dr = tryDispatchBuiltin.1("$", map1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(map3):
    r16 = `$`(map3, <sym variables>);
    goto L17(r16);
  L23(dx3):
    st compressed = dx3;
    list2env = ldf list2env;
    check L27() else D11();
  L24():
    dr2 = tryDispatchBuiltin.1("$", map5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(map7):
    r18 = `$`(map7, <sym compressed>);
    goto L23(r18);
  D9():
    deopt 52 [r17];
  D11():
    deopt 59 [];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L21():
    goto L0(r17);
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    p3 = prom<V +>{
      map8 = ld map;
      map9 = force? map8;
      checkMissing(map9);
      c2 = `is.object`(map9);
      if c2 then L1() else L2(map9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", map9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(map11):
      r19 = `$`(map11, <sym references>);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r22 = dyn list2env(p3, p4);
    check L28() else D12();
  D12():
    deopt 62 [r22];
  L28():
    mkenv1 = ldf mkenv;
    check L29() else D13();
  D13():
    deopt 64 [];
  L29():
    r23 = dyn mkenv1();
    check L30() else D14();
  D14():
    deopt 65 [r23];
  L30():
    st envenv = r23;
    r24 = clos inner4266987626;
    st envhook = r24;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L1(r26):
    r28 = `!`(r26);
    c3 = `as.logical`(r28);
    if c3 then L33() else L2();
  L31():
    missing = ldf missing in base;
    r27 = dyn missing(<sym filter>);
    goto L1(r27);
  L32():
    r25 = dyn base1(<sym filter>);
    goto L1(r25);
  L2():
    map16 = ld map;
    check L51() else D21();
  L5():
    fun1 = ldf fun;
    check L56() else D22();
  L33():
    filter1 = ldf filter;
    check L34() else D15();
  D15():
    deopt 75 [];
  D21():
    deopt 95 [map16];
  D22():
    deopt 100 [];
  L34():
    p5 = prom<V +>{
      vars = ld vars;
      vars1 = force? vars;
      checkMissing(vars1);
      return vars1;
    };
    r30 = dyn filter1(p5);
    check L35() else D16();
  L51():
    map17 = force? map16;
    checkMissing(map17);
    c7 = `is.object`(map17);
    if c7 then L53() else L54(map17);
  L56():
    p6 = prom<V +>{
      environment = ldf environment;
      r36 = dyn environment();
      return r36;
    };
    r38 = dyn fun1(p6);
    check L57() else D23();
  D16():
    deopt 77 [r30];
  D23():
    deopt 102 [r38];
  L35():
    st use = r30;
    vars2 = ld vars;
    check L36() else D17();
  L52(dx15):
    st vals = dx15;
    goto L5();
  L53():
    dr12 = tryDispatchBuiltin.1("$", map17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L55() else L54(dr12);
  L54(map19):
    r35 = `$`(map19, <sym variables>);
    goto L52(r35);
  L57():
    st res = r38;
    st map = NULL;
    st vars = NULL;
    st vals = NULL;
    st rvars = NULL;
    st mapfile = NULL;
    st readRDS = NULL;
    res = ld res;
    check L58() else D24();
  D17():
    deopt 79 [vars2];
  D24():
    deopt 122 [res];
  L36():
    vars3 = force? vars2;
    checkMissing(vars3);
    c4 = `is.object`(vars3);
    if c4 then L37() else L38(vars3);
  L55():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L52(dx14);
  L58():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L3(dx7):
    st vars = dx7;
    map12 = ld map;
    check L41() else D19();
  L37():
    dr6 = tryDispatchBuiltin.1("[", vars3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(dr6);
  L38(vars5):
    use = ld use;
    check L40() else D18();
  D18():
    deopt 81 [vars5, use];
  D19():
    deopt 85 [map12];
  L39():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx6);
  L40():
    use1 = force? use;
    __ = ldf `[` in base;
    r31 = dyn __(vars5, use1);
    goto L3(r31);
  L41():
    map13 = force? map12;
    checkMissing(map13);
    c5 = `is.object`(map13);
    if c5 then L43() else L44(map13);
  L42(dx9):
    c6 = `is.object`(dx9);
    if c6 then L46() else L47(dx9);
  L43():
    dr8 = tryDispatchBuiltin.1("$", map13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(dr8);
  L44(map15):
    r32 = `$`(map15, <sym variables>);
    goto L42(r32);
  L4(dx13):
    st vals = dx13;
    st use = NULL;
    goto L5();
  L45():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L42(dx8);
  L46():
    dr10 = tryDispatchBuiltin.1("[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L48() else L47(dr10);
  L47(dx11):
    use2 = ld use;
    check L49() else D20();
  D20():
    deopt 88 [dx11, use2];
  L48():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L4(dx12);
  L49():
    use3 = force? use2;
    __1 = ldf `[` in base;
    r33 = dyn __1(dx11, use3);
    goto L4(r33);
  }
}
fun inner558147164(`...`, sep, collapse) {
  (reg ddd:dots, reg sep:*, reg collapse:*) -+> V { var `...`:dots?, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg sep1:*, reg sep2:V, reg collapse1:*, reg collapse2:V, reg paste:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0(" ") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L1(NULL) else L1(collapse);
  L1(collapse_orDefault):
    st collapse = collapse_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r1):
    popenv;
    return r1;
  L4():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang paste(list(...), sep, collapse, FALSE)>);
    goto L2(r);
  L3(r3):
    sep1 = ld sep;
    check L10() else D2();
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym ...>);
    goto L3(r2);
  D0():
    deopt 4 [];
  D2():
    deopt 7 [sep1];
  L8():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L9() else D1();
  L10():
    sep2 = force? sep1;
    checkMissing(sep2);
    collapse1 = ld collapse;
    check L11() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 9 [collapse1];
  L9():
    goto L3(r4);
  L11():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    paste = ldf paste in base;
    r5 = dyn paste(r3, sep2, collapse2, FALSE);
    check L12() else D4();
  D4():
    deopt 13 [r5];
  L12():
    goto L2(r5);
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg r:cls, reg r1:cls, reg r2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg file1:*, reg file2:V, reg c:L, reg r5:V, reg c1:L, reg halt:cls, reg r6:V, reg gzfile:cls, reg file3:*, reg file4:V, reg p:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg on_exit:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg con:*, reg con1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg baseenv:cls, reg r17:V, reg unserializeFromConn:cls, reg r18:V |
    mkenv;
    st file = file;
    r = clos inner90003907;
    st halt = r;
    r1 = clos inner3394303926;
    st gzfile = r1;
    r2 = clos inner1019204350;
    st close = r2;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L9() else L1();
  L6():
    file1 = ld file;
    check L8() else D0();
  L7():
    r3 = dyn base(<sym file>);
    goto L0(r3);
  D0():
    deopt 10 [file1];
  L1():
    goto L2();
  L2():
    gzfile = ldf gzfile;
    check L13() else D3();
  L8():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L0(c);
  L9():
    halt = ldf halt;
    check L10() else D1();
  D1():
    deopt 15 [];
  D3():
    deopt 21 [];
  L10():
    r6 = dyn halt("bad file name");
    check L11() else D2();
  L13():
    p = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r9 = dyn gzfile(p, "rb");
    check L14() else D4();
  D2():
    deopt 17 [r6];
  D4():
    deopt 24 [r9];
  L11():
    goto L2();
  L14():
    st con = r9;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L15():
    on_exit = ldf `on.exit` in base;
    r12 = dyn on_exit(<lang close(con)>);
    goto L3();
  L16():
    r10 = dyn base1(<lang close(con)>);
    goto L3();
  L4(r14):
    popenv;
    return r14;
  L17():
    con = ld con;
    check L19() else D5();
  L18():
    r13 = dyn base2(<lang unserializeFromConn(con, baseenv())>);
    goto L4(r13);
  D5():
    deopt 31 [con];
  L19():
    con1 = force? con;
    checkMissing(con1);
    sym3 = ldf baseenv;
    base3 = ldf baseenv in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L5(r16):
    unserializeFromConn = ldf unserializeFromConn in base;
    r18 = dyn unserializeFromConn(con1, r16);
    check L23() else D7();
  L20():
    baseenv = ldf baseenv in base;
    r17 = dyn baseenv();
    check L22() else D6();
  L21():
    r15 = dyn base3();
    goto L5(r15);
  D6():
    deopt 36 [r17];
  D7():
    deopt 38 [r18];
  L22():
    goto L5(r17);
  L23():
    goto L4(r18);
  }
}
fun inner90003907(message) {
  (reg message:*) -+> V { var message:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg message1:*, reg message2:V, reg stop:cls, reg r2:V |
    mkenv;
    st message = message;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    message1 = ld message;
    check L3() else D0();
  L2():
    r = dyn base(<lang stop(TRUE, message)>);
    goto L0(r);
  D0():
    deopt 3 [message1];
  L3():
    message2 = force? message1;
    checkMissing(message2);
    stop = ldf stop in base;
    r2 = dyn stop(TRUE, message2);
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    goto L0(r2);
  }
}
fun inner3394303926(description, open) {
  (reg description:*, reg open:*) -+> V { var description:*, var open:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg description1:*, reg description2:V, reg open1:*, reg open2:V, reg gzfile:cls, reg r2:V |
    mkenv;
    st description = description;
    st open = open;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    description1 = ld description;
    check L3() else D0();
  L2():
    r = dyn base(<lang gzfile(description, open, "", 6.0)>);
    goto L0(r);
  D0():
    deopt 2 [description1];
  L3():
    description2 = force? description1;
    checkMissing(description2);
    open1 = ld open;
    check L4() else D1();
  D1():
    deopt 4 [open1];
  L4():
    open2 = force? open1;
    checkMissing(open2);
    gzfile = ldf gzfile in base;
    r2 = dyn gzfile(description2, open2, "", 6.0);
    check L5() else D2();
  D2():
    deopt 9 [r2];
  L5():
    goto L0(r2);
  }
}
fun inner1019204350(con) {
  (reg con:*) -+> V { var con:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg close:cls, reg r2:V |
    mkenv;
    st con = con;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    con1 = ld con;
    check L3() else D0();
  L2():
    r = dyn base(<lang close(con, "rw")>);
    goto L0(r);
  D0():
    deopt 2 [con1];
  L3():
    con2 = force? con1;
    checkMissing(con2);
    close = ldf close in base;
    r2 = dyn close(con2, "rw");
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    goto L0(r2);
  }
}
fun inner424378768(env, value) {
  (reg env:*, reg value:*) -+> V { var env:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg value1:*, reg value2:V, reg parent_env__:cls, reg r2:V |
    mkenv;
    st env = env;
    st value = value;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    env1 = ld env;
    check L3() else D0();
  L2():
    r = dyn base(<lang `parent.env<-`(env, value)>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  L3():
    env2 = force? env1;
    checkMissing(env2);
    value1 = ld value;
    check L4() else D1();
  D1():
    deopt 4 [value1];
  L4():
    value2 = force? value1;
    checkMissing(value2);
    parent_env__ = ldf `parent.env<-` in base;
    r2 = dyn parent_env__(env2, value2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}
fun inner3715024737(x, env) {
  (reg x:*, reg env:*) -+> V { var x:*, var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg env1:*, reg env2:V, reg exists:cls, reg r2:V |
    mkenv;
    st x = x;
    st env = env;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang exists(x, env, "any", FALSE)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    env1 = ld env;
    check L4() else D1();
  D1():
    deopt 4 [env1];
  L4():
    env2 = force? env1;
    checkMissing(env2);
    exists = ldf exists in base;
    r2 = dyn exists(x2, env2, "any", FALSE);
    check L5() else D2();
  D2():
    deopt 9 [r2];
  L5():
    goto L0(r2);
  }
}
fun inner844764170(x, envir) {
  (reg x:*, reg envir:*) -+> V { var x:*, var envir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg envir1:*, reg envir2:V, reg list2env:cls, reg r2:V |
    mkenv;
    st x = x;
    st envir = envir;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang list2env(x, envir)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    envir1 = ld envir;
    check L4() else D1();
  D1():
    deopt 4 [envir1];
  L4():
    envir2 = force? envir1;
    checkMissing(envir2);
    list2env = ldf list2env in base;
    r2 = dyn list2env(x2, envir2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg environment:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    environment = ldf environment in base;
    r2 = dyn environment(NULL);
    check L3() else D0();
  L2():
    r = dyn base(<lang environment(NULL)>);
    goto L0(r);
  D0():
    deopt 4 [r2];
  L3():
    goto L0(r2);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg existsInFrame:cls, reg n1:*, reg n2:V, reg p:p(V +), reg envenv:*, reg envenv1:V, reg p1:p(V +), reg r2:V, reg c:L, reg envenv2:*, reg envenv3:V, reg c1:L, reg envenv5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n3:*, reg n4:V, reg __:cls, reg r3:V, reg mkenv:cls, reg r4:V, reg e:*, reg e1:V, reg l:*, reg c2:L, reg e3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n5:*, reg n6:V, reg ____:cls, reg r5:V, reg env:*, reg env1:V, reg c3:L, reg env3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n7:*, reg n8:V, reg __1:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg key:*, reg key1:V, reg is_list:cls, reg r9:V, reg c4:L, reg key2:*, reg key3:V, reg c5:L, reg key5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r10:V, reg dx8:V, reg key6:*, reg key7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg ekey:*, reg ekey1:V, reg datafile:*, reg datafile1:V, reg compressed:*, reg compressed1:V, reg envhook:*, reg envhook1:V, reg lazyLoadDBfetch:cls, reg r13:V, reg ____1:cls, reg data:*, reg data1:V, reg c6:L, reg data3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r14:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg emptyenv:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg l3:*, reg parent_env__:cls, reg r21:V, reg list2env:cls, reg data4:*, reg data5:V, reg c7:L, reg data7:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r22:V, reg p4:p(V +), reg e6:*, reg e7:V, reg p5:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg data8:*, reg data9:V, reg c8:L, reg data11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r28:V, reg c9:V, reg r29:V, reg c10:L, reg data12:*, reg data13:V, reg c11:L, reg data15:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r30:V, reg l4:*, reg attributes__:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg data16:*, reg data17:V, reg c12:L, reg data19:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r34:V, reg c13:V, reg r35:V, reg c14:L, reg c16:V, reg data20:*, reg data21:V, reg c17:L, reg c19:L, reg data23:V, reg dr18:V, reg dc9:L, reg dx20:V, reg c21:L, reg dx21:V, reg r36:V, reg c22:L, reg c23:V, reg c25:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg e8:*, reg e9:V, reg setS4Object:cls, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg key8:*, reg key9:V, reg is_list1:cls, reg r43:V, reg c26:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg quote:cls, reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg key10:*, reg key11:V, reg c27:L, reg key13:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r51:V, reg names:cls, reg r52:V, reg key14:*, reg key15:V, reg c28:L, reg key17:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r53:V, reg expr:*, reg expr1:V, reg parent_env:cls, reg environment:cls, reg r54:V, reg p6:p(V +), reg r56:V, reg e10:*, reg e11:V, reg makeLazy:cls, reg r57:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg data24:*, reg data25:V, reg c29:L, reg data27:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg r61:V, reg c30:V, reg r62:V, reg c31:L, reg c33:V, reg data28:*, reg data29:V, reg c34:L, reg c36:L, reg data31:V, reg dr26:V, reg dc13:L, reg dx28:V, reg c38:L, reg dx29:V, reg r63:V, reg c39:L, reg c40:V, reg c42:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg e12:*, reg e13:V, reg lockEnvironment:cls, reg r66:V, reg e14:*, reg e15:V |
    mkenv;
    st n = n;
    existsInFrame = ldf existsInFrame;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p1 = prom<V +>{
      envenv = ld envenv;
      envenv1 = force? envenv;
      checkMissing(envenv1);
      return envenv1;
    };
    r2 = dyn existsInFrame(p, p1);
    check L28() else D1();
  D1():
    deopt 4 [r2];
  L28():
    c = `as.logical`(r2);
    if c then L29() else L0();
  L0():
    mkenv = ldf mkenv;
    check L36() else D4();
  L29():
    envenv2 = ld envenv;
    check L30() else D2();
  D2():
    deopt 5 [envenv2];
  D4():
    deopt 11 [];
  L30():
    envenv3 = force? envenv2;
    checkMissing(envenv3);
    c1 = `is.object`(envenv3);
    if c1 then L31() else L32(envenv3);
  L36():
    r4 = dyn mkenv();
    check L37() else D5();
  D5():
    deopt 12 [r4];
  L1(dx1):
    popenv;
    return dx1;
  L31():
    dr = tryDispatchBuiltin.1("[[", envenv3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(envenv5):
    n3 = ld n;
    check L34() else D3();
  L37():
    st e = r4;
    e = ld e;
    check L38() else D6();
  D3():
    deopt 7 [envenv5, n3];
  D6():
    deopt 14 [e];
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L34():
    n4 = force? n3;
    __ = ldf `[[` in base;
    r3 = dyn __(envenv5, n4);
    goto L1(r3);
  L38():
    e1 = force? e;
    checkMissing(e1);
    l = ld envenv;
    c2 = `is.object`(l);
    if c2 then L39() else L40(e1, l);
  L2(dx3):
    st envenv = dx3;
    env = ld env;
    check L43() else D8();
  L39():
    dr2 = tryDispatchBuiltin.0("[[<-", l, e1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(e1, dr2);
  L40(e3, l2):
    n5 = ld n;
    check L42() else D7();
  D7():
    deopt 17 [e3, l2, e1, n5];
  D8():
    deopt 21 [env];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L42():
    n6 = force? n5;
    ____ = ldf `[[<-` in base;
    r5 = dyn ____(l2, e1, n6);
    goto L2(r5);
  L43():
    env1 = force? env;
    checkMissing(env1);
    c3 = `is.object`(env1);
    if c3 then L44() else L45(env1);
  L3(dx5):
    st key = dx5;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L48() else L49();
  L44():
    dr4 = tryDispatchBuiltin.1("[[", env1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(dr4);
  L45(env3):
    n7 = ld n;
    check L47() else D9();
  D9():
    deopt 23 [env3, n7];
  L4(r8):
    c4 = `as.logical`(r8);
    if c4 then L52() else L5();
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L47():
    n8 = force? n7;
    __1 = ldf `[[` in base;
    r6 = dyn __1(env3, n8);
    goto L3(r6);
  L48():
    key = ld key;
    check L50() else D10();
  L49():
    r7 = dyn base(<sym key>);
    goto L4(r7);
  D10():
    deopt 29 [key];
  L5():
    key6 = ld key;
    check L59() else D13();
  L6(dx8):
    st ekey = dx8;
    sym1 = ldf lazyLoadDBfetch;
    base1 = ldf lazyLoadDBfetch in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L50():
    key1 = force? key;
    checkMissing(key1);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(key1);
    check L51() else D11();
  L52():
    key2 = ld key;
    check L53() else D12();
  D11():
    deopt 32 [r9];
  D12():
    deopt 33 [key2];
  D13():
    deopt 36 [key6];
  L7(r12):
    st data = r12;
    ____1 = ldf `%||%`;
    check L67() else D19();
  L51():
    goto L4(r9);
  L53():
    key3 = force? key2;
    checkMissing(key3);
    c5 = `is.object`(key3);
    if c5 then L55() else L56(key3);
  L59():
    key7 = force? key6;
    checkMissing(key7);
    goto L6(key7);
  L60():
    ekey = ld ekey;
    check L62() else D14();
  L61():
    r11 = dyn base1(<sym ekey>, <sym datafile>, <sym compressed>, <sym envhook>);
    goto L7(r11);
  D14():
    deopt 41 [ekey];
  D19():
    deopt 53 [];
  L54(dx7):
    goto L6(dx7);
  L55():
    dr6 = tryDispatchBuiltin.1("$", key3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(dr6);
  L56(key5):
    r10 = `$`(key5, <sym eagerKey>);
    goto L54(r10);
  L62():
    ekey1 = force? ekey;
    checkMissing(ekey1);
    datafile = ld datafile;
    check L63() else D15();
  L67():
    p2 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      c6 = `is.object`(data1);
      if c6 then L1() else L2(data1);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", data1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(data3):
      r14 = `$`(data3, <sym enclos>);
      goto L0(r14);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p3 = prom<V +>{
      sym2 = ldf emptyenv;
      base2 = ldf emptyenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      emptyenv = ldf emptyenv in base;
      r18 = dyn emptyenv();
      goto L0(r18);
    L2():
      r16 = dyn base2();
      goto L0(r16);
    };
    r20 = dyn ____1(p2, p3);
    check L68() else D20();
  D15():
    deopt 43 [datafile];
  D20():
    deopt 56 [r20];
  L57():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L54(dx6);
  L63():
    datafile1 = force? datafile;
    checkMissing(datafile1);
    compressed = ld compressed;
    check L64() else D16();
  L68():
    l3 = ld e;
    parent_env__ = ldf `parent.env<-`;
    check L69() else D21();
  D16():
    deopt 45 [compressed];
  D21():
    deopt 58 [r20, l3, r20];
  L64():
    compressed1 = force? compressed;
    checkMissing(compressed1);
    envhook = ld envhook;
    check L65() else D17();
  L69():
    r21 = dyn parent_env__(l3, NULL, r20);
    check L70() else D22();
  D17():
    deopt 47 [envhook];
  D22():
    deopt 60 [r20, r21];
  L65():
    envhook1 = force? envhook;
    checkMissing(envhook1);
    lazyLoadDBfetch = ldf lazyLoadDBfetch in base;
    r13 = dyn lazyLoadDBfetch(ekey1, datafile1, compressed1, envhook1);
    check L66() else D18();
  L70():
    st e = r21;
    list2env = ldf list2env;
    check L71() else D23();
  D18():
    deopt 50 [r13];
  D23():
    deopt 63 [];
  L66():
    goto L7(r13);
  L71():
    p4 = prom<V +>{
      data4 = ld data;
      data5 = force? data4;
      checkMissing(data5);
      c7 = `is.object`(data5);
      if c7 then L1() else L2(data5);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("$", data5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(data7):
      r22 = `$`(data7, <sym bindings>);
      goto L0(r22);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p5 = prom<V +>{
      e6 = ld e;
      e7 = force? e6;
      checkMissing(e7);
      return e7;
    };
    r25 = dyn list2env(p4, p5);
    check L72() else D24();
  D24():
    deopt 66 [r25];
  L72():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L8(r27):
    r29 = `!`(r27);
    c10 = `as.logical`(r29);
    if c10 then L80() else L9();
  L73():
    data8 = ld data;
    check L75() else D25();
  L74():
    r26 = dyn base3(<lang `$`(data, attributes)>);
    goto L8(r26);
  D25():
    deopt 68 [data8];
  L9():
    goto L10();
  L10():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L89() else L90();
  L75():
    data9 = force? data8;
    checkMissing(data9);
    c8 = `is.object`(data9);
    if c8 then L77() else L78(data9);
  L80():
    data12 = ld data;
    check L81() else D26();
  D26():
    deopt 73 [data12];
  L11(r33):
    r35 = `!`(r33);
    c14 = `as.logical`(r35);
    if c14 then L96() else L12(c14);
  L76(dx14):
    c9 = `==`(dx14, NULL);
    goto L8(c9);
  L77():
    dr12 = tryDispatchBuiltin.1("$", data9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L79() else L78(dr12);
  L78(data11):
    r28 = `$`(data11, <sym attributes>);
    goto L76(r28);
  L81():
    data13 = force? data12;
    checkMissing(data13);
    c11 = `is.object`(data13);
    if c11 then L83() else L84(data13);
  L89():
    data16 = ld data;
    check L91() else D29();
  L90():
    r32 = dyn base4(<lang `$`(data, isS4)>);
    goto L11(r32);
  D29():
    deopt 84 [data16];
  L12(c16):
    c25 = `as.logical`(c16);
    if c25 then L103() else L13();
  L79():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L76(dx13);
  L82(dx16):
    l4 = ld e;
    attributes__ = ldf `attributes<-`;
    check L86() else D27();
  L83():
    dr14 = tryDispatchBuiltin.1("$", data13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L85() else L84(dr14);
  L84(data15):
    r30 = `$`(data15, <sym attributes>);
    goto L82(r30);
  L91():
    data17 = force? data16;
    checkMissing(data17);
    c12 = `is.object`(data17);
    if c12 then L93() else L94(data17);
  L96():
    data20 = ld data;
    check L97() else D30();
  D27():
    deopt 77 [dx16, l4, dx16];
  D30():
    deopt 89 [c14, data20];
  L13():
    goto L15();
  L15():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L109() else L110();
  L85():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L82(dx15);
  L86():
    r31 = dyn attributes__(l4, NULL, dx16);
    check L87() else D28();
  L92(dx19):
    c13 = `==`(dx19, NULL);
    goto L11(c13);
  L93():
    dr16 = tryDispatchBuiltin.1("$", data17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L95() else L94(dr16);
  L94(data19):
    r34 = `$`(data19, <sym isS4>);
    goto L92(r34);
  L97():
    data21 = force? data20;
    checkMissing(data21);
    c17 = `is.object`(data21);
    if c17 then L99() else L100(c14, data21);
  L103():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  D28():
    deopt 79 [dx16, r31];
  L14(r38):
    goto L15();
  L16(r42):
    c26 = `as.logical`(r42);
    if c26 then L113() else L17();
  L87():
    st e = r31;
    goto L10();
  L95():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L92(dx18);
  L98(c21, dx21):
    c22 = `as.logical`(dx21);
    c23 = `&&`(c21, c22);
    goto L12(c23);
  L99():
    dr18 = tryDispatchBuiltin.1("$", data21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L101() else L100(c14, dr18);
  L100(c19, data23):
    r36 = `$`(data23, <sym isS4>);
    goto L98(c19, r36);
  L104():
    e8 = ld e;
    check L106() else D31();
  L105():
    r37 = dyn base5(<lang setS4Object(e, TRUE, TRUE)>);
    goto L14(r37);
  L109():
    key8 = ld key;
    check L111() else D33();
  L110():
    r41 = dyn base6(<sym key>);
    goto L16(r41);
  D31():
    deopt 95 [e8];
  D33():
    deopt 105 [key8];
  L17():
    goto L21();
  L21():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L137() else L138();
  L101():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L98(c14, dx20);
  L106():
    e9 = force? e8;
    checkMissing(e9);
    setS4Object = ldf setS4Object in base;
    r39 = dyn setS4Object(e9, TRUE, TRUE);
    check L107() else D32();
  L111():
    key9 = force? key8;
    checkMissing(key9);
    is_list1 = ldf `is.list` in base;
    r43 = dyn is_list1(key9);
    check L112() else D34();
  L113():
    sym7 = ldf quote;
    base7 = ldf quote in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L114() else L115();
  D32():
    deopt 100 [r39];
  D34():
    deopt 108 [r43];
  L18(r45):
    st expr = r45;
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L116() else L117();
  L22(r60):
    r62 = `!`(r60);
    c31 = `as.logical`(r62);
    if c31 then L144() else L23(c31);
  L107():
    goto L14(r39);
  L112():
    goto L16(r43);
  L114():
    quote = ldf quote in base;
    r46 = dyn quote(<lang lazyLoadDBfetch(KEY, datafile, compressed, envhook)>);
    goto L18(r46);
  L115():
    r44 = dyn base7(<lang lazyLoadDBfetch(KEY, datafile, compressed, envhook)>);
    goto L18(r44);
  L137():
    data24 = ld data;
    check L139() else D43();
  L138():
    r59 = dyn base10(<lang `$`(data, locked)>);
    goto L22(r59);
  D43():
    deopt 138 [data24];
  L19(r48):
    goto L21();
  L23(c33):
    c42 = `as.logical`(c33);
    if c42 then L151() else L24();
  L116():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L118() else L119();
  L117():
    r47 = dyn base8(<lang makeLazy(names(`$`(key, lazyKeys)), `$`(key, lazyKeys), expr, parent.env(environment()), e)>);
    goto L19(r47);
  L139():
    data25 = force? data24;
    checkMissing(data25);
    c29 = `is.object`(data25);
    if c29 then L141() else L142(data25);
  L144():
    data28 = ld data;
    check L145() else D44();
  D44():
    deopt 143 [c31, data28];
  L20(r50):
    key14 = ld key;
    check L126() else D37();
  L24():
    goto L26();
  L26():
    e14 = ld e;
    check L157() else D47();
  L118():
    key10 = ld key;
    check L120() else D35();
  L119():
    r49 = dyn base9(<lang `$`(key, lazyKeys)>);
    goto L20(r49);
  L140(dx27):
    c30 = `==`(dx27, NULL);
    goto L22(c30);
  L141():
    dr24 = tryDispatchBuiltin.1("$", data25);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L143() else L142(dr24);
  L142(data27):
    r61 = `$`(data27, <sym locked>);
    goto L140(r61);
  L145():
    data29 = force? data28;
    checkMissing(data29);
    c34 = `is.object`(data29);
    if c34 then L147() else L148(c31, data29);
  L151():
    sym11 = ldf `.Internal`;
    base11 = ldf `.Internal` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L152() else L153();
  D35():
    deopt 117 [key10];
  D37():
    deopt 122 [key14];
  D47():
    deopt 156 [e14];
  L25(r65):
    goto L26();
  L120():
    key11 = force? key10;
    checkMissing(key11);
    c27 = `is.object`(key11);
    if c27 then L122() else L123(key11);
  L126():
    key15 = force? key14;
    checkMissing(key15);
    c28 = `is.object`(key15);
    if c28 then L128() else L129(key15);
  L143():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L140(dx26);
  L146(c38, dx29):
    c39 = `as.logical`(dx29);
    c40 = `&&`(c38, c39);
    goto L23(c40);
  L147():
    dr26 = tryDispatchBuiltin.1("$", data29);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L149() else L148(c31, dr26);
  L148(c36, data31):
    r63 = `$`(data31, <sym locked>);
    goto L146(c36, r63);
  L152():
    e12 = ld e;
    check L154() else D45();
  L153():
    r64 = dyn base11(<lang lockEnvironment(e, FALSE)>);
    goto L25(r64);
  L157():
    e15 = force? e14;
    checkMissing(e15);
    popenv;
    return e15;
  D45():
    deopt 149 [e12];
  L121(dx23):
    names = ldf names in base;
    r52 = dyn names(dx23);
    check L125() else D36();
  L122():
    dr20 = tryDispatchBuiltin.1("$", key11);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L124() else L123(dr20);
  L123(key13):
    r51 = `$`(key13, <sym lazyKeys>);
    goto L121(r51);
  L127(dx25):
    expr = ld expr;
    check L131() else D38();
  L128():
    dr22 = tryDispatchBuiltin.1("$", key15);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L130() else L129(dr22);
  L129(key17):
    r53 = `$`(key17, <sym lazyKeys>);
    goto L127(r53);
  L149():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L146(c31, dx28);
  L154():
    e13 = force? e12;
    checkMissing(e13);
    lockEnvironment = ldf lockEnvironment in base;
    r66 = dyn lockEnvironment(e13, FALSE);
    check L155() else D46();
  D36():
    deopt 121 [r52];
  D38():
    deopt 125 [expr];
  D46():
    deopt 153 [r66];
  L124():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L121(dx22);
  L125():
    goto L20(r52);
  L130():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L127(dx24);
  L131():
    expr1 = force? expr;
    checkMissing(expr1);
    parent_env = ldf `parent.env`;
    check L132() else D39();
  L155():
    goto L25(r66);
  D39():
    deopt 128 [];
  L132():
    p6 = prom<V +>{
      environment = ldf environment;
      r54 = dyn environment();
      return r54;
    };
    r56 = dyn parent_env(p6);
    check L133() else D40();
  D40():
    deopt 130 [r56];
  L133():
    e10 = ld e;
    check L134() else D41();
  D41():
    deopt 131 [e10];
  L134():
    e11 = force? e10;
    checkMissing(e11);
    makeLazy = ldf makeLazy in base;
    r57 = dyn makeLazy(r50, dx25, expr1, r56, e11);
    check L135() else D42();
  D42():
    deopt 134 [r57];
  L135():
    goto L19(r57);
  }
}