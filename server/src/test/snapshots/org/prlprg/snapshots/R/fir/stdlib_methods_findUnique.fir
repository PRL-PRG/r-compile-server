fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1002196868;
    st findUnique = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1002196868(what, message, where) {
  (reg what:*, reg message:*, reg where:*) -+> V { var what:*, var message:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg _findAll:cls, reg what1:*, reg what2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg where3:*, reg where4:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg c1:L, reg sQuote:cls, reg what3:*, reg what4:V, reg p4:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg where5:*, reg where6:V, reg is_list:cls, reg r19:V, reg c2:L, reg unlist:cls, reg where7:*, reg where8:V, reg p5:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg where9:*, reg where10:V, reg is_numeric:cls, reg r25:V, reg c3:L, reg search:cls, reg r26:V, reg c4:L, reg r28:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg where11:*, reg where12:V, reg __:cls, reg r29:V, reg warning:cls, reg message1:*, reg message2:V, reg p6:p(V +), reg sprintf:cls, reg paste:cls, reg sQuote1:cls, reg where13:*, reg where14:V, reg p7:p(V +), reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg r38:V, reg where15:*, reg where16:V, reg c5:L, reg where18:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r39:V, reg where19:*, reg where20:V |
    mkenv;
    st what = what;
    st message = message;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    _findAll = ldf `.findAll`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p2 = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn _findAll[, where](p2, p3);
    check L17() else D1();
  D1():
    deopt 5 [r6];
  L17():
    st where = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L2(r8):
    r10 = `>`(r8, 1);
    c = `as.logical`(r10);
    if c then L22() else L3();
  L18():
    where3 = ld where;
    check L20() else D2();
  L19():
    r7 = dyn base(<sym where>);
    goto L2(r7);
  D2():
    deopt 9 [where3];
  L3():
    goto L15();
  L15():
    where19 = ld where;
    check L56() else D18();
  L20():
    where4 = force? where3;
    checkMissing(where4);
    length = ldf length in base;
    r9 = dyn length(where4);
    check L21() else D3();
  L22():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D3():
    deopt 12 [r9];
  D18():
    deopt 68 [where19];
  L4(r12):
    c1 = `as.logical`(r12);
    if c1 then L25() else L5();
  L21():
    goto L2(r9);
  L23():
    missing = ldf missing in base;
    r13 = dyn missing(<sym message>);
    goto L4(r13);
  L24():
    r11 = dyn base1(<sym message>);
    goto L4(r11);
  L56():
    where20 = force? where19;
    checkMissing(where20);
    popenv;
    return where20;
  L5():
    goto L6();
  L6():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L25():
    sQuote = ldf sQuote;
    check L26() else D4();
  D4():
    deopt 19 [];
  L7(r18):
    c2 = `as.logical`(r18);
    if c2 then L33() else L8();
  L26():
    p4 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    r15 = dyn sQuote(p4);
    check L27() else D5();
  L29():
    where5 = ld where;
    check L31() else D6();
  L30():
    r17 = dyn base2(<sym where>);
    goto L7(r17);
  D5():
    deopt 21 [r15];
  D6():
    deopt 27 [where5];
  L8():
    goto L9();
  L9():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L27():
    st message = r15;
    goto L6();
  L31():
    where6 = force? where5;
    checkMissing(where6);
    is_list = ldf `is.list` in base;
    r19 = dyn is_list(where6);
    check L32() else D7();
  L33():
    unlist = ldf unlist;
    check L34() else D8();
  D7():
    deopt 30 [r19];
  D8():
    deopt 32 [];
  L10(r24):
    c3 = `as.logical`(r24);
    if c3 then L41() else L11();
  L32():
    goto L7(r19);
  L34():
    p5 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r21 = dyn unlist(p5);
    check L35() else D9();
  L37():
    where9 = ld where;
    check L39() else D10();
  L38():
    r23 = dyn base3(<sym where>);
    goto L10(r23);
  D9():
    deopt 34 [r21];
  D10():
    deopt 40 [where9];
  L11():
    goto L13();
  L13():
    warning = ldf warning;
    check L49() else D15();
  L35():
    st where = r21;
    goto L9();
  L39():
    where10 = force? where9;
    checkMissing(where10);
    is_numeric = ldf `is.numeric` in base;
    r25 = dyn is_numeric(where10);
    check L40() else D11();
  L41():
    search = ldf search;
    check L42() else D12();
  D11():
    deopt 43 [r25];
  D12():
    deopt 45 [];
  D15():
    deopt 54 [];
  L40():
    goto L10(r25);
  L42():
    r26 = dyn search();
    check L43() else D13();
  L49():
    p6 = prom<V +>{
      message1 = ld message;
      message2 = force? message1;
      checkMissing(message2);
      return message2;
    };
    p10 = prom<V +>{
      sprintf = ldf sprintf;
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          sQuote1 = ldf sQuote;
          p7 = prom<V +>{
            where13 = ld where;
            where14 = force? where13;
            checkMissing(where14);
            return where14;
          };
          r32 = dyn sQuote1(p7);
          return r32;
        };
        r34 = dyn paste[, collapse](p8, ", ");
        return r34;
      };
      r36 = dyn sprintf(" found on: %s; using the first one", p9);
      return r36;
    };
    r38 = dyn warning[, , domain](p6, p10, NA_LGL);
    check L50() else D16();
  D13():
    deopt 46 [r26];
  D16():
    deopt 59 [r38];
  L43():
    c4 = `is.object`(r26);
    if c4 then L44() else L45(r26);
  L50():
    where15 = ld where;
    check L51() else D17();
  D17():
    deopt 60 [where15];
  L12(dx1):
    st where = dx1;
    goto L13();
  L44():
    dr = tryDispatchBuiltin.1("[", r26);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(r28):
    where11 = ld where;
    check L47() else D14();
  L51():
    where16 = force? where15;
    checkMissing(where16);
    c5 = `is.object`(where16);
    if c5 then L52() else L53(where16);
  D14():
    deopt 47 [r28, where11];
  L14(dx4):
    st where = dx4;
    goto L15();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L47():
    where12 = force? where11;
    __ = ldf `[` in base;
    r29 = dyn __(r28, where12);
    goto L12(r29);
  L52():
    dr2 = tryDispatchBuiltin.1("[", where16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(where18):
    __1 = ldf `[` in base;
    r39 = dyn __1(where18, 1);
    goto L14(r39);
  L54():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx3);
  }
}