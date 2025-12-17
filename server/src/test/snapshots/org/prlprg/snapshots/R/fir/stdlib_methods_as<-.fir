fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1155786424;
    st `as<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1155786424(object, Class, value) {
  (reg object:*, reg Class:*, reg value:*) -+> V { var object:*, var Class:*, var value:*, reg _class1:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg _identC:cls, reg _class2:cls, reg value1:*, reg value2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg Class1:*, reg Class2:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c:L, reg as:cls, reg value3:*, reg value4:V, reg p4:p(V +), reg Class3:*, reg Class4:V, reg p5:p(V +), reg r10:V, reg _classEnv:cls, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg object3:*, reg object4:V, reg class:cls, reg r14:V, reg p6:p(V +), reg r16:V, reg getGeneric:cls, reg where:*, reg where1:V, reg p7:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg coerceFun:*, reg coerceFun1:V, reg c1:V, reg c2:L, reg coerce__:*, reg coerce__1:V, reg getMethodsForDispatch:cls, reg coerceFun2:*, reg coerceFun3:V, reg p8:p(V +), reg r22:V, reg _quickCoerceSelect:cls, reg thisClass:*, reg thisClass1:V, reg p9:p(V +), reg Class5:*, reg Class6:V, reg p10:p(V +), reg coerceFun4:*, reg coerceFun5:V, reg p11:p(V +), reg coerceMethods:*, reg coerceMethods1:V, reg p12:p(V +), reg where2:*, reg where3:V, reg p13:p(V +), reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg asMethod:*, reg asMethod1:V, reg c3:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg thisClass2:*, reg thisClass3:V, reg Class7:*, reg Class8:V, reg c5:cls, reg r33:V, reg selectMethod:cls, reg sig:*, reg sig1:V, reg p14:p(V +), reg coerceFun6:*, reg coerceFun7:V, reg p15:p(V +), reg coerceMethods2:*, reg coerceMethods3:V, reg p16:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg asMethod2:*, reg asMethod3:V, reg c6:V, reg c7:L, reg is:cls, reg object5:*, reg object6:V, reg p17:p(V +), reg Class9:*, reg Class10:V, reg p18:p(V +), reg r42:V, reg c8:L, reg possibleExtends:cls, reg thisClass4:*, reg thisClass5:V, reg p19:p(V +), reg Class11:*, reg Class12:V, reg p20:p(V +), reg r45:V, reg isTRUE:cls, reg asMethod4:*, reg asMethod5:V, reg p21:p(V +), reg r47:V, reg c9:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg object7:*, reg object8:V, reg class1:cls, reg r50:V, reg l:*, reg class__:cls, reg r51:V, reg value5:*, reg value6:V, reg r53:V, reg __:cls, reg r54:V, reg __1:cls, reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg test:*, reg test1:V, reg is_function:cls, reg r58:V, reg r59:V, reg c10:L, reg c11:V, reg isTRUE1:cls, reg body:cls, reg test2:*, reg test3:V, reg p22:p(V +), reg r61:V, reg p23:p(V +), reg r63:V, reg c13:L, reg c14:V, reg canCache:*, reg canCache1:V, reg c16:L, reg getClassDef:cls, reg Class13:*, reg Class14:V, reg p24:p(V +), reg where4:*, reg where5:V, reg p25:p(V +), reg r66:V, reg _asCoerceMethod:cls, reg asMethod6:*, reg asMethod7:V, reg p26:p(V +), reg thisClass6:*, reg thisClass7:V, reg p27:p(V +), reg ClassDef:*, reg ClassDef1:V, reg p28:p(V +), reg where6:*, reg where7:V, reg p29:p(V +), reg r71:V, reg r72:V, reg selectMethod1:cls, reg sig2:*, reg sig3:V, reg p30:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg r75:V, reg c17:cls, reg r76:V, reg p31:p(V +), reg r78:V, reg canCache2:*, reg canCache3:V, reg c18:L, reg c20:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r80:V, reg c23:L, reg r81:V, reg asMethod8:*, reg asMethod9:V, reg c24:V, reg r82:V, reg c25:L, reg c26:V, reg c28:L, reg cacheMethod:cls, reg sig4:*, reg sig5:V, reg p32:p(V +), reg asMethod10:*, reg asMethod11:V, reg p33:p(V +), reg coerceFun8:*, reg coerceFun9:V, reg p34:p(V +), reg inherited:*, reg inherited1:V, reg p35:p(V +), reg r87:V, reg r88:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r90:V, reg r91:V, reg asMethod12:*, reg asMethod13:V, reg c29:V, reg c30:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg thisClass8:*, reg thisClass9:V, reg p36:p(V +), reg r93:V, reg p37:p(V +), reg Class15:*, reg Class16:V, reg p38:p(V +), reg r96:V, reg p39:p(V +), reg r98:V, reg asMethod14:cls, reg object9:*, reg object10:V, reg p40:p(V +), reg Class17:*, reg Class18:V, reg p41:p(V +), reg value7:*, reg value8:V, reg p42:p(V +), reg r103:V |
    mkenv;
    st object = object;
    st Class = Class;
    st value = value;
    _class1 = ldf `.class1`;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn _class1(p);
    check L28() else D1();
  D1():
    deopt 3 [r1];
  L28():
    st thisClass = r1;
    _identC = ldf `.identC`;
    check L29() else D2();
  D2():
    deopt 6 [];
  L29():
    p2 = prom<V +>{
      _class2 = ldf `.class1`;
      p1 = prom<V +>{
        value1 = ld value;
        value2 = force? value1;
        checkMissing(value2);
        return value2;
      };
      r3 = dyn _class2(p1);
      return r3;
    };
    p3 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r6 = dyn _identC(p2, p3);
    check L30() else D3();
  D3():
    deopt 9 [r6];
  L30():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L31() else L0();
  L0():
    goto L1();
  L1():
    _classEnv = ldf `.classEnv`;
    check L35() else D6();
  L31():
    as = ldf as;
    check L32() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 22 [];
  L32():
    p4 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p5 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    r10 = dyn as[, , strict](p4, p5, FALSE);
    check L33() else D5();
  L35():
    p6 = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      class = ldf class in base;
      r14 = dyn class(object4);
      goto L0(r14);
    L2():
      r12 = dyn base(<sym object>);
      goto L0(r12);
    };
    r16 = dyn _classEnv(p6);
    check L36() else D7();
  D5():
    deopt 17 [r10];
  D7():
    deopt 24 [r16];
  L33():
    st value = r10;
    goto L1();
  L36():
    st where = r16;
    getGeneric = ldf getGeneric;
    check L37() else D8();
  D8():
    deopt 27 [];
  L37():
    p7 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r18 = dyn getGeneric[, where]("coerce<-", p7);
    check L38() else D9();
  D9():
    deopt 31 [r18];
  L38():
    st coerceFun = r18;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L2(r20):
    c2 = `as.logical`(r20);
    if c2 then L42() else L3();
  L39():
    coerceFun = ld coerceFun;
    check L41() else D10();
  L40():
    r19 = dyn base1(<sym coerceFun>);
    goto L2(r19);
  D10():
    deopt 34 [coerceFun];
  L3():
    goto L4();
  L4():
    getMethodsForDispatch = ldf getMethodsForDispatch;
    check L45() else D12();
  L41():
    coerceFun1 = force? coerceFun;
    checkMissing(coerceFun1);
    c1 = `==`(coerceFun1, NULL);
    goto L2(c1);
  L42():
    coerce__ = ld `coerce<-`;
    check L43() else D11();
  D11():
    deopt 37 [coerce__];
  D12():
    deopt 43 [];
  L43():
    coerce__1 = force? coerce__;
    checkMissing(coerce__1);
    st coerceFun = coerce__1;
    goto L4();
  L45():
    p8 = prom<V +>{
      coerceFun2 = ld coerceFun;
      coerceFun3 = force? coerceFun2;
      checkMissing(coerceFun3);
      return coerceFun3;
    };
    r22 = dyn getMethodsForDispatch(p8);
    check L46() else D13();
  D13():
    deopt 45 [r22];
  L46():
    st coerceMethods = r22;
    _quickCoerceSelect = ldf `.quickCoerceSelect`;
    check L47() else D14();
  D14():
    deopt 48 [];
  L47():
    p9 = prom<V +>{
      thisClass = ld thisClass;
      thisClass1 = force? thisClass;
      checkMissing(thisClass1);
      return thisClass1;
    };
    p10 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    p11 = prom<V +>{
      coerceFun4 = ld coerceFun;
      coerceFun5 = force? coerceFun4;
      checkMissing(coerceFun5);
      return coerceFun5;
    };
    p12 = prom<V +>{
      coerceMethods = ld coerceMethods;
      coerceMethods1 = force? coerceMethods;
      checkMissing(coerceMethods1);
      return coerceMethods1;
    };
    p13 = prom<V +>{
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      return where3;
    };
    r28 = dyn _quickCoerceSelect(p9, p10, p11, p12, p13);
    check L48() else D15();
  D15():
    deopt 54 [r28];
  L48():
    st asMethod = r28;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L5(r30):
    c4 = `as.logical`(r30);
    if c4 then L52() else L6();
  L49():
    asMethod = ld asMethod;
    check L51() else D16();
  L50():
    r29 = dyn base2(<sym asMethod>);
    goto L5(r29);
  D16():
    deopt 57 [asMethod];
  L6():
    goto L23();
  L23():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L111() else L112();
  L51():
    asMethod1 = force? asMethod;
    checkMissing(asMethod1);
    c3 = `==`(asMethod1, NULL);
    goto L5(c3);
  L52():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L7(r32):
    st sig = r32;
    st canCache = TRUE;
    st inherited = FALSE;
    selectMethod = ldf selectMethod;
    check L58() else D20();
  L24(r91):
    c30 = `as.logical`(r91);
    if c30 then L114() else L25();
  L53():
    thisClass2 = ld thisClass;
    check L55() else D17();
  L54():
    r31 = dyn base3[from, to](<sym thisClass>, <sym Class>);
    goto L7(r31);
  L111():
    asMethod12 = ld asMethod;
    check L113() else D49();
  L112():
    r90 = dyn base9(<sym asMethod>);
    goto L24(r90);
  D17():
    deopt 62 [thisClass2];
  D20():
    deopt 78 [];
  D49():
    deopt 198 [asMethod12];
  L25():
    goto L26();
  L26():
    asMethod14 = ldf asMethod;
    check L118() else D52();
  L55():
    thisClass3 = force? thisClass2;
    checkMissing(thisClass3);
    Class7 = ld Class;
    check L56() else D18();
  L58():
    p14 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    p15 = prom<V +>{
      coerceFun6 = ld coerceFun;
      coerceFun7 = force? coerceFun6;
      checkMissing(coerceFun7);
      return coerceFun7;
    };
    p16 = prom<V +>{
      coerceMethods2 = ld coerceMethods;
      coerceMethods3 = force? coerceMethods2;
      checkMissing(coerceMethods3);
      return coerceMethods3;
    };
    r37 = dyn selectMethod[, , , , fdef, mlist]("coerce<-", p14, TRUE, FALSE, p15, p16);
    check L59() else D21();
  L113():
    asMethod13 = force? asMethod12;
    checkMissing(asMethod13);
    c29 = `==`(asMethod13, NULL);
    goto L24(c29);
  L114():
    stop = ldf stop;
    check L115() else D50();
  D18():
    deopt 65 [Class7];
  D21():
    deopt 87 [r37];
  D50():
    deopt 202 [];
  D52():
    deopt 210 [];
  L56():
    Class8 = force? Class7;
    checkMissing(Class8);
    c5 = ldf c in base;
    r33 = dyn c5(thisClass3, Class8);
    check L57() else D19();
  L59():
    st asMethod = r37;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L115():
    p39 = prom<V +>{
      gettextf = ldf gettextf;
      p37 = prom<V +>{
        dQuote = ldf dQuote;
        p36 = prom<V +>{
          thisClass8 = ld thisClass;
          thisClass9 = force? thisClass8;
          checkMissing(thisClass9);
          return thisClass9;
        };
        r93 = dyn dQuote(p36);
        return r93;
      };
      p38 = prom<V +>{
        Class15 = ld Class;
        Class16 = force? Class15;
        checkMissing(Class16);
        return Class16;
      };
      r96 = dyn gettextf("no method or default for as() replacement of %s with Class=\"%s\"", p37, p38);
      return r96;
    };
    r98 = dyn stop[, domain](p39, NA_LGL);
    check L116() else D51();
  L118():
    p40 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    p41 = prom<V +>{
      Class17 = ld Class;
      Class18 = force? Class17;
      checkMissing(Class18);
      return Class18;
    };
    p42 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r103 = dyn asMethod14(p40, p41, p42);
    check L119() else D53();
  D19():
    deopt 69 [r33];
  D51():
    deopt 206 [r98];
  D53():
    deopt 214 [r103];
  L8(r39):
    c7 = `as.logical`(r39);
    if c7 then L63() else L9();
  L57():
    goto L7(r33);
  L60():
    asMethod2 = ld asMethod;
    check L62() else D22();
  L61():
    r38 = dyn base4(<sym asMethod>);
    goto L8(r38);
  L116():
    goto L26();
  L119():
    popenv;
    return r103;
  D22():
    deopt 90 [asMethod2];
  L9():
    goto L18();
  L18():
    canCache2 = ld canCache;
    check L100() else D45();
  L62():
    asMethod3 = force? asMethod2;
    checkMissing(asMethod3);
    c6 = `==`(asMethod3, NULL);
    goto L8(c6);
  L63():
    is = ldf is;
    check L64() else D23();
  D23():
    deopt 94 [];
  D45():
    deopt 175 [canCache2];
  L64():
    p17 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p18 = prom<V +>{
      Class9 = ld Class;
      Class10 = force? Class9;
      checkMissing(Class10);
      return Class10;
    };
    r42 = dyn is(p17, p18);
    check L65() else D24();
  L100():
    canCache3 = force? canCache2;
    checkMissing(canCache3);
    c18 = `as.logical`(canCache3);
    if c18 then L101() else L19(c18);
  D24():
    deopt 97 [r42];
  L19(c20):
    c28 = `as.logical`(c20);
    if c28 then L106() else L21();
  L65():
    c8 = `as.logical`(r42);
    if c8 then L66() else L10();
  L101():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L10():
    selectMethod1 = ldf selectMethod;
    check L97() else D43();
  L17(r72):
    goto L18();
  L20(c23, r81):
    r82 = `!`(r81);
    c25 = `as.logical`(r82);
    c26 = `&&`(c23, c25);
    goto L19(c26);
  L21():
    goto L22(NULL);
  L22(r88):
    goto L23();
  L66():
    possibleExtends = ldf possibleExtends;
    check L67() else D25();
  L102():
    asMethod8 = ld asMethod;
    check L104() else D46();
  L103():
    r80 = dyn base8(<sym asMethod>);
    goto L20(c18, r80);
  L106():
    cacheMethod = ldf cacheMethod;
    check L107() else D47();
  D25():
    deopt 99 [];
  D43():
    deopt 161 [];
  D46():
    deopt 178 [c18, asMethod8];
  D47():
    deopt 184 [];
  L67():
    p19 = prom<V +>{
      thisClass4 = ld thisClass;
      thisClass5 = force? thisClass4;
      checkMissing(thisClass5);
      return thisClass5;
    };
    p20 = prom<V +>{
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    };
    r45 = dyn possibleExtends(p19, p20);
    check L68() else D26();
  L97():
    p30 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    p31 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c17 = ldf c in base;
      r76 = dyn c17(TRUE, FALSE);
      goto L0(r76);
    L2():
      r74 = dyn base7[from, to](TRUE, FALSE);
      goto L0(r74);
    };
    r78 = dyn selectMethod1[, , , , doCache]("coerce<-", p30, TRUE, p31, TRUE);
    check L98() else D44();
  L104():
    asMethod9 = force? asMethod8;
    checkMissing(asMethod9);
    c24 = `==`(asMethod9, NULL);
    goto L20(c18, c24);
  L107():
    p32 = prom<V +>{
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      return sig5;
    };
    p33 = prom<V +>{
      asMethod10 = ld asMethod;
      asMethod11 = force? asMethod10;
      checkMissing(asMethod11);
      return asMethod11;
    };
    p34 = prom<V +>{
      coerceFun8 = ld coerceFun;
      coerceFun9 = force? coerceFun8;
      checkMissing(coerceFun9);
      return coerceFun9;
    };
    p35 = prom<V +>{
      inherited = ld inherited;
      inherited1 = force? inherited;
      checkMissing(inherited1);
      return inherited1;
    };
    r87 = dyn cacheMethod[, , , fdef, inherited]("coerce<-", p32, p33, p34, p35);
    check L108() else D48();
  D26():
    deopt 102 [r45];
  D44():
    deopt 168 [r78];
  D48():
    deopt 192 [r87];
  L68():
    st asMethod = r45;
    isTRUE = ldf isTRUE;
    check L69() else D27();
  L98():
    st asMethod = r78;
    st inherited = TRUE;
    goto L17(TRUE);
  L108():
    goto L22(r87);
  D27():
    deopt 105 [];
  L69():
    p21 = prom<V +>{
      asMethod4 = ld asMethod;
      asMethod5 = force? asMethod4;
      checkMissing(asMethod5);
      return asMethod5;
    };
    r47 = dyn isTRUE(p21);
    check L70() else D28();
  D28():
    deopt 107 [r47];
  L70():
    c9 = `as.logical`(r47);
    if c9 then L71() else L11();
  L11():
    __ = ldf `@` in base;
    r54 = dyn __(<sym asMethod>, <sym test>);
    st test = r54;
    __1 = ldf `@` in base;
    r55 = dyn __1(<sym asMethod>, <sym replace>);
    st asMethod = r55;
    sym6 = ldf `is.function`;
    base6 = ldf `is.function` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L71():
    sym5 = ldf class;
    base5 = ldf class in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L12(r49):
    l = ld value;
    class__ = ldf `class<-`;
    check L76() else D31();
  L14(r57):
    r59 = `!`(r57);
    c10 = `as.logical`(r59);
    if c10 then L15(c10) else L85();
  L72():
    object7 = ld object;
    check L74() else D29();
  L73():
    r48 = dyn base5(<sym object>);
    goto L12(r48);
  L81():
    test = ld test;
    check L83() else D34();
  L82():
    r56 = dyn base6(<sym test>);
    goto L14(r56);
  D29():
    deopt 110 [object7];
  D31():
    deopt 115 [r49, l, r49];
  D34():
    deopt 130 [test];
  L15(c11):
    st canCache = c11;
    canCache = ld canCache;
    check L89() else D38();
  L74():
    object8 = force? object7;
    checkMissing(object8);
    class1 = ldf class in base;
    r50 = dyn class1(object8);
    check L75() else D30();
  L76():
    r51 = dyn class__(l, NULL, r49);
    check L77() else D32();
  L83():
    test1 = force? test;
    checkMissing(test1);
    is_function = ldf `is.function` in base;
    r58 = dyn is_function(test1);
    check L84() else D35();
  L85():
    isTRUE1 = ldf isTRUE;
    check L86() else D36();
  D30():
    deopt 113 [r50];
  D32():
    deopt 117 [r49, r51];
  D35():
    deopt 133 [r58];
  D36():
    deopt 136 [c10];
  D38():
    deopt 141 [canCache];
  L75():
    goto L12(r50);
  L77():
    st value = r51;
    value5 = ld value;
    check L78() else D33();
  L84():
    goto L14(r58);
  L86():
    p23 = prom<V +>{
      body = ldf body;
      p22 = prom<V +>{
        test2 = ld test;
        test3 = force? test2;
        checkMissing(test3);
        return test3;
      };
      r61 = dyn body(p22);
      return r61;
    };
    r63 = dyn isTRUE1(p23);
    check L87() else D37();
  L89():
    canCache1 = force? canCache;
    checkMissing(canCache1);
    c16 = `as.logical`(canCache1);
    if c16 then L90() else L16();
  D33():
    deopt 119 [value5];
  D37():
    deopt 138 [c10, r63];
  L13(r53):
    goto L17(r53);
  L16():
    goto L13(NULL);
  L78():
    value6 = force? value5;
    checkMissing(value6);
    popenv;
    return value6;
  L87():
    c13 = `as.logical`(r63);
    c14 = `||`(c10, c13);
    goto L15(c14);
  L90():
    getClassDef = ldf getClassDef;
    check L91() else D39();
  D39():
    deopt 144 [];
  L91():
    p24 = prom<V +>{
      Class13 = ld Class;
      Class14 = force? Class13;
      checkMissing(Class14);
      return Class14;
    };
    p25 = prom<V +>{
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      return where5;
    };
    r66 = dyn getClassDef(p24, p25);
    check L92() else D40();
  D40():
    deopt 147 [r66];
  L92():
    st ClassDef = r66;
    _asCoerceMethod = ldf `.asCoerceMethod`;
    check L93() else D41();
  D41():
    deopt 150 [];
  L93():
    p26 = prom<V +>{
      asMethod6 = ld asMethod;
      asMethod7 = force? asMethod6;
      checkMissing(asMethod7);
      return asMethod7;
    };
    p27 = prom<V +>{
      thisClass6 = ld thisClass;
      thisClass7 = force? thisClass6;
      checkMissing(thisClass7);
      return thisClass7;
    };
    p28 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    p29 = prom<V +>{
      where6 = ld where;
      where7 = force? where6;
      checkMissing(where7);
      return where7;
    };
    r71 = dyn _asCoerceMethod(p26, p27, p28, TRUE, p29);
    check L94() else D42();
  D42():
    deopt 156 [r71];
  L94():
    st asMethod = r71;
    goto L13(r71);
  }
}