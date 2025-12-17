fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2936357045;
    st `.asCoerceMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2936357045(def, thisClass, ClassDef, replace, where) {
  (reg def:*, reg thisClass:*, reg ClassDef:*, reg replace:*, reg where:*) -+> V { var def:*, var thisClass:*, var ClassDef:*, var replace:*, var where:*, reg replace1:*, reg replace2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg quote:cls, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg quote1:cls, reg r5:V, reg __:cls, reg r6:V, reg l:*, reg c1:L, reg r9:V, reg l3:*, reg r10:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg r13:V, reg l6:*, reg r14:V, reg dx1:V, reg __1:cls, reg r15:V, reg c2:L, reg r17:V, reg l8:*, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg r19:V, reg l10:*, reg dx5:V, reg r20:V, reg c3:L, reg r22:V, reg l12:*, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r25:V, reg eval:cls, reg fdef:*, reg fdef1:V, reg p:p(V +), reg r27:V, reg body:cls, reg def1:*, reg def2:V, reg p1:p(V +), reg r29:V, reg l13:*, reg body__:cls, reg environment:cls, reg def3:*, reg def4:V, reg p2:p(V +), reg r31:V, reg p3:p(V +), reg r33:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg def5:*, reg def6:V, reg attr:cls, reg r36:V, reg l14:*, reg attr__:cls, reg r37:V, reg new:cls, reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg thisClass1:*, reg thisClass2:V, reg __2:cls, reg r41:V, reg c4:cls, reg r42:V, reg l15:*, reg ___:cls, reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg c5:cls, reg r46:V, reg l16:*, reg ___1:cls, reg r47:V, reg packageSlot:cls, reg thisClass3:*, reg thisClass4:V, reg p4:p(V +), reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg thisPackage:*, reg thisPackage1:V, reg c6:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg getPackageName:cls, reg where1:*, reg where2:V, reg p5:p(V +), reg r55:V, reg __3:cls, reg r56:V, reg c8:cls, reg r57:V, reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg thisPackage2:*, reg thisPackage3:V, reg __4:cls, reg r60:V, reg c9:cls, reg r61:V, reg l17:*, reg ___2:cls, reg r62:V, reg new1:cls, reg r63:V, reg fdef2:*, reg fdef3:V, reg l18:*, reg ___3:cls, reg r64:V, reg sig:*, reg sig1:V, reg l19:*, reg ___4:cls, reg r65:V, reg sig2:*, reg sig3:V, reg l20:*, reg ___5:cls, reg r66:V, reg structure:cls, reg replace3:*, reg replace4:V, reg c10:L, reg p6:p(V +), reg r68:V, reg l21:*, reg ___6:cls, reg r69:V, reg value:*, reg value1:V |
    mkenv;
    st def = def;
    st thisClass = thisClass;
    st ClassDef = ClassDef;
    st replace = replace;
    st where = where;
    replace1 = ld replace;
    check L12() else D0();
  D0():
    deopt 0 [replace1];
  L12():
    replace2 = force? replace1;
    checkMissing(replace2);
    c = `as.logical`(replace2);
    if c then L13() else L0();
  L0():
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2(r3):
    st fdef = r3;
    __ = ldf `@` in base;
    r6 = dyn __(<sym ClassDef>, <sym className>);
    l = ld fdef;
    c1 = `is.object`(l);
    if c1 then L19() else L20(r6, l, r6, l);
  L13():
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L1(r1):
    goto L2(r1);
  L3(r13, l6, r14, dx1):
    c2 = `is.object`(dx1);
    if c2 then L23() else L24(r13, l6, dx1);
  L14():
    quote = ldf quote in base;
    r2 = dyn quote(<lang function((from=, to=TO, value=), NULL, NULL)>);
    goto L1(r2);
  L15():
    r = dyn base(<lang function((from=, to=TO, value=), NULL, NULL)>);
    goto L1(r);
  L17():
    quote1 = ldf quote in base;
    r5 = dyn quote1(<lang function((from=, to=TO, strict=TRUE), NULL, NULL)>);
    goto L2(r5);
  L18():
    r4 = dyn base1(<lang function((from=, to=TO, strict=TRUE), NULL, NULL)>);
    goto L2(r4);
  L19():
    dr = tryDispatchBuiltin.1("[[", l);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(r6, l, r6, dr);
  L20(r9, l3, r10, l4):
    __1 = ldf `[[` in base;
    r15 = dyn __1(l4, 2);
    goto L3(r9, l3, r10, r15);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(r6, l, r6, dx);
  L22(r19, l10, dx5):
    c3 = `is.object`(l10);
    if c3 then L26() else L27(r19, l10);
  L23():
    dr2 = tryDispatchBuiltin.0("$<-", dx1, r14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(r13, l6, dr2);
  L24(r17, l8, dx3):
    r20 = `$<-`(dx3, <sym to>, r14);
    goto L22(r17, l8, r20);
  L4(dx7):
    st fdef = dx7;
    eval = ldf eval;
    check L29() else D1();
  L25():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L22(r13, l6, dx4);
  L26():
    dr4 = tryDispatchBuiltin.0("[[<-", l10, dx5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L28() else L27(r19, dr4);
  L27(r22, l12):
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l12, dx5, 2);
    goto L4(r25);
  D1():
    deopt 23 [];
  L28():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx6);
  L29():
    p = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r27 = dyn eval(p);
    check L30() else D2();
  D2():
    deopt 25 [r27];
  L30():
    st fdef = r27;
    body = ldf body;
    check L31() else D3();
  D3():
    deopt 28 [];
  L31():
    p1 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r29 = dyn body(p1);
    check L32() else D4();
  D4():
    deopt 30 [r29];
  L32():
    l13 = ld fdef;
    body__ = ldf `body<-`;
    check L33() else D5();
  D5():
    deopt 32 [r29, l13, r29];
  L33():
    p3 = prom<V +>{
      environment = ldf environment;
      p2 = prom<V +>{
        def3 = ld def;
        def4 = force? def3;
        checkMissing(def4);
        return def4;
      };
      r31 = dyn environment(p2);
      return r31;
    };
    r33 = dyn body__(l13, NULL, p3, r29);
    check L34() else D6();
  D6():
    deopt 35 [r29, r33];
  L34():
    st fdef = r33;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L5(r35):
    l14 = ld fdef;
    attr__ = ldf `attr<-`;
    check L39() else D9();
  L35():
    def5 = ld def;
    check L37() else D7();
  L36():
    r34 = dyn base2(<sym def>, "srcref");
    goto L5(r34);
  D7():
    deopt 39 [def5];
  D9():
    deopt 45 [r35, l14, r35];
  L37():
    def6 = force? def5;
    checkMissing(def6);
    attr = ldf attr in base;
    r36 = dyn attr(def6, "srcref");
    check L38() else D8();
  L39():
    r37 = dyn attr__(l14, NULL, "srcref", r35);
    check L40() else D10();
  D8():
    deopt 43 [r36];
  D10():
    deopt 48 [r35, r37];
  L38():
    goto L5(r36);
  L40():
    st fdef = r37;
    new = ldf new;
    check L41() else D11();
  D11():
    deopt 51 [];
  L41():
    r38 = dyn new("signature");
    check L42() else D12();
  D12():
    deopt 53 [r38];
  L42():
    st sig = r38;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L6(r40):
    l15 = ld sig;
    ___ = ldf `@<-`;
    check L47() else D15();
  L43():
    thisClass1 = ld thisClass;
    check L45() else D13();
  L44():
    r39 = dyn base3(<sym thisClass>, <lang `@`(ClassDef, className)>);
    goto L6(r39);
  D13():
    deopt 57 [thisClass1];
  D15():
    deopt 64 [r40, l15, r40];
  L45():
    thisClass2 = force? thisClass1;
    checkMissing(thisClass2);
    __2 = ldf `@` in base;
    r41 = dyn __2(<sym ClassDef>, <sym className>);
    c4 = ldf c in base;
    r42 = dyn c4(thisClass2, r41);
    check L46() else D14();
  L47():
    r43 = dyn ___(l15, NULL, ".Data", r40);
    check L48() else D16();
  D14():
    deopt 62 [r42];
  D16():
    deopt 67 [r40, r43];
  L46():
    goto L6(r42);
  L48():
    st sig = r43;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L7(r45):
    l16 = ld sig;
    ___1 = ldf `@<-`;
    check L52() else D18();
  L49():
    c5 = ldf c in base;
    r46 = dyn c5("from", "to");
    check L51() else D17();
  L50():
    r44 = dyn base4("from", "to");
    goto L7(r44);
  D17():
    deopt 74 [r46];
  D18():
    deopt 76 [r45, l16, r45];
  L51():
    goto L7(r46);
  L52():
    r47 = dyn ___1(l16, NULL, "names", r45);
    check L53() else D19();
  D19():
    deopt 79 [r45, r47];
  L53():
    st sig = r47;
    packageSlot = ldf packageSlot;
    check L54() else D20();
  D20():
    deopt 82 [];
  L54():
    p4 = prom<V +>{
      thisClass3 = ld thisClass;
      thisClass4 = force? thisClass3;
      checkMissing(thisClass4);
      return thisClass4;
    };
    r49 = dyn packageSlot(p4);
    check L55() else D21();
  D21():
    deopt 84 [r49];
  L55():
    st thisPackage = r49;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L8(r51):
    c7 = `as.logical`(r51);
    if c7 then L59() else L9();
  L56():
    thisPackage = ld thisPackage;
    check L58() else D22();
  L57():
    r50 = dyn base5(<sym thisPackage>);
    goto L8(r50);
  D22():
    deopt 87 [thisPackage];
  L9():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  L11(r58):
    l17 = ld sig;
    ___2 = ldf `@<-`;
    check L70() else D28();
  L58():
    thisPackage1 = force? thisPackage;
    checkMissing(thisPackage1);
    c6 = `==`(thisPackage1, NULL);
    goto L8(c6);
  L59():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  D28():
    deopt 110 [r58, l17, r58];
  L10(r53):
    goto L11(r53);
  L60():
    getPackageName = ldf getPackageName;
    check L62() else D23();
  L61():
    r52 = dyn base6(<lang getPackageName(where, FALSE)>, <lang `@`(ClassDef, package)>);
    goto L10(r52);
  L66():
    thisPackage2 = ld thisPackage;
    check L68() else D26();
  L67():
    r59 = dyn base7(<sym thisPackage>, <lang `@`(ClassDef, package)>);
    goto L11(r59);
  L70():
    r62 = dyn ___2(l17, NULL, "package", r58);
    check L71() else D29();
  D23():
    deopt 93 [];
  D26():
    deopt 103 [thisPackage2];
  D29():
    deopt 113 [r58, r62];
  L62():
    p5 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r55 = dyn getPackageName(p5, FALSE);
    check L63() else D24();
  L68():
    thisPackage3 = force? thisPackage2;
    checkMissing(thisPackage3);
    __4 = ldf `@` in base;
    r60 = dyn __4(<sym ClassDef>, <sym package>);
    c9 = ldf c in base;
    r61 = dyn c9(thisPackage3, r60);
    check L69() else D27();
  L71():
    st sig = r62;
    new1 = ldf new;
    check L72() else D30();
  D24():
    deopt 96 [r55];
  D27():
    deopt 108 [r61];
  D30():
    deopt 116 [];
  L63():
    __3 = ldf `@` in base;
    r56 = dyn __3(<sym ClassDef>, <sym package>);
    c8 = ldf c in base;
    r57 = dyn c8(r55, r56);
    check L64() else D25();
  L69():
    goto L11(r61);
  L72():
    r63 = dyn new1("MethodDefinition");
    check L73() else D31();
  D25():
    deopt 100 [r57];
  D31():
    deopt 118 [r63];
  L64():
    goto L10(r57);
  L73():
    st value = r63;
    fdef2 = ld fdef;
    check L74() else D32();
  D32():
    deopt 120 [fdef2];
  L74():
    fdef3 = force? fdef2;
    checkMissing(fdef3);
    l18 = ld value;
    ___3 = ldf `@<-`;
    check L75() else D33();
  D33():
    deopt 123 [fdef3, l18, fdef3];
  L75():
    r64 = dyn ___3(l18, NULL, ".Data", fdef3);
    check L76() else D34();
  D34():
    deopt 126 [fdef3, r64];
  L76():
    st value = r64;
    sig = ld sig;
    check L77() else D35();
  D35():
    deopt 128 [sig];
  L77():
    sig1 = force? sig;
    checkMissing(sig1);
    l19 = ld value;
    ___4 = ldf `@<-`;
    check L78() else D36();
  D36():
    deopt 131 [sig1, l19, sig1];
  L78():
    r65 = dyn ___4(l19, NULL, "target", sig1);
    check L79() else D37();
  D37():
    deopt 134 [sig1, r65];
  L79():
    st value = r65;
    sig2 = ld sig;
    check L80() else D38();
  D38():
    deopt 136 [sig2];
  L80():
    sig3 = force? sig2;
    checkMissing(sig3);
    l20 = ld value;
    ___5 = ldf `@<-`;
    check L81() else D39();
  D39():
    deopt 139 [sig3, l20, sig3];
  L81():
    r66 = dyn ___5(l20, NULL, "defined", sig3);
    check L82() else D40();
  D40():
    deopt 142 [sig3, r66];
  L82():
    st value = r66;
    structure = ldf structure;
    check L83() else D41();
  D41():
    deopt 145 [];
  L83():
    p6 = prom<V +>{
      replace3 = ld replace;
      replace4 = force? replace3;
      checkMissing(replace4);
      c10 = `as.logical`(replace4);
      if c10 then L1() else L0();
    L0():
      return "coerce";
    L1():
      return "coerce<-";
    };
    r68 = dyn structure[, package](p6, "methods");
    check L84() else D42();
  D42():
    deopt 149 [r68];
  L84():
    l21 = ld value;
    ___6 = ldf `@<-`;
    check L85() else D43();
  D43():
    deopt 151 [r68, l21, r68];
  L85():
    r69 = dyn ___6(l21, NULL, "generic", r68);
    check L86() else D44();
  D44():
    deopt 154 [r68, r69];
  L86():
    st value = r69;
    value = ld value;
    check L87() else D45();
  D45():
    deopt 156 [value];
  L87():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}