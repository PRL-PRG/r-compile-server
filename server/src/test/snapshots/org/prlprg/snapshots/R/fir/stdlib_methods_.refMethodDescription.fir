fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1079421479;
    st `.refMethodDescription` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1079421479(methodDefs, fieldnames, otherMethods) {
  (reg methodDefs:*, reg fieldnames:*, reg otherMethods:*) -+> V { var methodDefs:*, var fieldnames:*, var otherMethods:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg methodDefs1:*, reg methodDefs2:V, reg names:cls, reg r2:V, reg vapply:cls, reg methodDefs3:*, reg methodDefs4:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg methodnames:*, reg methodnames1:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg paste0:cls, reg methodnames2:*, reg methodnames3:V, reg p2:p(V +), reg methodargs:*, reg methodargs1:V, reg p3:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg _methods_head:*, reg _methods_head1:V, reg _methods_body:*, reg _methods_body1:V, reg c1:cls, reg r16:V, reg character:cls, reg r18:V, reg vapply1:cls, reg otherMethods1:*, reg otherMethods2:V, reg p4:p(V +), reg r20:cls, reg p5:p(V +), reg r22:V, reg methodclasses:*, reg methodclasses1:V, reg r23:V, reg otherMethods3:*, reg otherMethods4:V, reg c2:L, reg otherMethods6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg superclass:*, reg superclass1:V, reg __:cls, reg r24:V, reg methodclasses2:*, reg methodclasses3:V, reg c3:L, reg methodclasses5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg superclass2:*, reg superclass3:V, reg __1:cls, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg otherMethods7:*, reg otherMethods8:V, reg length1:cls, reg r28:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg otherMethods9:*, reg otherMethods10:V, reg names1:cls, reg r31:V, reg gsub:cls, reg methodnames4:*, reg methodnames5:V, reg p6:p(V +), reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg _methods:*, reg _methods1:V, reg paste1:cls, reg methodnames6:*, reg methodnames7:V, reg p7:p(V +), reg methodclasses6:*, reg methodclasses7:V, reg p8:p(V +), reg r38:V, reg c5:cls, reg r39:V, reg _methods2:*, reg _methods3:V |
    mkenv;
    st methodDefs = methodDefs;
    st fieldnames = fieldnames;
    st otherMethods = otherMethods;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    st methodnames = r1;
    vapply = ldf vapply;
    check L16() else D2();
  L12():
    methodDefs1 = ld methodDefs;
    check L14() else D0();
  L13():
    r = dyn base(<sym methodDefs>);
    goto L0(r);
  D0():
    deopt 2 [methodDefs1];
  D2():
    deopt 8 [];
  L14():
    methodDefs2 = force? methodDefs1;
    checkMissing(methodDefs2);
    names = ldf names in base;
    r2 = dyn names(methodDefs2);
    check L15() else D1();
  L16():
    p = prom<V +>{
      methodDefs3 = ld methodDefs;
      methodDefs4 = force? methodDefs3;
      checkMissing(methodDefs4);
      return methodDefs4;
    };
    p1 = prom<V +>{
      r4 = clos inner2501545716;
      return r4;
    };
    r6 = dyn vapply(p, p1, "");
    check L17() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 12 [r6];
  L15():
    goto L0(r2);
  L17():
    st methodargs = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L1(r8):
    r10 = `>`(r8, 0.0);
    c = `as.logical`(r10);
    if c then L22() else L2();
  L18():
    methodnames = ld methodnames;
    check L20() else D4();
  L19():
    r7 = dyn base1(<sym methodnames>);
    goto L1(r7);
  D4():
    deopt 16 [methodnames];
  L2():
    character = ldf character;
    check L31() else D11();
  L4():
    vapply1 = ldf vapply;
    check L33() else D13();
  L20():
    methodnames1 = force? methodnames;
    checkMissing(methodnames1);
    length = ldf length in base;
    r9 = dyn length(methodnames1);
    check L21() else D5();
  L22():
    st `.methods.head` = "  \\describe{";
    paste0 = ldf paste0;
    check L23() else D6();
  D5():
    deopt 19 [r9];
  D6():
    deopt 26 [];
  D11():
    deopt 45 [];
  D13():
    deopt 49 [];
  L21():
    goto L1(r9);
  L23():
    p2 = prom<V +>{
      methodnames2 = ld methodnames;
      methodnames3 = force? methodnames2;
      checkMissing(methodnames3);
      return methodnames3;
    };
    p3 = prom<V +>{
      methodargs = ld methodargs;
      methodargs1 = force? methodargs;
      checkMissing(methodargs1);
      return methodargs1;
    };
    r13 = dyn paste0("    \\item{\\code{", p2, p3, "}:}", "{ ~~ }");
    check L24() else D7();
  L31():
    r18 = dyn character();
    check L32() else D12();
  L33():
    p4 = prom<V +>{
      otherMethods1 = ld otherMethods;
      otherMethods2 = force? otherMethods1;
      checkMissing(otherMethods2);
      return otherMethods2;
    };
    p5 = prom<V +>{
      r20 = clos inner2501545716;
      return r20;
    };
    r22 = dyn vapply1(p4, p5, "");
    check L34() else D14();
  D7():
    deopt 32 [r13];
  D12():
    deopt 46 [r18];
  D14():
    deopt 53 [r22];
  L24():
    st `.methods.body` = r13;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L32():
    st `.methods` = r18;
    goto L4();
  L34():
    st methodclasses = r22;
    methodclasses = ld methodclasses;
    check L35() else D15();
  D15():
    deopt 55 [methodclasses];
  L3(r15):
    st `.methods` = r15;
    goto L4();
  L25():
    _methods_head = ld `.methods.head`;
    check L27() else D8();
  L26():
    r14 = dyn base2(<sym .methods.head>, <sym .methods.body>, "  }");
    goto L3(r14);
  L35():
    methodclasses1 = force? methodclasses;
    checkMissing(methodclasses1);
    r23 = `!=`(methodclasses1, "envRefClass");
    st superclass = r23;
    otherMethods3 = ld otherMethods;
    check L36() else D16();
  D8():
    deopt 36 [_methods_head];
  D16():
    deopt 60 [otherMethods3];
  L27():
    _methods_head1 = force? _methods_head;
    checkMissing(_methods_head1);
    _methods_body = ld `.methods.body`;
    check L28() else D9();
  L36():
    otherMethods4 = force? otherMethods3;
    checkMissing(otherMethods4);
    c2 = `is.object`(otherMethods4);
    if c2 then L37() else L38(otherMethods4);
  D9():
    deopt 38 [_methods_body];
  L5(dx1):
    st otherMethods = dx1;
    methodclasses2 = ld methodclasses;
    check L41() else D18();
  L28():
    _methods_body1 = force? _methods_body;
    checkMissing(_methods_body1);
    c1 = ldf c in base;
    r16 = dyn c1(_methods_head1, _methods_body1, "  }");
    check L29() else D10();
  L37():
    dr = tryDispatchBuiltin.1("[", otherMethods4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(otherMethods6):
    superclass = ld superclass;
    check L40() else D17();
  D10():
    deopt 42 [r16];
  D17():
    deopt 62 [otherMethods6, superclass];
  D18():
    deopt 66 [methodclasses2];
  L29():
    goto L3(r16);
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L40():
    superclass1 = force? superclass;
    __ = ldf `[` in base;
    r24 = dyn __(otherMethods6, superclass1);
    goto L5(r24);
  L41():
    methodclasses3 = force? methodclasses2;
    checkMissing(methodclasses3);
    c3 = `is.object`(methodclasses3);
    if c3 then L42() else L43(methodclasses3);
  L6(dx3):
    st methodclasses = dx3;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L42():
    dr2 = tryDispatchBuiltin.1("[", methodclasses3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(methodclasses5):
    superclass2 = ld superclass;
    check L45() else D19();
  D19():
    deopt 68 [methodclasses5, superclass2];
  L7(r27):
    c4 = `as.logical`(r27);
    if c4 then L50() else L8();
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L45():
    superclass3 = force? superclass2;
    __1 = ldf `[` in base;
    r25 = dyn __1(methodclasses5, superclass3);
    goto L6(r25);
  L46():
    otherMethods7 = ld otherMethods;
    check L48() else D20();
  L47():
    r26 = dyn base3(<sym otherMethods>);
    goto L7(r26);
  D20():
    deopt 74 [otherMethods7];
  L8():
    goto L11();
  L11():
    _methods2 = ld `.methods`;
    check L64() else D30();
  L48():
    otherMethods8 = force? otherMethods7;
    checkMissing(otherMethods8);
    length1 = ldf length in base;
    r28 = dyn length1(otherMethods8);
    check L49() else D21();
  L50():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  D21():
    deopt 77 [r28];
  D30():
    deopt 111 [_methods2];
  L9(r30):
    st methodnames = r30;
    gsub = ldf gsub;
    check L55() else D24();
  L49():
    goto L7(r28);
  L51():
    otherMethods9 = ld otherMethods;
    check L53() else D22();
  L52():
    r29 = dyn base4(<sym otherMethods>);
    goto L9(r29);
  L64():
    _methods3 = force? _methods2;
    checkMissing(_methods3);
    popenv;
    return _methods3;
  D22():
    deopt 80 [otherMethods9];
  D24():
    deopt 86 [];
  L53():
    otherMethods10 = force? otherMethods9;
    checkMissing(otherMethods10);
    names1 = ldf names in base;
    r31 = dyn names1(otherMethods10);
    check L54() else D23();
  L55():
    p6 = prom<V +>{
      methodnames4 = ld methodnames;
      methodnames5 = force? methodnames4;
      checkMissing(methodnames5);
      return methodnames5;
    };
    r33 = dyn gsub("[#].*", "", p6);
    check L56() else D25();
  D23():
    deopt 83 [r31];
  D25():
    deopt 90 [r33];
  L54():
    goto L9(r31);
  L56():
    st methodnames = r33;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L10(r35):
    st `.methods` = r35;
    goto L11();
  L57():
    _methods = ld `.methods`;
    check L59() else D26();
  L58():
    r34 = dyn base5(<sym .methods>, "\nThe following methods are inherited (from the corresponding class):", <lang paste0(methodnames, " (\"", methodclasses, "\")", collapse=", ")>);
    goto L10(r34);
  D26():
    deopt 94 [_methods];
  L59():
    _methods1 = force? _methods;
    checkMissing(_methods1);
    paste1 = ldf paste0;
    check L60() else D27();
  D27():
    deopt 98 [];
  L60():
    p7 = prom<V +>{
      methodnames6 = ld methodnames;
      methodnames7 = force? methodnames6;
      checkMissing(methodnames7);
      return methodnames7;
    };
    p8 = prom<V +>{
      methodclasses6 = ld methodclasses;
      methodclasses7 = force? methodclasses6;
      checkMissing(methodclasses7);
      return methodclasses7;
    };
    r38 = dyn paste1[, , , , collapse](p7, " (\"", p8, "\")", ", ");
    check L61() else D28();
  D28():
    deopt 105 [r38];
  L61():
    c5 = ldf c in base;
    r39 = dyn c5(_methods1, "\nThe following methods are inherited (from the corresponding class):", r38);
    check L62() else D29();
  D29():
    deopt 107 [r39];
  L62():
    goto L10(r39);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg paste1:cls, reg formalArgs:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      paste1 = ldf paste;
      p1 = prom<V +>{
        formalArgs = ldf formalArgs;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn formalArgs(p);
        return r1;
      };
      r3 = dyn paste1[, collapse](p1, ", ");
      return r3;
    };
    r5 = dyn paste0("(", p2, ")");
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}