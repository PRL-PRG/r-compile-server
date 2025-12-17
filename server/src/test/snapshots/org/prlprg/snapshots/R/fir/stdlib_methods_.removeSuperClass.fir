fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3577279877;
    st `.removeSuperClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3577279877(class, superclass) {
  (reg class:*, reg superclass:*) -+> V { var class:*, var superclass:*, reg getClassDef:cls, reg class1:*, reg class2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg cdef:*, reg cdef1:V, reg c:V, reg c1:L, reg _deleteSuperClass:cls, reg cdef2:*, reg cdef3:V, reg p1:p(V +), reg superclass1:*, reg superclass2:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg newdef:*, reg newdef1:V, reg c2:V, reg r10:V, reg c3:L, reg _cacheClass:cls, reg class3:*, reg class4:V, reg p3:p(V +), reg newdef2:*, reg newdef3:V, reg p4:p(V +), reg where:*, reg where1:V, reg p5:p(V +), reg r14:V, reg signature:cls, reg class5:*, reg class6:V, reg p6:p(V +), reg superclass3:*, reg superclass4:V, reg p7:p(V +), reg r17:V, reg existsMethod:cls, reg sig:*, reg sig1:V, reg p8:p(V +), reg r19:V, reg c4:L, reg _removeCachedMethod:cls, reg sig2:*, reg sig3:V, reg p9:p(V +), reg r21:V, reg existsMethod1:cls, reg sig4:*, reg sig5:V, reg p10:p(V +), reg r24:V, reg c5:L, reg _removeCachedMethod1:cls, reg sig6:*, reg sig7:V, reg p11:p(V +), reg r26:V, reg findClass:cls, reg class7:*, reg class8:V, reg p12:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p13:p(V +), reg r30:V, reg classMetaName:cls, reg class9:*, reg class10:V, reg p14:p(V +), reg r32:V, reg evv:*, reg evv1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg i7:I, reg r34:V, reg where2:*, reg where3:V, reg c7:L, reg i9:I, reg where5:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg mname:*, reg mname1:V, reg __:cls, reg r35:V, reg c8:V, reg r36:V, reg c9:L, reg _deleteSuperClass1:cls, reg cdef4:*, reg cdef5:V, reg p15:p(V +), reg superclass5:*, reg superclass6:V, reg p16:p(V +), reg r39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg i16:I, reg r41:V, reg newdef4:*, reg newdef5:V, reg c10:V, reg r42:V, reg c11:L, reg assignClassDef:cls, reg class11:*, reg class12:V, reg p17:p(V +), reg newdef6:*, reg newdef7:V, reg p18:p(V +), reg where6:*, reg where7:V, reg p19:p(V +), reg r46:V, reg i19:I, reg r47:V, reg i20:I |
    mkenv;
    st class = class;
    st superclass = superclass;
    getClassDef = ldf getClassDef;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r1 = dyn getClassDef(p);
    check L19() else D1();
  D1():
    deopt 3 [r1];
  L19():
    st cdef = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r3):
    c1 = `as.logical`(r3);
    if c1 then L23() else L1();
  L20():
    cdef = ld cdef;
    check L22() else D2();
  L21():
    r2 = dyn base(<sym cdef>);
    goto L0(r2);
  D2():
    deopt 6 [cdef];
  L1():
    _deleteSuperClass = ldf `.deleteSuperClass`;
    check L25() else D3();
  L2():
    signature = ldf signature;
    check L34() else D8();
  L22():
    cdef1 = force? cdef;
    checkMissing(cdef1);
    c = `==`(cdef1, NULL);
    goto L0(c);
  L23():
    goto L2();
  D3():
    deopt 12 [];
  D8():
    deopt 32 [];
  L25():
    p1 = prom<V +>{
      cdef2 = ld cdef;
      cdef3 = force? cdef2;
      checkMissing(cdef3);
      return cdef3;
    };
    p2 = prom<V +>{
      superclass1 = ld superclass;
      superclass2 = force? superclass1;
      checkMissing(superclass2);
      return superclass2;
    };
    r7 = dyn _deleteSuperClass(p1, p2);
    check L26() else D4();
  L34():
    p6 = prom<V +>{
      class5 = ld class;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    p7 = prom<V +>{
      superclass3 = ld superclass;
      superclass4 = force? superclass3;
      checkMissing(superclass4);
      return superclass4;
    };
    r17 = dyn signature[from, to](p6, p7);
    check L35() else D9();
  D4():
    deopt 15 [r7];
  D9():
    deopt 37 [r17];
  L26():
    st newdef = r7;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L35():
    st sig = r17;
    existsMethod = ldf existsMethod;
    check L36() else D10();
  D10():
    deopt 40 [];
  L3(r9):
    r10 = `!`(r9);
    c3 = `as.logical`(r10);
    if c3 then L30() else L4();
  L27():
    newdef = ld newdef;
    check L29() else D5();
  L28():
    r8 = dyn base1(<sym newdef>);
    goto L3(r8);
  L36():
    p8 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    r19 = dyn existsMethod("coerce", p8);
    check L37() else D11();
  D5():
    deopt 18 [newdef];
  D11():
    deopt 43 [r19];
  L4():
    goto L2();
  L29():
    newdef1 = force? newdef;
    checkMissing(newdef1);
    c2 = `==`(newdef1, NULL);
    goto L3(c2);
  L30():
    _cacheClass = ldf `.cacheClass`;
    check L31() else D6();
  L37():
    c4 = `as.logical`(r19);
    if c4 then L38() else L5();
  D6():
    deopt 23 [];
  L5():
    goto L6();
  L6():
    existsMethod1 = ldf existsMethod;
    check L42() else D14();
  L31():
    p3 = prom<V +>{
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    p4 = prom<V +>{
      newdef2 = ld newdef;
      newdef3 = force? newdef2;
      checkMissing(newdef3);
      return newdef3;
    };
    p5 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r14 = dyn _cacheClass(p3, p4, FALSE, p5);
    check L32() else D7();
  L38():
    _removeCachedMethod = ldf `.removeCachedMethod`;
    check L39() else D12();
  D7():
    deopt 28 [r14];
  D12():
    deopt 45 [];
  D14():
    deopt 52 [];
  L32():
    goto L2();
  L39():
    p9 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    r21 = dyn _removeCachedMethod("coerce", p9);
    check L40() else D13();
  L42():
    p10 = prom<V +>{
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      return sig5;
    };
    r24 = dyn existsMethod1("coerce<-", p10);
    check L43() else D15();
  D13():
    deopt 48 [r21];
  D15():
    deopt 55 [r24];
  L40():
    goto L6();
  L43():
    c5 = `as.logical`(r24);
    if c5 then L44() else L7();
  L7():
    goto L8();
  L8():
    findClass = ldf findClass;
    check L48() else D18();
  L44():
    _removeCachedMethod1 = ldf `.removeCachedMethod`;
    check L45() else D16();
  D16():
    deopt 57 [];
  D18():
    deopt 64 [];
  L45():
    p11 = prom<V +>{
      sig6 = ld sig;
      sig7 = force? sig6;
      checkMissing(sig7);
      return sig7;
    };
    r26 = dyn _removeCachedMethod1("coerce<-", p11);
    check L46() else D17();
  L48():
    p12 = prom<V +>{
      class7 = ld class;
      class8 = force? class7;
      checkMissing(class8);
      return class8;
    };
    p13 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r30 = dyn findClass(p12, p13);
    check L49() else D19();
  D17():
    deopt 60 [r26];
  D19():
    deopt 67 [r30];
  L46():
    goto L8();
  L49():
    st evv = r30;
    classMetaName = ldf classMetaName;
    check L50() else D20();
  D20():
    deopt 70 [];
  L50():
    p14 = prom<V +>{
      class9 = ld class;
      class10 = force? class9;
      checkMissing(class10);
      return class10;
    };
    r32 = dyn classMetaName(p14);
    check L51() else D21();
  D21():
    deopt 72 [r32];
  L51():
    st mname = r32;
    evv = ld evv;
    check L52() else D22();
  D22():
    deopt 74 [evv];
  L52():
    evv1 = force? evv;
    checkMissing(evv1);
    s = toForSeq(evv1);
    l = length(s);
    i = 0;
    goto L9(i);
  L9(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L53() else L17();
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st where = x;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L53():
    popenv;
    return NULL;
  L10(i7, r34):
    r36 = `!`(r34);
    c9 = `as.logical`(r36);
    if c9 then L61() else L12();
  L54():
    where2 = ld where;
    check L56() else D23();
  L55():
    r33 = dyn base2(<lang `<-`(cdef, `[[`(where, mname))>);
    goto L10(i2, r33);
  D23():
    deopt 77 [i2, where2];
  L12():
    goto L16(i7);
  L16(i20):
    goto L9(i20);
  L56():
    where3 = force? where2;
    checkMissing(where3);
    c7 = `is.object`(where3);
    if c7 then L57() else L58(i2, where3);
  L61():
    _deleteSuperClass1 = ldf `.deleteSuperClass`;
    check L62() else D25();
  D25():
    deopt 86 [i7];
  L11(i11, dx1):
    st cdef = dx1;
    c8 = `==`(dx1, NULL);
    goto L10(i11, c8);
  L57():
    dr = tryDispatchBuiltin.1("[[", where3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L59() else L58(i2, dr);
  L58(i9, where5):
    mname = ld mname;
    check L60() else D24();
  L62():
    p15 = prom<V +>{
      cdef4 = ld cdef;
      cdef5 = force? cdef4;
      checkMissing(cdef5);
      return cdef5;
    };
    p16 = prom<V +>{
      superclass5 = ld superclass;
      superclass6 = force? superclass5;
      checkMissing(superclass6);
      return superclass6;
    };
    r39 = dyn _deleteSuperClass1(p15, p16);
    check L63() else D26();
  D24():
    deopt 79 [i9, where5, mname];
  D26():
    deopt 89 [i7, r39];
  L59():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(i2, dx);
  L60():
    mname1 = force? mname;
    __ = ldf `[[` in base;
    r35 = dyn __(where5, mname1);
    goto L11(i9, r35);
  L63():
    st newdef = r39;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L13(i16, r41):
    r42 = `!`(r41);
    c11 = `as.logical`(r42);
    if c11 then L67() else L14();
  L64():
    newdef4 = ld newdef;
    check L66() else D27();
  L65():
    r40 = dyn base3(<sym newdef>);
    goto L13(i7, r40);
  D27():
    deopt 92 [i7, newdef4];
  L14():
    goto L15(i16, NULL);
  L15(i19, r47):
    goto L16(i19);
  L66():
    newdef5 = force? newdef4;
    checkMissing(newdef5);
    c10 = `==`(newdef5, NULL);
    goto L13(i7, c10);
  L67():
    assignClassDef = ldf assignClassDef;
    check L68() else D28();
  D28():
    deopt 97 [i16];
  L68():
    p17 = prom<V +>{
      class11 = ld class;
      class12 = force? class11;
      checkMissing(class12);
      return class12;
    };
    p18 = prom<V +>{
      newdef6 = ld newdef;
      newdef7 = force? newdef6;
      checkMissing(newdef7);
      return newdef7;
    };
    p19 = prom<V +>{
      where6 = ld where;
      where7 = force? where6;
      checkMissing(where7);
      return where7;
    };
    r46 = dyn assignClassDef(p17, p18, p19, TRUE);
    check L69() else D29();
  D29():
    deopt 102 [i16, r46];
  L69():
    goto L15(i16, r46);
  }
}