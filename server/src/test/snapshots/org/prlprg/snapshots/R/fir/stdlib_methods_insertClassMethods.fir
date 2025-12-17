fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3638251824;
    st insertClassMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3638251824(methods, Class, value, fieldNames, returnAll) {
  (reg methods:*, reg Class:*, reg value:*, reg fieldNames:*, reg returnAll:*) -+> V { var methods:*, var Class:*, var value:*, var fieldNames:*, var returnAll:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg methods1:*, reg methods2:V, reg names1:cls, reg r5:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg theseMethods:*, reg theseMethods1:V, reg prevMethods:*, reg prevMethods1:V, reg c:cls, reg r8:V, reg p:p(V +), reg r10:V, reg returnAll1:*, reg returnAll2:V, reg c1:L, reg methods3:*, reg methods4:V, reg methods5:V, reg value3:*, reg value4:V, reg theseMethods2:*, reg theseMethods3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg methods6:*, reg methods7:V, reg c3:L, reg i6:I, reg methods9:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg method:*, reg method1:V, reg __:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg i11:I, reg r13:V, reg prevMethod:*, reg prevMethod1:V, reg c4:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg i16:I, reg r15:V, reg method2:*, reg method3:V, reg identical:cls, reg r16:V, reg c6:L, reg i19:I, reg r17:S, reg i20:I, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg i23:I, reg r20:V, reg __1:cls, reg r21:V, reg Class1:*, reg Class2:V, reg identical1:cls, reg r22:V, reg c7:L, reg __2:cls, reg r23:V, reg superClassMethodName:cls, reg prevMethod2:*, reg prevMethod3:V, reg p1:p(V +), reg r25:V, reg prevMethod4:*, reg prevMethod5:V, reg l1:*, reg c8:L, reg i27:I, reg prevMethod7:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i29:I, reg prevMethod9:V, reg dx3:V, reg superClassMethod:*, reg superClassMethod1:V, reg ____:cls, reg r26:V, reg makeClassMethod:cls, reg value5:*, reg value6:V, reg c9:L, reg value8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg method4:*, reg method5:V, reg __3:cls, reg r27:V, reg p2:p(V +), reg method6:*, reg method7:V, reg p3:p(V +), reg Class3:*, reg Class4:V, reg p4:p(V +), reg superClassMethod2:*, reg superClassMethod3:V, reg p5:p(V +), reg allMethods:*, reg allMethods1:V, reg p6:p(V +), reg r33:V, reg check:*, reg check1:V, reg c10:L, reg i31:I, reg c12:V, reg _checkFieldsInMethod:cls, reg def:*, reg def1:V, reg p7:p(V +), reg fieldNames1:*, reg fieldNames2:V, reg p8:p(V +), reg allMethods2:*, reg allMethods3:V, reg p9:p(V +), reg r37:V, reg c13:L, reg c14:V, reg def2:*, reg def3:V, reg l4:*, reg c16:L, reg i34:I, reg def5:V, reg l6:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i36:I, reg dx7:V, reg method8:*, reg method9:V, reg ____1:cls, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg check2:*, reg check3:V, reg is_na:cls, reg r41:V, reg c17:L, reg c19:V, reg _methodsIsLoaded:cls, reg r42:V, reg c20:L, reg c21:V, reg c23:L, reg message:cls, reg gettextf:cls, reg dQuote:cls, reg Class5:*, reg Class6:V, reg p10:p(V +), reg r44:V, reg p11:p(V +), reg sQuote:cls, reg r46:V, reg p12:p(V +), reg r48:V, reg p13:p(V +), reg r50:V, reg returnMethods:*, reg returnMethods1:V |
    mkenv;
    st methods = methods;
    st Class = Class;
    st value = value;
    st fieldNames = fieldNames;
    st returnAll = returnAll;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r1):
    st theseMethods = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L22():
    value1 = ld value;
    check L24() else D0();
  L23():
    r = dyn base(<sym value>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  L1(r4):
    st prevMethods = r4;
    unique = ldf unique;
    check L30() else D4();
  L24():
    value2 = force? value1;
    checkMissing(value2);
    names = ldf names in base;
    r2 = dyn names(value2);
    check L25() else D1();
  L26():
    methods1 = ld methods;
    check L28() else D2();
  L27():
    r3 = dyn base1(<sym methods>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [methods1];
  D4():
    deopt 15 [];
  L25():
    goto L0(r2);
  L28():
    methods2 = force? methods1;
    checkMissing(methods2);
    names1 = ldf names in base;
    r5 = dyn names1(methods2);
    check L29() else D3();
  L30():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      theseMethods = ld theseMethods;
      theseMethods1 = force? theseMethods;
      checkMissing(theseMethods1);
      prevMethods = ld prevMethods;
      prevMethods1 = force? prevMethods;
      checkMissing(prevMethods1);
      c = ldf c in base;
      r8 = dyn c(theseMethods1, prevMethods1);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym theseMethods>, <sym prevMethods>);
      goto L0(r6);
    };
    r10 = dyn unique(p);
    check L31() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 17 [r10];
  L29():
    goto L1(r5);
  L31():
    st allMethods = r10;
    returnAll1 = ld returnAll;
    check L32() else D6();
  D6():
    deopt 19 [returnAll1];
  L32():
    returnAll2 = force? returnAll1;
    checkMissing(returnAll2);
    c1 = `as.logical`(returnAll2);
    if c1 then L33() else L2();
  L2():
    value3 = ld value;
    check L36() else D8();
  L3(methods5):
    st returnMethods = methods5;
    st check = TRUE;
    theseMethods2 = ld theseMethods;
    check L37() else D9();
  L33():
    methods3 = ld methods;
    check L34() else D7();
  D7():
    deopt 21 [methods3];
  D8():
    deopt 23 [value3];
  D9():
    deopt 29 [theseMethods2];
  L34():
    methods4 = force? methods3;
    checkMissing(methods4);
    goto L3(methods4);
  L36():
    value4 = force? value3;
    checkMissing(value4);
    goto L3(value4);
  L37():
    theseMethods3 = force? theseMethods2;
    checkMissing(theseMethods3);
    s = toForSeq(theseMethods3);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L38() else L17();
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st method = x;
    methods6 = ld methods;
    check L39() else D10();
  L38():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  D10():
    deopt 31 [i2, methods6];
  L18(r40):
    c17 = `as.logical`(r40);
    if c17 then L84() else L19(c17);
  L39():
    methods7 = force? methods6;
    checkMissing(methods7);
    c3 = `is.object`(methods7);
    if c3 then L40() else L41(i2, methods7);
  L80():
    check2 = ld check;
    check L82() else D28();
  L81():
    r39 = dyn base6(<sym check>);
    goto L18(r39);
  D28():
    deopt 121 [check2];
  L5(i8, dx1):
    st prevMethod = dx1;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L19(c19):
    c23 = `as.logical`(c19);
    if c23 then L88() else L20();
  L40():
    dr = tryDispatchBuiltin.1("[[", methods7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(i2, dr);
  L41(i6, methods9):
    method = ld method;
    check L43() else D11();
  L82():
    check3 = force? check2;
    checkMissing(check3);
    is_na = ldf `is.na` in base;
    r41 = dyn is_na(check3);
    check L83() else D29();
  L84():
    _methodsIsLoaded = ldf `.methodsIsLoaded`;
    check L85() else D30();
  D11():
    deopt 33 [i6, methods9, method];
  D29():
    deopt 124 [r41];
  D30():
    deopt 126 [c17];
  L6(i11, r13):
    c5 = `as.logical`(r13);
    if c5 then L47() else L7();
  L20():
    goto L21();
  L21():
    returnMethods = ld returnMethods;
    check L92() else D34();
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, dx);
  L43():
    method1 = force? method;
    __ = ldf `[[` in base;
    r11 = dyn __(methods9, method1);
    goto L5(i6, r11);
  L44():
    prevMethod = ld prevMethod;
    check L46() else D12();
  L45():
    r12 = dyn base3(<sym prevMethod>);
    goto L6(i8, r12);
  L83():
    goto L18(r41);
  L85():
    r42 = dyn _methodsIsLoaded();
    check L86() else D31();
  L88():
    message = ldf message;
    check L89() else D32();
  D12():
    deopt 38 [i8, prevMethod];
  D31():
    deopt 127 [c17, r42];
  D32():
    deopt 130 [];
  D34():
    deopt 137 [returnMethods];
  L7():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L11(i20):
    makeClassMethod = ldf makeClassMethod;
    check L68() else D21();
  L46():
    prevMethod1 = force? prevMethod;
    checkMissing(prevMethod1);
    c4 = `==`(prevMethod1, NULL);
    goto L6(i8, c4);
  L47():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L86():
    c20 = `as.logical`(r42);
    c21 = `&&`(c17, c20);
    goto L19(c21);
  L89():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        dQuote = ldf dQuote;
        p10 = prom<V +>{
          Class5 = ld Class;
          Class6 = force? Class5;
          checkMissing(Class6);
          return Class6;
        };
        r44 = dyn dQuote(p10);
        return r44;
      };
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        r46 = dyn sQuote("codetools");
        return r46;
      };
      r48 = dyn gettextf("code for methods in class %s was not checked for suspicious field assignments (recommended package %s not available?)", p11, p12);
      return r48;
    };
    r50 = dyn message[, domain](p13, NA_LGL);
    check L90() else D33();
  L92():
    returnMethods1 = force? returnMethods;
    checkMissing(returnMethods1);
    popenv;
    return returnMethods1;
  D21():
    deopt 91 [i20];
  D33():
    deopt 134 [r50];
  L8(i16, r15):
    c6 = `as.logical`(r15);
    if c6 then L52() else L9();
  L12(i23, r20):
    c7 = `as.logical`(r20);
    if c7 then L59() else L13();
  L48():
    method2 = ld method;
    check L50() else D13();
  L49():
    r14 = dyn base4(<sym method>, "initialize");
    goto L8(i11, r14);
  L55():
    __1 = ldf `@` in base;
    r21 = dyn __1(<sym prevMethod>, <sym refClassName>);
    Class1 = ld Class;
    check L57() else D15();
  L56():
    r19 = dyn base5(<lang `@`(prevMethod, refClassName)>, <sym Class>);
    goto L12(i11, r19);
  L68():
    p2 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      c9 = `is.object`(value6);
      if c9 then L1() else L2(value6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", value6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(value8):
      method4 = ld method;
      method5 = force? method4;
      __3 = ldf `[[` in base;
      r27 = dyn __3(value8, method5);
      goto L0(r27);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      method6 = ld method;
      method7 = force? method6;
      checkMissing(method7);
      return method7;
    };
    p4 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p5 = prom<V +>{
      superClassMethod2 = ld superClassMethod;
      superClassMethod3 = force? superClassMethod2;
      checkMissing(superClassMethod3);
      return superClassMethod3;
    };
    p6 = prom<V +>{
      allMethods = ld allMethods;
      allMethods1 = force? allMethods;
      checkMissing(allMethods1);
      return allMethods1;
    };
    r33 = dyn makeClassMethod(p2, p3, p4, p5, p6);
    check L69() else D22();
  L90():
    goto L21();
  D13():
    deopt 43 [i11, method2];
  D15():
    deopt 64 [i11, Class1];
  D22():
    deopt 97 [i20, r33];
  L9():
    goto L10(i16, "");
  L10(i19, r17):
    st superClassMethod = r17;
    goto L11(i19);
  L13():
    superClassMethodName = ldf superClassMethodName;
    check L61() else D17();
  L50():
    method3 = force? method2;
    checkMissing(method3);
    identical = ldf identical in base;
    r16 = dyn identical(method3, "initialize", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L51() else D14();
  L52():
    goto L10(i16, "initFields");
  L57():
    Class2 = force? Class1;
    checkMissing(Class2);
    identical1 = ldf identical in base;
    r22 = dyn identical1(r21, Class2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L58() else D16();
  L59():
    __2 = ldf `@` in base;
    r23 = dyn __2(<sym prevMethod>, <sym superClassMethod>);
    st superClassMethod = r23;
    goto L11(i23);
  L69():
    st def = r33;
    check = ld check;
    check L70() else D23();
  D14():
    deopt 54 [i11, r16];
  D16():
    deopt 74 [i11, r22];
  D17():
    deopt 79 [i23];
  D23():
    deopt 99 [i20, check];
  L51():
    goto L8(i11, r16);
  L58():
    goto L12(i11, r22);
  L61():
    p1 = prom<V +>{
      prevMethod2 = ld prevMethod;
      prevMethod3 = force? prevMethod2;
      checkMissing(prevMethod3);
      return prevMethod3;
    };
    r25 = dyn superClassMethodName(p1);
    check L62() else D18();
  L70():
    check1 = force? check;
    checkMissing(check1);
    c10 = `as.logical`(check1);
    if c10 then L71() else L15(i20, c10);
  D18():
    deopt 81 [i23, r25];
  L15(i31, c12):
    st check = c12;
    def2 = ld def;
    check L75() else D26();
  L62():
    st superClassMethod = r25;
    prevMethod4 = ld prevMethod;
    check L63() else D19();
  L71():
    _checkFieldsInMethod = ldf `.checkFieldsInMethod`;
    check L72() else D24();
  D19():
    deopt 83 [i23, prevMethod4];
  D24():
    deopt 102 [i20, c10];
  D26():
    deopt 109 [i31, def2];
  L63():
    prevMethod5 = force? prevMethod4;
    checkMissing(prevMethod5);
    l1 = ld returnMethods;
    c8 = `is.object`(l1);
    if c8 then L64() else L65(i23, prevMethod5, l1);
  L72():
    p7 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p8 = prom<V +>{
      fieldNames1 = ld fieldNames;
      fieldNames2 = force? fieldNames1;
      checkMissing(fieldNames2);
      return fieldNames2;
    };
    p9 = prom<V +>{
      allMethods2 = ld allMethods;
      allMethods3 = force? allMethods2;
      checkMissing(allMethods3);
      return allMethods3;
    };
    r37 = dyn _checkFieldsInMethod(p7, p8, p9);
    check L73() else D25();
  L75():
    def3 = force? def2;
    checkMissing(def3);
    l4 = ld returnMethods;
    c16 = `is.object`(l4);
    if c16 then L76() else L77(i31, def3, l4);
  D25():
    deopt 106 [i20, c10, r37];
  L14(i29, prevMethod9, dx3):
    st returnMethods = dx3;
    goto L11(i29);
  L16(i36, dx7):
    st returnMethods = dx7;
    goto L4(i36);
  L64():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, prevMethod5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(i23, prevMethod5, dr2);
  L65(i27, prevMethod7, l3):
    superClassMethod = ld superClassMethod;
    check L67() else D20();
  L73():
    c13 = `as.logical`(r37);
    c14 = `&&`(c10, c13);
    goto L15(i20, c14);
  L76():
    dr6 = tryDispatchBuiltin.0("[[<-", l4, def3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(i31, def3, dr6);
  L77(i34, def5, l6):
    method8 = ld method;
    check L79() else D27();
  D20():
    deopt 86 [i27, prevMethod7, l3, prevMethod5, superClassMethod];
  D27():
    deopt 112 [i34, def5, l6, def3, method8];
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(i23, prevMethod5, dx2);
  L67():
    superClassMethod1 = force? superClassMethod;
    ____ = ldf `[[<-` in base;
    r26 = dyn ____(l3, prevMethod5, superClassMethod1);
    goto L14(i27, prevMethod7, r26);
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(i31, dx6);
  L79():
    method9 = force? method8;
    ____1 = ldf `[[<-` in base;
    r38 = dyn ____1(l6, def3, method9);
    goto L16(i34, r38);
  }
}