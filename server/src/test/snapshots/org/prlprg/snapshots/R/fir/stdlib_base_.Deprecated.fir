fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner819004888;
    st `.Deprecated` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner819004888(new, package, msg, old) {
  (reg new:*, reg package:*, reg msg:*, reg old:*) -+> V { var new:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var msg:*, var old:*, reg old_isMissing:L, reg old_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_call:cls, reg sys_parent:cls, reg r2:V, reg p:p(V +), reg r4:V, reg as_character:cls, reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg missing:cls, reg r12:V, reg c1:L, reg gettextf:cls, reg old1:*, reg old2:V, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg missing1:cls, reg r17:V, reg r18:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg msg1:*, reg msg2:V, reg gettextf1:cls, reg new1:*, reg new2:V, reg p3:p(V +), reg r22:V, reg c3:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg msg3:*, reg msg4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg package1:*, reg package2:V, reg c4:V, reg r29:V, reg c5:L, reg gettextf2:cls, reg package3:*, reg package4:V, reg p4:p(V +), reg r31:V, reg r32:V, reg gettext:cls, reg r33:V, reg c6:cls, reg r34:V, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg msg5:*, reg msg6:V, reg as_character1:cls, reg r37:V, reg paste:cls, reg msg7:*, reg msg8:V, reg p5:p(V +), reg r39:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg missing2:cls, reg r42:V, reg c7:L, reg warning:cls, reg warningCondition:cls, reg msg9:*, reg msg10:V, reg p6:p(V +), reg old3:*, reg old4:V, reg p7:p(V +), reg new3:*, reg new4:V, reg p8:p(V +), reg package5:*, reg package6:V, reg p9:p(V +), reg sys_call1:cls, reg sys_parent1:cls, reg r48:V, reg p10:p(V +), reg r50:V, reg p11:p(V +), reg r52:V, reg p12:p(V +), reg r54:V |
    mkenv;
    st new = new;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    st msg = msg;
    old_isMissing = missing.0(old);
    if old_isMissing then L1() else L2(old);
  L1():
    p1 = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `is.object`(r1);
      if c then L4() else L5(r1);
    L2():
      sys_call = ldf `sys.call`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r2 = dyn sys_parent();
        return r2;
      };
      r4 = dyn sys_call(p);
      as_character = ldf `as.character` in base;
      r5 = dyn as_character(r4);
      goto L0(r5);
    L3():
      r = dyn base(<lang sys.call(sys.parent())>);
      goto L0(r);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r7):
      __ = ldf `[` in base;
      r8 = dyn __(r7, 1);
      goto L1(r8);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    goto L2(p1);
  L2(old_orDefault):
    st old = old_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(r11):
    c1 = `as.logical`(r11);
    if c1 then L19() else L4();
  L17():
    missing = ldf missing in base;
    r12 = dyn missing(<sym msg>);
    goto L3(r12);
  L18():
    r10 = dyn base1(<sym msg>);
    goto L3(r10);
  L4():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  L13(r35):
    st msg = r35;
    paste = ldf paste;
    check L50() else D15();
  L19():
    gettextf = ldf gettextf;
    check L20() else D0();
  D0():
    deopt 4 [];
  D15():
    deopt 55 [];
  L20():
    p2 = prom<V +>{
      old1 = ld old;
      old2 = force? old1;
      checkMissing(old2);
      return old2;
    };
    r14 = dyn gettextf("'%s' is deprecated.\n", p2);
    check L21() else D1();
  L46():
    msg5 = ld msg;
    check L48() else D13();
  L47():
    r36 = dyn base6(<sym msg>);
    goto L13(r36);
  L50():
    p5 = prom<V +>{
      msg7 = ld msg;
      msg8 = force? msg7;
      checkMissing(msg8);
      return msg8;
    };
    r39 = dyn paste[, collapse](p5, "");
    check L51() else D16();
  D1():
    deopt 7 [r14];
  D13():
    deopt 49 [msg5];
  D16():
    deopt 59 [r39];
  L21():
    st msg = r14;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L48():
    msg6 = force? msg5;
    checkMissing(msg6);
    as_character1 = ldf `as.character` in base;
    r37 = dyn as_character1(msg6);
    check L49() else D14();
  L51():
    st msg = r39;
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L52() else L53();
  D14():
    deopt 52 [r37];
  L5(r16):
    r18 = `!`(r16);
    c2 = `as.logical`(r18);
    if c2 then L24() else L6();
  L14(r41):
    c7 = `as.logical`(r41);
    if c7 then L54() else L15();
  L22():
    missing1 = ldf missing in base;
    r17 = dyn missing1(<sym new>);
    goto L5(r17);
  L23():
    r15 = dyn base2(<sym new>);
    goto L5(r15);
  L49():
    goto L13(r37);
  L52():
    missing2 = ldf missing in base;
    r42 = dyn missing2(<sym new>);
    goto L14(r42);
  L53():
    r40 = dyn base7(<sym new>);
    goto L14(r40);
  L6():
    goto L8();
  L8():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L15():
    goto L16();
  L16():
    warning = ldf warning;
    check L56() else D17();
  L24():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L54():
    st new = NULL;
    goto L16();
  D17():
    deopt 70 [];
  L7(r20):
    st msg = r20;
    goto L8();
  L9(r26):
    goto L13(r26);
  L25():
    msg1 = ld msg;
    check L27() else D2();
  L26():
    r19 = dyn base3(<sym msg>, <lang gettextf("Use '%s' instead.\n", new)>);
    goto L7(r19);
  L32():
    msg3 = ld msg;
    check L34() else D6();
  L33():
    r25 = dyn base4(<sym msg>, <lang if(`!`(is.null(package)), gettextf("See help(\"Deprecated\") and help(\"%s-deprecated\").", package), gettext("See help(\"Deprecated\")"))>);
    goto L9(r25);
  L56():
    p12 = prom<V +>{
      warningCondition = ldf warningCondition;
      p6 = prom<V +>{
        msg9 = ld msg;
        msg10 = force? msg9;
        checkMissing(msg10);
        return msg10;
      };
      p7 = prom<V +>{
        old3 = ld old;
        old4 = force? old3;
        checkMissing(old4);
        return old4;
      };
      p8 = prom<V +>{
        new3 = ld new;
        new4 = force? new3;
        checkMissing(new4);
        return new4;
      };
      p9 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      p11 = prom<V +>{
        sys_call1 = ldf `sys.call`;
        p10 = prom<V +>{
          sys_parent1 = ldf `sys.parent`;
          r48 = dyn sys_parent1();
          return r48;
        };
        r50 = dyn sys_call1(p10);
        return r50;
      };
      r52 = dyn warningCondition[, old, new, package, class, call](p6, p7, p8, p9, "deprecatedWarning", p11);
      return r52;
    };
    r54 = dyn warning(p12);
    check L57() else D18();
  D2():
    deopt 15 [msg1];
  D6():
    deopt 29 [msg3];
  D18():
    deopt 72 [r54];
  L27():
    msg2 = force? msg1;
    checkMissing(msg2);
    gettextf1 = ldf gettextf;
    check L28() else D3();
  L34():
    msg4 = force? msg3;
    checkMissing(msg4);
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L57():
    popenv;
    return r54;
  D3():
    deopt 18 [];
  L10(r28):
    r29 = `!`(r28);
    c5 = `as.logical`(r29);
    if c5 then L38() else L11();
  L28():
    p3 = prom<V +>{
      new1 = ld new;
      new2 = force? new1;
      checkMissing(new2);
      return new2;
    };
    r22 = dyn gettextf1("Use '%s' instead.\n", p3);
    check L29() else D4();
  L35():
    package1 = ld package;
    check L37() else D7();
  L36():
    r27 = dyn base5(<sym package>);
    goto L10(r27);
  D4():
    deopt 21 [r22];
  D7():
    deopt 32 [package1];
  L11():
    gettext = ldf gettext;
    check L42() else D10();
  L12(r32):
    c6 = ldf c in base;
    r34 = dyn c6(msg4, r32);
    check L44() else D12();
  L29():
    c3 = ldf c in base;
    r23 = dyn c3(msg2, r22);
    check L30() else D5();
  L37():
    package2 = force? package1;
    checkMissing(package2);
    c4 = `==`(package2, NULL);
    goto L10(c4);
  L38():
    gettextf2 = ldf gettextf;
    check L39() else D8();
  D5():
    deopt 23 [r23];
  D8():
    deopt 37 [];
  D10():
    deopt 42 [];
  D12():
    deopt 46 [r34];
  L30():
    goto L7(r23);
  L39():
    p4 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r31 = dyn gettextf2("See help(\"Deprecated\") and help(\"%s-deprecated\").", p4);
    check L40() else D9();
  L42():
    r33 = dyn gettext("See help(\"Deprecated\")");
    check L43() else D11();
  L44():
    goto L9(r34);
  D9():
    deopt 40 [r31];
  D11():
    deopt 44 [r33];
  L40():
    goto L12(r31);
  L43():
    goto L12(r33);
  }
}