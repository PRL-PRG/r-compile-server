fun main() {
  () -+> V { reg r:cls, reg showMethods:cls, reg r1:V |
    mkenv;
    r = clos inner3813567138;
    st as = r;
    showMethods = ldf showMethods;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn showMethods("coerce");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner3813567138(object, Class, strict, ext) {
  (reg object:*, reg Class:*, reg strict:*, reg ext:*) -+> V { var object:*, var Class:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, var ext:*, reg ext_isMissing:L, reg ext_orDefault:*, reg possibleExtends:cls, reg thisClass:*, reg thisClass1:V, reg p:p(V +), reg Class1:*, reg Class2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg _class1:cls, reg object1:*, reg object2:V, reg p3:p(V +), reg r5:V, reg _identC:cls, reg thisClass2:*, reg thisClass3:V, reg p4:p(V +), reg Class3:*, reg Class4:V, reg p5:p(V +), reg r8:V, reg c:L, reg c1:V, reg _identC1:cls, reg Class5:*, reg Class6:V, reg p6:p(V +), reg r10:V, reg c3:L, reg c4:V, reg c6:L, reg object3:*, reg object4:V, reg _classEnv:cls, reg thisClass4:*, reg thisClass5:V, reg p7:p(V +), reg r14:V, reg getGeneric:cls, reg where:*, reg where1:V, reg p8:p(V +), reg r16:V, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg coerceFun:*, reg coerceFun1:V, reg c7:V, reg c8:L, reg coerce:*, reg coerce1:V, reg _getMethodsTable:cls, reg coerceFun2:*, reg coerceFun3:V, reg p9:p(V +), reg environment:cls, reg coerceFun4:*, reg coerceFun5:V, reg p10:p(V +), reg r21:V, reg p11:p(V +), reg r23:V, reg _quickCoerceSelect:cls, reg thisClass6:*, reg thisClass7:V, reg p12:p(V +), reg Class7:*, reg Class8:V, reg p13:p(V +), reg coerceFun6:*, reg coerceFun7:V, reg p14:p(V +), reg coerceMethods:*, reg coerceMethods1:V, reg p15:p(V +), reg where2:*, reg where3:V, reg p16:p(V +), reg r29:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg asMethod:*, reg asMethod1:V, reg c9:V, reg c10:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg thisClass8:*, reg thisClass9:V, reg Class9:*, reg Class10:V, reg c11:cls, reg r34:V, reg selectMethod:cls, reg sig:*, reg sig1:V, reg p17:p(V +), reg coerceFun8:*, reg coerceFun9:V, reg p18:p(V +), reg getMethodsForDispatch:cls, reg coerceFun10:*, reg coerceFun11:V, reg p19:p(V +), reg r38:V, reg p20:p(V +), reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg asMethod2:*, reg asMethod3:V, reg c12:V, reg c13:L, reg is:cls, reg object5:*, reg object6:V, reg p21:p(V +), reg Class11:*, reg Class12:V, reg p22:p(V +), reg r45:V, reg c14:L, reg getClassDef:cls, reg Class13:*, reg Class14:V, reg p23:p(V +), reg where4:*, reg where5:V, reg p24:p(V +), reg r48:V, reg isFALSE:cls, reg ext1:*, reg ext2:V, reg p25:p(V +), reg r50:V, reg c15:L, reg stop:cls, reg sprintf:cls, reg dQuote:cls, reg thisClass10:*, reg thisClass11:V, reg p26:p(V +), reg r52:V, reg p27:p(V +), reg Class15:*, reg Class16:V, reg p28:p(V +), reg r55:V, reg p29:p(V +), reg r57:V, reg r58:V, reg isTRUE:cls, reg ext3:*, reg ext4:V, reg p30:p(V +), reg r60:V, reg c16:L, reg _makeAsMethod:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg r62:V, reg quote:cls, reg r63:V, reg p31:p(V +), reg Class17:*, reg Class18:V, reg p32:p(V +), reg ClassDef:*, reg ClassDef1:V, reg p33:p(V +), reg where6:*, reg where7:V, reg p34:p(V +), reg r68:V, reg __:cls, reg r69:V, reg _makeAsMethod1:cls, reg __1:cls, reg r70:V, reg p35:p(V +), reg __2:cls, reg r72:V, reg p36:p(V +), reg Class19:*, reg Class20:V, reg p37:p(V +), reg ClassDef2:*, reg ClassDef3:V, reg p38:p(V +), reg where8:*, reg where9:V, reg p39:p(V +), reg r77:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r78:V, reg r79:V, reg test:*, reg test1:V, reg is_function:cls, reg r80:V, reg r81:V, reg c17:L, reg c18:V, reg isTRUE1:cls, reg body:cls, reg test2:*, reg test3:V, reg p40:p(V +), reg r83:V, reg p41:p(V +), reg r85:V, reg c20:L, reg c21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r87:V, reg r88:V, reg asMethod4:*, reg asMethod5:V, reg c23:V, reg c24:L, reg c26:V, reg extends:cls, reg Class21:*, reg Class22:V, reg p42:p(V +), reg thisClass12:*, reg thisClass13:V, reg p43:p(V +), reg r91:V, reg c27:L, reg c28:V, reg c30:L, reg getClassDef1:cls, reg Class23:*, reg Class24:V, reg p44:p(V +), reg where10:*, reg where11:V, reg p45:p(V +), reg r94:V, reg _asFromReplace:cls, reg thisClass14:*, reg thisClass15:V, reg p46:p(V +), reg Class25:*, reg Class26:V, reg p47:p(V +), reg ClassDef4:*, reg ClassDef5:V, reg p48:p(V +), reg where12:*, reg where13:V, reg p49:p(V +), reg r99:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r101:V, reg r102:V, reg asMethod6:*, reg asMethod7:V, reg c31:V, reg c32:L, reg selectMethod1:cls, reg sig2:*, reg sig3:V, reg p50:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r104:V, reg r105:V, reg c33:cls, reg r106:V, reg p51:p(V +), reg coerceFun12:*, reg coerceFun13:V, reg p52:p(V +), reg coerceMethods2:*, reg coerceMethods3:V, reg p53:p(V +), reg r110:V, reg canCache:*, reg canCache1:V, reg c34:L, reg _asCoerceMethod:cls, reg asMethod8:*, reg asMethod9:V, reg p54:p(V +), reg thisClass16:*, reg thisClass17:V, reg p55:p(V +), reg ClassDef6:*, reg ClassDef7:V, reg p56:p(V +), reg where14:*, reg where15:V, reg p57:p(V +), reg r116:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r117:V, reg r118:V, reg asMethod10:*, reg asMethod11:V, reg c35:V, reg c36:L, reg stop1:cls, reg gettextf:cls, reg dQuote1:cls, reg thisClass18:*, reg thisClass19:V, reg p58:p(V +), reg r120:V, reg p59:p(V +), reg dQuote2:cls, reg Class27:*, reg Class28:V, reg p60:p(V +), reg r123:V, reg p61:p(V +), reg r125:V, reg p62:p(V +), reg r127:V, reg r128:V, reg canCache2:*, reg canCache3:V, reg c37:L, reg cacheMethod:cls, reg sig4:*, reg sig5:V, reg p63:p(V +), reg asMethod12:*, reg asMethod13:V, reg p64:p(V +), reg coerceFun14:*, reg coerceFun15:V, reg p65:p(V +), reg inherited:*, reg inherited1:V, reg p66:p(V +), reg r133:V, reg r134:V, reg strict1:*, reg strict2:V, reg c38:L, reg asMethod14:cls, reg object7:*, reg object8:V, reg p67:p(V +), reg r137:V, reg asMethod15:cls, reg object9:*, reg object10:V, reg p68:p(V +), reg r139:V |
    mkenv;
    st object = object;
    st Class = Class;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    ext_isMissing = missing.0(ext);
    if ext_isMissing then L1() else L2(ext);
  L1():
    p2 = prom<V +>{
      possibleExtends = ldf possibleExtends;
      p = prom<V +>{
        thisClass = ld thisClass;
        thisClass1 = force? thisClass;
        checkMissing(thisClass1);
        return thisClass1;
      };
      p1 = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      r2 = dyn possibleExtends(p, p1);
      return r2;
    };
    goto L2(p2);
  L2(ext_orDefault):
    st ext = ext_orDefault;
    _class1 = ldf `.class1`;
    check L36() else D0();
  D0():
    deopt 1 [];
  L36():
    p3 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r5 = dyn _class1(p3);
    check L37() else D1();
  D1():
    deopt 3 [r5];
  L37():
    st thisClass = r5;
    _identC = ldf `.identC`;
    check L38() else D2();
  D2():
    deopt 6 [];
  L38():
    p4 = prom<V +>{
      thisClass2 = ld thisClass;
      thisClass3 = force? thisClass2;
      checkMissing(thisClass3);
      return thisClass3;
    };
    p5 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    r8 = dyn _identC(p4, p5);
    check L39() else D3();
  D3():
    deopt 9 [r8];
  L39():
    c = `as.logical`(r8);
    if c then L3(c) else L40();
  L3(c1):
    c6 = `as.logical`(c1);
    if c6 then L44() else L4();
  L40():
    _identC1 = ldf `.identC`;
    check L41() else D4();
  D4():
    deopt 11 [c];
  L4():
    _classEnv = ldf `.classEnv`;
    check L48() else D7();
  L41():
    p6 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    r10 = dyn _identC1(p6, "ANY");
    check L42() else D5();
  L44():
    object3 = ld object;
    check L45() else D6();
  D5():
    deopt 14 [c, r10];
  D6():
    deopt 16 [object3];
  D7():
    deopt 22 [];
  L42():
    c3 = `as.logical`(r10);
    c4 = `||`(c, c3);
    goto L3(c4);
  L45():
    object4 = force? object3;
    checkMissing(object4);
    popenv;
    return object4;
  L48():
    p7 = prom<V +>{
      thisClass4 = ld thisClass;
      thisClass5 = force? thisClass4;
      checkMissing(thisClass5);
      return thisClass5;
    };
    r14 = dyn _classEnv[, mustFind](p7, FALSE);
    check L49() else D8();
  D8():
    deopt 26 [r14];
  L49():
    st where = r14;
    getGeneric = ldf getGeneric;
    check L50() else D9();
  D9():
    deopt 29 [];
  L50():
    p8 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r16 = dyn getGeneric[, where]("coerce", p8);
    check L51() else D10();
  D10():
    deopt 33 [r16];
  L51():
    st coerceFun = r16;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L52() else L53();
  L6(r18):
    c8 = `as.logical`(r18);
    if c8 then L55() else L7();
  L52():
    coerceFun = ld coerceFun;
    check L54() else D11();
  L53():
    r17 = dyn base(<sym coerceFun>);
    goto L6(r17);
  D11():
    deopt 36 [coerceFun];
  L7():
    goto L8();
  L8():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L58() else D13();
  L54():
    coerceFun1 = force? coerceFun;
    checkMissing(coerceFun1);
    c7 = `==`(coerceFun1, NULL);
    goto L6(c7);
  L55():
    coerce = ld coerce;
    check L56() else D12();
  D12():
    deopt 39 [coerce];
  D13():
    deopt 45 [];
  L56():
    coerce1 = force? coerce;
    checkMissing(coerce1);
    st coerceFun = coerce1;
    goto L8();
  L58():
    p9 = prom<V +>{
      coerceFun2 = ld coerceFun;
      coerceFun3 = force? coerceFun2;
      checkMissing(coerceFun3);
      return coerceFun3;
    };
    p11 = prom<V +>{
      environment = ldf environment;
      p10 = prom<V +>{
        coerceFun4 = ld coerceFun;
        coerceFun5 = force? coerceFun4;
        checkMissing(coerceFun5);
        return coerceFun5;
      };
      r21 = dyn environment(p10);
      return r21;
    };
    r23 = dyn _getMethodsTable[, , inherited](p9, p11, TRUE);
    check L59() else D14();
  D14():
    deopt 50 [r23];
  L59():
    st coerceMethods = r23;
    _quickCoerceSelect = ldf `.quickCoerceSelect`;
    check L60() else D15();
  D15():
    deopt 53 [];
  L60():
    p12 = prom<V +>{
      thisClass6 = ld thisClass;
      thisClass7 = force? thisClass6;
      checkMissing(thisClass7);
      return thisClass7;
    };
    p13 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p14 = prom<V +>{
      coerceFun6 = ld coerceFun;
      coerceFun7 = force? coerceFun6;
      checkMissing(coerceFun7);
      return coerceFun7;
    };
    p15 = prom<V +>{
      coerceMethods = ld coerceMethods;
      coerceMethods1 = force? coerceMethods;
      checkMissing(coerceMethods1);
      return coerceMethods1;
    };
    p16 = prom<V +>{
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      return where3;
    };
    r29 = dyn _quickCoerceSelect(p12, p13, p14, p15, p16);
    check L61() else D16();
  D16():
    deopt 59 [r29];
  L61():
    st asMethod = r29;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L9(r31):
    c10 = `as.logical`(r31);
    if c10 then L65() else L10();
  L62():
    asMethod = ld asMethod;
    check L64() else D17();
  L63():
    r30 = dyn base1(<sym asMethod>);
    goto L9(r30);
  D17():
    deopt 62 [asMethod];
  L10():
    goto L34();
  L34():
    strict1 = ld strict;
    check L144() else D61();
  L64():
    asMethod1 = force? asMethod;
    checkMissing(asMethod1);
    c9 = `==`(asMethod1, NULL);
    goto L9(c9);
  L65():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L66() else L67();
  D61():
    deopt 248 [strict1];
  L11(r33):
    st sig = r33;
    selectMethod = ldf selectMethod;
    check L71() else D21();
  L66():
    thisClass8 = ld thisClass;
    check L68() else D18();
  L67():
    r32 = dyn base2[from, to](<sym thisClass>, <sym Class>);
    goto L11(r32);
  L144():
    strict2 = force? strict1;
    checkMissing(strict2);
    c38 = `as.logical`(strict2);
    if c38 then L145() else L35();
  D18():
    deopt 67 [thisClass8];
  D21():
    deopt 77 [];
  L35():
    asMethod15 = ldf asMethod;
    check L149() else D64();
  L68():
    thisClass9 = force? thisClass8;
    checkMissing(thisClass9);
    Class9 = ld Class;
    check L69() else D19();
  L71():
    p17 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    p18 = prom<V +>{
      coerceFun8 = ld coerceFun;
      coerceFun9 = force? coerceFun8;
      checkMissing(coerceFun9);
      return coerceFun9;
    };
    p20 = prom<V +>{
      getMethodsForDispatch = ldf getMethodsForDispatch;
      p19 = prom<V +>{
        coerceFun10 = ld coerceFun;
        coerceFun11 = force? coerceFun10;
        checkMissing(coerceFun11);
        return coerceFun11;
      };
      r38 = dyn getMethodsForDispatch(p19);
      return r38;
    };
    r40 = dyn selectMethod[, , optional, useInherited, fdef, mlist]("coerce", p17, TRUE, FALSE, p18, p20);
    check L72() else D22();
  L145():
    asMethod14 = ldf asMethod;
    check L146() else D62();
  D19():
    deopt 70 [Class9];
  D22():
    deopt 88 [r40];
  D62():
    deopt 251 [];
  D64():
    deopt 255 [];
  L69():
    Class10 = force? Class9;
    checkMissing(Class10);
    c11 = ldf c in base;
    r34 = dyn c11(thisClass9, Class10);
    check L70() else D20();
  L72():
    st asMethod = r40;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L146():
    p67 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r137 = dyn asMethod14(p67);
    check L147() else D63();
  L149():
    p68 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r139 = dyn asMethod15[, strict](p68, FALSE);
    check L150() else D65();
  D20():
    deopt 74 [r34];
  D63():
    deopt 253 [r137];
  D65():
    deopt 259 [r139];
  L12(r42):
    c13 = `as.logical`(r42);
    if c13 then L76() else L13();
  L70():
    goto L11(r34);
  L73():
    asMethod2 = ld asMethod;
    check L75() else D23();
  L74():
    r41 = dyn base3(<sym asMethod>);
    goto L12(r41);
  L147():
    popenv;
    return r137;
  L150():
    popenv;
    return r139;
  D23():
    deopt 91 [asMethod2];
  L13():
    goto L33(NULL);
  L33(r134):
    goto L34();
  L75():
    asMethod3 = force? asMethod2;
    checkMissing(asMethod3);
    c12 = `==`(asMethod3, NULL);
    goto L12(c12);
  L76():
    st canCache = TRUE;
    st inherited = FALSE;
    is = ldf is;
    check L77() else D24();
  D24():
    deopt 101 [];
  L77():
    p21 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p22 = prom<V +>{
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    };
    r45 = dyn is(p21, p22);
    check L78() else D25();
  D25():
    deopt 104 [r45];
  L78():
    c14 = `as.logical`(r45);
    if c14 then L79() else L14();
  L14():
    goto L20();
  L20():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L79():
    getClassDef = ldf getClassDef;
    check L80() else D26();
  D26():
    deopt 106 [];
  L21(r88):
    c24 = `as.logical`(r88);
    if c24 then L108() else L22(c24);
  L80():
    p23 = prom<V +>{
      Class13 = ld Class;
      Class14 = force? Class13;
      checkMissing(Class14);
      return Class14;
    };
    p24 = prom<V +>{
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      return where5;
    };
    r48 = dyn getClassDef(p23, p24);
    check L81() else D27();
  L105():
    asMethod4 = ld asMethod;
    check L107() else D42();
  L106():
    r87 = dyn base6(<sym asMethod>);
    goto L21(r87);
  D27():
    deopt 109 [r48];
  D42():
    deopt 162 [asMethod4];
  L22(c26):
    c30 = `as.logical`(c26);
    if c30 then L112() else L23();
  L81():
    st ClassDef = r48;
    isFALSE = ldf isFALSE;
    check L82() else D28();
  L107():
    asMethod5 = force? asMethod4;
    checkMissing(asMethod5);
    c23 = `==`(asMethod5, NULL);
    goto L21(c23);
  L108():
    extends = ldf extends;
    check L109() else D43();
  D28():
    deopt 112 [];
  D43():
    deopt 166 [c24];
  L23():
    goto L24();
  L24():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L118() else L119();
  L82():
    p25 = prom<V +>{
      ext1 = ld ext;
      ext2 = force? ext1;
      checkMissing(ext2);
      return ext2;
    };
    r50 = dyn isFALSE(p25);
    check L83() else D29();
  L109():
    p42 = prom<V +>{
      Class21 = ld Class;
      Class22 = force? Class21;
      checkMissing(Class22);
      return Class22;
    };
    p43 = prom<V +>{
      thisClass12 = ld thisClass;
      thisClass13 = force? thisClass12;
      checkMissing(thisClass13);
      return thisClass13;
    };
    r91 = dyn extends(p42, p43);
    check L110() else D44();
  L112():
    getClassDef1 = ldf getClassDef;
    check L113() else D45();
  D29():
    deopt 114 [r50];
  D44():
    deopt 169 [c24, r91];
  D45():
    deopt 172 [];
  L25(r102):
    c32 = `as.logical`(r102);
    if c32 then L121() else L26();
  L83():
    c15 = `as.logical`(r50);
    if c15 then L84() else L15();
  L110():
    c27 = `as.logical`(r91);
    c28 = `&&`(c24, c27);
    goto L22(c28);
  L113():
    p44 = prom<V +>{
      Class23 = ld Class;
      Class24 = force? Class23;
      checkMissing(Class24);
      return Class24;
    };
    p45 = prom<V +>{
      where10 = ld where;
      where11 = force? where10;
      checkMissing(where11);
      return where11;
    };
    r94 = dyn getClassDef1(p44, p45);
    check L114() else D46();
  L118():
    asMethod6 = ld asMethod;
    check L120() else D49();
  L119():
    r101 = dyn base7(<sym asMethod>);
    goto L25(r101);
  D46():
    deopt 175 [r94];
  D49():
    deopt 188 [asMethod6];
  L15():
    isTRUE = ldf isTRUE;
    check L88() else D32();
  L16(r58):
    goto L20();
  L26():
    canCache = ld canCache;
    check L125() else D52();
  L27():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L130() else L131();
  L84():
    stop = ldf stop;
    check L85() else D30();
  L114():
    st ClassDef = r94;
    _asFromReplace = ldf `.asFromReplace`;
    check L115() else D47();
  L120():
    asMethod7 = force? asMethod6;
    checkMissing(asMethod7);
    c31 = `==`(asMethod7, NULL);
    goto L25(c31);
  L121():
    selectMethod1 = ldf selectMethod;
    check L122() else D50();
  D30():
    deopt 116 [];
  D32():
    deopt 122 [];
  D47():
    deopt 178 [];
  D50():
    deopt 192 [];
  D52():
    deopt 207 [canCache];
  L29(r118):
    c36 = `as.logical`(r118);
    if c36 then L133() else L30();
  L85():
    p29 = prom<V +>{
      sprintf = ldf sprintf;
      p27 = prom<V +>{
        dQuote = ldf dQuote;
        p26 = prom<V +>{
          thisClass10 = ld thisClass;
          thisClass11 = force? thisClass10;
          checkMissing(thisClass11);
          return thisClass11;
        };
        r52 = dyn dQuote(p26);
        return r52;
      };
      p28 = prom<V +>{
        Class15 = ld Class;
        Class16 = force? Class15;
        checkMissing(Class16);
        return Class16;
      };
      r55 = dyn sprintf("internal problem in as(): %s is(object, \"%s\") is TRUE, but the metadata asserts that the 'is' relation is FALSE", p27, p28);
      return r55;
    };
    r57 = dyn stop[, domain](p29, NA_LGL);
    check L86() else D31();
  L88():
    p30 = prom<V +>{
      ext3 = ld ext;
      ext4 = force? ext3;
      checkMissing(ext4);
      return ext4;
    };
    r60 = dyn isTRUE(p30);
    check L89() else D33();
  L115():
    p46 = prom<V +>{
      thisClass14 = ld thisClass;
      thisClass15 = force? thisClass14;
      checkMissing(thisClass15);
      return thisClass15;
    };
    p47 = prom<V +>{
      Class25 = ld Class;
      Class26 = force? Class25;
      checkMissing(Class26);
      return Class26;
    };
    p48 = prom<V +>{
      ClassDef4 = ld ClassDef;
      ClassDef5 = force? ClassDef4;
      checkMissing(ClassDef5);
      return ClassDef5;
    };
    p49 = prom<V +>{
      where12 = ld where;
      where13 = force? where12;
      checkMissing(where13);
      return where13;
    };
    r99 = dyn _asFromReplace(p46, p47, p48, p49);
    check L116() else D48();
  L122():
    p50 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    p51 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      c33 = ldf c in base;
      r106 = dyn c33(TRUE, FALSE);
      goto L0(r106);
    L2():
      r104 = dyn base8[from, to](TRUE, FALSE);
      goto L0(r104);
    };
    p52 = prom<V +>{
      coerceFun12 = ld coerceFun;
      coerceFun13 = force? coerceFun12;
      checkMissing(coerceFun13);
      return coerceFun13;
    };
    p53 = prom<V +>{
      coerceMethods2 = ld coerceMethods;
      coerceMethods3 = force? coerceMethods2;
      checkMissing(coerceMethods3);
      return coerceMethods3;
    };
    r110 = dyn selectMethod1[, , optional, , fdef, mlist]("coerce", p50, TRUE, p51, p52, p53);
    check L123() else D51();
  L125():
    canCache1 = force? canCache;
    checkMissing(canCache1);
    c34 = `as.logical`(canCache1);
    if c34 then L126() else L28();
  L130():
    asMethod10 = ld asMethod;
    check L132() else D55();
  L131():
    r117 = dyn base9(<sym asMethod>);
    goto L29(r117);
  D31():
    deopt 120 [r57];
  D33():
    deopt 124 [r60];
  D48():
    deopt 183 [r99];
  D51():
    deopt 202 [r110];
  D55():
    deopt 221 [asMethod10];
  L28():
    goto L27();
  L30():
    canCache2 = ld canCache;
    check L137() else D58();
  L31(r128):
    goto L33(r128);
  L86():
    goto L16(r57);
  L89():
    c16 = `as.logical`(r60);
    if c16 then L90() else L17();
  L116():
    st asMethod = r99;
    goto L24();
  L123():
    st asMethod = r110;
    st inherited = TRUE;
    goto L27();
  L126():
    _asCoerceMethod = ldf `.asCoerceMethod`;
    check L127() else D53();
  L132():
    asMethod11 = force? asMethod10;
    checkMissing(asMethod11);
    c35 = `==`(asMethod11, NULL);
    goto L29(c35);
  L133():
    stop1 = ldf stop;
    check L134() else D56();
  D53():
    deopt 210 [];
  D56():
    deopt 225 [];
  D58():
    deopt 230 [canCache2];
  L17():
    __ = ldf `@` in base;
    r69 = dyn __(<sym ext>, <sym test>);
    st test = r69;
    _makeAsMethod1 = ldf `.makeAsMethod`;
    check L94() else D36();
  L90():
    _makeAsMethod = ldf `.makeAsMethod`;
    check L91() else D34();
  L127():
    p54 = prom<V +>{
      asMethod8 = ld asMethod;
      asMethod9 = force? asMethod8;
      checkMissing(asMethod9);
      return asMethod9;
    };
    p55 = prom<V +>{
      thisClass16 = ld thisClass;
      thisClass17 = force? thisClass16;
      checkMissing(thisClass17);
      return thisClass17;
    };
    p56 = prom<V +>{
      ClassDef6 = ld ClassDef;
      ClassDef7 = force? ClassDef6;
      checkMissing(ClassDef7);
      return ClassDef7;
    };
    p57 = prom<V +>{
      where14 = ld where;
      where15 = force? where14;
      checkMissing(where15);
      return where15;
    };
    r116 = dyn _asCoerceMethod(p54, p55, p56, FALSE, p57);
    check L128() else D54();
  L134():
    p62 = prom<V +>{
      gettextf = ldf gettextf;
      p59 = prom<V +>{
        dQuote1 = ldf dQuote;
        p58 = prom<V +>{
          thisClass18 = ld thisClass;
          thisClass19 = force? thisClass18;
          checkMissing(thisClass19);
          return thisClass19;
        };
        r120 = dyn dQuote1(p58);
        return r120;
      };
      p61 = prom<V +>{
        dQuote2 = ldf dQuote;
        p60 = prom<V +>{
          Class27 = ld Class;
          Class28 = force? Class27;
          checkMissing(Class28);
          return Class28;
        };
        r123 = dyn dQuote2(p60);
        return r123;
      };
      r125 = dyn gettextf("no method or default for coercing %s to %s", p59, p61);
      return r125;
    };
    r127 = dyn stop1[, domain](p62, NA_LGL);
    check L135() else D57();
  L137():
    canCache3 = force? canCache2;
    checkMissing(canCache3);
    c37 = `as.logical`(canCache3);
    if c37 then L138() else L32();
  D34():
    deopt 126 [];
  D36():
    deopt 138 [];
  D54():
    deopt 216 [r116];
  D57():
    deopt 229 [r127];
  L32():
    goto L31(NULL);
  L91():
    p31 = prom<V +>{
      sym4 = ldf quote;
      base4 = ldf quote in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      quote = ldf quote in base;
      r63 = dyn quote(<sym from>);
      goto L0(r63);
    L2():
      r61 = dyn base4(<sym from>);
      goto L0(r61);
    };
    p32 = prom<V +>{
      Class17 = ld Class;
      Class18 = force? Class17;
      checkMissing(Class18);
      return Class18;
    };
    p33 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    p34 = prom<V +>{
      where6 = ld where;
      where7 = force? where6;
      checkMissing(where7);
      return where7;
    };
    r68 = dyn _makeAsMethod(p31, TRUE, p32, p33, p34);
    check L92() else D35();
  L94():
    p35 = prom<V +>{
      __1 = ldf `@` in base;
      r70 = dyn __1(<sym ext>, <sym coerce>);
      return r70;
    };
    p36 = prom<V +>{
      __2 = ldf `@` in base;
      r72 = dyn __2(<sym ext>, <sym simple>);
      return r72;
    };
    p37 = prom<V +>{
      Class19 = ld Class;
      Class20 = force? Class19;
      checkMissing(Class20);
      return Class20;
    };
    p38 = prom<V +>{
      ClassDef2 = ld ClassDef;
      ClassDef3 = force? ClassDef2;
      checkMissing(ClassDef3);
      return ClassDef3;
    };
    p39 = prom<V +>{
      where8 = ld where;
      where9 = force? where8;
      checkMissing(where9);
      return where9;
    };
    r77 = dyn _makeAsMethod1(p35, p36, p37, p38, p39);
    check L95() else D37();
  L128():
    st asMethod = r116;
    goto L27();
  L135():
    goto L31(r127);
  L138():
    cacheMethod = ldf cacheMethod;
    check L139() else D59();
  D35():
    deopt 132 [r68];
  D37():
    deopt 144 [r77];
  D59():
    deopt 233 [];
  L92():
    st asMethod = r68;
    goto L16(r68);
  L95():
    st asMethod = r77;
    sym5 = ldf `is.function`;
    base5 = ldf `is.function` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  L139():
    p63 = prom<V +>{
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      return sig5;
    };
    p64 = prom<V +>{
      asMethod12 = ld asMethod;
      asMethod13 = force? asMethod12;
      checkMissing(asMethod13);
      return asMethod13;
    };
    p65 = prom<V +>{
      coerceFun14 = ld coerceFun;
      coerceFun15 = force? coerceFun14;
      checkMissing(coerceFun15);
      return coerceFun15;
    };
    p66 = prom<V +>{
      inherited = ld inherited;
      inherited1 = force? inherited;
      checkMissing(inherited1);
      return inherited1;
    };
    r133 = dyn cacheMethod[, , , fdef, inherited]("coerce", p63, p64, p65, p66);
    check L140() else D60();
  D60():
    deopt 241 [r133];
  L18(r79):
    r81 = `!`(r79);
    c17 = `as.logical`(r81);
    if c17 then L19(c17) else L100();
  L96():
    test = ld test;
    check L98() else D38();
  L97():
    r78 = dyn base5(<sym test>);
    goto L18(r78);
  L140():
    goto L31(r133);
  D38():
    deopt 148 [test];
  L19(c18):
    st canCache = c18;
    goto L16(c18);
  L98():
    test1 = force? test;
    checkMissing(test1);
    is_function = ldf `is.function` in base;
    r80 = dyn is_function(test1);
    check L99() else D39();
  L100():
    isTRUE1 = ldf isTRUE;
    check L101() else D40();
  D39():
    deopt 151 [r80];
  D40():
    deopt 154 [c17];
  L99():
    goto L18(r80);
  L101():
    p41 = prom<V +>{
      body = ldf body;
      p40 = prom<V +>{
        test2 = ld test;
        test3 = force? test2;
        checkMissing(test3);
        return test3;
      };
      r83 = dyn body(p40);
      return r83;
    };
    r85 = dyn isTRUE1(p41);
    check L102() else D41();
  D41():
    deopt 156 [c17, r85];
  L102():
    c20 = `as.logical`(r85);
    c21 = `||`(c17, c20);
    goto L19(c21);
  }
}