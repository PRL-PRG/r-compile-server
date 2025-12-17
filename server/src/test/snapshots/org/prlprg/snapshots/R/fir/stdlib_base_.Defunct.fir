fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2010815835;
    st `.Defunct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2010815835(new, package, msg) {
  (reg new:*, reg package:*, reg msg:*) -+> V { var new:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var msg:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_call:cls, reg sys_parent:cls, reg r2:V, reg p:p(V +), reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg as_character:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c1:L, reg gettextf:cls, reg fname:*, reg fname1:V, reg c2:L, reg fname3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg fname6:V, reg r13:V, reg fname7:*, reg fname8:V, reg length:cls, reg r14:V, reg __1:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg missing1:cls, reg r20:V, reg r21:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg msg1:*, reg msg2:V, reg gettextf1:cls, reg new1:*, reg new2:V, reg p2:p(V +), reg r25:V, reg c4:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg msg3:*, reg msg4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg package1:*, reg package2:V, reg c5:V, reg r32:V, reg c6:L, reg gettextf2:cls, reg package3:*, reg package4:V, reg p3:p(V +), reg r34:V, reg r35:V, reg gettext:cls, reg r36:V, reg c7:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg msg5:*, reg msg6:V, reg as_character1:cls, reg r41:V, reg paste:cls, reg msg7:*, reg msg8:V, reg p4:p(V +), reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg missing2:cls, reg r46:V, reg c8:L, reg stop:cls, reg errorCondition:cls, reg msg9:*, reg msg10:V, reg p5:p(V +), reg fname9:*, reg fname10:V, reg p6:p(V +), reg new3:*, reg new4:V, reg p7:p(V +), reg package5:*, reg package6:V, reg p8:p(V +), reg sys_call1:cls, reg sys_parent1:cls, reg r52:V, reg p9:p(V +), reg r54:V, reg p10:p(V +), reg r56:V, reg p11:p(V +), reg r58:V |
    mkenv;
    st new = new;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    st msg = msg;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r1):
    st fname = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L18():
    sys_call = ldf `sys.call`;
    check L20() else D0();
  L19():
    r = dyn base(<lang `[[`(sys.call(sys.parent()), 1)>);
    goto L1(r);
  D0():
    deopt 3 [];
  L3(r10):
    c1 = `as.logical`(r10);
    if c1 then L28() else L4();
  L20():
    p = prom<V +>{
      sys_parent = ldf `sys.parent`;
      r2 = dyn sys_parent();
      return r2;
    };
    r4 = dyn sys_call(p);
    check L21() else D1();
  L26():
    missing = ldf missing in base;
    r11 = dyn missing(<sym msg>);
    goto L3(r11);
  L27():
    r9 = dyn base1(<sym msg>);
    goto L3(r9);
  D1():
    deopt 5 [r4];
  L4():
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  L13():
    paste = ldf paste;
    check L59() else D18();
  L21():
    c = `is.object`(r4);
    if c then L22() else L23(r4);
  L28():
    gettextf = ldf gettextf;
    check L29() else D3();
  D3():
    deopt 16 [];
  D18():
    deopt 68 [];
  L2(dx1):
    as_character = ldf `as.character` in base;
    r8 = dyn as_character(dx1);
    check L25() else D2();
  L14(r40):
    st msg = r40;
    goto L13();
  L22():
    dr = tryDispatchBuiltin.1("[[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r6):
    __ = ldf `[[` in base;
    r7 = dyn __(r6, 1);
    goto L2(r7);
  L29():
    p1 = prom<V +>{
      fname = ld fname;
      fname1 = force? fname;
      checkMissing(fname1);
      c2 = `is.object`(fname1);
      if c2 then L2() else L3(fname1);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", fname1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(fname3):
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L1(fname6, r13):
      __1 = ldf `[` in base;
      r15 = dyn __1(fname6, r13);
      goto L0(r15);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      fname7 = ld fname;
      fname8 = force? fname7;
      checkMissing(fname8);
      length = ldf length in base;
      r14 = dyn length(fname8);
      goto L1(fname3, r14);
    L6():
      r12 = dyn base2(<sym fname>);
      goto L1(fname3, r12);
    };
    r17 = dyn gettextf("'%s' is defunct.\n", p1);
    check L30() else D4();
  L55():
    msg5 = ld msg;
    check L57() else D16();
  L56():
    r39 = dyn base7(<sym msg>);
    goto L14(r39);
  L59():
    p4 = prom<V +>{
      msg7 = ld msg;
      msg8 = force? msg7;
      checkMissing(msg8);
      return msg8;
    };
    r43 = dyn paste[, collapse](p4, "");
    check L60() else D19();
  D2():
    deopt 10 [r8];
  D4():
    deopt 19 [r17];
  D16():
    deopt 62 [msg5];
  D19():
    deopt 72 [r43];
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L25():
    goto L1(r8);
  L30():
    st msg = r17;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L57():
    msg6 = force? msg5;
    checkMissing(msg6);
    as_character1 = ldf `as.character` in base;
    r41 = dyn as_character1(msg6);
    check L58() else D17();
  L60():
    st msg = r43;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L61() else L62();
  D17():
    deopt 65 [r41];
  L5(r19):
    r21 = `!`(r19);
    c3 = `as.logical`(r21);
    if c3 then L33() else L6();
  L15(r45):
    c8 = `as.logical`(r45);
    if c8 then L63() else L16();
  L31():
    missing1 = ldf missing in base;
    r20 = dyn missing1(<sym new>);
    goto L5(r20);
  L32():
    r18 = dyn base3(<sym new>);
    goto L5(r18);
  L58():
    goto L14(r41);
  L61():
    missing2 = ldf missing in base;
    r46 = dyn missing2(<sym new>);
    goto L15(r46);
  L62():
    r44 = dyn base8(<sym new>);
    goto L15(r44);
  L6():
    goto L8();
  L8():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L16():
    goto L17();
  L17():
    stop = ldf stop;
    check L65() else D20();
  L33():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L63():
    st new = NULL;
    goto L17();
  D20():
    deopt 83 [];
  L7(r23):
    st msg = r23;
    goto L8();
  L9(r29):
    st msg = r29;
    goto L13();
  L34():
    msg1 = ld msg;
    check L36() else D5();
  L35():
    r22 = dyn base4(<sym msg>, <lang gettextf("Use '%s' instead.\n", new)>);
    goto L7(r22);
  L41():
    msg3 = ld msg;
    check L43() else D9();
  L42():
    r28 = dyn base5(<sym msg>, <lang if(`!`(is.null(package)), gettextf("See help(\"Defunct\") and help(\"%s-defunct\").", package), gettext("See help(\"Defunct\")"))>);
    goto L9(r28);
  L65():
    p11 = prom<V +>{
      errorCondition = ldf errorCondition;
      p5 = prom<V +>{
        msg9 = ld msg;
        msg10 = force? msg9;
        checkMissing(msg10);
        return msg10;
      };
      p6 = prom<V +>{
        fname9 = ld fname;
        fname10 = force? fname9;
        checkMissing(fname10);
        return fname10;
      };
      p7 = prom<V +>{
        new3 = ld new;
        new4 = force? new3;
        checkMissing(new4);
        return new4;
      };
      p8 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      p10 = prom<V +>{
        sys_call1 = ldf `sys.call`;
        p9 = prom<V +>{
          sys_parent1 = ldf `sys.parent`;
          r52 = dyn sys_parent1();
          return r52;
        };
        r54 = dyn sys_call1(p9);
        return r54;
      };
      r56 = dyn errorCondition[, old, new, package, class, call](p5, p6, p7, p8, "defunctError", p10);
      return r56;
    };
    r58 = dyn stop(p11);
    check L66() else D21();
  D5():
    deopt 27 [msg1];
  D9():
    deopt 41 [msg3];
  D21():
    deopt 85 [r58];
  L36():
    msg2 = force? msg1;
    checkMissing(msg2);
    gettextf1 = ldf gettextf;
    check L37() else D6();
  L43():
    msg4 = force? msg3;
    checkMissing(msg4);
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  L66():
    popenv;
    return r58;
  D6():
    deopt 30 [];
  L10(r31):
    r32 = `!`(r31);
    c6 = `as.logical`(r32);
    if c6 then L47() else L11();
  L37():
    p2 = prom<V +>{
      new1 = ld new;
      new2 = force? new1;
      checkMissing(new2);
      return new2;
    };
    r25 = dyn gettextf1("Use '%s' instead.\n", p2);
    check L38() else D7();
  L44():
    package1 = ld package;
    check L46() else D10();
  L45():
    r30 = dyn base6(<sym package>);
    goto L10(r30);
  D7():
    deopt 33 [r25];
  D10():
    deopt 44 [package1];
  L11():
    gettext = ldf gettext;
    check L51() else D13();
  L12(r35):
    c7 = ldf c in base;
    r37 = dyn c7(msg4, r35);
    check L53() else D15();
  L38():
    c4 = ldf c in base;
    r26 = dyn c4(msg2, r25);
    check L39() else D8();
  L46():
    package2 = force? package1;
    checkMissing(package2);
    c5 = `==`(package2, NULL);
    goto L10(c5);
  L47():
    gettextf2 = ldf gettextf;
    check L48() else D11();
  D8():
    deopt 35 [r26];
  D11():
    deopt 49 [];
  D13():
    deopt 54 [];
  D15():
    deopt 58 [r37];
  L39():
    goto L7(r26);
  L48():
    p3 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r34 = dyn gettextf2("See help(\"Defunct\") and help(\"%s-defunct\").", p3);
    check L49() else D12();
  L51():
    r36 = dyn gettext("See help(\"Defunct\")");
    check L52() else D14();
  L53():
    goto L9(r37);
  D12():
    deopt 52 [r34];
  D14():
    deopt 56 [r36];
  L49():
    goto L12(r34);
  L52():
    goto L12(r36);
  }
}