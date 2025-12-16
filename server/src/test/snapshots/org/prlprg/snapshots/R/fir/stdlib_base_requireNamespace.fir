fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner374535740;
    st requireNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner374535740(package, `...`, quietly) {
  (reg package:*, reg ddd:dots, reg quietly:*) -+> V { var package:*, var `...`:dots?, var quietly:*, reg quietly_isMissing:L, reg quietly_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package1:*, reg package2:V, reg as_character:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg package3:*, reg package4:V, reg getRegisteredNamespace:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ns:*, reg ns1:V, reg c1:V, reg c2:L, reg quietly1:*, reg quietly2:V, reg r11:V, reg c3:L, reg packageStartupMessage:cls, reg gettextf:cls, reg package5:*, reg package6:V, reg p:p(V +), reg r13:V, reg p1:p(V +), reg r15:V, reg tryCatch:cls, reg loadNamespace:cls, reg package7:*, reg package8:V, reg p2:p(V +), reg ddd1:dots?, reg r18:V, reg p3:p(V +), reg r20:cls, reg p4:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg value:*, reg value1:V, reg inherits:cls, reg r25:V, reg c4:L, reg quietly3:*, reg quietly4:V, reg r26:V, reg c5:L, reg conditionMessage:cls, reg value2:*, reg value3:V, reg p5:p(V +), reg r28:V, reg cat:cls, reg sQuote:cls, reg msg:*, reg msg1:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg stderr:cls, reg r32:V, reg p8:p(V +), reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg printDeferredWarnings:cls, reg r37:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg res:*, reg res1:V, reg invisible:cls, reg r43:V |
    mkenv;
    st package = package;
    st `...` = ddd;
    quietly_isMissing = missing.0(quietly);
    if quietly_isMissing then L0(FALSE) else L0(quietly);
  L0(quietly_orDefault):
    st quietly = quietly_orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    c = `is.object`(r1);
    if c then L20() else L21(r1);
  L16():
    package1 = ld package;
    check L18() else D0();
  L17():
    r = dyn base(<sym package>);
    goto L1(r);
  D0():
    deopt 2 [package1];
  L2(dx1):
    st package = dx1;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L18():
    package2 = force? package1;
    checkMissing(package2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(package2);
    check L19() else D1();
  L20():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(r4):
    __ = ldf `[[` in base;
    r5 = dyn __(r4, 1);
    goto L2(r5);
  D1():
    deopt 5 [r2];
  L3(r7):
    st ns = r7;
    st res = TRUE;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L19():
    goto L1(r2);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L23():
    package3 = ld package;
    check L25() else D2();
  L24():
    r6 = dyn base1(<lang getRegisteredNamespace(package)>);
    goto L3(r6);
  D2():
    deopt 12 [package3];
  L4(r10):
    c2 = `as.logical`(r10);
    if c2 then L30() else L5();
  L25():
    package4 = force? package3;
    checkMissing(package4);
    getRegisteredNamespace = ldf getRegisteredNamespace in base;
    r8 = dyn getRegisteredNamespace(package4);
    check L26() else D3();
  L27():
    ns = ld ns;
    check L29() else D4();
  L28():
    r9 = dyn base2(<sym ns>);
    goto L4(r9);
  D3():
    deopt 15 [r8];
  D4():
    deopt 21 [ns];
  L5():
    goto L14();
  L14():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L26():
    goto L3(r8);
  L29():
    ns1 = force? ns;
    checkMissing(ns1);
    c1 = `==`(ns1, NULL);
    goto L4(c1);
  L30():
    quietly1 = ld quietly;
    check L31() else D5();
  D5():
    deopt 24 [quietly1];
  L15(r42):
    popenv;
    return r42;
  L31():
    quietly2 = force? quietly1;
    checkMissing(quietly2);
    r11 = `!`(quietly2);
    c3 = `as.logical`(r11);
    if c3 then L32() else L6();
  L55():
    res = ld res;
    check L57() else D18();
  L56():
    r41 = dyn base5(<sym res>);
    goto L15(r41);
  D18():
    deopt 83 [res];
  L6():
    goto L7();
  L7():
    tryCatch = ldf tryCatch;
    check L36() else D8();
  L32():
    packageStartupMessage = ldf packageStartupMessage;
    check L33() else D6();
  L57():
    res1 = force? res;
    checkMissing(res1);
    invisible = ldf invisible in base;
    r43 = dyn invisible(res1);
    check L58() else D19();
  D6():
    deopt 28 [];
  D8():
    deopt 36 [];
  D19():
    deopt 86 [r43];
  L33():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      r13 = dyn gettextf("Loading required namespace: %s", p);
      return r13;
    };
    r15 = dyn packageStartupMessage[, domain](p1, NA_LGL);
    check L34() else D7();
  L36():
    p3 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      p2 = prom<V +>{
        package7 = ld package;
        package8 = force? package7;
        checkMissing(package8);
        return package8;
      };
      ddd1 = ld `...`;
      r18 = dyn loadNamespace[, `...`](p2, ddd1);
      return r18;
    };
    p4 = prom<V +>{
      r20 = clos inner1560918050;
      return r20;
    };
    r22 = dyn tryCatch[, error](p3, p4);
    check L37() else D9();
  L58():
    goto L15(r43);
  D7():
    deopt 32 [r15];
  D9():
    deopt 40 [r22];
  L34():
    goto L7();
  L37():
    st value = r22;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L8(r24):
    c4 = `as.logical`(r24);
    if c4 then L42() else L9();
  L38():
    value = ld value;
    check L40() else D10();
  L39():
    r23 = dyn base3(<sym value>, "error");
    goto L8(r23);
  D10():
    deopt 44 [value];
  L9():
    goto L13(NULL);
  L13(r39):
    goto L14();
  L40():
    value1 = force? value;
    checkMissing(value1);
    inherits = ldf inherits in base;
    r25 = dyn inherits(value1, "error", FALSE);
    check L41() else D11();
  L42():
    quietly3 = ld quietly;
    check L43() else D12();
  D11():
    deopt 49 [r25];
  D12():
    deopt 50 [quietly3];
  L41():
    goto L8(r25);
  L43():
    quietly4 = force? quietly3;
    checkMissing(quietly4);
    r26 = `!`(quietly4);
    c5 = `as.logical`(r26);
    if c5 then L44() else L10();
  L10():
    goto L12();
  L12():
    st res = FALSE;
    goto L13(FALSE);
  L44():
    conditionMessage = ldf conditionMessage;
    check L45() else D13();
  D13():
    deopt 54 [];
  L45():
    p5 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r28 = dyn conditionMessage(p5);
    check L46() else D14();
  D14():
    deopt 56 [r28];
  L46():
    st msg = r28;
    cat = ldf cat;
    check L47() else D15();
  D15():
    deopt 59 [];
  L47():
    p7 = prom<V +>{
      sQuote = ldf sQuote;
      p6 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r30 = dyn sQuote(p6);
      return r30;
    };
    p8 = prom<V +>{
      stderr = ldf stderr;
      r32 = dyn stderr();
      return r32;
    };
    r34 = dyn cat[, , , file, sep]("Failed with error:  ", p7, "\n", p8, "");
    check L48() else D16();
  D16():
    deopt 67 [r34];
  L48():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L11(r36):
    goto L12();
  L49():
    printDeferredWarnings = ldf printDeferredWarnings in base;
    r37 = dyn printDeferredWarnings();
    check L51() else D17();
  L50():
    r35 = dyn base4(<lang printDeferredWarnings()>);
    goto L11(r35);
  D17():
    deopt 71 [r37];
  L51():
    goto L11(r37);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}